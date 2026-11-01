#!/usr/bin/env python3
"""Exercise the embedded helper with synthetic Steam API results in Unicorn.

Maps the embedded PE by section RVA and stubs imported Windows/Steam APIs; no
DLL loader, Steam process, game, network, or real user data is accessed. Tests
synthetic avatars and caching, not concurrent execution or full Steam behavior.
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
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64
from inspect_embedded_profile import LOADER_DATA_VA, SIZE, EXPECTED_SHA256

BASE, BUFFER = 0x5000000, 0x2000000
MODULE, FRIENDS, USER, UTILS = 0x1001, 0x1002, 0x1003, 0x1004
NAME = BUFFER + 0x1000
WIN = {name: STUB + 0x200 + n * 0x20 for n, name in enumerate(('release', 'acquire', 'module', 'proc', 'copyname'))}
STEAM_NAMES = ('SteamAPI_SteamFriends_v018', 'SteamAPI_SteamUser_v023', 'SteamAPI_SteamUtils_v010',
               'SteamAPI_ISteamFriends_GetPersonaName', 'SteamAPI_ISteamUser_GetSteamID',
               'SteamAPI_ISteamFriends_GetMediumFriendAvatar', 'SteamAPI_ISteamUtils_GetImageSize',
               'SteamAPI_ISteamUtils_GetImageRGBA')
STEAM = {name: STUB + 0x400 + n * 0x20 for n, name in enumerate(STEAM_NAMES)}


class ProfileVM:
    def __init__(self, inner, *, module=True, avatar=True, width=4, height=4,
                 missing_export=None, size_success=True, rgba_success=True):
        self.vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
        self.vm.mem_map(BASE, inner.OPTIONAL_HEADER.SizeOfImage)
        self.vm.mem_write(BASE, inner.get_memory_mapped_image())
        self.vm.mem_map(BUFFER, 0x4000)
        self.vm.mem_map(STACK, 0x10000)
        self.vm.mem_map(STUB, 0x1000)
        for name, addr in WIN.items():
            slot = {'release': 0xf000, 'acquire': 0xf008, 'module': 0xf010,
                    'proc': 0xf018, 'copyname': 0xf020}[name]
            self.vm.mem_write(BASE + slot, u64(addr))
        for address in tuple(WIN.values()) + tuple(STEAM.values()) + (STOP,):
            self.vm.mem_write(address, b'\xc3')
        self.vm.mem_write(NAME, b'Synthetic Name\0')
        self.module, self.avatar, self.locked = module, avatar, False
        self.width, self.height = width, height
        self.missing_export, self.size_success, self.rgba_success = missing_export, size_success, rgba_success
        self.pixels = bytes(v for y in range(height) for x in range(width)
                            for v in (x & 0xff, y & 0xff, 100, 255))
        self.names = {value: name for name, value in STEAM.items()}
        self.calls = []
        for address in tuple(WIN.values()) + tuple(STEAM.values()):
            self.vm.hook_add(unicorn.UC_HOOK_CODE, self.intercept, begin=address, end=address)

    def cstring(self, addr, *, wide=False):
        stride = 2 if wide else 1
        data = bytearray()
        for _ in range(1024):
            part = bytes(self.vm.mem_read(addr, stride))
            if part == bytes(stride):
                return data.decode('utf-16le' if wide else 'ascii')
            data.extend(part)
            addr += stride
        raise AssertionError('unterminated synthetic string')

    def ret(self, value):
        sp = self.vm.reg_read(UC_X86_REG_RSP)
        target = struct.unpack('<Q', self.vm.mem_read(sp, 8))[0]
        self.vm.reg_write(UC_X86_REG_RAX, value & 0xffffffffffffffff)
        self.vm.reg_write(UC_X86_REG_RSP, sp + 8)
        self.vm.reg_write(UC_X86_REG_RIP, target)

    def intercept(self, vm, address, _size, _context):
        rcx, rdx, r8, r9 = (vm.reg_read(reg) for reg in (UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_R8, UC_X86_REG_R9))
        if address == WIN['acquire']:
            require(not self.locked, 'recursive synthetic lock')
            self.locked = True
            self.ret(0)
        elif address == WIN['release']:
            require(self.locked, 'unlock without lock')
            self.locked = False
            self.ret(0)
        elif address == WIN['module']:
            require(self.cstring(rcx, wide=True) == 'steam_api64.dll', 'unexpected module')
            self.calls.append('module')
            self.ret(MODULE if self.module else 0)
        elif address == WIN['proc']:
            name = self.cstring(rdx)
            require(rcx == MODULE and name in STEAM, f'unexpected API lookup {name}')
            self.ret(0 if name == self.missing_export else STEAM[name])
        elif address == WIN['copyname']:
            data = self.cstring(rdx).encode('ascii')[:max(0, r8 - 1)] + b'\0'
            vm.mem_write(rcx, data)
            self.ret(rcx)
        elif address in self.names:
            name = self.names[address]
            self.calls.append(name)
            if name == STEAM_NAMES[0]: self.ret(FRIENDS)
            elif name == STEAM_NAMES[1]: self.ret(USER)
            elif name == STEAM_NAMES[2]: self.ret(UTILS)
            elif name == STEAM_NAMES[3]:
                require(rcx == FRIENDS, 'persona friends argument')
                self.ret(NAME)
            elif name == STEAM_NAMES[4]:
                require(rcx == USER, 'Steam user argument')
                self.ret(0x1122334455667788)
            elif name == STEAM_NAMES[5]:
                require(rcx == FRIENDS and rdx == 0x1122334455667788, 'avatar arguments')
                self.ret(42 if self.avatar else 0)
            elif name == STEAM_NAMES[6]:
                require(rcx == UTILS and rdx == 42, 'image size arguments')
                vm.mem_write(r8, u32(self.width))
                vm.mem_write(r9, u32(self.height))
                self.ret(int(self.size_success))
            elif name == STEAM_NAMES[7]:
                require(rcx == UTILS and rdx == 42 and r9 == len(self.pixels), 'RGBA arguments')
                if self.rgba_success:
                    vm.mem_write(r8, self.pixels)
                self.ret(int(self.rgba_success))

    def run(self, *, null_name=False, null_image=False, null_size=False):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.mem_write(BUFFER, bytes(32))
        for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, 0 if null_name else BUFFER),
                           (UC_X86_REG_RDX, 0 if null_image else BUFFER + 8),
                           (UC_X86_REG_R8, 0 if null_size else BUFFER + 16)):
            self.vm.reg_write(reg, value)
        try:
            self.vm.emu_start(BASE + 0x10c0, STOP, count=200000000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP and not self.locked, 'export did not return')
        name = struct.unpack('<Q', self.vm.mem_read(BUFFER, 8))[0]
        image = struct.unpack('<Q', self.vm.mem_read(BUFFER + 8, 8))[0]
        size = struct.unpack('<I', self.vm.mem_read(BUFFER + 16, 4))[0]
        return self.vm.reg_read(UC_X86_REG_RAX) & 0xffffffff, name, image, size


def check_png(data, pixels, width=4, height=4):
    require(data[:8] == b'\x89PNG\r\n\x1a\n', 'PNG signature')
    chunks, pos = [], 8
    while pos < len(data):
        length = struct.unpack_from('>I', data, pos)[0]
        kind = data[pos + 4:pos + 8]
        payload = data[pos + 8:pos + 8 + length]
        require(len(payload) == length and pos + length + 12 <= len(data), 'truncated PNG chunk')
        crc = struct.unpack_from('>I', data, pos + 8 + length)[0]
        require(zlib.crc32(kind + payload) == crc, f'PNG CRC {kind!r}')
        chunks.append((kind, payload))
        pos += length + 12
    require(pos == len(data) and [x[0] for x in chunks] == [b'IHDR', b'IDAT', b'IEND'], 'PNG chunks')
    require(chunks[0][1] == struct.pack('>IIBBBBB', width, height, 8, 6, 0, 0, 0), 'PNG RGBA header')
    compressed = chunks[1][1]
    require(compressed[:2] == b'\x78\x01', 'zlib header')
    block_pos, blocks = 2, 0
    while True:
        require(block_pos + 5 <= len(compressed) - 4, 'truncated DEFLATE block')
        header = compressed[block_pos]
        require(header in (0, 1), 'expected byte-aligned stored block')
        length, inverse = struct.unpack_from('<HH', compressed, block_pos + 1)
        require((length ^ inverse) == 0xffff, 'stored block length complement')
        block_pos += 5 + length
        require(block_pos <= len(compressed) - 4, 'stored block exceeds IDAT')
        blocks += 1
        if header == 1:
            break
    require(block_pos == len(compressed) - 4, 'unexpected DEFLATE trailer')
    expected = bytearray()
    for y in range(height):
        expected.append(0)
        for x in range(width):
            pixel = bytearray(pixels[(y * width + x) * 4:(y * width + x + 1) * 4])
            dx, dy = 2*x + 1 - width, 2*y + 1 - height
            if height*height*dx*dx + width*width*dy*dy > height*height*width*width:
                pixel[3] = 0
            expected.extend(pixel)
    require(zlib.decompress(compressed) == bytes(expected), 'decoded PNG pixels')
    return blocks


def verify(inner):
    m = ProfileVM(inner)
    status, name, image, size = m.run()
    require(status == 3 and m.cstring(name) == 'Synthetic Name' and image and size, 'successful synthetic profile')
    png = bytes(m.vm.mem_read(image, size))
    check_png(png, m.pixels)
    calls = list(m.calls)
    m.avatar = False
    status2, name2, image2, size2 = m.run()
    require((status2, name2, image2, size2) == (status, name, image, size) and m.calls == calls,
            'successful result is cached')
    m = ProfileVM(inner, avatar=False)
    status, name, image, size = m.run()
    require(status == 1 and m.cstring(name) == 'Synthetic Name' and image == 0 and size == 0, 'name-only result')
    m.avatar = True
    status, name, image, size = m.run()
    require(status == 3 and image and size, 'name-only result can be retried')
    check_png(bytes(m.vm.mem_read(image, size)), m.pixels)
    m = ProfileVM(inner, module=False)
    require(m.run()[0] == 0, 'missing module')
    m = ProfileVM(inner)
    require(m.run(null_name=True)[0] == 0 and not m.calls, 'null output rejected')
    scenarios = 5
    for field in ('null_image', 'null_size'):
        m = ProfileVM(inner)
        require(m.run(**{field: True})[0] == 0 and not m.calls, f'{field} rejected')
        scenarios += 1
    m = ProfileVM(inner)
    m.vm.mem_write(NAME, b'\0')
    require(m.run()[0] == 0, 'empty persona rejected')
    scenarios += 1
    m = ProfileVM(inner, avatar=False)
    m.vm.mem_write(NAME, b'A' * 300 + b'\0')
    status, name, image, size = m.run()
    require(status == 1 and m.cstring(name) == 'A' * 255 and image == 0 and size == 0,
            'long ASCII persona is truncated to 255 bytes')
    scenarios += 1
    for width, height in ((1, 1), (256, 64), (64, 256), (256, 256)):
        m = ProfileVM(inner, width=width, height=height)
        status, name, image, size = m.run()
        require(status == 3 and m.cstring(name) == 'Synthetic Name' and image and size,
                f'image accepted at {width}x{height}')
        blocks = check_png(bytes(m.vm.mem_read(image, size)), m.pixels, width, height)
        require(blocks > 1 if (width * 4 + 1) * height > 65535 else blocks == 1,
                f'DEFLATE block boundary at {width}x{height}')
        scenarios += 1
    for width, height in ((0, 4), (4, 0), (257, 4), (4, 257)):
        m = ProfileVM(inner, width=width, height=height)
        status, name, image, size = m.run()
        require(status == 1 and m.cstring(name) == 'Synthetic Name' and image == 0 and size == 0,
                f'image rejected at {width}x{height}')
        require(STEAM_NAMES[7] not in m.calls, f'RGBA must not be requested for {width}x{height}')
        scenarios += 1
    for field in ('size_success', 'rgba_success'):
        m = ProfileVM(inner, **{field: False})
        status, name, image, size = m.run()
        require(status == 1 and m.cstring(name) == 'Synthetic Name' and image == 0 and size == 0,
                f'{field} failure returns name only')
        scenarios += 1
    for missing in STEAM_NAMES:
        m = ProfileVM(inner, missing_export=missing)
        require(m.run()[0] == 0, f'missing required export {missing}')
        require(m.calls == ['module'], f'interface called when export missing: {missing}')
        scenarios += 1
    return scenarios


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL hash mismatch')
    outer = pefile.PE(data=data)
    embedded = outer.get_data(LOADER_DATA_VA - IMAGE_BASE, SIZE)
    require(hashlib.sha256(embedded).hexdigest() == EXPECTED_SHA256, 'embedded DLL hash mismatch')
    print(f'PASS: {verify(pefile.PE(data=embedded))} synthetic profile scenarios; Steam and Windows APIs stubbed')


if __name__ == '__main__':
    main()
