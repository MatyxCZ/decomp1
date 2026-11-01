#!/usr/bin/env python3
"""Exercise two native pattern-resolution wrappers with synthetic matches.

The actual byte readers execute, but the scanner, record and logging helpers are
stubbed. No game module or Windows process is accessed. Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u32, u64

CALL, DISP = 0x1803ca6d0, 0x1803ca790
RESOLVE, RECORD, LOG = 0x1803ca5d0, 0x1803ca370, 0x1802b2560
ERRORS, BUFFER = 0x181111840, 0x2000000
ARGS = (0x101, 0x202, 0x303)


def execute(pe, entry, *, match=BUFFER, site=BUFFER + 0x100, displacement=0,
            byte=0xe8, offset5=3, offset6=7, put_data=True, high_page=False):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x1803ca000, 0x1802b2000, 0x180011000, 0x181111000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((STACK, 0x10000), (STUB, 0x1000), (BUFFER, 0x1000)):
        vm.mem_map(page, size)
    if high_page:
        vm.mem_map(0x7ffffffff000, 0x1000)
    if put_data:
        if entry == CALL:
            vm.mem_write(site, bytes([byte]))
            if site != 0x7ffffffffffe:
                vm.mem_write(site + 1, struct.pack('<i', displacement))
        else:
            vm.mem_write(site + offset5, struct.pack('<i', displacement))
    vm.mem_write(ERRORS, u32(0x15))
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    vm.mem_write(sp + 0x28, u64(offset5))
    vm.mem_write(sp + 0x30, u64(offset6))
    for reg, value in zip((UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9),
                          (*ARGS, (site - match) & 0xffffffffffffffff)):
        vm.reg_write(reg, value)
    vm.reg_write(UC_X86_REG_RSP, sp)
    events = []

    def hook(machine, address, _size, _context):
        args = tuple(machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == RESOLVE:
            require(args[:3] == ARGS, 'resolver arguments')
            events.append(('resolve',))
            result = match
        elif address == RECORD:
            require(args[:3] == ARGS, 'record arguments')
            events.append(('record', args[3]))
            result = 0
        else:
            expected_format = 0x1808a61b0 if entry == CALL else 0x1808a6180
            require(args == (expected_format, *ARGS), 'logger arguments')
            events.append(('log',))
            result = 0
        current = machine.reg_read(UC_X86_REG_RSP)
        target = struct.unpack('<Q', machine.mem_read(current, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, result)
        machine.reg_write(UC_X86_REG_RSP, current + 8)
        machine.reg_write(UC_X86_REG_RIP, target)

    for address in (RESOLVE, RECORD, LOG):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    fault = None
    try:
        vm.emu_start(entry, STOP, count=10000)
    except unicorn.UcError as exc:
        fault = exc.errno
    ip = vm.reg_read(UC_X86_REG_RIP)
    errors = struct.unpack('<I', vm.mem_read(ERRORS, 4))[0]
    if fault is None:
        require(ip == STOP, f'wrapper did not return: {ip:#x}')
    return (vm.reg_read(UC_X86_REG_RAX), errors, events, fault, ip)


def verify(pe):
    n = 0

    def returned(entry, expected, *, error=False, recorded=True, **kwargs):
        nonlocal n
        value, errors, events, fault, _ = execute(pe, entry, **kwargs)
        wanted = [('resolve',)]
        if recorded:
            wanted.append(('record', 0 if error else expected))
        if error:
            wanted.append(('log',))
        require((value, errors, events, fault) == (expected, 0x15 + int(error), wanted, None), f'case {entry:#x} {kwargs}')
        n += 1

    returned(CALL, 0, match=0, put_data=False, recorded=False)
    returned(CALL, BUFFER + 0x125, displacement=0x20)
    returned(CALL, BUFFER + 0x85, displacement=-0x80)
    returned(CALL, 0, byte=0x90, error=True)
    returned(CALL, 0, displacement=-(BUFFER + 0x105), error=True)
    returned(CALL, 1, displacement=1 - (BUFFER + 0x105))
    returned(CALL, 0, site=0xffff, put_data=False, error=True)
    returned(CALL, 0, site=0x7fffffffffff, put_data=False, error=True)
    returned(CALL, 0x800000000003, site=0x7ffffffffffe, high_page=True)
    returned(DISP, 0, match=0, put_data=False, recorded=False)
    returned(DISP, BUFFER + 0x127, displacement=0x20)
    returned(DISP, BUFFER + 0x87, displacement=-0x80)
    returned(DISP, 0, site=0, put_data=False, error=True)
    for target, rejected in ((0x10000, False), (0xffff, True), (0x7ffffffffffe, False), (0x7fffffffffff, True)):
        returned(DISP, 0 if rejected else target, offset6=target - (BUFFER + 0x100), error=rejected)
    for entry, kwargs, expected_ip in (
        (CALL, {'site': BUFFER + 0x2000, 'put_data': False}, 0x180011239),
        (DISP, {'site': BUFFER + 0x100, 'offset5': 0x2000, 'put_data': False}, 0x1803ca7bd),
    ):
        _, errors, events, fault, ip = execute(pe, entry, **kwargs)
        require(fault == unicorn.UC_ERR_READ_UNMAPPED and ip == expected_ip and errors == 0x15 and events == [('resolve',)],
                f'synthetic unreadable operand {entry:#x}')
        n += 1
    return n


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic resolver-wrapper scenarios; scanner, record and logger stubbed')


if __name__ == '__main__':
    main()
