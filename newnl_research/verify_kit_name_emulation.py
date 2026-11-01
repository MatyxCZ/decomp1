#!/usr/bin/env python3
"""Exercise native kit-name copying with synthetic memory and string storage.

The original range guard, byte-copy loop and security-cookie check execute.
memset, strlen and output-string construction are stubbed. Unicorn does not
simulate Windows structured exception handling. Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u64

ENTRY, COPY = 0x1802776e0, 0x180277690
MEMSET, STRLEN, CONSTRUCT = 0x180540170, 0x180540dc0, 0x1800133a0
COOKIE, SRC, DATA = 0x180919500, 0x2000000, 0x2100000
OUTPUT, HEAP = DATA + 0x100, DATA + 0x1000


def execute(pe, source, payload=b'', *, mapped_source=True):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x180277000, 0x180540000, 0x180013000, 0x1804ec000, 0x180919000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((DATA, 0x2000), (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(page, size)
    if mapped_source:
        page = source & ~0xfff
        vm.mem_map(page, 0x1000)
        require(source + len(payload) <= page + 0x1000, 'synthetic input crosses page')
        if payload:
            vm.mem_write(source, payload)
    vm.mem_write(COOKIE, u64(0x112233445566))
    copies = []
    constructs = []

    def hook(machine, address, _size, _context):
        rcx, rdx, r8 = (machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8))
        if address == COPY:
            copies.append(rcx)
            return  # Run the actual bounded-copy instructions.
        if address == MEMSET:
            machine.mem_write(rcx, bytes([rdx & 0xff]) * r8)
            value = rcx
        elif address == STRLEN:
            for length in range(256):
                if machine.mem_read(rcx + length, 1)[0] == 0:
                    value = length
                    break
            else:
                raise AssertionError('unterminated local synthetic buffer')
        else:
            raw = bytes(machine.mem_read(rdx, r8)) if r8 else b''
            constructs.append(raw)
            obj = bytearray(32)
            if len(raw) <= 15:
                obj[:len(raw)] = raw
                capacity = 15
            else:
                machine.mem_write(HEAP, raw + b'\0')
                struct.pack_into('<Q', obj, 0, HEAP)
                capacity = len(raw)
            struct.pack_into('<QQ', obj, 0x10, len(raw), capacity)
            machine.mem_write(rcx, bytes(obj))
            value = rcx
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (COPY, MEMSET, STRLEN, CONSTRUCT):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, OUTPUT), (UC_X86_REG_RDX, source)):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=100000)
    except unicorn.UcError as exc:
        if exc.errno == unicorn.UC_ERR_READ_UNMAPPED and vm.reg_read(UC_X86_REG_RIP) == 0x1802776ad:
            return None, copies, constructs, 'unmapped-read'
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP and vm.reg_read(UC_X86_REG_RAX) == OUTPUT, 'wrapper return')
    length, capacity = struct.unpack('<QQ', vm.mem_read(OUTPUT + 0x10, 16))
    string_address = OUTPUT if capacity <= 15 else struct.unpack('<Q', vm.mem_read(OUTPUT, 8))[0]
    text = bytes(vm.mem_read(string_address, length)) if length else b''
    return text, copies, constructs, None


def verify_scope(pe):
    matches = [entry for entry in pe.DIRECTORY_ENTRY_EXCEPTION if entry.struct.BeginAddress == 0x277690]
    require(len(matches) == 1 and matches[0].struct.EndAddress == 0x2776d3, 'copy routine runtime function')
    rva = matches[0].struct.UnwindData
    header = pe.get_data(rva, 4)
    require(header[0] & 7 == 1 and header[0] >> 3 == 1, 'copy routine unwind flags')
    offset = rva + 4 + 2 * ((header[2] + 1) & ~1)
    handler, count, begin, end, filter_rva, jump = struct.unpack('<IIIIII', pe.get_data(offset, 24))
    require((handler, count, begin, end, filter_rva, jump) ==
            (0x4eee20, 1, 0x27769a, 0x2776cc, 1, 0x2776cc), 'copy exception scope')


def verify(pe):
    cases = (
        (SRC, b'hello\0ignored', b'hello'),
        (SRC, b'\0', b''),
        (SRC, b'a' * 15 + b'\0', b'a' * 15),
        (SRC, b'b' * 16 + b'\0', b'b' * 16),
        (SRC, b'c' * 300 + b'\0', b'c' * 255),
        (SRC + 0xf01, b'd' * 255, b'd' * 255),
        (0x10000, b'lo\0', b'lo'),
        (0x7ffffffffffe, b'\0', b''),
    )
    for source, payload, expected in cases:
        result, copies, constructs, fault = execute(pe, source, payload)
        require((result, copies, constructs, fault) == (expected, [source], [expected], None), f'copy case {source:#x} len {len(payload)}')
    for source in (0, 0xffff, 0x7fffffffffff):
        require(execute(pe, source, mapped_source=False) == (b'', [], [], None), f'range guard {source:#x}')
    result, copies, constructs, fault = execute(pe, SRC, mapped_source=False)
    require((result, copies, constructs, fault) == (None, [SRC], [], 'unmapped-read'), 'unmapped source without OS exception dispatch')
    return len(cases) + 4


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    verify_scope(pe)
    print('PASS: copy routine unwind metadata has one exception-handler scope')
    print(f'PASS: {verify(pe)} synthetic name-copy scenarios; string helpers stubbed, Windows SEH not simulated')


if __name__ == '__main__':
    main()
