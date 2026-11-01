#!/usr/bin/env python3
"""Exercise tint-window writer failure and retry on synthetic items.

The original arming, item interceptor, writes and consumption check execute.
One guarded-writer return is forced to failure; no actual memory fault or Windows
exception dispatch is simulated. Clock, comparison, logging and locks are stubbed.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_RAX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import SAMPLE_SHA256, require
from verify_tint_lifecycle_emulation import Harness, ARM_GLOVES, PATCH, CONSUMED, INPUT, ITEM, COLORS, APPLIED, RECORDED, MASK, COUNT

WRITE32 = 0x180013280


def execute(pe, fail_number):
    h = Harness(pe)
    h.call(ARM_GLOVES, INPUT)
    calls = 0

    def fail_one(vm, _address, _size, _context):
        nonlocal calls
        calls += 1
        if calls != fail_number:
            return
        sp = vm.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', vm.mem_read(sp, 8))[0]
        vm.reg_write(UC_X86_REG_RAX, 0)
        vm.reg_write(UC_X86_REG_RSP, sp + 8)
        vm.reg_write(UC_X86_REG_RIP, ret)

    h.vm.hook_add(unicorn.UC_HOOK_CODE, fail_one, begin=WRITE32, end=WRITE32)
    fields = h.patch('g_vColorTint2')
    expected = (0xaaaaaaaa, 0xbbbbbbbb) if fail_number == 1 else (9, 0xbbbbbbbb)
    require(fields == expected and h.word(COUNT) == 10 and h.word(MASK) == 0 and
            h.word(APPLIED, 1) == 0 and h.word(RECORDED, 1) == 0 and h.call(CONSUMED, INPUT) == 0,
            'injected failed write leaves window unconsumed')
    h.call(PATCH, ITEM)
    require((h.word(ITEM + 0x40), h.word(ITEM + 0x8c)) == (9, COLORS[1]) and h.word(COUNT) == 11 and h.word(MASK) == 2 and
            h.word(APPLIED, 1) == 1 and h.word(RECORDED, 1) == 1 and h.call(CONSUMED, INPUT) == 1,
            'subsequent successful item write records consumption')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    for failure in (1, 2):
        execute(pe, failure)
    print('PASS: 2 synthetic window write-failure scenarios; one writer return per case stubbed')


if __name__ == '__main__':
    main()
