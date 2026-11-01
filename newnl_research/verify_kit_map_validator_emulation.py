#!/usr/bin/env python3
"""Exercise native kit-record validation over synthetic records.

Page checks, string storage helpers and memcmp are stubbed; record iteration,
bounded name copying, filters, diagnostic control flow and cookie checks execute
from original bytes. No game or Windows APIs are accessed.
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

ENTRY, PAGE_CHECK, DESTRUCT, MEMCMP = 0x180277b30, 0x1801d1c60, 0x18000f890, 0x180540bc0
COOKIE, DATA = 0x180919500, 0x2000000
BASE, ARRAY, ITEMS, NAMES, MARKER, OUTPUT = DATA + 0x1000, DATA + 0x2000, DATA + 0x6000, DATA + 0xa000, DATA + 0x100, DATA + 0x200
APPEND, FREE, MEMCPY = 0x1800134a0, 0x1804ece80, 0x180540530
MEMSET, STRLEN, ASSIGN = 0x180540170, 0x180540dc0, 0x1800133a0
OFFSET = 0x138


def execute(pe, *, count=300, changes=None, denied=(), marker=True, diagnostic=None):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x180277000, 0x180011000, 0x18000f000, 0x1801d1000, 0x180540000, 0x18073e000, 0x1804ec000, 0x180919000, 0x180013000, 0x18003a000, 0x180042000, 0x18058a000, 0x180066000, 0x1806f0000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((DATA, 0x20000), (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(page, size)
    vm.mem_write(COOKIE, u64(0x112233445566))
    vm.mem_write(BASE + OFFSET, u32(count))
    vm.mem_write(BASE + OFFSET + 8, u64(ARRAY))
    changes = {} if changes is None else changes
    for index in range(300):
        item, name = ITEMS + index * 0x20, NAMES + index * 0x40
        ident, text = changes.get(index, (1, 'aa'))
        text = text.encode('ascii')
        require(len(text) < 0x40, 'synthetic name too long')
        vm.mem_write(ARRAY + index * 0x20 + 0x18, u64(item))
        vm.mem_write(item, u32(ident))
        vm.mem_write(item + 8, u64(name))
        vm.mem_write(name, text + b'\0')
    checks = []
    heap = DATA + 0x10000

    def get_string(machine, obj):
        size, capacity = struct.unpack('<QQ', machine.mem_read(obj + 0x10, 16))
        address = obj if capacity <= 15 else struct.unpack('<Q', machine.mem_read(obj, 8))[0]
        return bytes(machine.mem_read(address, size)) if size else b''

    def set_string(machine, obj, text):
        nonlocal heap
        out = bytearray(32)
        if len(text) <= 15:
            out[:len(text)] = text
            capacity = 15
        else:
            require(heap + len(text) + 1 <= DATA + 0x20000, 'synthetic string heap exhausted')
            machine.mem_write(heap, text + b'\0')
            struct.pack_into('<Q', out, 0, heap)
            heap += (len(text) + 16) & ~15
            capacity = len(text)
        struct.pack_into('<QQ', out, 0x10, len(text), capacity)
        machine.mem_write(obj, bytes(out))

    if diagnostic is not None:
        set_string(vm, OUTPUT, diagnostic.encode('ascii'))

    def hook(machine, address, _size, _context):
        rcx, rdx, r8 = (machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8))
        if address == PAGE_CHECK:
            checks.append((rcx, rdx))
            value = int(DATA <= rcx and rcx + rdx <= DATA + 0x10000 and rcx not in denied)
        elif address == MEMSET:
            machine.mem_write(rcx, bytes([rdx & 0xff]) * r8)
            value = rcx
        elif address == STRLEN:
            for value in range(256):
                if machine.mem_read(rcx + value, 1)[0] == 0:
                    break
            else:
                raise AssertionError('unterminated bounded name buffer')
        elif address == ASSIGN:
            set_string(machine, rcx, bytes(machine.mem_read(rdx, r8)) if r8 else b'')
            value = rcx
        elif address == APPEND:
            set_string(machine, rcx, get_string(machine, rcx) + bytes(machine.mem_read(rdx, r8)))
            value = rcx
        elif address == MEMCPY:
            machine.mem_write(rcx, bytes(machine.mem_read(rdx, r8)))
            value = rcx
        elif address == MEMCMP:
            value = int(bytes(machine.mem_read(rcx, r8)) != bytes(machine.mem_read(rdx, r8)))
        else:
            value = 0
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (PAGE_CHECK, DESTRUCT, MEMCMP, APPEND, MEMCPY, FREE, MEMSET, STRLEN, ASSIGN):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, BASE), (UC_X86_REG_RDX, OFFSET),
                       (UC_X86_REG_R8, OUTPUT if diagnostic is not None else 0), (UC_X86_REG_R9, MARKER if marker else 0)):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=2000000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, 'validator did not return')
    text = None if diagnostic is None else get_string(vm, OUTPUT).decode('ascii')
    return vm.reg_read(UC_X86_REG_RAX) & 0xffffffff, vm.mem_read(MARKER, 1)[0], checks, text


def verify(pe):
    result, marker, checks, _ = execute(pe)
    require((result, marker) == (300, 0) and checks[0] == (ARRAY, 300 * 0x20), 'all valid')
    result, marker, _, _ = execute(pe, changes={5: (1, 'so_olive')})
    require((result, marker) == (300, 1), 'short marker')
    result, marker, _, _ = execute(pe, changes={5: (1, 'cu_medieval_dragon_awp')})
    require((result, marker) == (300, 1), 'long marker')
    result, marker, _, _ = execute(pe, changes={0: (0, 'aa'), 1: (100000, 'aa'), 2: (100001, 'aa')})
    require((result, marker) == (298, 0), 'item ID boundaries')
    result, marker, _, _ = execute(pe, changes={0: (1, 'a'), 1: (1, 'ab'), 2: (1, 'a' * 48),
                                            3: (1, 'a' * 49), 4: (1, 'UPPER'), 5: (1, 'a-b')})
    require((result, marker) == (296, 0), 'name length and character boundaries')
    result, marker, _, _ = execute(pe, changes={0: (1, 'so_olive')}, marker=False)
    require((result, marker) == (300, 0), 'null marker pointer')
    result, marker, _, _ = execute(pe, denied=(ITEMS, NAMES + 0x40))
    require((result, marker) == (298, 0), 'unreadable item or name rejected by stubbed page check')
    for count in (299, 30001):
        result, marker, checks, _ = execute(pe, count=count)
        require((result, marker, checks) == (0, 0, []), f'outer count {count}')
    result, marker, checks, _ = execute(pe, count=30000, denied=(ARRAY,))
    require((result, marker) == (0, 0) and checks == [(ARRAY, 30000 * 0x20)], 'upper count reaches page check')
    result, marker, _, text = execute(pe, diagnostic='')
    require((result, marker, text) == (300, 0, '1:aa, 1:aa, 1:aa'), 'first three diagnostic records')
    changes = {0: (0, 'aa'), 1: (7, 'first'), 2: (8, 'second'), 3: (9, 'third'), 4: (10, 'fourth')}
    result, marker, _, text = execute(pe, changes=changes, diagnostic='existing')
    require((result, marker, text) == (299, 0, 'existing, 7:first, 8:second, 9:third'), 'diagnostic skips invalid and preserves prefix')
    result, marker, _, text = execute(pe, count=299, diagnostic='existing')
    require((result, marker, text) == (0, 0, 'existing'), 'rejected array leaves diagnostic untouched')
    result, marker, _, text = execute(pe, changes={0: (1, 'so_olive')}, diagnostic='')
    require((result, marker, text) == (300, 1, '1:so_olive, 1:aa, 1:aa'), 'diagnostics and marker together')
    result, marker, _, text = execute(pe, changes={0: (100000, 'test')}, diagnostic='')
    require((result, marker, text) == (300, 0, '100000:test, 1:aa, 1:aa'), 'native multi-digit ID formatting')
    result, marker, _, text = execute(pe, changes={5: (1, 'so_olive')}, diagnostic='')
    require((result, marker, text) == (300, 1, '1:aa, 1:aa, 1:aa'), 'later marker with bounded diagnostics')
    return 16


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic kit-record validation scenarios; page and string helpers stubbed')


if __name__ == '__main__':
    main()
