#!/usr/bin/env python3
"""Exercise native paint-kit map offset selection with synthetic validator results.

The candidate validator and log sink are stubbed; real pointer reads and the
security-cookie comparison execute in Unicorn. No DLL or game is loaded.
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

ENTRY, VALIDATOR, LOGGER = 0x180277e90, 0x180277b30, 0x1802b2560
CACHE, COOKIE, BUFFER = 0x180cfc848, 0x180919500, 0x2000000
OFFSETS = tuple(range(0x138, 0x701, 8))


class SelectionVM:
    def __init__(self, pe, results=(), cached=0):
        self.vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
        for page in (0x180277000, 0x180278000, 0x180011000, 0x1802b2000, 0x1804ec000, 0x180919000):
            self.vm.mem_map(page, 0x1000)
            self.vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
        for page, size in ((0x180cfc000, 0x1000), (BUFFER, 0x1000), (STACK, 0x10000), (STUB, 0x1000)):
            self.vm.mem_map(page, size)
        self.vm.mem_write(CACHE, u32(cached))
        self.vm.mem_write(COOKIE, u64(0x112233445566))
        for offset in OFFSETS:
            self.vm.mem_write(BUFFER + offset, u32(offset + 0x1000))
        self.results = dict(results)
        self.calls = []
        self.logs = []
        for address in (VALIDATOR, LOGGER):
            self.vm.hook_add(unicorn.UC_HOOK_CODE, self.intercept, begin=address, end=address)

    def intercept(self, machine, address, _size, _context):
        rcx, rdx, r8, r9 = (machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == VALIDATOR:
            require(rcx == BUFFER and rdx in OFFSETS, 'validator arguments')
            require(machine.mem_read(r9, 1) == b'\0', 'marker initialization')
            self.calls.append(rdx)
            count, marker = self.results.get(rdx, (0, False))
            machine.mem_write(r9, bytes([int(marker)]))
            value = count
        else:
            require(rcx in (0x18073ec50, 0x18073ece8), 'logger format')
            self.logs.append((rcx, rdx, r8, r9))
            value = 0
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    def run(self, base=BUFFER):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.reg_write(UC_X86_REG_RSP, sp)
        self.vm.reg_write(UC_X86_REG_RCX, base)
        try:
            self.vm.emu_start(ENTRY, STOP, count=100000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP, 'selector did not return')
        return self.vm.reg_read(UC_X86_REG_RAX) & 0xffffffff

    def cache(self):
        return struct.unpack('<I', self.vm.mem_read(CACHE, 4))[0]


def verify(pe):
    vm = SelectionVM(pe, cached=0x456)
    require(vm.run(0) == 0 and not vm.calls and vm.cache() == 0x456, 'null base overrides cache')
    require(vm.run() == 0x456 and not vm.calls, 'nonzero cached offset')
    vm = SelectionVM(pe, {0x138: (299, True), 0x140: (300, False)})
    require(vm.run() == 0 and vm.cache() == 0 and tuple(vm.calls) == OFFSETS, 'threshold and missing marker')
    require(len(vm.logs) == 1 and vm.logs[0][1:] == (0x140, 0x1140, 300), 'candidate log threshold')
    vm.results = {0x700: (300, True)}
    vm.calls.clear()
    require(vm.run() == 0x700 and tuple(vm.calls) == OFFSETS and vm.cache() == 0x700, 'failed scan retried')
    vm.calls.clear()
    vm.results = {0x138: (1000, True)}
    require(vm.run() == 0x700 and not vm.calls, 'successful selection cached')
    vm = SelectionVM(pe, {0x138: (300, True), 0x700: (300, True)})
    require(vm.run() == 0x138 and tuple(vm.calls) == OFFSETS, 'equal counts keep first offset')
    vm = SelectionVM(pe, {0x138: (900, False), 0x140: (300, True), 0x700: (301, True)})
    require(vm.run() == 0x700 and vm.cache() == 0x700, 'highest marked valid count wins')
    require(len(vm.logs) == 4 and vm.logs[-1][1:] == (0x700, 0x2f0, 301), 'selected offset log')
    return 7


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic kit-map selection scenarios; validator and logger stubbed')


if __name__ == '__main__':
    main()
