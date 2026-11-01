#!/usr/bin/env python3
"""Exercise the native page-range checker with synthetic VirtualQuery results.

The real checker and its cache instructions execute in Unicorn. VirtualQuery is
stubbed; queried addresses are numbers, not real process memory. No DLL or game
is loaded. Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, STOP, require, u32, u64

ENTRY, VQUERY_IAT, VQUERY = 0x1801d1c60, 0x18056b1c8, STUB + 0x200
CACHE, BASE = 0x180cd1e78, 0x2000000


class PageVM:
    def __init__(self, pe, regions=()):
        self.vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
        for page, size in ((0x1801d1000, 0x1000), (0x18056b000, 0x1000)):
            self.vm.mem_map(page, size)
            self.vm.mem_write(page, pe.get_data(page - IMAGE_BASE, size).ljust(size, b'\0'))
        for page, size in ((0x180cd1000, 0x11000), (STACK, 0x10000), (STUB, 0x1000)):
            self.vm.mem_map(page, size)
        self.vm.mem_write(VQUERY_IAT, u64(VQUERY))
        self.regions = list(regions)
        self.queries = []
        self.vm.hook_add(unicorn.UC_HOOK_CODE, self.query, begin=VQUERY, end=VQUERY)

    def query(self, machine, _address, _size, _context):
        address = machine.reg_read(UC_X86_REG_RCX)
        output = machine.reg_read(UC_X86_REG_RDX)
        require(machine.reg_read(UC_X86_REG_R8) == 0x30 and address & 0xfff == 0, 'VirtualQuery arguments')
        self.queries.append(address)
        value = 0
        for start, end, state, protection in self.regions:
            if start <= address < end:
                info = bytearray(0x30)
                struct.pack_into('<Q', info, 0, start)
                struct.pack_into('<Q', info, 0x18, end - start)
                struct.pack_into('<I', info, 0x20, state)
                struct.pack_into('<I', info, 0x24, protection)
                machine.mem_write(output, bytes(info))
                value = 0x30
                break
        sp = machine.reg_read(UC_X86_REG_RSP)
        ret = struct.unpack('<Q', machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, ret)

    def run(self, address, size):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.reg_write(UC_X86_REG_RSP, sp)
        self.vm.reg_write(UC_X86_REG_RCX, address)
        self.vm.reg_write(UC_X86_REG_RDX, size)
        try:
            self.vm.emu_start(ENTRY, STOP, count=100000)
        except unicorn.UcError as exc:
            raise RuntimeError(f'emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}') from exc
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP, 'page checker did not return')
        return self.vm.reg_read(UC_X86_REG_RAX) & 0xff

    def cached(self, address):
        page = address >> 12
        return struct.unpack('<Q', self.vm.mem_read(CACHE + (page & 0x1fff) * 8, 8))[0]


def verify(pe):
    count = 0
    vm = PageVM(pe)
    require(vm.run(0xffffffffffffffff, 0) == 1 and not vm.queries, 'zero-length range')
    require(vm.run(0xfffffffffffffff0, 0x20) == 0 and not vm.queries, 'address overflow')
    count += 2
    for protection, expected in ((1, 0), (2, 1), (4, 1), (8, 1), (0x10, 0), (0x20, 1),
                                 (0x40, 1), (0x80, 1), (0x102, 0)):
        vm = PageVM(pe, [(BASE, BASE + 0x1000, 0x1000, protection)])
        require(vm.run(BASE + 3, 5) == expected and vm.queries == [BASE], f'protection {protection:#x}')
        count += 1
    vm = PageVM(pe, [(BASE, BASE + 0x1000, 0x2000, 4)])
    require(vm.run(BASE, 1) == 0 and vm.queries == [BASE], 'uncommitted region')
    count += 1
    vm = PageVM(pe)
    require(vm.run(BASE, 1) == 0 and vm.queries == [BASE], 'query failure')
    vm.regions = [(BASE, BASE + 0x1000, 0x1000, 4)]
    require(vm.run(BASE, 1) == 1 and vm.queries == [BASE, BASE], 'failed query not cached')
    count += 1
    vm = PageVM(pe, [(BASE, BASE + 0x3000, 0x1000, 4)])
    require(vm.run(BASE + 0xfff, 0x1002) == 1 and vm.queries == [BASE], 'spanning committed region')
    require(all(vm.cached(BASE + i * 0x1000) == (BASE >> 12) + i + 1 for i in range(3)), 'page cache entries')
    count += 1
    vm.regions = [(BASE, BASE + 0x3000, 0x1000, 1)]
    require(vm.run(BASE + 0x1000, 1) == 1 and vm.queries == [BASE], 'cached result bypasses later query')
    count += 1
    vm = PageVM(pe, [(BASE, BASE + 0x1000, 0x1000, 4),
                     (BASE + 0x1000, BASE + 0x2000, 0x1000, 1)])
    require(vm.run(BASE + 0xfff, 2) == 0 and vm.queries == [BASE, BASE + 0x1000], 'second page rejected')
    vm.regions[1] = (BASE + 0x1000, BASE + 0x2000, 0x1000, 4)
    require(vm.run(BASE + 0xfff, 2) == 1 and vm.queries == [BASE, BASE + 0x1000, BASE + 0x1000], 'partial success cached')
    count += 1
    other = BASE + 0x2000000
    vm = PageVM(pe, [(BASE, BASE + 0x1000, 0x1000, 4), (other, other + 0x1000, 0x1000, 4)])
    require(vm.run(BASE, 1) == vm.run(other, 1) == vm.run(BASE, 1) == 1
            and vm.queries == [BASE, other, BASE], 'direct-map collision replaces entry')
    count += 1
    return count


def verify_backing(pe):
    start = CACHE - IMAGE_BASE
    end = start + 0x10000
    sections = [section for section in pe.sections
                if section.VirtualAddress <= start and end <= section.VirtualAddress + section.Misc_VirtualSize]
    require(len(sections) == 1, 'cache not contained in one virtual section')
    section = sections[0]
    require(section.Name.rstrip(b'\0') == b'.data'
            and start >= section.VirtualAddress + section.SizeOfRawData, 'cache is not in zero-filled section tail')
    for block in pe.DIRECTORY_ENTRY_BASERELOC:
        for entry in block.entries:
            require(entry.type in (0, 10), 'unexpected relocation type')
            if entry.type == 10:
                require(entry.rva + 8 <= start or entry.rva >= end, 'relocation overlaps cache')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    verify_backing(pe)
    print('PASS: cache range lies in virtual .data tail with no overlapping base relocations')
    print(f'PASS: {verify(pe)} synthetic page-check scenarios; VirtualQuery stubbed')


if __name__ == '__main__':
    main()
