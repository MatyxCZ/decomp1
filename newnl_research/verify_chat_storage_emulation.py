#!/usr/bin/env python3
"""Exercise SayText2 storage and bridge instructions in isolated Unicorn VMs.

Original instructions use synthetic messages and pointers. Allocation, freeing,
bounded length, memory copying and bridge methods are stubbed. No message is
delivered; no game or DLL is loaded. Requires `pefile` and `unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX,
    UC_X86_REG_RIP, UC_X86_REG_RSP,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u64,
)

MESSAGE = 0x2000000
SOURCE = 0x2010000
OBJECT = 0x2020100
OLD_BUFFER = 0x2021000
ALLOCATE = STUB + 0x200
FREE = STUB + 0x300
FIELD = 0x48


def execute(pe, data, *, existing=False, old_heap=False, arena=False, fail_allocation=0):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for address in (0x180270000, 0x180961000, 0x180512000, 0x180540000):
        vm.mem_map(address, 0x1000)
    vm.mem_map(MESSAGE, 0x1000)
    vm.mem_map(SOURCE, 0x3000)
    vm.mem_map(0x2020000, 0x10000)
    vm.mem_map(STUB, 0x1000)
    vm.mem_map(STACK, 0x10000)
    vm.mem_write(0x180270000, pe.get_data(0x270000, 0x1000))
    for address in (ALLOCATE, FREE, STOP, 0x180512AE0, 0x180540530):
        vm.mem_write(address, b"\xc3")
    vm.mem_write(0x180961B50, u64(ALLOCATE))
    vm.mem_write(0x180961B58, u64(FREE))
    vm.mem_write(SOURCE, data + b"\0")
    if arena:
        vm.mem_write(MESSAGE + 0x38, u64(0x2023000))
    if existing:
        vm.mem_write(MESSAGE + FIELD, u64(OBJECT | 2))
        if old_heap:
            vm.mem_write(OBJECT, u64(OLD_BUFFER) + b"\0" * 8 + u64(20) + u64(20))
            vm.mem_write(OLD_BUFFER, b"x" * 20 + b"\0")
        else:
            vm.mem_write(OBJECT, b"old\0".ljust(16, b"\0") + u64(3) + u64(15))
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, sp)
    vm.reg_write(UC_X86_REG_RCX, MESSAGE)
    vm.reg_write(UC_X86_REG_RDX, FIELD)
    vm.reg_write(UC_X86_REG_R8, SOURCE)
    allocations = []
    frees = []

    def ret(machine, result):
        current_sp = machine.reg_read(UC_X86_REG_RSP)
        target = struct.unpack("<Q", machine.mem_read(current_sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, result & 0xFFFFFFFFFFFFFFFF)
        machine.reg_write(UC_X86_REG_RSP, current_sp + 8)
        machine.reg_write(UC_X86_REG_RIP, target)

    def intercept(machine, address, _size, _context):
        if address == ALLOCATE:
            size = machine.reg_read(UC_X86_REG_RCX)
            allocations.append(size)
            pointer = 0 if len(allocations) == fail_allocation else 0x2024000 + (len(allocations) - 1) * 0x2000
            ret(machine, pointer)
        elif address == FREE:
            frees.append(machine.reg_read(UC_X86_REG_RCX))
            ret(machine, 0)
        elif address == 0x180512AE0:
            require(machine.reg_read(UC_X86_REG_RCX) == SOURCE, "wrong source")
            limit = machine.reg_read(UC_X86_REG_RDX)
            require(limit == 0xFFE, "wrong length bound")
            content = bytes(machine.mem_read(SOURCE, limit))
            end = content.find(b"\0")
            ret(machine, limit if end == -1 else end)
        elif address == 0x180540530:
            destination = machine.reg_read(UC_X86_REG_RCX)
            source = machine.reg_read(UC_X86_REG_RDX)
            size = machine.reg_read(UC_X86_REG_R8)
            if size:
                machine.mem_write(destination, bytes(machine.mem_read(source, size)))
            ret(machine, destination)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x180270080, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "storage helper did not return")
    result = vm.reg_read(UC_X86_REG_RAX) & 0xFF
    tagged = struct.unpack("<Q", vm.mem_read(MESSAGE + FIELD, 8))[0]
    if not tagged:
        return result, b"", None, allocations, frees
    obj = tagged & ~3
    length, capacity = struct.unpack("<QQ", vm.mem_read(obj + 0x10, 16))
    pointer = obj if capacity <= 15 else struct.unpack("<Q", vm.mem_read(obj, 8))[0]
    require(length <= 0xFFE, "invalid modeled string length")
    content = bytes(vm.mem_read(pointer, length + 1))
    require(content[-1] == 0, "string lacks terminator")
    return result, content[:-1], capacity, allocations, frees


def verify(pe):
    cases = (
        ("empty", b"", {}, (1, b"", 15, [32], [])),
        ("15-byte inline", b"a" * 15, {}, (1, b"a" * 15, 15, [32], [])),
        ("16-byte heap", b"b" * 16, {}, (1, b"b" * 16, 16, [32, 17], [])),
        ("4094-byte bound", b"c" * 4094, {}, (1, b"c" * 4094, 4094, [32, 4095], [])),
        ("truncation", b"d" * 4095, {}, (1, b"d" * 4094, 4094, [32, 4095], [])),
        ("embedded nul", b"one\0two", {}, (1, b"one", 15, [32], [])),
        ("structure allocation failure", b"a", {"fail_allocation": 1}, (0, b"", None, [32], [])),
        ("fresh buffer allocation failure", b"a" * 16, {"fail_allocation": 2}, (0, b"", 15, [32, 17], [])),
        ("arena without tagged field", b"a", {"arena": True}, (0, b"", None, [], [])),
        ("existing inline", b"new", {"existing": True}, (1, b"new", 15, [], [])),
        ("existing field with arena", b"new", {"existing": True, "arena": True}, (1, b"new", 15, [], [])),
        ("replace heap with inline", b"new", {"existing": True, "old_heap": True},
         (1, b"new", 15, [], [OLD_BUFFER])),
        ("heap allocation failure loses old value", b"a" * 16,
         {"existing": True, "old_heap": True, "fail_allocation": 1},
         (0, b"", 15, [17], [OLD_BUFFER])),
    )
    for name, data, options, expected in cases:
        actual = execute(pe, data, **options)
        require(actual == expected, f"{name}: unexpected result {actual[:1]} and metadata {actual[2:]}")
    return len(cases)


def execute_bridge(pe, *, created=True, matching_type=True, name=True, text=True,
                   failed_field=None, real_fields=False):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for address in (0x180270000, 0x180CFA000, 0x180961000, 0x180512000, 0x180540000):
        vm.mem_map(address, 0x1000)
    vm.mem_map(MESSAGE, 0x1000)
    vm.mem_map(0x2020000, 0x10000)
    vm.mem_map(STUB, 0x1000)
    vm.mem_map(STACK, 0x10000)
    vm.mem_write(0x180270000, pe.get_data(0x270000, 0x1000))
    create_stub, dispatch_stub, destroy_stub = STUB + 0x400, STUB + 0x500, STUB + 0x600
    for address in (create_stub, dispatch_stub, destroy_stub, STOP, ALLOCATE, FREE, 0x180512AE0, 0x180540530):
        vm.mem_write(address, b"\xc3")
    factory, factory_table = MESSAGE + 0x200, MESSAGE + 0x300
    message_table, other_table = MESSAGE + 0x400, MESSAGE + 0x500
    receiver, receiver_table = MESSAGE + 0x600, MESSAGE + 0x700
    template, name_ptr, text_ptr = MESSAGE + 0x800, MESSAGE + 0x900, MESSAGE + 0xA00
    strings = (b"#Cstrike_Chat_T_Loc", b"Alice", b"synthetic chat message")
    for pointer, value in zip((template, name_ptr, text_ptr), strings):
        vm.mem_write(pointer, value + b"\0")
    vm.mem_write(0x180961B50, u64(ALLOCATE))
    vm.mem_write(0x180961B58, u64(FREE))
    vm.mem_write(0x180CFA7B0, u64(factory))
    vm.mem_write(0x180CFA7B8, u64(message_table))
    vm.mem_write(factory, u64(factory_table))
    vm.mem_write(factory_table + 0x30, u64(create_stub))
    vm.mem_write(MESSAGE, u64(message_table if matching_type else other_table))
    vm.mem_write(message_table, u64(destroy_stub))
    vm.mem_write(other_table, u64(destroy_stub))
    vm.mem_write(receiver, u64(receiver_table))
    vm.mem_write(receiver_table + 0x60, u64(dispatch_stub))
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    vm.mem_write(sp + 0x28, u64(text_ptr if text else 0))
    vm.reg_write(UC_X86_REG_RSP, sp)
    vm.reg_write(UC_X86_REG_RCX, receiver)
    vm.reg_write(UC_X86_REG_RDX, 17)
    vm.reg_write(UC_X86_REG_R8, template)
    vm.reg_write(UC_X86_REG_R9, name_ptr if name else 0)
    calls = []
    allocated = []
    delivered = []

    def ret_bridge(machine, result):
        current_sp = machine.reg_read(UC_X86_REG_RSP)
        target = struct.unpack("<Q", machine.mem_read(current_sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, result)
        machine.reg_write(UC_X86_REG_RSP, current_sp + 8)
        machine.reg_write(UC_X86_REG_RIP, target)

    def intercept(machine, address, _size, _context):
        if address == create_stub:
            calls.append("create")
            require(machine.reg_read(UC_X86_REG_RCX) == factory, "wrong message factory")
            ret_bridge(machine, MESSAGE if created else 0)
        elif address == 0x180270080:
            field = machine.reg_read(UC_X86_REG_RDX)
            calls.append(field)
            require(machine.reg_read(UC_X86_REG_RCX) == MESSAGE, "wrong message object")
            require(field in (0x48, 0x50, 0x58), "unexpected message field")
            expected = {0x48: template, 0x50: name_ptr, 0x58: text_ptr}[field]
            require(machine.reg_read(UC_X86_REG_R8) == expected, "wrong bridge string pointer")
            if not real_fields:
                ret_bridge(machine, int(field != failed_field))
        elif address == dispatch_stub:
            calls.append("dispatch")
            require(machine.reg_read(UC_X86_REG_RCX) == receiver, "wrong receiver")
            require(machine.reg_read(UC_X86_REG_RDX) == MESSAGE, "wrong delivered object")
            if real_fields:
                for field in (0x48, 0x50, 0x58):
                    obj = struct.unpack("<Q", machine.mem_read(MESSAGE + field, 8))[0] & ~3
                    length, capacity = struct.unpack("<QQ", machine.mem_read(obj + 0x10, 16))
                    pointer = obj if capacity <= 15 else struct.unpack("<Q", machine.mem_read(obj, 8))[0]
                    delivered.append(bytes(machine.mem_read(pointer, length)))
            ret_bridge(machine, 0)
        elif address == destroy_stub:
            calls.append("destroy")
            require(machine.reg_read(UC_X86_REG_RCX) == MESSAGE, "wrong destroyed object")
            require(machine.reg_read(UC_X86_REG_RDX) == 1, "wrong destroy option")
            ret_bridge(machine, 0)
        elif address == ALLOCATE:
            allocated.append(machine.reg_read(UC_X86_REG_RCX))
            require(len(allocated) <= 8, "unexpected allocation count")
            ret_bridge(machine, 0x2020000 + len(allocated) * 0x1000)
        elif address == FREE:
            ret_bridge(machine, 0)
        elif address == 0x180512AE0:
            source = machine.reg_read(UC_X86_REG_RCX)
            limit = machine.reg_read(UC_X86_REG_RDX)
            require(limit == 0xFFE, "wrong string limit")
            length = 0
            while length < limit and machine.mem_read(source + length, 1)[0]:
                length += 1
            ret_bridge(machine, length)
        elif address == 0x180540530:
            dest = machine.reg_read(UC_X86_REG_RCX)
            source = machine.reg_read(UC_X86_REG_RDX)
            size = machine.reg_read(UC_X86_REG_R8)
            if size:
                machine.mem_write(dest, bytes(machine.mem_read(source, size)))
            ret_bridge(machine, dest)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x1802701A0, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "bridge did not return")
    result = vm.reg_read(UC_X86_REG_RAX) & 0xFFFFFFFF
    flags = vm.mem_read(MESSAGE + 0x40, 1)[0]
    return result, flags, calls, bytes(vm.mem_read(MESSAGE + 0x70, 8)), delivered


def verify_bridge(pe):
    cases = (
        ("factory failure", {"created": False}, (0, 0, ["create"])),
        ("wrong type", {"matching_type": False}, (0, 0, ["create", "destroy"])),
        ("template failure", {"failed_field": 0x48}, (0, 0xA1, ["create", 0x48, "destroy"])),
        ("name failure", {"failed_field": 0x50}, (0, 0xA3, ["create", 0x48, 0x50, "destroy"])),
        ("text failure", {"failed_field": 0x58}, (0, 0xA7, ["create", 0x48, 0x50, 0x58, "destroy"])),
        ("no optionals", {"name": False, "text": False}, (1, 0xA1, ["create", 0x48, "dispatch", "destroy"])),
        ("text only", {"name": False}, (1, 0xA5, ["create", 0x48, 0x58, "dispatch", "destroy"])),
        ("name only", {"text": False}, (1, 0xA3, ["create", 0x48, 0x50, "dispatch", "destroy"])),
        ("all fields", {}, (1, 0xA7, ["create", 0x48, 0x50, 0x58, "dispatch", "destroy"])),
    )
    for name, options, expected in cases:
        actual = execute_bridge(pe, **options)
        require(actual[:3] == expected, f"{name}: expected {expected}, got {actual[:3]}")
        if options.get("created", True) and options.get("matching_type", True):
            require(actual[3][0] == 1 and struct.unpack_from("<I", actual[3], 4)[0] == 17,
                    f"{name}: missing marker or sender ID")
    integrated = execute_bridge(pe, real_fields=True)
    require(integrated[:3] == (1, 0xA7, ["create", 0x48, 0x50, 0x58, "dispatch", "destroy"]),
            "integrated bridge did not dispatch all fields")
    require(integrated[4] == [b"#Cstrike_Chat_T_Loc", b"Alice", b"synthetic chat message"],
            "integrated bridge stored wrong strings")
    return len(cases) + 1


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("dll", nargs="?", type=Path,
                        default=Path(__file__).resolve().parent.parent / "newnl.dll")
    args = parser.parse_args()
    data = args.dll.read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, "DLL SHA-256 does not match")
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, "Unexpected PE image base")
    fields = verify(pe)
    bridges = verify_bridge(pe)
    print(f"PASS: {fields} string-storage and {bridges} bridge scenarios; helpers stubbed")


if __name__ == "__main__":
    main()
