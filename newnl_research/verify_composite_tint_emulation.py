#!/usr/bin/env python3
"""Exercise native tint-container inspection and writes on synthetic memory.

Original loops, bounded key reads, numeric accessors and type/value writes run.
Selected failure cases stub one writer return; comparison, thread ID and optional
container creation are stubbed. No game, Windows API, real object or hook is accessed.
Requires pefile/unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u32, u64

ENTRY, COMPARE, CREATE, WRITE32 = 0x18028f3a0, 0x180540e80, 0x18028e780, 0x180013280
THREAD_API, THREAD_IAT = STUB + 0x200, 0x18056b168
COUNTER, THREAD_STATE, COOKIE = 0x180cfc9e8, 0x180cfc9e4, 0x180919500
DATA = 0x2000000
OBJECT, CONTAINERS, ITEMS, NAMES, COLORS = (DATA + x for x in (0x100, 0x1000, 0x10000, 0x50000, 0x60000))
COLORS_DATA = tuple(0x10203040 + i for i in range(8))


def execute(pe, *, names=(), child_count=None, outer_count=1, container_type=3,
            null_object=False, null_containers=False, null_children=False,
            fallback=None, missing_dependency=None, fail_write_number=None):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x18028f000, 0x18028e000, 0x180011000, 0x18000f000, 0x180013000,
                 0x180540000, 0x180650000, 0x180919000, 0x18056b000, 0x1804ec000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((DATA, 0x70000), (0x180cfc000, 0x1000), (0x180961000, 0x1000),
                       (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(page, size)
    vm.mem_write(COOKIE, u64(0x112233445566))
    vm.mem_write(THREAD_IAT, u64(THREAD_API))
    vm.mem_write(COUNTER, u32(10))
    vm.mem_write(THREAD_STATE, u32(0))
    vm.mem_write(OBJECT + 0x50, u32(outer_count))
    vm.mem_write(OBJECT + 0x58, u64(0 if null_containers else CONTAINERS))
    vm.mem_write(CONTAINERS + 4, u32(container_type))
    vm.mem_write(CONTAINERS + 0xf8, u32(len(names) if child_count is None else child_count))
    vm.mem_write(CONTAINERS + 0x100, u64(0 if null_children else ITEMS))
    for index, name in enumerate(names):
        if name is None:
            continue
        raw = name.encode('ascii')
        require(len(raw) < 0x40, 'synthetic key too long')
        item, key = ITEMS + index * 0x288, NAMES + index * 0x40
        vm.mem_write(item, u64(key))
        vm.mem_write(item + 0x40, u32(0xaaaaaaaa))
        vm.mem_write(item + 0x8c, u32(0xbbbbbbbb))
        vm.mem_write(key, raw + b'\0')
    vm.mem_write(COLORS, b''.join(u32(value) for value in COLORS_DATA))
    callbacks = (0x101, 0x202) if fallback is not None else (0, 0)
    if fallback is not None:
        for address in (0x180961e30, 0x180961e38, 0x180961e40, 0x180961e50):
            if address != missing_dependency:
                vm.mem_write(address, u64(0x777))
    events, write_calls = [], 0

    def hook(machine, address, _size, _context):
        nonlocal write_calls
        rcx, rdx, r8, r9 = (machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == WRITE32:
            write_calls += 1
            if write_calls != fail_write_number:
                return
            value = 0
        elif address == COMPARE:
            a, b = bytes(machine.mem_read(rcx, r8)), bytes(machine.mem_read(rdx, r8))
            value = int(a.split(b'\0', 1)[0] != b.split(b'\0', 1)[0])
        elif address == THREAD_API:
            events.append('thread')
            value = 0x1234
        else:
            require((rcx, rdx, r8, r9) == (OBJECT + 0x50, *callbacks, COLORS), 'container creation arguments')
            require(struct.unpack('<I', machine.mem_read(THREAD_STATE, 4))[0] == 0x1234, 'creation thread marker')
            events.append('create')
            value = int(fallback)
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (COMPARE, THREAD_API, CREATE, WRITE32):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, 0 if null_object else OBJECT),
                       (UC_X86_REG_RDX, COLORS), (UC_X86_REG_R8, callbacks[0]), (UC_X86_REG_R9, callbacks[1])):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=1000000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, 'tint helper did not return')
    fields = [(struct.unpack('<I', vm.mem_read(ITEMS + i * 0x288 + 0x40, 4))[0],
               struct.unpack('<I', vm.mem_read(ITEMS + i * 0x288 + 0x8c, 4))[0])
              for i in range(len(names)) if names[i] is not None]
    return (vm.reg_read(UC_X86_REG_RAX) & 0xffffffff,
            struct.unpack('<I', vm.mem_read(COUNTER, 4))[0],
            struct.unpack('<I', vm.mem_read(THREAD_STATE, 4))[0], fields, events)


def verify(pe):
    unchanged = (0xaaaaaaaa, 0xbbbbbbbb)
    for kwargs in ({'null_object': True}, {'outer_count': 65}, {'null_containers': True},
                   {'names': ('g_vColorTint1',), 'container_type': 2},
                   {'names': ('g_vColorTint1',), 'null_children': True},
                   {'names': ('g_vColorTint1',), 'child_count': 257}):
        result, counter, thread, fields, events = execute(pe, **kwargs)
        require((result, counter, thread, events) == (0xffffffff, 10, 0, []) and all(x == unchanged for x in fields), f'rejection {kwargs}')
    names = ('g_vColorTint1', 'g_vColorTint8', 'g_vColorTint0', 'g_vColorTint9',
             'g_vColorTint10', 'g_vColorTint1x', 'G_vColorTint1')
    result, counter, thread, fields, events = execute(pe, names=names)
    require((result, counter, thread, events) == (2, 11, 0, []) and
            fields == [(9, COLORS_DATA[0]), (9, COLORS_DATA[7])] + [unchanged] * 5, 'tint name and index matching')
    result, counter, _, fields, _ = execute(pe, names=('g_vColorTint1', 'g_vColorTint1'))
    require(result == 2 and counter == 11 and fields == [(9, COLORS_DATA[0])] * 2, 'duplicate tint keys')
    many = ('g_vColorTint1',) + (None,) * 254 + ('g_vColorTint8',)
    result, counter, _, fields, _ = execute(pe, names=many)
    require(result == 2 and counter == 11 and fields == [(9, COLORS_DATA[0]), (9, COLORS_DATA[7])], '256-entry limit')
    for response, expected, expected_counter in ((True, 0, 11), (False, 0xffffffff, 10)):
        result, counter, thread, _, events = execute(pe, outer_count=0, fallback=response)
        require((result, counter, thread, events) == (expected, expected_counter, 0, ['thread', 'create']), 'stubbed fallback result')
    result, counter, thread, _, events = execute(pe, outer_count=0, fallback=True, missing_dependency=0x180961e40)
    require((result, counter, thread, events) == (0xffffffff, 10, 0, []), 'missing fallback dependency')
    result, counter, _, fields, events = execute(pe, names=('g_vColorTint1',), fail_write_number=1)
    require((result, counter, fields, events) == (0xffffffff, 10, [unchanged], []), 'failed type write')
    result, counter, _, fields, events = execute(pe, names=('g_vColorTint1',), fail_write_number=2)
    require((result, counter, fields, events) == (0xffffffff, 10, [(9, unchanged[1])], []), 'failed value leaves type written')
    result, counter, _, fields, events = execute(pe, names=('g_vColorTint1', 'g_vColorTint8'), fail_write_number=4)
    require((result, counter, fields, events) == (1, 11, [(9, COLORS_DATA[0]), (9, unchanged[1])], []),
            'partial failure after a successful item')
    result, counter, _, fields, events = execute(pe, names=('g_vColorTint1', 'g_vColorTint8'), fail_write_number=1)
    require((result, counter, fields, events) == (1, 11, [unchanged, (9, COLORS_DATA[7])], []),
            'later item succeeds after a failed type write')
    result, counter, thread, fields, events = execute(pe, names=('g_vColorTint1',), fail_write_number=2, fallback=True)
    require((result, counter, thread, fields, events) == (0, 11, 0, [(9, unchanged[1])], ['thread', 'create']),
            'fallback after failed value write')
    return 17


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic tint-container scenarios; selected writer failures and external helpers stubbed')


if __name__ == '__main__':
    main()
