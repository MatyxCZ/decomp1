#!/usr/bin/env python3
"""Compare direct tint writes and window observation on shared synthetic state.

Original window arming, direct inspection, append wrapper, item interception and
consumption checker execute in Unicorn. Original engine callbacks, clock,
comparison, logging and locks are stubbed. Both paths are deliberately activated
in one synthetic state; this does not establish that a real session does so.
Requires pefile and unicorn.
"""
import argparse
import hashlib
from pathlib import Path

import pefile
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RDX
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, require, u32, u64
from verify_tint_lifecycle_emulation import ARM_GLOVES, CONSUMED, INPUT, ITEM, NAME, COLORS, APPLIED, RECORDED, MASK, COUNT
from verify_composite_wrappers_emulation import WrapperHarness, VECTOR, APPEND_WRAPPER, ACTIVE

DIRECT = 0x18028f3a0
REQUEST, CONTAINER = 0x2003300, 0x2003500


def execute(pe, index):
    h = WrapperHarness(pe)
    page = 0x18000f000
    h.vm.mem_map(page, 0x1000)
    h.vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    h.vm.mem_write(REQUEST + 0x50, u32(1))
    h.vm.mem_write(REQUEST + 0x58, u64(CONTAINER))
    h.vm.mem_write(CONTAINER + 4, u32(3))
    h.vm.mem_write(CONTAINER + 0xf8, u32(1))
    h.vm.mem_write(CONTAINER + 0x100, u64(ITEM))
    name = f'g_vColorTint{index + 1}'
    h.vm.mem_write(NAME, name.encode('ascii') + b'\0')
    h.vm.mem_write(ITEM + 0x40, u32(0xaaaaaaaa))
    h.vm.mem_write(ITEM + 0x8c, u32(0xbbbbbbbb))
    h.call(ARM_GLOVES, INPUT)
    for reg, value in ((UC_X86_REG_RDX, INPUT), (UC_X86_REG_R8, 0), (UC_X86_REG_R9, 0)):
        h.vm.reg_write(reg, value)
    result = h.call(DIRECT, REQUEST)
    require(result == 1 and (h.word(ITEM + 0x40), h.word(ITEM + 0x8c)) == (9, COLORS[index]) and
            h.word(COUNT) == 11 and h.word(MASK) == 0 and h.word(APPLIED, 1) == 0 and
            h.word(RECORDED, 1) == 0 and h.call(CONSUMED, INPUT) == 0, 'direct mutation accounting')
    h.vm.reg_write(UC_X86_REG_RDX, ITEM)
    h.call(APPEND_WRAPPER, VECTOR)
    require(h.events == [('append', VECTOR, ITEM, 9, COLORS[index])] and h.word(COUNT) == 12 and h.word(ACTIVE) == 4 and
            h.word(MASK) == 1 << index and h.word(APPLIED, 1) == 1 and h.word(RECORDED, 1) == 1 and
            h.call(CONSUMED, INPUT) == 1, 'append mutation accounting')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    for index in (0, 7):
        execute(pe, index)
    print('PASS: 2 synthetic shared-state tint accounting scenarios; engine callbacks and clock stubbed')


if __name__ == '__main__':
    main()
