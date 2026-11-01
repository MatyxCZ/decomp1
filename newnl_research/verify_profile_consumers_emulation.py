#!/usr/bin/env python3
"""Exercise outer profile-name and avatar consumers with synthetic inputs.

Executes original outer consumers and, where indicated, the embedded helper in
Unicorn. The temporary-file loader, Windows/Steam APIs and final sinks are
stubbed. No Windows loader, Steam process, game, network or real account runs.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
import zlib
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK_POINTER, STOP, STUB, require, u32, u64
from inspect_embedded_profile import LOADER_DATA_VA, SIZE, EXPECTED_SHA256
from verify_embedded_profile_emulation import BASE, BUFFER, ProfileVM, check_png

NAME_ENTRY, AVATAR_ENTRY = 0x1812222E1, 0x18122232F
LOADER, FORMATTER, SINK = 0x181222200, 0x1800136B0, 0x18039EF70
FAKE_PROFILE = STUB + 0x800
OBJECT, FALLBACK_KEY, FALLBACK_IMAGE = BUFFER + 0x200, BUFFER + 0x300, 0x1806F8FA0
FAKE_NAME, FAKE_IMAGE = BUFFER + 0x1800, BUFFER + 0x1900
RESULT = 0x12345678


class ConsumersVM(ProfileVM):
    def __init__(self, outer, inner, *, loader=True, fake_status=None, fake_name=b'Profile',
                 fake_image=True, fake_size=9, **kwargs):
        super().__init__(inner, **kwargs)
        for page in (0x181222000, 0x1801C8000, 0x1806D3000, 0x1811BC000):
            self.vm.mem_map(page, 0x1000)
            self.vm.mem_write(page, outer.get_data(page - IMAGE_BASE, 0x1000))
        for page in (0x180013000, 0x18039E000, 0x180CD1000):
            self.vm.mem_map(page, 0x1000)
        for address in (FORMATTER, SINK, FAKE_PROFILE):
            self.vm.mem_write(address, b'\xc3')
        self.vm.mem_write(FAKE_NAME, fake_name + b'\0')
        self.vm.mem_write(FAKE_IMAGE, b'synthetic')
        self.vm.mem_write(FALLBACK_KEY, b'avatar\0'.ljust(16, b'\0') + u64(6) + u64(15))
        self.loader = loader
        self.fake_status, self.fake_image, self.fake_size = fake_status, fake_image, fake_size
        self.formatted, self.sink = None, None
        for address in (LOADER, FORMATTER, SINK, FAKE_PROFILE):
            self.vm.hook_add(unicorn.UC_HOOK_CODE, self.intercept_outer, begin=address, end=address)

    def intercept_outer(self, vm, address, _size, _context):
        rcx, rdx, r8, r9 = (vm.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == LOADER:
            self.ret((FAKE_PROFILE if self.fake_status is not None else BASE + 0x10c0) if self.loader else 0)
        elif address == FAKE_PROFILE:
            vm.mem_write(rcx, u64(FAKE_NAME))
            vm.mem_write(rdx, u64(FAKE_IMAGE if self.fake_image else 0))
            vm.mem_write(r8, u32(self.fake_size))
            self.ret(self.fake_status)
        elif address == FORMATTER:
            require(rcx == 0x180CD18D0 and rdx == 0x100 and self.cstring(r8) == '%s', 'name formatter arguments')
            self.formatted = self.cstring(r9)
            self.ret(len(self.formatted))
        elif address == SINK:
            sp = vm.reg_read(UC_X86_REG_RSP)
            fifth, sixth = struct.unpack('<QQ', vm.mem_read(sp + 0x28, 16))
            key = self.cstring(rdx)
            self.sink = (rcx, key, r8, r9, fifth, sixth)
            self.ret(RESULT)

    def execute(self, entry):
        self.formatted, self.sink = None, None
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.mem_write(sp + 0x28, u64(160) + u64(160))
        for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, OBJECT),
                           (UC_X86_REG_RDX, FALLBACK_KEY), (UC_X86_REG_R8, FALLBACK_IMAGE),
                           (UC_X86_REG_R9, 0x475b)):
            self.vm.reg_write(reg, value)
        try:
            self.vm.emu_start(entry, STOP, count=200000000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP and not self.locked, 'outer consumer did not return')
        return self.vm.reg_read(UC_X86_REG_RAX)


def verify(outer, inner):
    n = 0
    m = ConsumersVM(outer, inner)
    m.execute(NAME_ENTRY)
    require(m.formatted == 'Synthetic Name', 'successful persona selected')
    n += 1
    m = ConsumersVM(outer, inner, avatar=False)
    m.execute(NAME_ENTRY)
    require(m.formatted == 'Synthetic Name', 'name-only result selected for display')
    n += 1
    for kwargs in ({'loader': False}, {'module': False}, {'fake_status': 0},
                   {'fake_status': 3, 'fake_name': b''}):
        m = ConsumersVM(outer, inner, **kwargs)
        m.execute(NAME_ENTRY)
        require(m.formatted == 'NettixDev', f'name fallback for {kwargs}')
        n += 1
    m = ConsumersVM(outer, inner, fake_status=2)
    m.execute(NAME_ENTRY)
    require(m.formatted == 'Profile', 'any nonzero synthetic status with name is accepted')
    n += 1

    m = ConsumersVM(outer, inner)
    result = m.execute(AVATAR_ENTRY)
    require(m.sink is not None and m.sink[:2] == (OBJECT, 'steam_avatar') and
            m.sink[2] != 0 and m.sink[3] > 0 and m.sink[4:] == (160, 160), 'avatar override')
    check_png(bytes(m.vm.mem_read(m.sink[2], m.sink[3])), m.pixels)
    require(result == RESULT, 'avatar wrapper returns sink result')
    n += 1
    for kwargs in ({'loader': False}, {'avatar': False}, {'fake_status': 0}, {'fake_status': 2},
                   {'fake_status': 3, 'fake_image': False}, {'fake_status': 3, 'fake_size': 0}):
        m = ConsumersVM(outer, inner, **kwargs)
        result = m.execute(AVATAR_ENTRY)
        require(m.sink == (OBJECT, 'avatar', FALLBACK_IMAGE, 0x475b, 160, 160) and result == RESULT,
                f'avatar fallback for {kwargs}')
        n += 1
    m = ConsumersVM(outer, inner, fake_status=3, fake_size=0xffffffff)
    m.execute(AVATAR_ENTRY)
    require(m.sink == (OBJECT, 'steam_avatar', FAKE_IMAGE, 0xffffffff, 160, 160),
            'nonzero 32-bit synthetic size is forwarded without a wrapper cap')
    n += 1
    return n


def verify_fallback_png(outer):
    data = outer.get_data(FALLBACK_IMAGE - IMAGE_BASE, 0x475b)
    require(len(data) == 0x475b and data[:8] == b'\x89PNG\r\n\x1a\n', 'fallback PNG header')
    pos, dimensions, idat, ended = 8, None, [], False
    while pos < len(data):
        require(pos + 12 <= len(data), 'truncated fallback PNG header')
        length = struct.unpack_from('>I', data, pos)[0]
        require(pos + length + 12 <= len(data), 'truncated fallback PNG chunk')
        kind = data[pos + 4:pos + 8]
        payload = data[pos + 8:pos + 8 + length]
        crc = struct.unpack_from('>I', data, pos + 8 + length)[0]
        require(zlib.crc32(kind + payload) == crc, 'fallback PNG chunk CRC')
        if kind == b'IHDR':
            require(dimensions is None and length == 13, 'unexpected fallback PNG IHDR')
            dimensions = struct.unpack('>IIBBBBB', payload)
        elif kind == b'IDAT':
            idat.append(payload)
        elif kind == b'IEND':
            require(length == 0, 'unexpected fallback PNG IEND')
            ended = True
        pos += length + 12
        if ended:
            break
    require(ended and pos == len(data) and dimensions == (96, 96, 8, 6, 0, 0, 0), 'fallback PNG dimensions')
    scanlines = zlib.decompress(b''.join(idat))
    require(len(scanlines) == 96 * (1 + 96 * 4), 'fallback PNG scanline size')
    require(all(scanlines[n * (1 + 96 * 4)] <= 4 for n in range(96)), 'fallback PNG filters')
    return hashlib.sha256(data).hexdigest()


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL hash mismatch')
    outer = pefile.PE(data=data)
    embedded = outer.get_data(LOADER_DATA_VA - IMAGE_BASE, SIZE)
    require(hashlib.sha256(embedded).hexdigest() == EXPECTED_SHA256, 'embedded DLL hash mismatch')
    count = verify(outer, pefile.PE(data=embedded))
    digest = verify_fallback_png(outer)
    print(f'PASS: {count} synthetic profile-consumer scenarios; loader and APIs stubbed')
    print(f'PASS: embedded 96x96 fallback PNG, 18267 bytes, SHA-256 {digest}')


if __name__ == '__main__':
    main()
