#!/usr/bin/env python3
"""Exercise native fallback tint-container construction using synthetic callbacks.

Original eight-entry construction and sequencing execute in Unicorn. Formatting,
memset and all engine-specific callbacks are stubbed; no game or Windows APIs run.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u32, u64

ENTRY, MEMSET, FORMAT = 0x18028e780, 0x180540170, 0x1800136b0
INIT, APPEND, BUILD, ADD, DESTROY_CONTAINER, DESTROY_VECTOR = (STUB + i * 0x40 for i in range(8, 14))
COOKIE, DATA = 0x180919500, 0x2000000
TARGET, COLORS = DATA + 0x100, DATA + 0x200
COLORS_DATA = tuple(0x10203040 + i for i in range(8))


def verify(pe):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x18028e000, 0x180540000, 0x180013000, 0x18073f000, 0x1804ec000, 0x180919000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((DATA, 0x1000), (0x180961000, 0x1000), (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(page, size)
    vm.mem_write(COOKIE, u64(0x112233445566))
    vm.mem_write(COLORS, b''.join(u32(value) for value in COLORS_DATA))
    for address, target in ((0x180961e30, INIT), (0x180961e40, BUILD),
                            (0x180961e50, DESTROY_CONTAINER), (0x180961e38, DESTROY_VECTOR)):
        vm.mem_write(address, u64(target))
    names, captured, events = {}, [], []

    def cstring(address):
        result = bytearray()
        for i in range(256):
            byte = vm.mem_read(address + i, 1)[0]
            if byte == 0:
                return bytes(result)
            result.append(byte)
        raise AssertionError('unterminated synthetic string')

    def hook(machine, address, _size, _context):
        rcx, rdx, r8, r9 = (machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == MEMSET:
            machine.mem_write(rcx, bytes([rdx & 0xff]) * r8)
            value = rcx
        elif address == FORMAT:
            require(rdx == 0x20 and cstring(r8) == b'g_vColorTint%d' and 1 <= r9 <= 8, 'format arguments')
            text = f'g_vColorTint{r9}'.encode('ascii')
            machine.mem_write(rcx, text + b'\0')
            value = len(text)
        elif address == INIT:
            require(r8 == 0, 'initializer argument')
            names[rcx] = cstring(rdx).decode('ascii')
            value = 0
        elif address == APPEND:
            captured.append((names[rdx], struct.unpack('<I', machine.mem_read(rdx + 0x40, 4))[0],
                             struct.unpack('<I', machine.mem_read(rdx + 0x8c, 4))[0]))
            value = 0
        elif address == BUILD:
            require(cstring(rdx) == b'instance_params' and len(captured) == 8, 'container build')
            events.append('build')
            value = 0
        elif address == ADD:
            require(rcx == TARGET and events == ['build'], 'container insertion')
            events.append('add')
            value = 0
        elif address == DESTROY_CONTAINER:
            events.append('destroy-container')
            value = 0
        else:
            events.append('destroy-vector')
            value = 0
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (MEMSET, FORMAT, INIT, APPEND, BUILD, ADD, DESTROY_CONTAINER, DESTROY_VECTOR):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, TARGET), (UC_X86_REG_RDX, APPEND),
                       (UC_X86_REG_R8, ADD), (UC_X86_REG_R9, COLORS)):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=100000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP and vm.reg_read(UC_X86_REG_RAX) & 0xff == 1,
            f'creation helper return: ip={vm.reg_read(UC_X86_REG_RIP):#x}, rax={vm.reg_read(UC_X86_REG_RAX):#x}')
    expected = [(f'g_vColorTint{i + 1}', 9, COLORS_DATA[i]) for i in range(8)]
    require(captured == expected and events == ['build', 'add', 'destroy-container', 'destroy-vector'], 'constructed tint entries')
    return len(captured)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic fallback tint entries; formatter and engine callbacks stubbed')


if __name__ == '__main__':
    main()
