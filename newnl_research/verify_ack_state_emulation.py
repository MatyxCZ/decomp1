#!/usr/bin/env python3
"""Exercise fake-ping state transitions with synthetic strings and activity.

Uses the original state-update instructions in Unicorn. Activity lookup, string
helpers, security-cookie check and SRW locks are stubbed. No game or DLL is run.
Does not model allocator failures, exceptions, concurrency, or full teardown.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK_POINTER, STOP, require, u32, u64
from verify_ack_emulation import AckVM, BUFFER, CONTEXT

ACTIVITY = 0x1803A10A0
GET_STRING = 0x1800F1BD0
COPY_STRING = 0x180029840
COMPARE = 0x180540BC0
FREE_STRING = 0x18000F890
COOKIE = 0x1804ECA80
CACHED = 0x1809F2B00
SOURCE_HEAP = BUFFER + 0x800
CACHE_HEAP = BUFFER + 0xA00


class StateVM(AckVM):
    def __init__(self, pe, *, activity=1, previous_activity=1, option=1, previous_option=1,
                 current=b'alpha', cached=b'alpha', configured=500):
        super().__init__(pe)
        for page in (0x18000F000, 0x1800F1000, 0x180029000, 0x1803A1000,
                     0x180540000, 0x1804EC000, 0x180920000, 0x1809F2000):
            self.vm.mem_map(page, 0x1000)
        for address in (ACTIVITY, GET_STRING, COPY_STRING, COMPARE, FREE_STRING, COOKIE):
            self.vm.mem_write(address, b'\xc3')
        self.activity = activity
        self.current = current
        self.assign_string(CACHED, cached, CACHE_HEAP)
        self.vm.mem_write(0x180920F34, bytes([option]))
        self.vm.mem_write(0x180920F38, u32(configured))
        self.vm.mem_write(0x180CCF78C, bytes([previous_activity, previous_option, previous_option, 1]))
        self.vm.mem_write(0x180CCF83C, bytes([previous_activity]))
        self.vm.mem_write(0x180CF8FA8, u64(CONTEXT))
        self.vm.mem_write(0x180CF8FB0, u64(987))
        self.vm.hook_add(unicorn.UC_HOOK_CODE, self.model_helpers)

    def assign_string(self, address, data, heap):
        require(len(data) < 128, 'synthetic string too large')
        if len(data) <= 15:
            body = (data + b'\0').ljust(16, b'\0')
            capacity = 15
        else:
            self.vm.mem_write(heap, data + b'\0')
            body = u64(heap) + bytes(8)
            capacity = len(data)
        self.vm.mem_write(address, body + u64(len(data)) + u64(capacity))

    def model_helpers(self, vm, address, _size, _context):
        if address == ACTIVITY:
            self.ret(self.activity)
        elif address == GET_STRING:
            self.assign_string(vm.reg_read(UC_X86_REG_RCX), self.current, SOURCE_HEAP)
            self.ret(0)
        elif address == COPY_STRING:
            destination = vm.reg_read(UC_X86_REG_RCX)
            source = vm.reg_read(UC_X86_REG_RDX)
            length = vm.reg_read(UC_X86_REG_R8)
            require(destination == CACHED and length < 128, 'unexpected synthetic string copy')
            data = bytes(vm.mem_read(source, length)) if length else b''
            self.assign_string(destination, data, CACHE_HEAP)
            self.ret(destination)
        elif address == COMPARE:
            left, right, length = (vm.reg_read(UC_X86_REG_RCX), vm.reg_read(UC_X86_REG_RDX),
                                   vm.reg_read(UC_X86_REG_R8))
            require(length < 128, 'unexpected comparison length')
            self.ret(int(bytes(vm.mem_read(left, length)) != bytes(vm.mem_read(right, length))))
        elif address in (FREE_STRING, COOKIE):
            self.ret(0)

    def update(self):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.reg_write(UC_X86_REG_RSP, sp)
        try:
            self.vm.emu_start(0x180232810, STOP, count=100000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP and not self.locked, 'state update did not return')

    def read32(self, address):
        return struct.unpack('<I', self.vm.mem_read(address, 4))[0]

    def read64(self, address):
        return struct.unpack('<Q', self.vm.mem_read(address, 8))[0]

    def record(self):
        return (self.read32(0x1809F1AEC), self.read32(0x180CF8F98), self.read32(0x1809F1AE8),
                self.read64(0x180CF8F88), self.read64(0x180CF8FA0))

    def pending(self):
        return (self.read64(0x180CF8FA8), self.read64(0x180CF8FB0), self.vm.mem_read(0x180CCF78F, 1)[0])


def verify(pe):
    n = 0
    recorded, invalidated = (7, 7, 100, CONTEXT, 1000), (8, 0, 0xffffffff, 0, 0)
    pending, cleared = (CONTEXT, 987, 1), (0, 0, 0)
    m = StateVM(pe)
    m.update()
    require(m.record() == recorded and m.pending() == pending and m.read32(0x1809F1A0C) == 500,
            'stable active state preserves records')
    n += 1
    m = StateVM(pe, current=b'bravo', cached=b'alpha')
    m.update()
    require(m.record() == invalidated and m.pending() == pending and m.vm.mem_read(0x180CCF83C, 1) == b'\x01',
            'active string change invalidates timing but retains pending')
    n += 1
    m = StateVM(pe, current=b'long-string-1234-A', cached=b'long-string-1234-B')
    m.update()
    require(m.record() == invalidated and m.pending() == pending, 'heap-string content change')
    n += 1
    m = StateVM(pe, current=b'long-string-1234-A', cached=b'long-string-1234-A')
    m.update()
    require(m.record() == recorded and m.pending() == pending, 'equal heap strings preserve state')
    n += 1
    m = StateVM(pe, activity=0, previous_activity=1)
    m.update()
    require(m.record() == invalidated and m.pending() == pending and m.vm.mem_read(0x180CCF83C, 1) == b'\x00',
            'activity loss invalidates timing but retains pending when enabled')
    n += 1
    m = StateVM(pe, activity=0, previous_activity=1)
    m.update()
    require(m.pending() == pending, 'pending state exists before consumer check')
    payload = b'\x98\x11\x22\x33\x44'
    require(m.run(payload, 1000) == (BUFFER + 5, payload) and m.pending() == cleared,
            'inactive ACK consumer passes through and clears pending')
    n += 1
    m = StateVM(pe, activity=1, previous_activity=0, cached=b'')
    m.update()
    require(m.record() == invalidated and m.pending() == pending and m.vm.mem_read(0x180CCF83C, 1) == b'\x01',
            'activity gain invalidates timing')
    n += 1
    m = StateVM(pe, option=0, previous_option=1)
    m.update()
    require(m.record() == invalidated and m.pending() == cleared and m.vm.mem_read(0x180CCF78E, 1) == b'\x00',
            'disabling invalidates timing and clears pending')
    n += 1
    m = StateVM(pe, option=0, previous_option=0)
    m.update()
    require(m.record() == recorded and m.pending() == cleared, 'stable disabled state clears pending only')
    n += 1
    m = StateVM(pe, option=1, previous_option=0)
    m.update()
    require(m.record() == recorded and m.pending() == pending and m.vm.mem_read(0x180CCF78E, 1) == b'\x01',
            'enabling alone leaves current recorded state intact')
    n += 1
    for setting, expected in ((-5, 0), (0, 0), (1000, 1000), (1001, 1000)):
        m = StateVM(pe, configured=setting)
        m.update()
        require(m.read32(0x1809F1A0C) == expected, f'configured clamp {setting}')
        n += 1
    m = StateVM(pe, activity=0, previous_activity=0, current=b'ignored', cached=b'different')
    m.update()
    require(m.record() == recorded, 'inactive state does not compare associated strings')
    n += 1
    return n


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, 'unexpected image base')
    print(f'PASS: {verify(pe)} synthetic fake-ping state transitions; string and Windows helpers stubbed')


if __name__ == '__main__':
    main()
