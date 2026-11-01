#!/usr/bin/env python3
"""Exercise the identified sample's HTTP response-read block in Unicorn.

Only the native read block is emulated. WinHTTP and C++ string helpers are
synthetic stubs; no network connection, Windows API, or DLL loader is used.
Requires the Python packages `pefile` and `unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_R8, UC_X86_REG_R8D, UC_X86_REG_R9, UC_X86_REG_R12,
    UC_X86_REG_R14, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX,
    UC_X86_REG_RIP, UC_X86_REG_RSI, UC_X86_REG_RSP,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STUB, require, u32, u64,
)

CODE = 0x180095000
STOP = 0x1800962A6
RESULT = 0x2000000
HEAP = 0x6000000
QUERY_STUB = STUB + 0x100
READ_STUB = STUB + 0x200
RESIZE_STUB = 0x180028A50
ERROR_STUB = 0x180029840
QUERY_IAT = 0x18056B7B0
READ_IAT = 0x18056B7E8
LIMIT = 0x800000


def execute(pe, queries, *, read_ok=True, status=200, initial_length=0, initial_error=0):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    regions = ((CODE, 0x2000), (RESULT, 0x1000), (HEAP, 0x801000),
               (STUB, 0x1000), (STACK, 0x10000), (0x18056B000, 0x1000),
               (0x180028000, 0x2000), (0x1806E6000, 0x1000))
    for address, size in regions:
        vm.mem_map(address, size)
    vm.mem_write(CODE, pe.get_data(CODE - IMAGE_BASE, 0x2000))
    vm.mem_write(0x1806E6000, pe.get_data(0x6E6000, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    vm.mem_write(RESIZE_STUB, b"\x90")
    vm.mem_write(ERROR_STUB, b"\x90")
    vm.mem_write(QUERY_IAT, u64(QUERY_STUB))
    vm.mem_write(READ_IAT, u64(READ_STUB))
    vm.mem_write(RESULT + 0x10, u32(status))
    vm.mem_write(RESULT + 0x28, u64(initial_length))
    vm.mem_write(RESULT + 0x48, u64(initial_error))
    vm.mem_write(RESULT + 0x30, u64(LIMIT if initial_length else 15))
    if initial_length:
        vm.mem_write(RESULT + 0x18, u64(HEAP))
    for register, value in ((UC_X86_REG_R14, RESULT), (UC_X86_REG_R12, 0x3333),
                            (UC_X86_REG_RSI, 0), (UC_X86_REG_RSP, STACK_POINTER)):
        vm.reg_write(register, value)
    pending = iter(queries)
    calls = []

    def read64(address):
        return struct.unpack("<Q", vm.mem_read(address, 8))[0]

    def intercept(machine, address, _size, _context):
        if address == QUERY_STUB:
            calls.append("query")
            require(machine.reg_read(UC_X86_REG_RCX) == 0x3333, "wrong request handle")
            success, available = next(pending)
            if success:
                machine.mem_write(machine.reg_read(UC_X86_REG_RDX), u32(available))
            retval = int(success)
        elif address == READ_STUB:
            calls.append("read")
            require(machine.reg_read(UC_X86_REG_RCX) == 0x3333, "wrong request handle")
            if read_ok:
                require(machine.reg_read(UC_X86_REG_R8D) == 4, "unexpected synthetic read size")
                machine.mem_write(machine.reg_read(UC_X86_REG_RDX), b"abcd")
                machine.mem_write(machine.reg_read(UC_X86_REG_R9), u32(4))
            retval = int(read_ok)
        elif address == RESIZE_STUB:
            # Model the string helper's length/capacity effect; no real C++ runtime is used.
            calls.append("resize")
            require(machine.reg_read(UC_X86_REG_RCX) == RESULT + 0x18, "wrong body string")
            new_length = read64(RESULT + 0x28) + machine.reg_read(UC_X86_REG_RDX)
            require(new_length <= LIMIT, "unexpected over-limit resize")
            if new_length > 15 and read64(RESULT + 0x30) <= 15:
                machine.mem_write(RESULT + 0x18, u64(HEAP))
                machine.mem_write(RESULT + 0x30, u64(LIMIT))
            machine.mem_write(RESULT + 0x28, u64(new_length))
            retval = 0
        elif address == ERROR_STUB:
            calls.append("error")
            require(machine.reg_read(UC_X86_REG_RCX) == RESULT + 0x38, "wrong error string")
            require(machine.reg_read(UC_X86_REG_R8) == 23, "wrong error length")
            message = bytes(machine.mem_read(machine.reg_read(UC_X86_REG_RDX), 23))
            require(message == b"the answer is over 8 MB", "wrong error text")
            machine.mem_write(RESULT + 0x48, u64(23))
            retval = 0
        else:
            return
        stack_pointer = machine.reg_read(UC_X86_REG_RSP)
        return_address = struct.unpack("<Q", machine.mem_read(stack_pointer, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, retval)
        machine.reg_write(UC_X86_REG_RSP, stack_pointer + 8)
        machine.reg_write(UC_X86_REG_RIP, return_address)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x180095FAF, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "instruction limit or unexpected exit")
    return (vm.mem_read(RESULT + 0xC, 1)[0], read64(RESULT + 0x28),
            read64(RESULT + 0x48), calls, bytes(vm.mem_read(RESULT + 0x18, 4)))


def verify(pe):
    cases = (
        ("empty 200", [(True, 0)], {}, (1, 0, 0, ["query"])),
        ("empty 500", [(True, 0)], {"status": 500}, (1, 0, 0, ["query"])),
        ("query failure", [(False, 0)], {}, (1, 0, 0, ["query"])),
        ("query failure with existing error", [(False, 0)], {"initial_error": 1},
         (0, 0, 1, ["query"])),
        ("read failure", [(True, 4)], {"read_ok": False}, (1, 4, 0, ["query", "resize", "read"])),
        ("partial then query failure", [(True, 4), (False, 0)], {},
         (1, 4, 0, ["query", "resize", "read", "query"])),
        ("over limit", [(True, 1)], {"initial_length": LIMIT}, (0, LIMIT, 23, ["query", "error"])),
        ("exact limit", [(True, 1)], {"initial_length": LIMIT - 1, "read_ok": False},
         (1, LIMIT, 0, ["query", "resize", "read"])),
    )
    for name, queries, options, expected in cases:
        actual = execute(pe, queries, **options)
        require(actual[:4] == expected, f"{name}: expected {expected}, got {actual[:4]}")
        if name == "partial then query failure":
            require(actual[4] == b"abcd", "partial response body was not preserved")
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
    print(f"PASS: {count} isolated HTTP read-loop scenarios; WinHTTP and string helpers stubbed")


if __name__ == "__main__":
    main()
