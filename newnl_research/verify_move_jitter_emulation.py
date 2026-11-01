#!/usr/bin/env python3
"""Exercise the sample's move callback with synthetic state in Unicorn.

The original callback and clock are stubbed. No game or network is invoked.
Requires pefile and unicorn; does not model concurrent access.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64

ORIGINAL, CLOCK = STUB + 0x200, STUB + 0x300
CONTEXT = 0x12345678


class MoveVM:
    def __init__(self, pe, *, enabled=True, gate=True, hold=3, maximum=4, threshold=-1, seed=0):
        self.vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
        code = (0x1801CA000, 0x1805A2000)
        data = (0x18056B000, 0x180920000, 0x1809EB000, 0x1809EE000, 0x180CC3000, 0x180CD1000)
        for page in code + data:
            self.vm.mem_map(page, 0x1000)
        for page in code:
            self.vm.mem_write(page, pe.get_data(page - IMAGE_BASE, 0x1000))
        self.vm.mem_map(STUB, 0x1000)
        self.vm.mem_map(STACK, 0x10000)
        for address in (ORIGINAL, CLOCK, STOP):
            self.vm.mem_write(address, b'\xc3')
        self.vm.mem_write(0x180CD1A08, u64(ORIGINAL))
        self.vm.mem_write(0x18056B188, u64(CLOCK))
        self.vm.mem_write(0x180920F3C, bytes([enabled]))
        self.vm.mem_write(0x180CC3E78, bytes([gate]))
        self.vm.mem_write(0x180920F40, u32(hold))
        self.vm.mem_write(0x1809EBFBC, u32(maximum))
        self.vm.mem_write(0x1809EE460, u32(threshold))
        self.vm.mem_write(0x1809EE3BC, u32(seed))
        self.calls = 0
        self.clock_calls = 0
        self.now = 1
        self.vm.hook_add(unicorn.UC_HOOK_CODE, self.intercept)

    def ret(self, value):
        sp = self.vm.reg_read(UC_X86_REG_RSP)
        target = struct.unpack('<Q', self.vm.mem_read(sp, 8))[0]
        self.vm.reg_write(UC_X86_REG_RAX, value)
        self.vm.reg_write(UC_X86_REG_RSP, sp + 8)
        self.vm.reg_write(UC_X86_REG_RIP, target)

    def intercept(self, vm, address, _size, _context):
        if address == CLOCK:
            self.clock_calls += 1
            self.ret(self.now)
        elif address == ORIGINAL:
            require(vm.reg_read(UC_X86_REG_RCX) == CONTEXT, 'original context differs')
            self.calls += 1
            self.ret(0x6789)

    def get32(self, address):
        return struct.unpack('<I', self.vm.mem_read(address, 4))[0]

    def run(self):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.reg_write(UC_X86_REG_RSP, sp)
        self.vm.reg_write(UC_X86_REG_RCX, CONTEXT)
        try:
            self.vm.emu_start(0x1801CA4B0, STOP, count=100000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP, 'callback did not return')
        require(self.get32(0x180CD1AA0) == 0, 'in-flight count not restored')


def verify(pe):
    n = 0
    m = MoveVM(pe, enabled=False, threshold=2)
    m.vm.mem_write(0x180CC3E7B, b'\x01')
    m.vm.mem_write(0x180CD1B28, u32(9))
    m.run()
    require(m.calls == 1 and m.clock_calls == 0 and m.get32(0x1809EE460) == 0xffffffff
            and m.get32(0x180CD1B28) == 0 and m.vm.mem_read(0x180CC3E7B, 1) == b'\x00',
            'disabled path forwards and resets state')
    n += 1
    m = MoveVM(pe, gate=False)
    m.run()
    require(m.calls == 1 and m.clock_calls == 0, 'unavailable gate forwards')
    n += 1
    m = MoveVM(pe)
    for expected in (1, 2, 3):
        m.run()
        require(m.calls == 0 and m.get32(0x180CD1B28) == expected, 'initial skip count')
    m.run()
    require(m.calls == 1 and m.clock_calls == 1 and m.get32(0x180CD1B28) == 0,
            'initial send at threshold')
    require(m.get32(0x1809EE3BC) == 270369 and m.get32(0x1809EE460) == 1,
            'xorshift state and modulo 4')
    m.run()
    require(m.calls == 1 and m.get32(0x180CD1B28) == 1, 'new threshold applied')
    m.run()
    require(m.calls == 2, 'subsequent threshold reached')
    n += 1
    m = MoveVM(pe, threshold=0)
    m.run()
    require(m.calls == 1 and m.clock_calls == 1, 'zero threshold sends immediately')
    n += 1
    m = MoveVM(pe, hold=-5, maximum=10)
    m.run()
    require(m.calls == 0 and m.get32(0x180CD1B28) == 1, 'lower hold clamp skips once')
    m.run()
    require(m.calls == 1, 'lower hold clamp forwards second call')
    n += 1
    m = MoveVM(pe, hold=99, maximum=20)
    for _ in range(6):
        m.run()
    require(m.calls == 0 and m.get32(0x180CD1B28) == 6, 'upper hold clamp skips six')
    m.run()
    require(m.calls == 1, 'upper hold clamp forwards seventh call')
    n += 1
    m = MoveVM(pe, hold=6, maximum=3)
    m.run()
    m.run()
    require(m.calls == 0 and m.get32(0x180CD1B28) == 2, 'maximum caps threshold')
    m.run()
    require(m.calls == 1, 'maximum cap sends third call')
    n += 1
    m = MoveVM(pe, hold=6, maximum=0)
    m.run()
    m.run()
    require(m.calls == 1, 'maximum below two clamps threshold to one')
    n += 1
    m = MoveVM(pe, hold=3, threshold=10)
    for _ in range(3):
        m.run()
    m.run()
    require(m.calls == 1, 'existing threshold capped by current bound')
    n += 1
    m = MoveVM(pe)
    m.run()
    m.vm.mem_write(0x180CC3E7B, b'\x01')
    m.run()
    require(m.calls == 1 and m.get32(0x180CD1B28) == 0
            and m.vm.mem_read(0x180CC3E7B, 1) == b'\x00', 'override forces forward and is consumed')
    n += 1
    return n


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, 'unexpected image base')
    print(f'PASS: {verify(pe)} synthetic move-jitter scenarios; original callback and clock stubbed')


if __name__ == '__main__':
    main()
