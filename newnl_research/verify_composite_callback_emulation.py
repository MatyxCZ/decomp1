#!/usr/bin/env python3
"""Exercise composite-request callback forwarding and early gates in Unicorn.

Original callback, helper gates and cookie check execute. The saved original
callback and lock/unlock functions are stubbed. Pending-state tests stop naturally
when a synthetic cached local-player pointer is null; tint mutation is not run.
No game, Windows process or hook installation is involved. Requires pefile/unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDI, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u32, u64

ENTRY, HELPER, REACHED, ARMED = 0x1801ccbc0, 0x1802988b0, 0x18029891d, 0x18029897b
LOCK, UNLOCK, ORIGINAL = 0x1804e4d70, 0x1804e4e90, STUB + 0x200
ORIGINAL_SLOT, COUNTER = 0x180cd1a38, 0x180cd1aa0
ENABLED, PRIMARY, FALLBACK, PENDING = 0x180cd011c, 0x180961eec, 0x180cfe65c, 0x180ccfedf
INITIALIZED, PLAYER, COOKIE = 0x180cd1304, 0x1811089f8, 0x180919500


def execute(pe, *, args=(0x101, 0x202, 0x303), enabled=1, primary=0x20, fallback=0, pending=0):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x1801cc000, 0x180298000, 0x1804e4000, 0x1804ec000, 0x180919000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((0x180cd1000, 0x1000), (0x180cd0000, 0x1000), (0x180961000, 0x1000),
                       (0x180cfe000, 0x1000), (0x180ccf000, 0x1000), (0x180cfc000, 0x1000),
                       (0x1809f3000, 0x1000), (0x181108000, 0x1000), (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(page, size)
    for address, value in ((ORIGINAL_SLOT, ORIGINAL), (COOKIE, 0x112233445566), (PLAYER, 0)):
        vm.mem_write(address, u64(value))
    for address, value in ((COUNTER, 4), (PRIMARY, primary), (FALLBACK, fallback)):
        vm.mem_write(address, u32(value))
    for address, value in ((ENABLED, enabled), (PENDING, pending), (INITIALIZED, 1)):
        vm.mem_write(address, bytes([value]))
    events = []

    def hook(machine, address, _size, _context):
        if address == HELPER:
            require((machine.reg_read(UC_X86_REG_RCX), machine.reg_read(UC_X86_REG_RDX)) == args[1:], 'helper arguments')
            events.append(('helper',))
            return
        if address == REACHED:
            events.append(('gates-passed', machine.reg_read(UC_X86_REG_RDI)))
            return
        if address == ARMED:
            events.append(('pending',))
            return
        if address == ORIGINAL:
            forwarded = tuple(machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8))
            require(forwarded == args, 'saved original arguments')
            require(struct.unpack('<I', machine.mem_read(COUNTER, 4))[0] == 5, 'counter while in callback')
            events.append(('original',))
            value = 0x1234
        else:
            require(machine.reg_read(UC_X86_REG_RCX) == 0x1809f3960, 'lock object')
            events.append(('lock' if address == LOCK else 'unlock',))
            value = 0
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (HELPER, REACHED, ARMED, ORIGINAL, LOCK, UNLOCK):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, args[0]), (UC_X86_REG_RDX, args[1]), (UC_X86_REG_R8, args[2])):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=100000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, 'callback did not return')
    require(struct.unpack('<I', vm.mem_read(COUNTER, 4))[0] == 4, 'callback counter did not balance')
    return events


def verify(pe):
    no_op = [('helper',), ('original',)]
    for kwargs in ({'enabled': 0}, {'args': (0x101, 0, 0x303)}, {'args': (0x101, 0x202, 0)},
                   {'primary': 0, 'fallback': 0}):
        require(execute(pe, **kwargs) == no_op, f'early gate {kwargs}')
    require(execute(pe, primary=0x20, fallback=0x44) ==
            [('helper',), ('gates-passed', 0x20), ('lock',), ('unlock',), ('original',)], 'primary offset')
    require(execute(pe, primary=0, fallback=0x44) ==
            [('helper',), ('gates-passed', 0x5c), ('lock',), ('unlock',), ('original',)], 'fallback offset')
    require(execute(pe, pending=1) ==
            [('helper',), ('gates-passed', 0x20), ('lock',), ('pending',), ('unlock',), ('original',)],
            'pending branch with null synthetic player')
    return 7


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic composite-callback scenarios; original and lock helpers stubbed')


if __name__ == '__main__':
    main()
