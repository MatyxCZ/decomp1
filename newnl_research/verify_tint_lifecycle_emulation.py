#!/usr/bin/env python3
"""Exercise tint arming, item interception, consumption and reset in Unicorn.

Original helpers and guarded writes execute against synthetic data. Clock,
comparison, logging and mutex routines are stubbed; Windows exception dispatch,
concurrency and actual hook installation are not simulated. Requires pefile/unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u32, u64

ARM_GLOVES, ARM_OTHER, PATCH, CONSUMED, RESET, CLEAR = 0x18028ebb0, 0x18028eb20, 0x18028e920, 0x18028ee00, 0x18028ec90, 0x18028ef30
LOCK, UNLOCK, COMPARE, LOG = 0x1804e4d70, 0x1804e4e90, 0x180540e80, 0x18028e610
CLOCK, CLOCK_IAT, COOKIE = STUB + 0x200, 0x18056b188, 0x180919500
MODE, DEADLINE, ARMED, APPLIED, RECORDED = 0x180cfca18, 0x180cfca10, 0x180ccfedb, 0x180ccfedc, 0x180ccfedd
MASK, VALUES, DESIRED, COUNT = 0x180cfc9e0, 0x180cfc9c0, 0x180cfc9f0, 0x180cfc9e8
DATA = 0x2000000
INPUT, ITEM, NAME = DATA + 0x100, DATA + 0x1000, DATA + 0x2000
COLORS = tuple(0x10203040 + i for i in range(8))


class Harness:
    def __init__(self, pe):
        self.vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
        self.now = 1000
        self.logs = 0
        for page in (0x18028e000, 0x180013000, 0x180650000, 0x18073e000,
                     0x1804ec000, 0x180919000, 0x180540000):
            self.vm.mem_map(page, 0x1000)
            self.vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
        for page, size in ((DATA, 0x4000), (STACK, 0x10000), (STUB, 0x1000),
                           (0x18056b000, 0x1000), (0x1809f3000, 0x1000), (0x180cfc000, 0x1000),
                           (0x180ccf000, 0x1000), (0x1804e4000, 0x1000)):
            self.vm.mem_map(page, size)
        self.vm.mem_write(CLOCK_IAT, u64(CLOCK))
        self.vm.mem_write(COOKIE, u64(0x112233445566))
        self.vm.mem_write(INPUT, b''.join(u32(x) for x in COLORS))
        self.vm.mem_write(ITEM, u64(NAME))
        self.vm.mem_write(COUNT, u32(10))
        for address in (CLOCK, COMPARE, LOCK, UNLOCK, LOG):
            self.vm.hook_add(unicorn.UC_HOOK_CODE, self.hook, begin=address, end=address)

    def hook(self, vm, address, _size, _context):
        if address == CLOCK:
            value = self.now
        elif address == COMPARE:
            rcx, rdx, count = (vm.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8))
            a, b = bytes(vm.mem_read(rcx, count)), bytes(vm.mem_read(rdx, count))
            value = int(a.split(b'\0', 1)[0] != b.split(b'\0', 1)[0])
        elif address == LOG:
            self.logs += 1
            value = 0
        else:
            require(vm.reg_read(UC_X86_REG_RCX) == 0x1809f3770, 'lock object')
            value = 0
        sp = vm.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', vm.mem_read(sp, 8))[0]
        vm.reg_write(UC_X86_REG_RAX, value)
        vm.reg_write(UC_X86_REG_RSP, sp + 8)
        vm.reg_write(UC_X86_REG_RIP, ret)

    def call(self, entry, arg=0):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.reg_write(UC_X86_REG_RSP, sp)
        self.vm.reg_write(UC_X86_REG_RCX, arg)
        try:
            self.vm.emu_start(entry, STOP, count=100000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP, 'helper did not return')
        return self.vm.reg_read(UC_X86_REG_RAX) & 0xffffffff

    def word(self, address, width=4):
        return int.from_bytes(self.vm.mem_read(address, width), 'little')

    def patch(self, name):
        self.vm.mem_write(NAME, name.encode('ascii') + b'\0')
        self.vm.mem_write(ITEM + 0x40, u32(0xaaaaaaaa))
        self.vm.mem_write(ITEM + 0x8c, u32(0xbbbbbbbb))
        self.call(PATCH, ITEM)
        return self.word(ITEM + 0x40), self.word(ITEM + 0x8c)


def verify(pe):
    h = Harness(pe)
    h.call(ARM_GLOVES, INPUT)
    require((h.word(MODE), h.word(DEADLINE, 8), h.word(ARMED, 1), h.word(MASK), h.word(RECORDED, 1)) ==
            (2, 11000, 1, 0, 0), 'armed state')
    require(h.call(CONSUMED, INPUT) == 0, 'unobserved colors are not consumed')
    require(h.patch('g_vColorTint9') == (0xaaaaaaaa, 0xbbbbbbbb) and h.word(COUNT) == 10, 'invalid key ignored')
    require(h.patch('g_vColorTint2') == (9, COLORS[1]) and h.word(COUNT) == 11 and
            h.word(MASK) == 2 and h.word(RECORDED, 1) == 1 and h.word(APPLIED, 1) == 1, 'single tint recorded')
    require(h.call(CONSUMED, INPUT) == 1, 'single matching slot is sufficient')
    h.vm.mem_write(INPUT + 7 * 4, u32(0xdeadbeef))
    require(h.call(CONSUMED, INPUT) == 1, 'unobserved slot is ignored')
    h.vm.mem_write(INPUT + 4, u32(0xdeadbeef))
    require(h.call(CONSUMED, INPUT) == 0, 'observed slot mismatch rejected')
    h.vm.mem_write(INPUT + 4, u32(COLORS[1]))
    h.vm.mem_write(INPUT + 7 * 4, u32(COLORS[7]))
    require(h.patch('g_vColorTint8') == (9, COLORS[7]) and h.word(MASK) == 0x82, 'second slot recorded')
    h.vm.mem_write(INPUT + 7 * 4, u32(0xdeadbeef))
    require(h.call(CONSUMED, INPUT) == 0, 'second observed slot mismatch')
    h.vm.mem_write(INPUT + 7 * 4, u32(COLORS[7]))
    h.now = 11000
    require(h.call(CONSUMED, INPUT) == 1, 'deadline is inclusive')
    h.now = 11001
    require(h.call(CONSUMED, INPUT) == 0 and h.word(MODE) == 2, 'expired check does not reset mode')
    require(h.patch('g_vColorTint2') == (0xaaaaaaaa, 0xbbbbbbbb) and
            h.word(MODE) == 0 and h.word(ARMED, 1) == 0 and h.logs == 1, 'expired item access clears mode')
    h.call(CLEAR)
    require(h.word(MASK) == 0 and h.word(RECORDED, 1) == 0 and bytes(h.vm.mem_read(VALUES, 32)) == bytes(32), 'observation reset')
    h.now = 20000
    h.call(ARM_OTHER, INPUT)
    require((h.word(MODE), h.word(DEADLINE, 8)) == (1, 25000), 'four-color window')
    require(h.patch('g_vColor0') == (9, COLORS[0]) and h.call(CONSUMED, INPUT) == 0, 'mode-one key and consumption distinction')
    h.call(RESET)
    require((h.word(MODE), h.word(DEADLINE, 8), h.word(ARMED, 1), h.word(APPLIED, 1)) == (0, 0, 0, 0), 'window reset')
    return 16


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic tint lifecycle checks; clock, comparison, logging and locks stubbed')


if __name__ == '__main__':
    main()
