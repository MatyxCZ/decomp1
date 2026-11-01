#!/usr/bin/env python3
"""Exercise native kit-name localization selection with synthetic strings.

The original branch/compare control flow executes. The localization interface,
C-string comparison/length and string-copy helpers are stubbed; no Windows API,
localization service, game process, or DLL loader runs. Requires pefile/unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u64

ENTRY, LOCALIZE_GLOBAL = 0x1802777c0, 0x180cfc838
STRCMP, STRLEN, ASSIGN, COPY = 0x180540d40, 0x180540dc0, 0x1800133a0, 0x180024b50
DATA, CALLBACK = 0x2000000, STUB + 0x200
OBJ, VTABLE, KEY, FALLBACK, OUTPUT = (DATA + x for x in (0x100, 0x200, 0x400, 0x500, 0x600))
KEY_BUF, FALL_BUF, TRANSLATED, OUTPUT_BUF = (DATA + x for x in (0x1000, 0x1400, 0x1800, 0x1c00))


def execute(pe, key, translated, fallback, *, interface=True):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x180277000, 0x180540000, 0x180013000, 0x180024000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((DATA, 0x3000), (0x180cfc000, 0x1000), (STACK, 0x10000), (STUB, 0x1000)):
        vm.mem_map(page, size)

    def store_string(obj, buffer, value):
        raw = value.encode('ascii')
        require(len(raw) < 0x400 and b'\0' not in raw, 'synthetic string constraint')
        data = bytearray(32)
        if len(raw) <= 15:
            data[:len(raw)] = raw
            capacity = 15
        else:
            vm.mem_write(buffer, raw + b'\0')
            struct.pack_into('<Q', data, 0, buffer)
            capacity = len(raw)
        struct.pack_into('<QQ', data, 0x10, len(raw), capacity)
        vm.mem_write(obj, bytes(data))

    def object_bytes(obj):
        size, capacity = struct.unpack('<QQ', vm.mem_read(obj + 0x10, 16))
        location = obj if capacity <= 15 else struct.unpack('<Q', vm.mem_read(obj, 8))[0]
        return bytes(vm.mem_read(location, size)) if size else b''

    def cstring(address):
        buf = bytearray()
        for i in range(0x400):
            byte = vm.mem_read(address + i, 1)[0]
            if byte == 0:
                return bytes(buf)
            buf.append(byte)
        raise AssertionError('unterminated synthetic C string')

    store_string(KEY, KEY_BUF, key)
    store_string(FALLBACK, FALL_BUF, fallback)
    vm.mem_write(OBJ, u64(VTABLE))
    vm.mem_write(VTABLE + 0x88, u64(CALLBACK))
    vm.mem_write(LOCALIZE_GLOBAL, u64(OBJ if interface else 0))
    if translated is not None:
        vm.mem_write(TRANSLATED, translated.encode('ascii') + b'\0')
    localize_calls = []
    constructed = []

    def hook(machine, address, _size, _context):
        rcx, rdx, r8 = (machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8))
        if address == CALLBACK:
            require(rcx == OBJ, 'localization interface receiver')
            localize_calls.append(cstring(rdx).decode('ascii'))
            value = 0 if translated is None else TRANSLATED
        elif address == STRCMP:
            value = int(cstring(rcx) != cstring(rdx))
        elif address == STRLEN:
            value = len(cstring(rcx))
        elif address == ASSIGN:
            require(rcx == OUTPUT, 'localized output target')
            raw = bytes(machine.mem_read(rdx, r8)) if r8 else b''
            store_string(rcx, OUTPUT_BUF, raw.decode('ascii'))
            constructed.append('localized')
            value = rcx
        else:
            require((rcx, rdx) == (OUTPUT, FALLBACK), 'fallback copy arguments')
            store_string(rcx, OUTPUT_BUF, object_bytes(rdx).decode('ascii'))
            constructed.append('fallback')
            value = rcx
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (CALLBACK, STRCMP, STRLEN, ASSIGN, COPY):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, OUTPUT), (UC_X86_REG_RDX, KEY), (UC_X86_REG_R8, FALLBACK)):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=10000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP and vm.reg_read(UC_X86_REG_RAX) == OUTPUT, 'localization return')
    return object_bytes(OUTPUT).decode('ascii'), localize_calls, constructed


def verify(pe):
    cases = (
        ('key', 'Localized', False, 'fallback', 'fallback', [], 'fallback'),
        ('', 'Localized', True, 'fallback', 'fallback', [], 'fallback'),
        ('key', None, True, 'fallback', 'fallback', ['key'], 'fallback'),
        ('key', '', True, 'fallback', 'fallback', ['key'], 'fallback'),
        ('key', 'key', True, 'fallback', 'fallback', ['key'], 'fallback'),
        ('#key', '#key', True, 'fallback', 'fallback', ['#key'], 'fallback'),
        ('#key', 'key', True, 'fallback', 'fallback', ['#key'], 'fallback'),
        ('#key', 'Key', True, 'fallback', 'Key', ['#key'], 'localized'),
        ('key', 'KEY', True, 'fallback', 'KEY', ['key'], 'localized'),
        ('abcdefghijklmno', 'abcdefghijklmno', True, 'fallback_long_value', 'fallback_long_value', ['abcdefghijklmno'], 'fallback'),
        ('#abcdefghijklmnop', 'abcdefghijklmnop', True, 'fallback', 'fallback', ['#abcdefghijklmnop'], 'fallback'),
        ('#abcdefghijklmnop', 'localized value longer than fifteen', True, 'fallback', 'localized value longer than fifteen', ['#abcdefghijklmnop'], 'localized'),
    )
    for key, translated, interface, fallback, expected, calls, branch in cases:
        result = execute(pe, key, translated, fallback, interface=interface)
        require(result == (expected, calls, [branch]), f'localization case key={key!r} translated={translated!r}')
    return len(cases)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic localization scenarios; interface and string helpers stubbed')


if __name__ == '__main__':
    main()
