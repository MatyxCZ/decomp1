#!/usr/bin/env python3
"""Exercise the sample's listener registration and event dispatch in Unicorn.

Original machine code is executed with synthetic state and stubbed helpers.
No game, Windows API, DLL loader, or real event is used.
Requires the Python packages `pefile` and `unicorn`.
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
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u64,
)

CODE = 0x180273000
ENTRY = 0x180273AC0
RECORDS = 0x180CFB2C0
COUNT = 0x180CFC7C0
RECORD_SIZE = 0x38
CALLBACK_OFFSET = 0x28
CALLBACK_A = STUB + 0x200
CALLBACK_B = STUB + 0x300
EVENT = 0x123456789

MANAGER_SLOT = 0x1809620C0
CAPACITY_LOGGED = 0x181116110
RESOLVE = 0x18000F3A0
LOGGER = 0x1802B2560
MANAGER = 0x2000000
NAME = MANAGER + 0x100

def execute(pe, count, listener, callbacks):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for address, size in ((CODE, 0x1000), (0x180CFB000, 0x2000),
                          (STUB, 0x1000), (STACK, 0x10000)):
        vm.mem_map(address, size)
    vm.mem_write(CODE, pe.get_data(CODE - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    vm.mem_write(COUNT, u64(count))
    for index, callback in callbacks.items():
        vm.mem_write(RECORDS + index * RECORD_SIZE + CALLBACK_OFFSET, u64(callback))
    vm.mem_write(STACK_POINTER, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER)
    vm.reg_write(UC_X86_REG_RCX, listener)
    vm.reg_write(UC_X86_REG_RDX, EVENT)
    calls = []

    def intercept(machine, address, _size, _context):
        if address not in (CALLBACK_A, CALLBACK_B):
            return
        calls.append((address, machine.reg_read(UC_X86_REG_RCX)))
        sp = machine.reg_read(UC_X86_REG_RSP)
        return_address = struct.unpack("<Q", machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, 0xDEADBEEF)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, return_address)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(ENTRY, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "instruction limit or unexpected exit")
    return calls, vm.reg_read(UC_X86_REG_RAX)


def execute_registration(pe, count, *, name=NAME, callback=CALLBACK_A,
                         manager_present=True, resolved=True, accepted=True,
                         capacity_logged=False):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for address, size in ((CODE, 0x1000), (0x180CFB000, 0x2000),
                          (0x180962000, 0x1000), (0x181116000, 0x1000),
                          (0x18000F000, 0x1000), (0x1802B2000, 0x1000),
                          (MANAGER, 0x1000), (STUB, 0x1000), (STACK, 0x10000)):
        vm.mem_map(address, size)
    vm.mem_write(CODE, pe.get_data(CODE - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    vm.mem_write(RESOLVE, b"\x90")
    vm.mem_write(LOGGER, b"\x90")
    vm.mem_write(COUNT, u64(count))
    vm.mem_write(MANAGER_SLOT, u64(MANAGER if manager_present else 0))
    vm.mem_write(CAPACITY_LOGGED, bytes([capacity_logged]))
    vm.mem_write(MANAGER, u64(MANAGER + 0x40))
    vm.mem_write(MANAGER + 0x58, u64(CALLBACK_B))
    vm.mem_write(STACK_POINTER, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER)
    vm.reg_write(UC_X86_REG_RCX, name)
    vm.reg_write(UC_X86_REG_RDX, callback)
    calls = []

    def intercept(machine, address, _size, _context):
        if address == RESOLVE:
            calls.append("resolve")
            retval = MANAGER if resolved else 0
        elif address == LOGGER:
            calls.append("log")
            retval = 0
        elif address == CALLBACK_B:
            calls.append("manager")
            require(machine.reg_read(UC_X86_REG_RCX) == MANAGER, "wrong manager")
            require(machine.reg_read(UC_X86_REG_RDX) == RECORDS + count * RECORD_SIZE,
                    "wrong listener record")
            require(machine.reg_read(UC_X86_REG_R8) == name, "wrong event name pointer")
            retval = int(accepted)
        else:
            return
        sp = machine.reg_read(UC_X86_REG_RSP)
        return_address = struct.unpack("<Q", machine.mem_read(sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, retval)
        machine.reg_write(UC_X86_REG_RSP, sp + 8)
        machine.reg_write(UC_X86_REG_RIP, return_address)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x180273B60, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "registration did not return")
    new_count = struct.unpack("<Q", vm.mem_read(COUNT, 8))[0]
    log_flag = vm.mem_read(CAPACITY_LOGGED, 1)[0]
    record = bytes(vm.mem_read(RECORDS + min(count, 95) * RECORD_SIZE, RECORD_SIZE))
    return vm.reg_read(UC_X86_REG_RAX) & 0xFF, new_count, log_flag, calls, record


def verify_registration(pe):
    cases = (
        ("null name", 0, {"name": 0}, (0, 0, 0, [])),
        ("null callback", 0, {"callback": 0}, (0, 0, 0, [])),
        ("capacity reached", 96, {}, (0, 96, 1, ["log"])),
        ("capacity already logged", 96, {"capacity_logged": True}, (0, 96, 1, [])),
        ("manager unavailable", 0, {"manager_present": False}, (0, 0, 0, [])),
        ("resolution failed", 0, {"resolved": False}, (0, 0, 0, ["resolve"])),
        ("manager rejected", 0, {"accepted": False}, (0, 0, 0, ["resolve", "manager", "log"])),
        ("manager accepted", 0, {}, (1, 1, 0, ["resolve", "manager"])),
        ("last available slot", 95, {}, (1, 96, 0, ["resolve", "manager"])),
    )
    for name, count, options, expected in cases:
        actual = execute_registration(pe, count, **options)
        require(actual[:4] == expected, f"{name}: expected {expected}, got {actual[:4]}")
        if "manager" in actual[3]:
            record = actual[4]
            require(struct.unpack_from("<Q", record, 0x18)[0] == ENTRY, f"{name}: wrong dispatcher")
            require(struct.unpack_from("<Q", record, 0x28)[0] == CALLBACK_A, f"{name}: wrong callback")
            require(record[0x30] == int(options.get("accepted", True)), f"{name}: wrong active flag")
    return len(cases)


def verify(pe):
    record = lambda index: RECORDS + index * RECORD_SIZE
    cases = (
        ("empty", 0, record(0), {0: CALLBACK_A}, []),
        ("first", 3, record(0), {0: CALLBACK_A, 1: CALLBACK_B}, [(CALLBACK_A, EVENT)]),
        ("middle", 3, record(1), {0: CALLBACK_A, 1: CALLBACK_B}, [(CALLBACK_B, EVENT)]),
        ("last", 3, record(2), {2: CALLBACK_A}, [(CALLBACK_A, EVENT)]),
        ("not a record", 3, record(1) + 1, {1: CALLBACK_A}, []),
        ("outside count", 2, record(2), {2: CALLBACK_A}, []),
        ("null callback", 3, record(1), {0: CALLBACK_A, 2: CALLBACK_B}, []),
        ("capacity boundary", 96, record(95), {95: CALLBACK_B}, [(CALLBACK_B, EVENT)]),
        ("beyond capacity count", 95, record(95), {95: CALLBACK_B}, []),
    )
    for name, count, listener, callbacks, expected in cases:
        calls, result = execute(pe, count, listener, callbacks)
        require(calls == expected, f"{name}: expected {expected}, got {calls}")
        require(result == 0, f"{name}: dispatch returned {result:#x}, not zero")
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
    registrations = verify_registration(pe)
    dispatches = verify(pe)
    print(f"PASS: {registrations} registration and {dispatches} dispatch scenarios; helpers stubbed")


if __name__ == "__main__":
    main()
