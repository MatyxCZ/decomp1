#!/usr/bin/env python3
"""Exercise selected paths of the embedded helper's failed unwind routine.

Maps the embedded PE by section RVA and supplies synthetic dispatcher, frame and
unwind data. The real cookie check runs; its failure target is stubbed. No OS
exception dispatch, Windows DLL loader, game or real process state is involved.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64
from inspect_embedded_profile import LOADER_DATA_VA, SIZE, EXPECTED_SHA256

BASE, BUFFER = 0x5000000, 0x2000000
DISPATCH, RUNTIME, UNWIND, META = BUFFER + 0x300, BUFFER + 0x500, BUFFER + 0x700, BUFFER + 0x900
COOKIE = 0x112233445566


def execute(inner, *, header=1, frame_info=0, meta=0x20, frame_offset=0,
            aligned=False, mismatch=False, descriptor_offset=None):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    vm.mem_map(BASE, inner.OPTIONAL_HEADER.SizeOfImage)
    vm.mem_write(BASE, inner.get_memory_mapped_image())
    for address, size in ((BUFFER, 0x4000), (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(address, size)
    vm.mem_write(STOP, b'\xc3')
    vm.mem_write(BASE + 0x19040, u64(COOKIE))
    vm.mem_write(DISPATCH + 8, u64(BUFFER))
    vm.mem_write(DISPATCH + 0x10, u64(RUNTIME))
    vm.mem_write(RUNTIME + 8, u32(UNWIND - BUFFER))
    unwind = bytearray(24)
    unwind[0], unwind[3] = header, frame_info
    if descriptor_offset is not None:
        index = 7 if header & 0x40 else 5
        unwind[index] = 0
        unwind[index + 1] = descriptor_offset | 3
    vm.mem_write(UNWIND, bytes(unwind))
    vm.mem_write(META, u32(meta))
    frame = BUFFER + (0x1097 if aligned else 0x1080)
    if aligned:
        vm.mem_write(META + 4, u32(0x30))
        vm.mem_write(META + 8, u32(16))
        cookie_base = (frame + 0x30) & ~15
    else:
        cookie_base = frame
    signed_meta = struct.unpack('<i', u32(meta))[0]
    cookie_address = cookie_base + (signed_meta & ~7)
    value = COOKIE ^ (frame + frame_offset) ^ int(mismatch)
    vm.mem_write(cookie_address, u64(value))
    seen = {'argument': None, 'failure': False}

    def intercept(machine, address, _size, _context):
        if address == BASE + 0xd4b0:
            seen['argument'] = machine.reg_read(UC_X86_REG_RCX)
        elif address == BASE + 0x17f0:
            seen['failure'] = True
            sp = machine.reg_read(UC_X86_REG_RSP)
            target = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
            machine.reg_write(UC_X86_REG_RSP, sp + 8)
            machine.reg_write(UC_X86_REG_RIP, target)

    for address in (BASE + 0xd4b0, BASE + 0x17f0):
        vm.hook_add(unicorn.UC_HOOK_CODE, intercept, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, frame),
                       (UC_X86_REG_RDX, DISPATCH), (UC_X86_REG_R8, META)):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(BASE + 0xd2c0, STOP, count=100000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, 'unwind helper did not return')
    return seen


def verify(inner):
    cases = (
        {},
        {'frame_info': 0x35, 'frame_offset': 0x30},
        {'frame_info': 0xf0},
        {'meta': 0x23},
        {'meta': 0xffffffe0},
        {'meta': 0x24, 'aligned': True, 'frame_info': 0x15, 'frame_offset': 0x10},
        {'header': 3, 'frame_info': 1, 'descriptor_offset': 0x20, 'frame_offset': 0x20},
        {'header': 0x43, 'frame_info': 1, 'descriptor_offset': 0x50, 'frame_offset': 0x50},
    )
    for case in cases:
        require(execute(inner, **case) == {'argument': COOKIE, 'failure': False}, f'cookie validation: {case}')
    require(execute(inner, mismatch=True) == {'argument': COOKIE ^ 1, 'failure': True}, 'cookie mismatch path')
    return len(cases) + 1


def direct_unwind_handlers(inner):
    image = inner.get_memory_mapped_image()
    counts = {0xd2a0: 0, 0xd4e0: 0}
    for function in inner.DIRECTORY_ENTRY_EXCEPTION:
        rva = function.struct.UnwindData
        require(rva + 4 <= len(image), 'unwind header outside mapped image')
        flags, slots = image[rva] >> 3, image[rva + 2]
        handler_offset = rva + 4 + 2 * ((slots + 1) & ~1)
        if flags & 3 and not flags & 4:
            require(handler_offset + 4 <= len(image), 'unwind handler outside mapped image')
            handler = struct.unpack_from('<I', image, handler_offset)[0]
            if handler in counts:
                counts[handler] += 1
    return counts


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    nested = pe.get_data(LOADER_DATA_VA - IMAGE_BASE, SIZE)
    require(hashlib.sha256(nested).hexdigest() == EXPECTED_SHA256, 'embedded DLL SHA-256 does not match')
    inner = pefile.PE(data=nested)
    counts = direct_unwind_handlers(inner)
    require(counts == {0xd2a0: 15, 0xd4e0: 1}, 'unexpected direct unwind handler counts')
    print(f'PASS: {verify(inner)} synthetic unwind-cookie scenarios; failure target stubbed')
    print('PASS: 15 and 1 direct non-chained unwind records for handler RVAs 0xd2a0 and 0xd4e0')


if __name__ == '__main__':
    main()
