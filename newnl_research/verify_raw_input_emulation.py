#!/usr/bin/env python3
"""Exercise two callbacks from the identified PE in an isolated Unicorn VM.

The original Windows APIs are stubbed; no DLL loader or Windows API is invoked.
Requires the Python packages `pefile` and `unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_EAX,
    UC_X86_REG_R8,
    UC_X86_REG_R9,
    UC_X86_REG_RAX,
    UC_X86_REG_RCX,
    UC_X86_REG_RDX,
    UC_X86_REG_RIP,
    UC_X86_REG_RSP,
)

SAMPLE_SHA256 = "03c8ab74b4318cf17c87be8b39f4d868dba4ee1aa45d60fe38ab781a54b3eb57"
IMAGE_BASE = 0x180000000
CODE = 0x1801CD000
STUB = 0x3000000
OUTPUT = 0x2000000
STACK = 0x4000000
STACK_POINTER = STACK + 0xF000
STOP = STUB + 0x100
GLOBALS = {
    "menu": 0x18091A190,
    "override": 0x180CA1BDC,
    "counter": 0x180CD1AA0,
    "original_data": 0x180CD1E70,
    "original_buffer": 0x180CD1B68,
    "normal_x": 0x1809F3CB8,
    "normal_y": 0x1809F3CBC,
    "normal_extra": 0x180CFE888,
    "override_x": 0x180CCFB44,
    "override_y": 0x180CCFBB0,
}
ACCUMULATORS = ("normal_x", "normal_y", "normal_extra", "override_x", "override_y")
INITIAL_FIELDS = [0x1234, 0xDEADBEEF, 0xAABBCCDD, 11, 0xFFFFFFF9]


def u32(value):
    return struct.pack("<I", value & 0xFFFFFFFF)


def u64(value):
    return struct.pack("<Q", value & 0xFFFFFFFFFFFFFFFF)


def require(condition, message):
    if not condition:
        raise AssertionError(message)


def execute(pe, kind, menu, override, result, *, command=0x10000003,
            record_types=(0,), null_output=False, change_menu=False):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    regions = [(CODE, 0x1000), (STUB, 0x1000), (OUTPUT, 0x2000), (STACK, 0x10000)]
    regions += [(page, 0x1000) for page in sorted({value & ~0xFFF for value in GLOBALS.values()})]
    for address, size in regions:
        vm.mem_map(address, size)
    vm.mem_write(CODE, pe.get_data(CODE - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90")
    vm.mem_write(STOP, b"\x90")
    vm.mem_write(GLOBALS["menu"], bytes([menu]))
    vm.mem_write(GLOBALS["override"], bytes([override]))
    vm.mem_write(GLOBALS["original_data"], u64(STUB))
    vm.mem_write(GLOBALS["original_buffer"], u64(STUB))
    vm.mem_write(STACK_POINTER, u64(STOP))
    vm.mem_write(STACK_POINTER + 0x28, u32(24))

    # Each synthetic record has a 0x31-byte size and starts on an 8-byte boundary.
    offsets = [index * 0x38 for index in range(len(record_types))]
    for offset, record_type in zip(offsets, record_types):
        vm.mem_write(OUTPUT + offset, u32(record_type) + u32(0x31))
        vm.mem_write(OUTPUT + offset + 0x18, b"".join(u32(x) for x in INITIAL_FIELDS))

    pointer = 0 if null_output else OUTPUT
    if kind == "data":
        arguments = {UC_X86_REG_RCX: 0x4444, UC_X86_REG_RDX: command,
                     UC_X86_REG_R8: pointer, UC_X86_REG_R9: 0x5555}
        entry = 0x1801CD6D0
        change_at = 0x1801CD731
    else:
        arguments = {UC_X86_REG_RCX: pointer, UC_X86_REG_RDX: 0x5555,
                     UC_X86_REG_R8: 24}
        entry = 0x1801CD790
        change_at = 0x1801CD7E6
    for register, value in arguments.items():
        vm.reg_write(register, value)
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER)

    calls = 0
    changed = False

    def intercept(machine, address, _size, _context):
        nonlocal calls, changed
        if change_menu and address == change_at and not changed:
            machine.mem_write(GLOBALS["menu"], b"\x01")
            changed = True
        if address != STUB:
            return
        calls += 1
        for register, value in arguments.items():
            require(machine.reg_read(register) == value, f"{kind}: original argument changed")
        stack_pointer = machine.reg_read(UC_X86_REG_RSP)
        if kind == "data":
            fifth = struct.unpack("<I", machine.mem_read(stack_pointer + 0x28, 4))[0]
            require(fifth == 24, "data: original fifth argument changed")
        return_address = struct.unpack("<Q", machine.mem_read(stack_pointer, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, result & 0xFFFFFFFF)
        machine.reg_write(UC_X86_REG_RSP, stack_pointer + 8)
        machine.reg_write(UC_X86_REG_RIP, return_address)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(entry, STOP, count=5000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, f"{kind}: instruction limit or unexpected exit")
    require(calls == 1, f"{kind}: expected one original call, got {calls}")
    require(vm.reg_read(UC_X86_REG_EAX) == result & 0xFFFFFFFF, f"{kind}: return changed")
    require(struct.unpack("<I", vm.mem_read(GLOBALS["counter"], 4))[0] == 0,
            f"{kind}: callback counter did not balance")
    require(not change_menu or changed, f"{kind}: flag-change point was not reached")

    fields = [
        [struct.unpack("<I", vm.mem_read(OUTPUT + offset + pos, 4))[0]
         for pos in (0x18, 0x1C, 0x20, 0x24, 0x28)]
        for offset in offsets
    ]
    accumulators = {
        name: struct.unpack("<I", vm.mem_read(GLOBALS[name], 4))[0]
        for name in ACCUMULATORS
    }
    return fields, accumulators


def verify(pe):
    zero = dict.fromkeys(ACCUMULATORS, 0)
    cleared = [0x1234, 0, 0, 0, 0]
    motion_cleared = [0x1234, 0xDEADBEEF, 0xAABBCCDD, 0, 0]
    count = 0
    for kind in ("data", "buffer"):
        for menu in (0, 1):
            for override in (0, 1):
                types = (0,) if kind == "data" else (0, 1, 0)
                result = 48 if kind == "data" else 3
                fields, accumulators = execute(pe, kind, menu, override, result, record_types=types)
                mice = 1 if kind == "data" else 2
                expected = zero.copy()
                if menu:
                    mouse_fields = cleared
                elif override:
                    mouse_fields = motion_cleared
                    expected.update(override_x=11 * mice, override_y=(-7 * mice) & 0xFFFFFFFF)
                else:
                    mouse_fields = INITIAL_FIELDS
                    expected.update(normal_x=11 * mice, normal_y=(-7 * mice) & 0xFFFFFFFF,
                                    normal_extra=11 * mice)
                require(fields == [mouse_fields if t == 0 else INITIAL_FIELDS for t in types],
                        f"{kind} menu={menu} override={override}: wrong record fields")
                require(accumulators == expected,
                        f"{kind} menu={menu} override={override}: wrong accumulators")
                count += 1
        for options in ({"result": -1}, {"result": 0, "null_output": True}):
            fields, accumulators = execute(pe, kind, 1, 1, **options)
            require(fields == [INITIAL_FIELDS] and accumulators == zero,
                    f"{kind}: error/null path changed data")
            count += 1
        if kind == "data":
            cases = ({"result": 48, "command": 0x10000005},
                     {"result": 48, "record_types": (1,)})
        else:
            cases = ({"result": 0},)
        for options in cases:
            fields, accumulators = execute(pe, kind, 1, 1, **options)
            require(fields == [INITIAL_FIELDS] and accumulators == zero,
                    f"{kind}: excluded record changed data")
            count += 1

    fields, accumulators = execute(pe, "data", 0, 1, 48, change_menu=True)
    expected = zero | {"normal_x": 11, "normal_y": 0xFFFFFFF9, "normal_extra": 11}
    require(fields == [INITIAL_FIELDS] and accumulators == expected,
            "data: changed-menu path differs from machine-code trace")
    count += 1
    fields, accumulators = execute(pe, "buffer", 0, 1, 1, change_menu=True)
    expected = zero | {"override_x": 11, "override_y": 0xFFFFFFF9}
    require(fields == [motion_cleared] and accumulators == expected,
            "buffer: changed-menu path differs from machine-code trace")
    count += 1
    return count


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
    print(f"PASS: {count} isolated callback scenarios; no Windows API or DLL loader invoked")


if __name__ == "__main__":
    main()
