#!/usr/bin/env python3
"""Exercise append/add-container wrappers and tint interception in Unicorn.

The Windows x64 wrappers and lifecycle instructions execute on synthetic objects.
Fallback creation executes in one scenario and is stubbed in others. Engine
callbacks, initialization, formatting, memory fill, clock, comparison, logging
and locks are stubbed. No actual hook is installed.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STUB, require, u32, u64
from verify_tint_lifecycle_emulation import Harness, ARM_GLOVES, ARM_OTHER, CONSUMED, INPUT, ITEM, NAME, COLORS, ARMED, APPLIED, RECORDED, MASK, VALUES, COUNT

APPEND_WRAPPER, ADD_WRAPPER, CREATE = 0x1801ccb50, 0x1801ccb90, 0x18028e780
ORIGINAL_APPEND, ORIGINAL_ADD, THREAD = STUB + 0x300, STUB + 0x380, STUB + 0x400
INITIALIZE, MEMSET, FORMAT = STUB + 0x480, 0x180540170, 0x1800136b0
BUILD, DESTROY_CONTAINER, DESTROY_VECTOR = STUB + 0x500, STUB + 0x580, STUB + 0x600
APPEND_SLOT, ADD_SLOT, ACTIVE = 0x180cd19e0, 0x180cd1e28, 0x180cd1aa0
THREAD_IAT, THREAD_MARKER = 0x18056b168, 0x180cfc9e4
VECTOR, CONTAINER = 0x2003000, 0x2003100


class WrapperHarness(Harness):
    def __init__(self, pe, *, create_result=1, missing_dependency=False, native_create=False):
        super().__init__(pe)
        self.events = []
        self.create_result = create_result
        self.generated_list = None
        self.container_object = None
        for page in (0x1801cc000, 0x18028f000, 0x180011000, 0x180017000, 0x18073f000):
            self.vm.mem_map(page, 0x1000)
            self.vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000).ljust(0x1000, b'\0'))
        for page in (0x180cd1000, 0x180961000):
            self.vm.mem_map(page, 0x1000)
        for address, value in ((APPEND_SLOT, ORIGINAL_APPEND), (ADD_SLOT, ORIGINAL_ADD), (THREAD_IAT, THREAD)):
            self.vm.mem_write(address, u64(value))
        for address, target in ((0x180961e30, INITIALIZE), (0x180961e38, DESTROY_VECTOR),
                                (0x180961e40, BUILD), (0x180961e50, DESTROY_CONTAINER)):
            if not (missing_dependency and address == 0x180961e40):
                self.vm.mem_write(address, u64(target))
        self.vm.mem_write(ACTIVE, u32(4))
        self.vm.mem_write(VECTOR, u32(1))
        hooks = [ORIGINAL_APPEND, ORIGINAL_ADD, THREAD, INITIALIZE, MEMSET, FORMAT,
                 BUILD, DESTROY_CONTAINER, DESTROY_VECTOR]
        if not native_create:
            hooks.append(CREATE)
        for address in hooks:
            self.vm.hook_add(unicorn.UC_HOOK_CODE, self.wrapper_hook, begin=address, end=address)

    def wrapper_hook(self, vm, address, _size, _context):
        rcx, rdx, r8, r9 = (vm.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == ORIGINAL_APPEND:
            require(self.word(ACTIVE) == 5, 'active counter in original append')
            if rdx == ITEM:
                self.events.append(('append', rcx, rdx, self.word(ITEM + 0x40), self.word(ITEM + 0x8c)))
            else:
                key = struct.unpack('<Q', vm.mem_read(rdx, 8))[0]
                name = bytes(vm.mem_read(key, 20)).split(b'\0', 1)[0].decode('ascii')
                self.events.append(('generated', rcx, name, self.word(rdx + 0x40), self.word(rdx + 0x8c)))
                if self.word(THREAD_MARKER) == 42:
                    require(self.generated_list in (None, rcx), 'consistent generated list')
                    self.generated_list = rcx
            value = 0
        elif address == ORIGINAL_ADD:
            require(self.word(ACTIVE) == 5, 'active counter in original add')
            if self.container_object is not None:
                require((rcx, rdx) == (CONTAINER, self.container_object), 'generated container insertion')
            self.events.append(('add', rcx))
            value = 0
        elif address == THREAD:
            value = 42
        elif address == MEMSET:
            vm.mem_write(rcx, bytes([rdx & 0xff]) * r8)
            value = rcx
        elif address == FORMAT:
            fmt = bytes(vm.mem_read(r8, 15)).split(b'\0', 1)[0]
            require(rdx == 0x20 and ((fmt == b'g_vColor%d' and r9 < 4) or
                                    (fmt == b'g_vColorTint%d' and 1 <= r9 <= 8)), 'format arguments')
            text = (fmt.decode('ascii') % r9).encode('ascii')
            vm.mem_write(rcx, text + b'\0')
            value = len(text)
        elif address == INITIALIZE:
            require(r8 == 0, 'initializer argument')
            vm.mem_write(rcx, u64(rdx))
            value = 0
        elif address == BUILD:
            require(bytes(vm.mem_read(rdx, 16)) == b'instance_params\0', 'container name')
            require(self.word(THREAD_MARKER) == 42 and self.word(ARMED, 1) == 0, 'native creation guard')
            require(self.generated_list is not None and r8 == self.generated_list, 'generated container list')
            self.container_object = rcx
            self.events.append(('build',))
            value = 0
        elif address in (DESTROY_CONTAINER, DESTROY_VECTOR):
            require(rcx == (self.container_object if address == DESTROY_CONTAINER else self.generated_list),
                    'generated object cleanup')
            self.events.append(('destroy-container' if address == DESTROY_CONTAINER else 'destroy-vector',))
            value = 0
        elif address == CREATE:
            require((rcx, rdx, r8) == (CONTAINER, ORIGINAL_APPEND, ORIGINAL_ADD), 'fallback creation arguments')
            require(bytes(vm.mem_read(r9, 32)) == b''.join(u32(x) for x in COLORS), 'fallback copied tints')
            require(self.word(THREAD_MARKER) == 42 and self.word(ARMED, 1) == 0, 'fallback guard while creating')
            self.events.append(('create',))
            value = self.create_result
        else:
            raise AssertionError(f'unexpected hook: {address:#x}')
        sp = vm.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', vm.mem_read(sp, 8))[0]
        vm.reg_write(UC_X86_REG_RAX, value)
        vm.reg_write(UC_X86_REG_RSP, sp + 8)
        vm.reg_write(UC_X86_REG_RIP, ret)

    def append(self, vector, name):
        self.vm.mem_write(NAME, name.encode('ascii') + b'\0')
        self.vm.mem_write(ITEM + 0x40, u32(0xaaaaaaaa))
        self.vm.mem_write(ITEM + 0x8c, u32(0xbbbbbbbb))
        self.vm.reg_write(UC_X86_REG_RDX, ITEM)
        self.call(APPEND_WRAPPER, vector)
        require(self.word(ACTIVE) == 4, 'unbalanced append counter')

    def add(self):
        self.call(ADD_WRAPPER, CONTAINER)
        require(self.word(ACTIVE) == 4, 'unbalanced add counter')


def verify(pe):
    h = WrapperHarness(pe)
    h.call(ARM_GLOVES, INPUT)
    h.append(VECTOR, 'g_vColorTint3')
    require(h.events == [('append', VECTOR, ITEM, 9, COLORS[2])] and h.word(MASK) == 4 and h.word(COUNT) == 11,
            'append sees modified item')
    h = WrapperHarness(pe)
    h.call(ARM_GLOVES, INPUT)
    h.append(0, 'g_vColorTint3')
    require(h.events == [('append', 0, ITEM, 0xaaaaaaaa, 0xbbbbbbbb)] and h.word(MASK) == 0, 'null vector forwards')
    h = WrapperHarness(pe)
    h.call(ARM_GLOVES, INPUT)
    h.append(VECTOR, 'g_vColorTint9')
    require(h.events == [('append', VECTOR, ITEM, 0xaaaaaaaa, 0xbbbbbbbb)] and h.word(MASK) == 0, 'unmatched item forwards')
    h = WrapperHarness(pe)
    h.call(ARM_OTHER, INPUT)
    h.vm.mem_write(VECTOR, u32(0))
    h.append(VECTOR, 'g_vColor2')
    expected = [('generated', VECTOR, f'g_vColor{i}', 9, COLORS[i]) for i in range(4)]
    expected.append(('append', VECTOR, ITEM, 9, COLORS[2]))
    require(h.events == expected and h.word(APPLIED, 1) == 1 and h.word(COUNT) == 12, 'four-color insertion before incoming append')
    h = WrapperHarness(pe)
    h.call(ARM_GLOVES, INPUT)
    h.add()
    require(h.events == [('add', CONTAINER), ('create',)] and h.word(MASK) == 0xff and h.word(COUNT) == 11 and
            h.word(APPLIED, 1) == 1 and h.word(RECORDED, 1) == 1 and h.word(THREAD_MARKER) == 0, 'successful add fallback')
    h = WrapperHarness(pe, native_create=True)
    h.call(ARM_GLOVES, INPUT)
    h.add()
    generated = h.events[1:9]
    require(h.events[0] == ('add', CONTAINER) and len(generated) == 8 and
            len({entry[1] for entry in generated}) == 1 and
            [(entry[0], *entry[2:]) for entry in generated] ==
            [('generated', f'g_vColorTint{i + 1}', 9, COLORS[i]) for i in range(8)] and
            h.events[9:] == [('build',), ('add', CONTAINER), ('destroy-container',), ('destroy-vector',)] and
            h.word(MASK) == 0xff and h.word(COUNT) == 11 and h.word(ARMED, 1) == 0 and
            h.word(APPLIED, 1) == 1 and h.word(RECORDED, 1) == 1 and h.word(THREAD_MARKER) == 0 and
            bytes(h.vm.mem_read(VALUES, 32)) == b''.join(u32(x) for x in COLORS) and
            h.call(CONSUMED, INPUT) == 1, 'native eight-tint construction and consumption')
    h = WrapperHarness(pe, create_result=0)
    h.call(ARM_GLOVES, INPUT)
    h.add()
    require(h.events == [('add', CONTAINER), ('create',)] and h.word(ARMED, 1) == 0 and h.word(MASK) == 0 and
            h.word(COUNT) == 10 and h.word(THREAD_MARKER) == 0, 'failed add fallback')
    h = WrapperHarness(pe)
    h.call(ARM_GLOVES, INPUT)
    h.vm.mem_write(THREAD_MARKER, u32(42))
    h.add()
    require(h.events == [('add', CONTAINER)] and h.word(ARMED, 1) == 1 and h.word(MASK) == 0, 'same-thread suppression')
    h = WrapperHarness(pe, missing_dependency=True)
    h.call(ARM_GLOVES, INPUT)
    h.add()
    require(h.events == [('add', CONTAINER)] and h.word(ARMED, 1) == 1 and h.word(MASK) == 0, 'missing dependency')
    return 9


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    print(f'PASS: {verify(pefile.PE(data=data))} synthetic composite-wrapper scenarios; engine callbacks stubbed')


if __name__ == '__main__':
    main()
