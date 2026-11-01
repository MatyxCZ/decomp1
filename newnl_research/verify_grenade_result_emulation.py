#!/usr/bin/env python3
"""Exercise sample grenade-result matching in isolated Unicorn VMs.

The original callbacks and context readers run on synthetic state. Event access
is stubbed and diagnostic output is bypassed. No game or DLL loader is used.
Requires the Python packages `pefile` and `unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX,
    UC_X86_REG_RIP, UC_X86_REG_RSP, UC_X86_REG_XMM0,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64,
)

THUNKS = {"he": 0x180256490, "flash": 0x1802564B0, "fire": 0x1802564D0}
EVENT = 0x2000100
LOCAL = 0x2000200
CONTEXT_SLOT = 0x2000300
CONTEXT = 0x2000400
ACTIVE = 0x180CF9DE0
TYPE = 0x180CF9DE4
RELEASE_TIME = 0x180CF9DEC
RESOLVED = 0x180CF9E18


def execute(pe, kind, weapon, *, active=True, resolved=False, local=True,
            same_user=True, context=True, now=20.0, release=10.0, repeats=1):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    originals = (0x180256000, 0x18000F000, 0x1808AC000, 0x1806D2000)
    blank = (0x180CF9000, 0x180CD1000, 0x181108000, 0x180961000, 0x180273000)
    for address in originals + blank:
        vm.mem_map(address, 0x1000)
    vm.mem_map(0x2000000, 0x1000)
    vm.mem_map(STUB, 0x1000)
    vm.mem_map(STACK, 0x10000)
    for address in originals:
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    vm.mem_write(0x180273F90, b"\xc3")
    vm.mem_write(0x180273CC0, b"\xc3")
    vm.mem_write(ACTIVE, bytes([active]))
    vm.mem_write(RESOLVED, bytes([resolved]))
    vm.mem_write(TYPE, u32(weapon))
    vm.mem_write(RELEASE_TIME, struct.pack("<f", release))
    vm.mem_write(0x180CF9D68, u32(6000))  # Bypass diagnostics, not the result flag.
    vm.mem_write(0x180CD1304, b"\x01")
    vm.mem_write(0x181108A00, u64(LOCAL if local else 0))
    vm.mem_write(0x180961A50, u64(CONTEXT_SLOT if context else 0))
    vm.mem_write(CONTEXT_SLOT, u64(CONTEXT))
    vm.mem_write(CONTEXT + 0x30, struct.pack("<f", now))
    calls = []

    def intercept(machine, address, _size, _context):
        if address == 0x180273F90:
            calls.append("userid")
            require(machine.reg_read(UC_X86_REG_RCX) == EVENT, "wrong event")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x1806D23DC, "wrong userid field")
            result = LOCAL if same_user else LOCAL + 0x10
        elif address == 0x180273CC0:
            require(machine.reg_read(UC_X86_REG_RCX) == EVENT, "wrong event")
            field = machine.reg_read(UC_X86_REG_RDX)
            require(field in (0x1806D23E4, 0x1806D23E8, 0x1806D23EC), "wrong coordinate field")
            index = (field - 0x1806D23E4) // 4
            calls.append("xyz"[index])
            machine.reg_write(UC_X86_REG_XMM0, struct.unpack("<I", struct.pack("<f", float(index + 1)))[0])
            result = 0
        else:
            return
        sp = machine.reg_read(UC_X86_REG_RSP)
        target = struct.unpack("<Q", machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, result)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, target)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    for _ in range(repeats):
        sp = STACK_POINTER + 8
        vm.mem_write(sp, u64(STOP))
        vm.reg_write(UC_X86_REG_RSP, sp)
        vm.reg_write(UC_X86_REG_RCX, EVENT)
        try:
            vm.emu_start(THUNKS[kind], STOP, count=10000)
        except unicorn.UcError as error:
            raise RuntimeError(f"emulation failed at {vm.reg_read(UC_X86_REG_RIP):#x}") from error
        require(vm.reg_read(UC_X86_REG_RIP) == STOP, "callback did not return")
    return vm.mem_read(ACTIVE, 1)[0], vm.mem_read(RESOLVED, 1)[0], calls


def verify(pe):
    cases = (
        ("HE match", "he", 44, {}, (1, 1, ["userid", "x", "y", "z"])),
        ("flash match", "flash", 43, {}, (1, 1, ["userid", "x", "y", "z"])),
        ("molotov match", "fire", 46, {}, (1, 1, ["userid", "x", "y", "z"])),
        ("incendiary match", "fire", 48, {}, (1, 1, ["userid", "x", "y", "z"])),
        ("HE mismatch", "he", 43, {}, (1, 0, [])),
        ("flash mismatch", "flash", 44, {}, (1, 0, [])),
        ("fire mismatch", "fire", 47, {}, (1, 0, [])),
        ("inactive", "he", 44, {"active": False}, (0, 0, [])),
        ("already resolved", "he", 44, {"resolved": True}, (1, 1, [])),
        ("missing local", "he", 44, {"local": False}, (1, 0, [])),
        ("other user", "he", 44, {"same_user": False}, (1, 0, ["userid"])),
        ("exact 12 seconds", "he", 44, {"now": 22.0}, (1, 1, ["userid", "x", "y", "z"])),
        ("over 12 seconds", "he", 44, {"now": 22.01}, (0, 0, ["userid"])),
        ("negative elapsed", "he", 44, {"now": 9.0}, (1, 1, ["userid", "x", "y", "z"])),
        ("missing context", "he", 44, {"context": False, "release": 0.0},
         (1, 1, ["userid", "x", "y", "z"])),
        ("duplicate event", "he", 44, {"repeats": 2}, (1, 1, ["userid", "x", "y", "z"])),
    )
    for name, kind, weapon, options, expected in cases:
        result = execute(pe, kind, weapon, **options)
        require(result == expected, f"{name}: expected {expected}, got {result}")
    return len(cases)


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
    print(f"PASS: {count} synthetic grenade-result scenarios; event helpers stubbed")


if __name__ == "__main__":
    main()
