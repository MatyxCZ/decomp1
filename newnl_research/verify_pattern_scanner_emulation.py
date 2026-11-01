#!/usr/bin/env python3
"""Exercise native signature parser and scanner on synthetic byte buffers.

Unicorn runs the original parser and scan loop, including its out-of-line loop
entry. The vector append and free helpers are stubbed; all input and allocation
state is synthetic. No game modules or Windows APIs are accessed.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u64

ENTRY, APPEND, FREE = 0x1801d1e00, 0x1801d21b0, 0x1804ece80
DATA = 0x2000000
REGION, PATTERN_DESC, PATTERN, BUFFER, VECTOR = DATA + 0x100, DATA + 0x200, DATA + 0x1000, DATA + 0x2000, DATA + 0x3000


def execute(pe, pattern, buffer, *, region_ptr=BUFFER, size=None, pattern_length=None):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page, length in ((0x1801d1000, 0x2000), (0x180524000, 0x1000), (0x1804ec000, 0x1000)):
        vm.mem_map(page, length)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, length).ljust(length, b'\0'))
    for page, length in ((DATA, 0x10000), (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(page, length)
    pattern = pattern.encode('ascii')
    require(len(pattern) < 0x1000 and len(buffer) < 0x1000, 'synthetic input too long')
    vm.mem_write(PATTERN, pattern + b'\0')
    vm.mem_write(BUFFER, buffer if buffer else b'\0')
    vm.mem_write(REGION, u64(region_ptr) + u64(len(buffer) if size is None else size))
    vm.mem_write(PATTERN_DESC, u64(PATTERN) + u64(len(pattern) if pattern_length is None else pattern_length))
    tokens = []
    frees = []

    def hook(machine, address, _size, _context):
        rcx, rdx = machine.reg_read(UC_X86_REG_RCX), machine.reg_read(UC_X86_REG_RDX)
        if address == APPEND:
            token = bytes(machine.mem_read(rdx, 2))
            tokens.append(tuple(token))
            begin, end, capacity = struct.unpack('<QQQ', machine.mem_read(rcx, 24))
            if begin == 0:
                begin = end = VECTOR
                capacity = VECTOR + 0x800
            require(end + 2 <= capacity, 'synthetic vector exhausted')
            machine.mem_write(end, token)
            machine.mem_write(rcx, u64(begin) + u64(end + 2) + u64(capacity))
            value = rcx
        else:
            frees.append(rcx)
            require(rcx == VECTOR, 'unexpected vector allocation')
            value = 0
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (APPEND, FREE):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RCX, REGION), (UC_X86_REG_RDX, PATTERN_DESC), (UC_X86_REG_RSP, sp)):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=100000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, 'scanner did not return')
    result = vm.reg_read(UC_X86_REG_RAX)
    require(frees == ([VECTOR] if tokens else []), 'synthetic vector cleanup')
    return result, tokens


def verify(pe):
    # result is an offset from BUFFER; None means no match.
    cases = (
        ('48 8B', bytes.fromhex('48 8b 11 48 8b'), 0, [(0x48, 0), (0x8b, 0)]),
        ('48 8b', bytes.fromhex('00 48 8b'), 1, [(0x48, 0), (0x8b, 0)]),
        ('48 ?? 0F', bytes.fromhex('48 a5 0f'), 0, [(0x48, 0), (0, 1), (0x0f, 0)]),
        ('48 ? ? 0F', bytes.fromhex('48 a5 06 0f'), 0, [(0x48, 0), (0, 1), (0, 1), (0x0f, 0)]),
        ('AABBCC', bytes.fromhex('aa bb cc'), 0, [(0xaa, 0), (0xbb, 0), (0xcc, 0)]),
        ('G A\tB', bytes.fromhex('0a 0b'), 0, [(0x0a, 0), (0x0b, 0)]),
        ('???', bytes.fromhex('ff'), 0, [(0, 1)]),
        ('48 8B', bytes.fromhex('48'), None, [(0x48, 0), (0x8b, 0)]),
        ('48 8B', bytes.fromhex('48 8c 48 8d'), None, [(0x48, 0), (0x8b, 0)]),
        ('', bytes.fromhex('48'), None, []),
        (' ! ', bytes.fromhex('48'), None, []),
    )
    for pattern, buffer, offset, expected_tokens in cases:
        result, tokens = execute(pe, pattern, buffer)
        expected_result = 0 if offset is None else BUFFER + offset
        require((result, tokens) == (expected_result, expected_tokens), f'pattern {pattern!r} buffer {buffer.hex()}')
    for kwargs in ({'region_ptr': 0}, {'size': 0}):
        require(execute(pe, '48', b'\x48', **kwargs) == (0, []), 'empty region guard')
    require(execute(pe, '48 8B', b'\x48', pattern_length=2) == (BUFFER, [(0x48, 0)]),
            'explicit pattern length')
    require(execute(pe, '?', b'\0', region_ptr=DATA + 0x11000, size=1)
            == (DATA + 0x11000, [(0, 1)]), 'wildcard does not read its candidate byte')
    try:
        execute(pe, 'AA', b'\0', region_ptr=DATA + 0xfff0, size=32)
    except RuntimeError as exc:
        require(isinstance(exc.__cause__, unicorn.UcError)
                and exc.__cause__.errno == unicorn.UC_ERR_READ_UNMAPPED
                and str(exc).endswith('0x1801d1e81'), 'unexpected unreadable-buffer failure')
    else:
        raise AssertionError('synthetic scan did not reach the unmapped byte')
    return len(cases) + 5


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic pattern-scan scenarios; vector append/free stubbed')


if __name__ == '__main__':
    main()
