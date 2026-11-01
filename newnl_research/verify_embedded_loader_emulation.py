#!/usr/bin/env python3
"""Exercise the embedded-helper loader's branches in isolated Unicorn VMs.

All Windows APIs, file operations, dynamic module loading and returned profile
function are stubbed. The helper DLL is never loaded or executed, and no real
files or network are accessed. Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64
from inspect_embedded_profile import LOADER_DATA_VA, SIZE, EXPECTED_SHA256

ENTRY, CACHE = 0x181253D40, 0x1812223F0
KERNEL, FILE, MODULE, PROFILE = 0x101, 0x202, 0x303, STUB + 0x900
TEMP_DIR, TEMP_FILE = 'C:\\TEMP\\', 'C:\\TEMP\\nls1234.tmp'
NAMES = ('module', 'proc', 'create', 'write', 'close', 'load', 'path', 'temp', 'delete')
STUBS = {name: STUB + 0x200 + n * 0x40 for n, name in enumerate(NAMES)}


class LoaderVM:
    def __init__(self, pe, *, kernel=True, missing=None, path_length=None, temp_success=True,
                 create_success=True, write_success=True, write_length=SIZE, close_success=True,
                 load_success=True, delete_success=True):
        self.vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
        self.vm.mem_map(0x181253000, 0x1b000)
        self.vm.mem_write(0x181253000, pe.get_data(0x181253000 - IMAGE_BASE, 0x1b000))
        for page, length in ((0x181222000, 0x1000), (0x18056B000, 0x1000), (STACK, 0x10000), (STUB, 0x1000)):
            self.vm.mem_map(page, length)
        for address in tuple(STUBS.values()) + (STOP, PROFILE):
            self.vm.mem_write(address, b'\xc3')
        for slot, name in ((0x18056B180, 'module'), (0x18056B1B0, 'proc'),
                           (0x18056B148, 'create'), (0x18056B0C0, 'write'),
                           (0x18056B208, 'close'), (0x18056B260, 'load')):
            self.vm.mem_write(slot, u64(STUBS[name]))
        self.kernel, self.missing, self.path_length = kernel, missing, path_length
        self.temp_success, self.create_success = temp_success, create_success
        self.write_success, self.write_length, self.close_success = write_success, write_length, close_success
        self.load_success, self.delete_success = load_success, delete_success
        self.events = []
        for address in STUBS.values():
            self.vm.hook_add(unicorn.UC_HOOK_CODE, self.intercept, begin=address, end=address)

    def string(self, address, *, wide=False):
        stride = 2 if wide else 1
        chars = bytearray()
        for _ in range(260):
            part = bytes(self.vm.mem_read(address, stride))
            if part == bytes(stride):
                return chars.decode('utf-16le' if wide else 'ascii')
            chars.extend(part)
            address += stride
        raise AssertionError('unterminated synthetic string')

    def ret(self, value):
        sp = self.vm.reg_read(UC_X86_REG_RSP)
        target = struct.unpack('<Q', self.vm.mem_read(sp, 8))[0]
        self.vm.reg_write(UC_X86_REG_RAX, value & 0xffffffffffffffff)
        self.vm.reg_write(UC_X86_REG_RSP, sp + 8)
        self.vm.reg_write(UC_X86_REG_RIP, target)

    def intercept(self, vm, address, _size, _context):
        rcx, rdx, r8, r9 = (vm.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == STUBS['module']:
            require(self.string(rcx).lower() == 'kernel32.dll', 'module lookup')
            self.events.append('module')
            self.ret(KERNEL if self.kernel else 0)
        elif address == STUBS['proc']:
            name = self.string(rdx)
            self.events.append('proc:' + name)
            if rcx == KERNEL:
                choices = {'GetTempPathW': STUBS['path'], 'GetTempFileNameW': STUBS['temp'], 'DeleteFileW': STUBS['delete']}
                require(name in choices, f'unexpected kernel export {name}')
                self.ret(0 if self.missing == name else choices[name])
            else:
                require(rcx == MODULE and name == 'get_steam_profile', 'helper export lookup')
                self.ret(0 if self.missing == name else PROFILE)
        elif address == STUBS['path']:
            require(rcx == 260, 'GetTempPathW capacity')
            vm.mem_write(rdx, (TEMP_DIR + '\0').encode('utf-16le'))
            self.events.append('path')
            self.ret(len(TEMP_DIR) if self.path_length is None else self.path_length)
        elif address == STUBS['temp']:
            require(self.string(rcx, wide=True) == TEMP_DIR and self.string(rdx, wide=True) == 'nls' and r8 == 0,
                    'GetTempFileNameW arguments')
            self.events.append('temp')
            if self.temp_success:
                vm.mem_write(r9, (TEMP_FILE + '\0').encode('utf-16le'))
            self.ret(1 if self.temp_success else 0)
        elif address == STUBS['create']:
            sp = vm.reg_read(UC_X86_REG_RSP)
            creation, attributes, template = struct.unpack('<QQQ', vm.mem_read(sp + 0x28, 24))
            require(self.string(rcx, wide=True) == TEMP_FILE and rdx == 0x40000000 and r8 == 5 and r9 == 0 and
                    (creation, attributes, template) == (2, 0x80, 0), 'CreateFileW arguments')
            self.events.append('create')
            self.ret(FILE if self.create_success else 0xffffffffffffffff)
        elif address == STUBS['write']:
            require(rcx == FILE and rdx == LOADER_DATA_VA and r8 == SIZE, 'WriteFile arguments')
            require(hashlib.sha256(vm.mem_read(rdx, r8)).hexdigest() == EXPECTED_SHA256, 'payload bytes')
            require(struct.unpack('<Q', vm.mem_read(vm.reg_read(UC_X86_REG_RSP) + 0x28, 8))[0] == 0, 'overlapped write')
            vm.mem_write(r9, u32(self.write_length))
            self.events.append('write')
            self.ret(int(self.write_success))
        elif address == STUBS['close']:
            require(rcx == FILE, 'CloseHandle argument')
            self.events.append('close')
            self.ret(int(self.close_success))
        elif address == STUBS['load']:
            require(self.string(rcx, wide=True) == TEMP_FILE, 'LoadLibraryW path')
            self.events.append('load')
            self.ret(MODULE if self.load_success else 0)
        elif address == STUBS['delete']:
            require(self.string(rcx, wide=True) == TEMP_FILE, 'DeleteFileW path')
            self.events.append('delete')
            self.ret(int(self.delete_success))

    def run(self):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.reg_write(UC_X86_REG_RSP, sp)
        try:
            self.vm.emu_start(ENTRY, STOP, count=100000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP, 'loader did not return')
        return self.vm.reg_read(UC_X86_REG_RAX)


def verify(pe):
    n = 0
    m = LoaderVM(pe)
    require(m.run() == PROFILE, 'successful lookup')
    expected = ['module', 'proc:GetTempPathW', 'path', 'proc:GetTempFileNameW', 'temp',
                'proc:DeleteFileW', 'create', 'write', 'close', 'load', 'delete', 'proc:get_steam_profile']
    require(m.events == expected, 'success ordering')
    events = list(m.events)
    m.kernel = False
    require(m.run() == PROFILE and m.events == events, 'successful pointer cached')
    n += 1
    for kwargs in ({'kernel': False}, {'missing': 'GetTempPathW'}, {'path_length': 0},
                   {'path_length': 260}, {'missing': 'GetTempFileNameW'}, {'temp_success': False}):
        m = LoaderVM(pe, **kwargs)
        require(m.run() == 0 and 'create' not in m.events and 'delete' not in m.events,
                f'early failure {kwargs}')
        n += 1
    m = LoaderVM(pe, missing='DeleteFileW')
    require(m.run() == PROFILE and 'delete' not in m.events and 'load' in m.events, 'optional deletion unavailable')
    n += 1
    m = LoaderVM(pe, create_success=False)
    require(m.run() == 0 and m.events[-2:] == ['create', 'delete'], 'creation failure cleanup attempt')
    n += 1
    for kwargs in ({'write_success': False}, {'write_length': SIZE - 1}):
        m = LoaderVM(pe, **kwargs)
        require(m.run() == 0 and m.events[-3:] == ['write', 'close', 'delete'] and 'load' not in m.events,
                f'write failure cleanup {kwargs}')
        n += 1
    m = LoaderVM(pe, load_success=False)
    require(m.run() == 0 and m.events[-2:] == ['load', 'delete'], 'load failure deletion attempt')
    n += 1
    m = LoaderVM(pe, missing='get_steam_profile')
    require(m.run() == 0 and m.events[-2:] == ['delete', 'proc:get_steam_profile'], 'missing helper export')
    count = len(m.events)
    require(m.run() == 0 and len(m.events) > count, 'missing export not cached')
    n += 1
    m = LoaderVM(pe, delete_success=False)
    require(m.run() == PROFILE and m.events[-2:] == ['delete', 'proc:get_steam_profile'], 'delete failure ignored')
    n += 1
    m = LoaderVM(pe, close_success=False)
    require(m.run() == PROFILE and 'load' in m.events, 'close failure ignored')
    n += 1
    return n


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, 'unexpected image base')
    print(f'PASS: {verify(pe)} synthetic loader scenarios; all Windows and file APIs stubbed')


if __name__ == '__main__':
    main()
