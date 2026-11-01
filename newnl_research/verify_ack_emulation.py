#!/usr/bin/env python3
"""Exercise the sample's ACK callback with synthetic buffers and stubbed APIs.

No DLL loader, Windows API, game, or network is invoked. The original serializer
is modeled by a stub which supplies a chosen byte sequence and return pointer.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX,
                                UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP,
                                UC_X86_REG_RSP)
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64

ORIGINAL, CLOCK, ACQUIRE, RELEASE = (STUB + 0x200, STUB + 0x300, STUB + 0x400, STUB + 0x500)
BUFFER = 0x2000000
CONTEXT = 0x2001000


class AckVM:
    def __init__(self, pe, *, difference=10, enabled=True, timestamp=1000):
        self.vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
        code = (0x1801C9000, 0x180232000, 0x18053F000, 0x180637000, 0x1808AC000)
        data = (0x18056B000, 0x180919000, 0x1809F1000, 0x180CCF000, 0x180CD1000, 0x180CF8000)
        for address in code + data:
            self.vm.mem_map(address, 0x1000)
        for address in code:
            self.vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
        self.vm.mem_map(BUFFER, 0x2000)
        self.vm.mem_map(STACK, 0x10000)
        self.vm.mem_map(STUB, 0x1000)
        for address in (ORIGINAL, CLOCK, ACQUIRE, RELEASE, STOP):
            self.vm.mem_write(address, b'\xc3')
        for address, value in ((0x18056B188, CLOCK), (0x18056B198, ACQUIRE),
                               (0x18056B190, RELEASE), (0x180CD1AC8, ORIGINAL),
                               (0x180CF8F88, CONTEXT), (0x180CF8FA0, timestamp)):
            self.vm.mem_write(address, u64(value))
        self.vm.mem_write(0x180CCF78E, bytes([enabled]))
        self.vm.mem_write(0x180CCF83C, b'\x01')
        self.vm.mem_write(0x1809F1AEC, u32(7))
        self.vm.mem_write(0x180CF8F98, u32(7))
        self.vm.mem_write(0x1809F1AE8, u32(100))
        self.vm.mem_write(0x1809F1A0C, u32(105 + difference))
        self.now = timestamp
        self.payload = b''
        self.return_length = 5
        self.calls = 0
        self.locked = False
        self.vm.hook_add(unicorn.UC_HOOK_CODE, self.intercept)

    def ret(self, value):
        sp = self.vm.reg_read(UC_X86_REG_RSP)
        target = struct.unpack('<Q', self.vm.mem_read(sp, 8))[0]
        self.vm.reg_write(UC_X86_REG_RAX, value)
        self.vm.reg_write(UC_X86_REG_RSP, sp + 8)
        self.vm.reg_write(UC_X86_REG_RIP, target)

    def intercept(self, vm, address, _size, _context):
        if address == CLOCK:
            self.ret(self.now)
        elif address == ACQUIRE:
            require(not self.locked, 'recursive lock')
            self.locked = True
            self.ret(0)
        elif address == RELEASE:
            require(self.locked, 'unlock without lock')
            self.locked = False
            self.ret(0)
        elif address == ORIGINAL:
            require(self.locked, 'serializer called outside emulated lock')
            require(vm.reg_read(UC_X86_REG_RCX) == CONTEXT and vm.reg_read(UC_X86_REG_RDX) == 0x4444,
                    'serializer context arguments differ')
            require(vm.reg_read(UC_X86_REG_R8) == BUFFER, 'serializer buffer differs')
            self.calls += 1
            vm.mem_write(BUFFER, self.payload)
            self.ret(BUFFER + self.return_length)

    def run(self, payload, now, *, available=16, return_length=5):
        self.now, self.payload, self.return_length = now, payload, return_length
        self.vm.mem_write(BUFFER, b'\xcc' * 32)
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, CONTEXT),
                           (UC_X86_REG_RDX, 0x4444), (UC_X86_REG_R8, BUFFER),
                           (UC_X86_REG_R9, BUFFER + available)):
            self.vm.reg_write(reg, value)
        try:
            self.vm.emu_start(0x1801C9A20, STOP, count=100000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP and not self.locked, 'callback did not return cleanly')
        require(struct.unpack('<I', self.vm.mem_read(0x180CD1AA0, 4))[0] == 0, 'wrapper counter not restored')
        return self.vm.reg_read(UC_X86_REG_RAX), bytes(self.vm.mem_read(BUFFER, 5))


def verify(pe):
    scenarios = 0
    a, b, c = b'\x98\x11\x22\x33\x44', b'\x98\x55\x66\x77\x88', b'\x98\x99\xaa\xbb\xcc'
    m = AckVM(pe, difference=10)
    require(m.run(a, 1000) == (BUFFER, a) and m.calls == 1, 'first ACK snapshot')
    require(m.run(b, 1009) == (BUFFER, b'\xcc' * 5) and m.calls == 1, 'pre-deadline hold')
    require(m.run(b, 1010) == (BUFFER + 5, a) and m.calls == 2, 'deadline output')
    require(m.run(c, 1020) == (BUFFER + 5, b) and m.calls == 3, 'subsequent snapshot')
    scenarios += 1

    m = AckVM(pe, enabled=False)
    require(m.run(a, 1000) == (BUFFER + 5, a) and m.calls == 1, 'disabled passthrough')
    scenarios += 1
    m = AckVM(pe, difference=0)
    require(m.run(a, 1000) == (BUFFER + 5, a) and m.calls == 1, 'zero difference passthrough')
    scenarios += 1
    m = AckVM(pe)
    m.run(a, 1000)
    require(m.run(b, 1001, available=4) == (BUFFER + 5, b) and m.calls == 2, 'short buffer passthrough')
    require(m.vm.mem_read(0x180CCF78F, 1) == b'\x00', 'short buffer clears pending state')
    scenarios += 1
    m = AckVM(pe)
    m.run(a, 1000)
    require(m.run(b'\x99\x55\x66\x77\x88', 1010)[0] == BUFFER + 5, 'non-exact marker forwarded')
    require(m.vm.mem_read(0x180CCF78F, 1) == b'\x00', 'unexpected serialization clears pending')
    scenarios += 1
    m = AckVM(pe)
    require(m.run(a, 46000)[0] == BUFFER and m.calls == 1, '45 second boundary remains eligible')
    m = AckVM(pe)
    require(m.run(a, 46001)[0] == BUFFER + 5 and m.calls == 1, 'expired context passthrough')
    scenarios += 2
    m = AckVM(pe, difference=-1)
    result, out = m.run(b'\x99\x11\x22\x64\x00', 1000)
    require(result == BUFFER + 5 and out == b'\x99\x11\x22\x84\x00', 'negative difference adjustment')
    scenarios += 1
    m = AckVM(pe, difference=-1)
    require(m.run(b'\x98\x11\x22\xff\xff', 1000)[1] == b'\x98\x11\x22\xff\xff', 'sentinel preserved')
    scenarios += 1
    m = AckVM(pe, difference=-105)
    require(m.run(b'\x98\x11\x22\xf0\xff', 1000)[1] == b'\x98\x11\x22\xfe\xff', 'adjustment saturation')
    scenarios += 1
    m = AckVM(pe, difference=-1)
    require(m.run(b'\x97\x11\x22\x64\x00', 1000)[1] == b'\x97\x11\x22\x64\x00', 'marker range gate')
    scenarios += 1
    m = AckVM(pe, difference=2000)
    m.run(a, 1000)
    require(m.run(b, 1999)[0] == BUFFER and m.calls == 1, 'upper clamp before deadline')
    require(m.run(b, 2000) == (BUFFER + 5, a), 'upper clamp deadline')
    scenarios += 1
    m = AckVM(pe, difference=-1000)
    require(m.run(b'\x98\x11\x22\x64\x00', 1000)[1] == b'\x98\x11\x22\x36\x0d', 'lower clamp')
    scenarios += 1
    m = AckVM(pe)
    m.vm.mem_write(0x180CF8F98, u32(8))
    require(m.run(a, 1000) == (BUFFER + 5, a), 'generation mismatch passthrough')
    scenarios += 1
    m = AckVM(pe, difference=-1)
    require(m.run(b'\x98\x11\x22\x64\x00', 1000, return_length=4)[1] == b'\x98\x11\x22\x64\x00',
            'short serializer result is not adjusted')
    scenarios += 1
    return scenarios


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, 'unexpected image base')
    print(f'PASS: {verify(pe)} synthetic ACK scenarios; Windows APIs and serializer stubbed')


if __name__ == '__main__':
    main()
