#!/usr/bin/env python3
"""Exercise the first resolver's post-lookup path in the timed-out routine.

The resolver, bookkeeping and logging functions are stubbed. Match addresses,
instruction displacements and all referenced process state are synthetic. This
stops immediately after the entity_list global is written, not at function exit.
Requires pefile and unicorn; does not load the DLL or contact a game process.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, require, u32, u64

ENTRY, END = 0x1803cb350, 0x1803cb432
RESOLVE, RECORD, LOG = 0x1803ca5d0, 0x1803ca370, 0x1802b2560
ERRORS, ATTEMPTS, RESULT = 0x181111840, 0x181111844, 0x1809619d0
MODULE, LABEL, PATTERN = 0x1806d2230, 0x1808a64d0, 0x1808a1220


def execute(pe, match, displacement=0):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x1803cb000, 0x1803ca000, 0x1802b2000, 0x1806d2000,
                 0x1808a1000, 0x1808a6000, 0x180961000, 0x181111000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    vm.mem_map(STACK, 0x10000)
    if match:
        page = match & ~0xfff
        vm.mem_map(page, 0x1000)
        vm.mem_write(match + 3, struct.pack('<i', displacement))
    vm.mem_write(ERRORS, u32(0xaaaaaaaa))
    vm.mem_write(ATTEMPTS, u32(0xbbbbbbbb))
    vm.mem_write(RESULT, u64(0xcccccccccccccccc))
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(0))
    vm.reg_write(UC_X86_REG_RSP, sp)
    events = []

    def hook(machine, address, _size, _data):
        args = tuple(machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == RESOLVE:
            require(args[:3] == (MODULE, LABEL, PATTERN), 'resolver arguments')
            events.append(('resolve',))
            result = match
        elif address == RECORD:
            require(args[:3] == (MODULE, LABEL, PATTERN), 'record arguments')
            events.append(('record', args[3]))
            result = 0
        else:
            require(args == (0x1808a6180, MODULE, LABEL, PATTERN), 'log arguments')
            events.append(('log', args[0]))
            result = 0
        stack = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(stack, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, result)
        machine.reg_write(UC_X86_REG_RSP, stack + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (RESOLVE, RECORD, LOG):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    try:
        vm.emu_start(ENTRY, END, count=10000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == END, 'first resolver path did not reach stop')
    read32 = lambda address: struct.unpack('<I', vm.mem_read(address, 4))[0]
    value = struct.unpack('<Q', vm.mem_read(RESULT, 8))[0]
    return value, read32(ERRORS), read32(ATTEMPTS), events


def verify(pe):
    low, high = 0x2000000, 0x7fffffffe000
    cases = (
        (0, 0, None),
        (low, 0x120, low + 7 + 0x120),
        (low, -0x100, low + 7 - 0x100),
        (low, 0x10000 - low - 7, 0x10000),
        (low, 0xffff - low - 7, None),
        (low, -low - 7, None),
        (high, 0x7ffffffffffe - high - 7, 0x7ffffffffffe),
        (high, 0x7fffffffffff - high - 7, None),
    )
    for match, displacement, target in cases:
        value, errors, attempts, events = execute(pe, match, displacement)
        require(attempts == 0, 'attempt count after caller reset; resolver stub does not increment it')
        if match == 0:
            require((value, errors, events) == (0, 0, [('resolve',)]), 'zero-match branch')
        elif target is not None:
            require((value, errors, events) == (target, 0, [('resolve',), ('record', target)]), 'valid target branch')
        else:
            require(value == 0 and errors == 1 and events[:2] == [('resolve',), ('record', 0)]
                    and len(events) == 3 and events[2][0] == 'log', 'invalid target branch')
    return len(cases)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic first-resolver paths; resolver, record and log stubbed')


if __name__ == '__main__':
    main()
