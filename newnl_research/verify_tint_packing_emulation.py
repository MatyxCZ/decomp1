#!/usr/bin/env python3
"""Run the original eight-color packing helper on synthetic float inputs.

No helper calls are stubbed. The PE is read only; no game or DLL is loaded by
Windows. Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u64

ENTRY = 0x1802903e0
DATA = 0x2000000
CONFIG, OUTPUT = DATA + 0x100, DATA + 0x400
COLORS_INPUT = ((1.0, 0.0, 0.0, 1.0), (0.0, 1.0, 0.0, 1.0),
                (0.0, 0.0, 1.0, 1.0), (0.5, 0.25, 0.75, 0.5),
                (-1.0, 2.0, float('-inf'), float('inf')), (0.0, 0.0, 0.0, 0.0),
                (1.0, 1.0, 1.0, 1.0), (0.1, 0.2, 0.3, 0.4))
COLORS = (0xff0000ff, 0xff00ff00, 0xffff0000, 0x80bf4080,
          0xff00ff00, 0x00000000, 0xffffffff, 0x664d331a)


def execute(pe, colors):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x180290000, 0x1808ac000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((DATA, 0x1000), (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(page, size)
    raw = b''.join(struct.pack('<4f', *color) for color in colors)
    vm.mem_write(CONFIG + 0x60, raw)
    vm.mem_write(OUTPUT - 4, b'ABCD' + b'\xaa' * 32 + b'EFGH')
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, OUTPUT), (UC_X86_REG_RDX, CONFIG)):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=100000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP and vm.reg_read(UC_X86_REG_RAX) == OUTPUT, 'packing helper return')
    require(bytes(vm.mem_read(CONFIG + 0x60, len(raw))) == raw and
            bytes(vm.mem_read(OUTPUT - 4, 4)) == b'ABCD' and bytes(vm.mem_read(OUTPUT + 32, 4)) == b'EFGH',
            'input and output boundaries')
    return struct.unpack('<8I', vm.mem_read(OUTPUT, 32))


def verify(pe):
    require(execute(pe, COLORS_INPUT) == COLORS, 'eight-channel packing and clamp')
    boundary = ((1 / 512, 1 / 256, 0.5, 1.0),) * 8
    require(execute(pe, boundary) == (0xff800100,) * 8, 'rounding boundaries')
    return 2


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic eight-color packing scenarios; no helpers stubbed')


if __name__ == '__main__':
    main()
