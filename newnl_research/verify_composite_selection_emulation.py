#!/usr/bin/env python3
"""Exercise the composite callback through tint writes on synthetic objects.

The packing helper, marker writer, callback, selection, handle resolution,
readers and tint writes are original machine code. String comparison, logging,
locking and the saved original callback are stubbed. No game or hook is accessed.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_R14, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u32, u64
from verify_tint_packing_emulation import COLORS, COLORS_INPUT, ENTRY as PACK_ENTRY

ENTRY, TINT, COMPARE = 0x1801ccbc0, 0x18028f3a0, 0x180540e80
MARKER_WRITER, MARKER_CONSTANT = 0x1800239d0, 0x180650290
LOCK, UNLOCK, LOG = 0x1804e4d70, 0x1804e4e90, 0x18028fbf0
ORIGINAL, COOKIE = STUB + 0x200, 0x180919500
COUNTER, TINT_COUNTER = 0x180cd1aa0, 0x180cfc9e8
DATA = 0x2000000
MANAGER, REQUEST, PLAYER, CONTAINERS, ITEM, KEY, WORLD, HUD = (DATA + x for x in
    (0x100, 0x1000, 0x5000, 0x7000, 0x10000, 0x20000, 0x30000, 0x40000))
ROOT, ENTITY_SYSTEM, CHUNK0, CHUNK1 = (DATA + x for x in (0x48000, 0x49000, 0x50000, 0x54000))
SENTINEL = 0xf000000000000010


def execute(pe, *, owner=WORLD, world=WORLD, hud=HUD, team=0x32, sentinel=SENTINEL,
            primary=0x20, fallback=0x44, world_handle=11, hud_handle=22, enabled=1, pending=1):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for page in (0x1801cc000, 0x180298000, 0x18028f000, 0x18028e000, 0x180013000,
                 0x180540000, 0x1804ec000, 0x180919000, 0x180650000, 0x180740000,
                 0x180011000, 0x18000f000, 0x1803a0000, 0x180023000, 0x180290000, 0x1808ac000):
        vm.mem_map(page, 0x1000)
        vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
    for page, size in ((DATA, 0x60000), (0x180cd1000, 0x1000), (0x180cd0000, 0x1000),
                       (0x180961000, 0x1000), (0x180cfe000, 0x1000), (0x180ccf000, 0x1000),
                       (0x180cfc000, 0x1000), (0x1809f3000, 0x1000), (0x181108000, 0x1000),
                       (STACK, 0x10000), (STUB, 0x1000), (0x1804e4000, 0x1000)):
        vm.mem_map(page, size)
    for address, value in ((COOKIE, 0x112233445566), (0x180cd1a38, ORIGINAL), (0x1811089f8, PLAYER),
                           (0x180cd1e28, 0x4455), (0x180cd19e0, 0x6677), (0x1809619d0, ROOT),
                           (ROOT, ENTITY_SYSTEM), (ENTITY_SYSTEM + 0x10, CHUNK0),
                           (ENTITY_SYSTEM + 0x18, CHUNK1), (CHUNK0 + 11 * 0x20, world),
                           (CHUNK0 + 22 * 0x20, hud), (CHUNK1 + 22 * 0x20, hud)):
        vm.mem_write(address, u64(value))
    for address, value in ((COUNTER, 4), (TINT_COUNTER, 10), (0x180961eec, primary), (0x180cfe65c, fallback),
                           (0x180961940, 0x10), (0x180961944, 8), (0x180961948, 0x20),
                           (0x180cfe4a0, 0x32), (0x180cfe62c, 0x20), (0x180cfe5d4, 0x10),
                           (0x180cfe5d8, 0x18), (0x180cfe658, 0x60), (0x180cfe634, 0x68),
                           (0x180cfe678, 40), (REQUEST + 0x50, 1), (CONTAINERS + 4, 3),
                           (CONTAINERS + 0xf8, 1), (ITEM + 0x40, 0xaaaaaaaa),
                           (ITEM + 0x8c, 0xbbbbbbbb), (PLAYER + 0x60, world_handle), (PLAYER + 0x68, hud_handle)):
        vm.mem_write(address, u32(value))
    for address, value in ((0x180cd011c, enabled), (0x180ccfedf, pending), (0x180cd1304, 1)):
        vm.mem_write(address, bytes([value]))
    config, packed = DATA + 0x4a000, DATA + 0x4b000
    vm.mem_write(config + 0x60, b''.join(struct.pack('<4f', *color) for color in COLORS_INPUT))
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, packed), (UC_X86_REG_RDX, config)):
        vm.reg_write(reg, value)
    vm.emu_start(PACK_ENTRY, STOP, count=100000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP and vm.reg_read(UC_X86_REG_RAX) == packed and
            struct.unpack('<8I', vm.mem_read(packed, 32)) == COLORS, 'native packed colors')
    vm.mem_write(0x180cfca20, bytes(vm.mem_read(packed, 32)))
    vm.mem_write(PLAYER + 0x30, struct.pack('<H', team))
    require(bytes(vm.mem_read(MARKER_CONSTANT, 8)) == u64(SENTINEL), 'PE marker constant')
    marker_source = MARKER_CONSTANT
    if sentinel != SENTINEL:
        marker_source = ROOT + 0x100
        vm.mem_write(marker_source, u64(sentinel))
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, PLAYER + 0x38), (UC_X86_REG_RDX, marker_source)):
        vm.reg_write(reg, value)
    vm.emu_start(MARKER_WRITER, STOP, count=1000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP and vm.reg_read(UC_X86_REG_RAX) & 0xff == 1 and
            bytes(vm.mem_read(PLAYER + 0x38, 8)) == u64(sentinel), 'native marker write')
    vm.mem_write(REQUEST + 0x58, u64(CONTAINERS))
    vm.mem_write(CONTAINERS + 0x100, u64(ITEM))
    vm.mem_write(ITEM, u64(KEY))
    vm.mem_write(KEY, b'g_vColorTint3\0')
    offset = primary or (fallback + 0x18 if fallback else 0)
    args = (MANAGER, REQUEST, owner + offset)
    events = []

    def cstring(address):
        result = bytearray()
        for i in range(100):
            byte = vm.mem_read(address + i, 1)[0]
            if not byte:
                return bytes(result)
            result.append(byte)
        raise AssertionError('unterminated synthetic label')

    def hook(machine, address, _size, _context):
        rcx, rdx, r8, r9 = (machine.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == TINT:
            require((rcx, r8, r9) == (REQUEST, 0x6677, 0x4455), 'tint helper arguments')
            require(bytes(machine.mem_read(rdx, 32)) == b''.join(u32(x) for x in COLORS), 'copied tint values')
            events.append(('tint', cstring(machine.reg_read(UC_X86_REG_R14)).decode('ascii')))
            return
        if address == COMPARE:
            a, b = bytes(machine.mem_read(rcx, r8)), bytes(machine.mem_read(rdx, r8))
            value = int(a.split(b'\0', 1)[0] != b.split(b'\0', 1)[0])
        elif address == ORIGINAL:
            require((rcx, rdx, r8) == args, 'original callback arguments')
            require(struct.unpack('<I', machine.mem_read(COUNTER, 4))[0] == 5, 'callback counter in original')
            if events and events[-1][0] == 'tint':
                require(bytes(machine.mem_read(ITEM + 0x40, 4)) == u32(9) and
                        bytes(machine.mem_read(ITEM + 0x8c, 4)) == u32(COLORS[2]), 'tint written before original')
            events.append(('original',))
            value = 0
        else:
            value = 0
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    for address in (TINT, COMPARE, ORIGINAL, LOCK, UNLOCK, LOG):
        vm.hook_add(unicorn.UC_HOOK_CODE, hook, begin=address, end=address)
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, args[0]), (UC_X86_REG_RDX, args[1]), (UC_X86_REG_R8, args[2])):
        vm.reg_write(reg, value)
    try:
        vm.emu_start(ENTRY, STOP, count=1000000)
    except unicorn.UcError as exc:
        raise RuntimeError(f'emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}') from exc
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, 'callback did not return')
    require(struct.unpack('<I', vm.mem_read(COUNTER, 4))[0] == 4, 'unbalanced callback counter')
    fields = (struct.unpack('<I', vm.mem_read(ITEM + 0x40, 4))[0], struct.unpack('<I', vm.mem_read(ITEM + 0x8c, 4))[0])
    counter = struct.unpack('<I', vm.mem_read(TINT_COUNTER, 4))[0]
    return events, fields, counter


def verify(pe):
    for kwargs, label in (({}, 'world gloves'), ({'owner': HUD}, 'hud arms'),
                          ({'owner': WORLD, 'hud': WORLD}, 'world gloves'),
                          ({'primary': 0, 'fallback': 0x44}, 'world gloves'),
                          ({'world_handle': 0x800b}, 'world gloves'),
                          ({'owner': HUD, 'hud_handle': 0x216}, 'hud arms')):
        events, fields, counter = execute(pe, **kwargs)
        require((events, fields, counter) == ([('tint', label), ('original',)], (9, COLORS[2]), 11), f'matched selection {kwargs}')
    for kwargs in ({'owner': DATA + 0x45000}, {'team': 0x33}, {'sentinel': 0},
                   {'world_handle': 0xffffffff}, {'world_handle': 0}, {'world_handle': 33},
                   {'world_handle': 0x40b}, {'enabled': 0}, {'pending': 0}):
        events, fields, counter = execute(pe, **kwargs)
        require((events, fields, counter) == ([('original',)], (0xaaaaaaaa, 0xbbbbbbbb), 10), f'rejected selection {kwargs}')
    return 15


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic callback-to-tint scenarios; engine callbacks stubbed')


if __name__ == '__main__':
    main()
