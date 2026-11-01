#!/usr/bin/env python3
"""Exercise the sample's console-channel filter in isolated Unicorn VMs.

Original sample instructions operate on synthetic channel state. Logging APIs,
module lookup and the original log_flags callback are stubbed; no DLL or game
is loaded. The saved-record vector is preallocated. Requires `pefile`/`unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX,
    UC_X86_REG_RIP, UC_X86_REG_RSP,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64,
)

GET_COUNT, GET_FLAGS, SET_FLAGS, FIND, ORIGINAL, GET_MODULE, GET_PROC = (
    STUB + 0x200, STUB + 0x300, STUB + 0x400, STUB + 0x500,
    STUB + 0x600, STUB + 0x700, STUB + 0x800,
)
CALLBACK = 0x2000100
VTABLE = 0x2000200
VECTOR = 0x2001000


class FilterVM:
    def __init__(self, pe, flags, *, find_index=0, find_available=True, preloaded=True,
                 module_available=True, missing_export=None):
        self.flags = list(flags)
        self.count = len(flags)
        self.find_index = find_index
        self.module_available = module_available
        self.missing_export = missing_export
        self.events = []
        self.original_action = None
        self.vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
        originals = (0x18026F000, 0x180271000, 0x1806E9000, 0x1806FF000,
                     0x18073D000, 0x18073E000)
        blank = (0x180CFA000, 0x180920000, 0x18056B000, 0x1802B2000)
        for address in originals + blank:
            self.vm.mem_map(address, 0x1000)
        self.vm.mem_map(0x2000000, 0x3000)
        self.vm.mem_map(STUB, 0x1000)
        self.vm.mem_map(STACK, 0x10000)
        for address in originals:
            self.vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
        for address in (GET_COUNT, GET_FLAGS, SET_FLAGS, FIND, ORIGINAL, GET_MODULE,
                        GET_PROC, STOP, 0x1802B2560):
            self.vm.mem_write(address, b"\xc3")
        self.vm.mem_write(0x18056B180, u64(GET_MODULE))
        self.vm.mem_write(0x18056B1B0, u64(GET_PROC))
        self.vm.mem_write(0x180CFAD30, u64(VECTOR))
        self.vm.mem_write(0x180CFAD38, u64(VECTOR))
        self.vm.mem_write(0x180CFAD40, u64(VECTOR + 0x1000))
        self.vm.mem_write(CALLBACK, u64(VTABLE))
        self.vm.mem_write(VTABLE, u64(ORIGINAL))
        self.vm.mem_write(0x180CFA7D8, u64(CALLBACK))
        if preloaded:
            self.vm.mem_write(0x180CFAD00, b"\x01")
            self.vm.mem_write(0x180CFAD08, u64(GET_COUNT))
            self.vm.mem_write(0x180CFAD10, u64(GET_FLAGS))
            self.vm.mem_write(0x180CFAD18, u64(SET_FLAGS))
            self.vm.mem_write(0x180CFAD20, u64(FIND if find_available else 0))
        self.vm.hook_add(unicorn.UC_HOOK_CODE, self.intercept)

    def string(self, address):
        data = bytearray()
        for index in range(128):
            byte = self.vm.mem_read(address + index, 1)[0]
            if not byte:
                return bytes(data)
            data.append(byte)
        raise AssertionError("unterminated synthetic string")

    def ret(self, result):
        sp = self.vm.reg_read(UC_X86_REG_RSP)
        target = struct.unpack("<Q", self.vm.mem_read(sp, 8))[0]
        self.vm.reg_write(UC_X86_REG_RAX, result & 0xFFFFFFFFFFFFFFFF)
        self.vm.reg_write(UC_X86_REG_RSP, sp + 8)
        self.vm.reg_write(UC_X86_REG_RIP, target)

    def intercept(self, machine, address, _size, _context):
        if address == GET_COUNT:
            self.events.append(("count", self.count))
            self.ret(self.count)
        elif address == GET_FLAGS:
            index = machine.reg_read(UC_X86_REG_RCX) & 0xFFFFFFFF
            require(index < len(self.flags), f"unexpected channel index {index}")
            self.events.append(("get", index, self.flags[index]))
            self.ret(self.flags[index])
        elif address == SET_FLAGS:
            index = machine.reg_read(UC_X86_REG_RCX) & 0xFFFFFFFF
            flags = machine.reg_read(UC_X86_REG_RDX) & 0xFFFFFFFF
            require(index < len(self.flags), f"unexpected channel index {index}")
            self.events.append(("set", index, flags))
            self.flags[index] = flags
            self.ret(0)
        elif address == FIND:
            require(self.string(machine.reg_read(UC_X86_REG_RCX)) == b"neverlose", "wrong channel name")
            self.events.append(("find", self.find_index))
            self.ret(self.find_index)
        elif address == ORIGINAL:
            require(machine.reg_read(UC_X86_REG_RCX) == CALLBACK, "wrong callback object")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x1234, "wrong callback argument 2")
            require(machine.reg_read(UC_X86_REG_R8) == 0x5678, "wrong callback argument 3")
            self.events.append(("original", tuple(self.flags)))
            if self.original_action is not None:
                self.original_action(self.flags)
            self.ret(0)
        elif address == GET_MODULE:
            require(self.string(machine.reg_read(UC_X86_REG_RCX)) == b"tier0.dll", "wrong module")
            self.events.append(("module", self.module_available))
            self.ret(0x2222 if self.module_available else 0)
        elif address == GET_PROC:
            require(machine.reg_read(UC_X86_REG_RCX) == 0x2222, "wrong module handle")
            name = self.string(machine.reg_read(UC_X86_REG_RDX))
            self.events.append(("proc", name))
            exports = {b"LoggingSystem_GetChannelCount": GET_COUNT,
                       b"LoggingSystem_GetChannelFlags": GET_FLAGS,
                       b"LoggingSystem_SetChannelFlags": SET_FLAGS,
                       b"LoggingSystem_FindChannel": FIND}
            require(name in exports, f"unknown synthetic export {name!r}")
            self.ret(0 if name == self.missing_export else exports[name])
        elif address == 0x1802B2560:
            self.ret(0)

    def option(self, value):
        self.vm.mem_write(0x180920E19, bytes([value]))

    def run(self, entry):
        sp = STACK_POINTER + 8
        self.vm.mem_write(sp, u64(STOP))
        self.vm.reg_write(UC_X86_REG_RSP, sp)
        self.vm.reg_write(UC_X86_REG_RCX, 0x1111)
        self.vm.reg_write(UC_X86_REG_RDX, 0x1234)
        self.vm.reg_write(UC_X86_REG_R8, 0x5678)
        try:
            self.vm.emu_start(entry, STOP, count=100000)
        except unicorn.UcError as error:
            raise RuntimeError(f"emulation failed at {self.vm.reg_read(UC_X86_REG_RIP):#x}") from error
        require(self.vm.reg_read(UC_X86_REG_RIP) == STOP, "filter function did not return")
        return self.vm.reg_read(UC_X86_REG_RAX) & 0xFF

    def state(self):
        end = struct.unpack("<Q", self.vm.mem_read(0x180CFAD38, 8))[0]
        require(VECTOR <= end <= VECTOR + 0x1000 and (end - VECTOR) % 8 == 0, "bad snapshot end")
        records = [struct.unpack("<II", self.vm.mem_read(address, 8)) for address in range(VECTOR, end, 8)]
        cursor = struct.unpack("<I", self.vm.mem_read(0x180CFAD28, 4))[0]
        active = self.vm.mem_read(0x180CFAD2C, 1)[0]
        return cursor, active, records


def verify(pe):
    scenarios = 0
    m = FilterVM(pe, [0x10, 0x22, 0x40], find_index=2)
    m.option(True)
    m.run(0x18026F610)
    require(m.flags == [0x12, 0x22, 0x40], "initial filtering")
    require(m.state() == (3, 1, [(0, 0), (1, 1), (2, 0)]), "initial snapshots")
    m.flags[0] |= 0x80
    m.option(False)
    m.run(0x18026F610)
    require(m.flags == [0x90, 0x22, 0x40] and m.state() == (0, 0, []), "restoration")
    scenarios += 1

    m = FilterVM(pe, [0, 0, 0x40], find_index=0)
    m.count = 2
    m.option(True)
    m.run(0x18026F610)
    m.events.clear()
    m.count = 3
    m.run(0x18026F610)
    require(m.flags == [0, 2, 0x42] and m.state() == (3, 1, [(0, 0), (1, 0), (2, 0)]), "new channel")
    require([e[1] for e in m.events if e[0] == "get"] == [2], "old channels rescanned")
    scenarios += 1

    m = FilterVM(pe, [0, 0], find_index=0)
    m.option(True)
    m.run(0x18026F610)
    m.count = 1
    m.run(0x18026F610)
    m.flags[1] = 0x40
    m.count = 2
    m.events.clear()
    m.run(0x18026F610)
    require(m.flags[1] == 0x40 and m.state()[0] == 2, "unexpected cursor behavior after shrink")
    require(not any(e[0] == "get" for e in m.events), "reappearing index was rescanned")
    scenarios += 1

    for options in ({"find_available": False}, {"find_index": -1}):
        m = FilterVM(pe, [0, 0], **options)
        m.option(True)
        m.run(0x18026F610)
        require(m.flags == [2, 2], "missing channel lookup should exempt no synthetic indices")
        scenarios += 1

    m = FilterVM(pe, [0, 0], find_index=1)
    m.option(True)
    m.run(0x18026F610)
    m.original_action = lambda flags: flags.__setitem__(slice(None), [2, 0x10])
    m.events.clear()
    m.run(0x18026F710)
    require(("original", (0, 0)) in m.events, "original callback did not see restored flags")
    require(m.flags == [2, 0x10] and m.state()[2] == [(0, 1), (1, 0)], "wrapper rebaseline")
    m.option(False)
    m.run(0x18026F610)
    require(m.flags == [2, 0x10], "restoration ignored callback changes")
    scenarios += 1

    m = FilterVM(pe, [0], find_index=-1)
    m.option(True)
    m.run(0x18026F610)
    m.flags[0] = 0
    m.events.clear()
    m.run(0x18026F610)
    require(m.flags == [0] and not any(e[0] == "get" for e in m.events), "existing index was rescanned")
    scenarios += 1

    m = FilterVM(pe, [0], preloaded=False, module_available=False)
    m.option(True)
    m.run(0x18026F610)
    m.module_available = True
    m.run(0x18026F610)
    require([e[0] for e in m.events] == ["module"] and m.flags == [0], "failed module lookup retried")
    scenarios += 1

    m = FilterVM(pe, [0], preloaded=False, missing_export=b"LoggingSystem_GetChannelFlags")
    m.option(True)
    m.run(0x18026F610)
    m.missing_export = None
    m.run(0x18026F610)
    require(sum(e[0] == "proc" for e in m.events) == 4 and m.flags == [0], "missing export was retried")
    scenarios += 1

    m = FilterVM(pe, [0], find_index=-1)
    m.option(True)
    m.run(0x18026F610)
    m.vm.mem_write(0x180CFAD10, u64(0))
    m.option(False)
    m.run(0x18026F610)
    require(m.flags == [2] and m.state()[1] == 1, "unavailable API unexpectedly restored flags")
    m.vm.mem_write(0x180CFAD10, u64(GET_FLAGS))
    m.run(0x18026F610)
    require(m.flags == [0] and m.state() == (0, 0, []), "restoration after API recovery")
    scenarios += 1
    return scenarios


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("dll", nargs="?", type=Path,
                        default=Path(__file__).resolve().parent.parent / "newnl.dll")
    args = parser.parse_args()
    data = args.dll.read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, "DLL SHA-256 does not match")
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, "Unexpected PE image base")
    count = verify(pe)
    print(f"PASS: {count} synthetic console-filter scenarios; logging APIs and callback stubbed")


if __name__ == "__main__":
    main()
