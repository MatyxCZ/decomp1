#!/usr/bin/env python3
"""Exercise quality-state production and the ACK consumer in Unicorn.

The original quality callback, clock, ACK serializer and lock APIs are stubbed.
No Windows DLL is loaded, no game or network runs, and concurrency is not modeled.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK_POINTER, STOP, STUB, require, u32, u64
from verify_ack_emulation import AckVM, BUFFER, CONTEXT

QUALITY_ORIGINAL = STUB + 0x600
QUALITY_INPUT = BUFFER + 0x200
QUALITY_OBJECT = BUFFER + 0x400
PUBLISHED = (0x1809F1AE8, 0x180CF8FA0, 0x180CF8F88, 0x180CF8F98)


class QualityVM(AckVM):
    def __init__(self, pe, *, flags=0x1f, value=100, enabled=True, gate=True, nested=True):
        super().__init__(pe)
        for page in (0x18000F000, 0x180011000):
            self.vm.mem_map(page, 0x1000)
            self.vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000))
        self.vm.mem_write(QUALITY_ORIGINAL, b'\xc3')
        self.vm.mem_write(0x180CD1A28, u64(QUALITY_ORIGINAL))
        self.vm.mem_write(0x180CCF78E, bytes([enabled]))
        self.vm.mem_write(0x180CCF83C, bytes([gate]))
        self.vm.mem_write(QUALITY_INPUT + 0x18, u64(QUALITY_OBJECT if nested else 0))
        self.vm.mem_write(QUALITY_OBJECT + 0x10, u32(flags))
        self.vm.mem_write(QUALITY_OBJECT + 0x28, u32(value))
        self.vm.mem_write(0x1809F1AE8, u32(0xffffffff))
        for addr in (0x180CF8FA0, 0x180CF8F88, 0x180CF8F98):
            self.vm.mem_write(addr, u64(0) if addr != 0x180CF8F98 else u32(0))
        self.quality_calls = 0
        self.writes = []
        self.vm.hook_add(unicorn.UC_HOOK_CODE, self.quality_intercept)
        self.vm.hook_add(unicorn.UC_HOOK_MEM_WRITE, self.track_write)

    def quality_intercept(self, vm, address, _size, _context):
        if address == QUALITY_ORIGINAL:
            self.quality_calls += 1
            self.ret(0x11223344)

    def track_write(self, _vm, _access, address, _size, _value, _context):
        if address in PUBLISHED:
            self.writes.append(address)

    def produce(self, *, flags_argument=2, context=CONTEXT + 0x188, quality=QUALITY_INPUT):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, context),
                           (UC_X86_REG_RDX, flags_argument), (UC_X86_REG_R8, quality)):
            self.vm.reg_write(reg, value)
        try:
            self.vm.emu_start(0x1801C9950, STOP, count=100000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP, 'quality callback did not return')
        require(struct.unpack('<I', self.vm.mem_read(0x180CD1AA0, 4))[0] == 0, 'in-flight count not restored')

    def state(self):
        return (struct.unpack('<I', self.vm.mem_read(0x1809F1AE8, 4))[0],
                struct.unpack('<Q', self.vm.mem_read(0x180CF8FA0, 8))[0],
                struct.unpack('<Q', self.vm.mem_read(0x180CF8F88, 8))[0],
                struct.unpack('<I', self.vm.mem_read(0x180CF8F98, 4))[0])


def verify(pe):
    n = 0
    m = QualityVM(pe)
    m.produce()
    require(m.quality_calls == 1 and m.state() == (100, 1000, CONTEXT, 7), 'eligible production')
    require(m.writes == list(PUBLISHED), 'native state publication order')
    require(m.run(b'\x98\x11\x22\x33\x44', 1000)[0] == BUFFER,
            'produced state enables ACK consumer')
    n += 1
    for kwargs, args in [({'enabled': False}, {}), ({'gate': False}, {}), ({}, {'flags_argument': 0}),
                         ({}, {'context': 0}), ({}, {'quality': 0}), ({'nested': False}, {}),
                         ({'flags': 0x0f}, {}), ({'flags': 0x1e}, {}),
                         ({'value': 2001}, {}), ({'value': 0xffffffff}, {})]:
        m = QualityVM(pe, **kwargs)
        m.produce(**args)
        require(m.quality_calls == 1 and m.state() == (0xffffffff, 0, 0, 0) and not m.writes,
                f'rejected producer state: {kwargs} {args}')
        n += 1
    m = QualityVM(pe, value=2000, flags=0x3f)
    m.produce()
    require(m.state() == (2000, 1000, CONTEXT, 7), 'inclusive value and masked flags boundary')
    n += 1
    m = QualityVM(pe, value=0)
    m.produce()
    require(m.state() == (0, 1000, CONTEXT, 7), 'zero value is accepted')
    n += 1
    return n


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, 'unexpected image base')
    print(f'PASS: {verify(pe)} synthetic quality-producer scenarios; game and APIs stubbed')


if __name__ == '__main__':
    main()
