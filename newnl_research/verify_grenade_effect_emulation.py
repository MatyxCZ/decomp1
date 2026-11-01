#!/usr/bin/env python3
"""Exercise grenade-event thunks and particle setup in isolated Unicorn VMs.

Original sample instructions run against synthetic state. Game/particle helpers
and the stack-cookie check are stubbed; no game, DLL loader or particle is run.
Requires the Python packages `pefile` and `unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX,
    UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP, UC_X86_REG_XMM0,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u64,
)

THUNKS = (0x180386F20, 0x180386F30, 0x180386F40, 0x180386F50, 0x180386F60)
EVENT = 0x2000100
CONTEXT_SLOT = 0x2000200
MANAGER_SLOT = 0x2000300
CONTEXT = 0x2000400
MANAGER = 0x2000500
COORDINATES = (1.25, -2.5, 3.75)
PER_TYPE_COLOR = (0.25, 0.5, 0.75)
SHARED_COLOR = (0.125, 0.25, 0.5)
RESOURCE = b"particles/neverlose/grenade_effect.vpcf"


def execute(pe, index, *, enabled_index=None, effect=True, resource=True,
            context=True, in_game=True, manager=True, shared=False,
            create=True, position=True, bind=True, color=True):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    originals = (0x180386000, 0x18000F000, 0x1808AC000, 0x1808AD000,
                 0x1806D2000, 0x180897000)
    stubs = (0x180273000, 0x1803A1000, 0x180206000, 0x1804EC000)
    data_pages = (0x180919000, 0x18095D000, 0x180CD1000, 0x180961000, 0x180962000)
    for address in originals + stubs + data_pages:
        vm.mem_map(address, 0x1000)
    vm.mem_map(0x2000000, 0x1000)
    vm.mem_map(STUB, 0x1000)
    vm.mem_map(STACK, 0x10000)
    for address in originals:
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    for address in (0x180273CC0, 0x1803A10A0, 0x180206480, 0x1802064E0, 0x1804ECA80):
        vm.mem_write(address, b"\x90")
    vm.mem_write(0x18095D210, bytes([effect]))
    vm.mem_write(0x180CD110D, bytes([resource]))
    enabled_index = index if enabled_index is None else enabled_index
    vm.mem_write(0x18095D224 + enabled_index, b"\x01")
    vm.mem_write(0x18095D27C + index, bytes([shared]))
    vm.mem_write(0x18095D214, struct.pack("<fff", *SHARED_COLOR))
    vm.mem_write(0x18095D22C + index * 0x10, struct.pack("<fff", *PER_TYPE_COLOR))
    vm.mem_write(0x180961A50, u64(CONTEXT_SLOT if context else 0))
    vm.mem_write(0x180962080, u64(MANAGER_SLOT if manager else 0))
    vm.mem_write(CONTEXT_SLOT, u64(CONTEXT))
    vm.mem_write(MANAGER_SLOT, u64(MANAGER))
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, sp)
    vm.reg_write(UC_X86_REG_RCX, EVENT)
    calls = []
    control_values = []

    def return_from(machine, value):
        current_sp = machine.reg_read(UC_X86_REG_RSP)
        target = struct.unpack("<Q", machine.mem_read(current_sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, value & 0xFFFFFFFFFFFFFFFF)
        machine.reg_write(UC_X86_REG_RSP, current_sp + 8)
        machine.reg_write(UC_X86_REG_RIP, target)

    def intercept(machine, address, _size, _context):
        if address == 0x1803A10A0:
            calls.append("in_game")
            return_from(machine, int(in_game))
        elif address == 0x180273CC0:
            require(machine.reg_read(UC_X86_REG_RCX) == EVENT, "wrong event pointer")
            field = machine.reg_read(UC_X86_REG_RDX)
            require(field in (0x1806D23E4, 0x1806D23E8, 0x1806D23EC), "wrong field pointer")
            field_index = (field - 0x1806D23E4) // 4
            calls.append("xyz"[field_index])
            value = struct.unpack("<I", struct.pack("<f", COORDINATES[field_index]))[0]
            machine.reg_write(UC_X86_REG_XMM0, value)
            return_from(machine, 0)
        elif address == 0x180386AD0:
            calls.append("create")
            require(machine.reg_read(UC_X86_REG_RCX) == MANAGER, "wrong particle manager")
            ptr = machine.reg_read(UC_X86_REG_RDX)
            require(bytes(machine.mem_read(ptr, len(RESOURCE) + 1)) == RESOURCE + b"\0", "wrong resource")
            require(machine.reg_read(UC_X86_REG_R8) == 0, "wrong creation option")
            return_from(machine, 42 if create else 0xFFFFFFFF)
        elif address == 0x180206480:
            require(machine.reg_read(UC_X86_REG_RCX) == MANAGER, "wrong control manager")
            require(machine.reg_read(UC_X86_REG_RDX) & 0xFFFFFFFF == 42, "wrong particle id")
            slot = machine.reg_read(UC_X86_REG_R8) & 0xFFFFFFFF
            require(slot in (0, 1), "unexpected control slot")
            values = struct.unpack("<fff", machine.mem_read(machine.reg_read(UC_X86_REG_R9), 12))
            control_values.append((slot, values))
            calls.append("position" if slot == 0 else "color")
            return_from(machine, int(position if slot == 0 else color))
        elif address == 0x180386B30:
            calls.append("bind")
            require(machine.reg_read(UC_X86_REG_RCX) == MANAGER, "wrong bind manager")
            require(machine.reg_read(UC_X86_REG_RDX) & 0xFFFFFFFF == 42, "wrong bind id")
            origin = struct.unpack("<fff", machine.mem_read(machine.reg_read(UC_X86_REG_R9), 12))
            require(origin == COORDINATES, "wrong bind origin")
            return_from(machine, int(bind))
        elif address == 0x1802064E0:
            calls.append("cleanup")
            require(machine.reg_read(UC_X86_REG_RCX) == MANAGER, "wrong cleanup manager")
            require(machine.reg_read(UC_X86_REG_RDX) & 0xFFFFFFFF == 42, "wrong cleanup id")
            return_from(machine, 0)
        elif address == 0x1804ECA80:
            return_from(machine, 0)  # Security cookie is outside this exercise.

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(THUNKS[index], STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "callback did not return")
    return calls, control_values


def verify(pe):
    success = ["in_game", "x", "y", "z", "create", "position", "bind", "color"]
    total = 0
    for index in range(5):
        calls, controls = execute(pe, index)
        require(calls == success, f"thunk {index}: wrong sequence {calls}")
        expected_color = tuple(value * 255.0 for value in PER_TYPE_COLOR)
        require(controls == [(0, COORDINATES), (1, expected_color)], f"thunk {index}: wrong controls")
        calls, controls = execute(pe, index, enabled_index=(index + 1) % 5)
        require(calls == [] and controls == [], f"thunk {index}: wrong type gate")
        total += 2
    calls, controls = execute(pe, 2, shared=True)
    require(calls == success and controls[1] == (1, tuple(value * 255.0 for value in SHARED_COLOR)),
            "shared color selection failed")
    total += 1
    cases = (
        ("effects disabled", {"effect": False}, []),
        ("resource unavailable", {"resource": False}, []),
        ("context unavailable", {"context": False}, []),
        ("not in game", {"in_game": False}, ["in_game"]),
        ("manager unavailable", {"manager": False}, ["in_game"]),
        ("creation failed", {"create": False}, success[:5]),
        ("position failed", {"position": False}, success[:6] + ["cleanup"]),
        ("bind failed", {"bind": False}, success[:7] + ["cleanup"]),
        ("color failed", {"color": False}, success + ["cleanup"]),
    )
    for name, options, expected in cases:
        calls, _ = execute(pe, 0, **options)
        require(calls == expected, f"{name}: expected {expected}, got {calls}")
    return total + len(cases)


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
    print(f"PASS: {count} synthetic grenade-effect scenarios; game/particle helpers stubbed")


if __name__ == "__main__":
    main()
