#!/usr/bin/env python3
"""Exercise selected hook-engine routines from the identified PE in Unicorn.

The instruction decoder and hook-engine code are emulated from the sample.
Windows APIs and the stack-cookie check are stubbed; no process is patched.
Requires the Python packages `pefile` and `unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_EAX, UC_X86_REG_R8, UC_X86_REG_R9, UC_X86_REG_RAX,
    UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB,
    require, u32, u64,
)

PARAM = 0x2000000
TARGET = 0x5000100
SLOT = 0x5002000
DETOUR = 0x5003000
CALL_DEST = 0x5000500
RELAY = 0x5000300
COOKIE_CHECK = 0x1804ECA80
QUERY_STUB = STUB + 0x200
PROTECT_STUB = STUB + 0x200
PROCESS_STUB = STUB + 0x300
FLUSH_STUB = STUB + 0x400
QUERY_IAT = 0x18056B1C8
PROTECT_IAT = 0x18056B178
PROCESS_IAT = 0x18056B290
FLUSH_IAT = 0x18056B2B8
RECORD_ARRAY_POINTER = 0x1811118B8


def return_from_stub(vm, value):
    stack_pointer = vm.reg_read(UC_X86_REG_RSP)
    return_address = struct.unpack("<Q", vm.mem_read(stack_pointer, 8))[0]
    vm.reg_write(UC_X86_REG_RAX, value)
    vm.reg_write(UC_X86_REG_RSP, stack_pointer + 8)
    vm.reg_write(UC_X86_REG_RIP, return_address)


def create_trampoline(pe, code):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    regions = ((0x180429000, 0x2000), (PARAM, 0x1000), (0x5000000, 0x4000),
               (STUB, 0x1000), (STACK, 0x10000), (0x180962000, 0x1000),
               (0x180919000, 0x1000), (0x18056B000, 0x1000),
               (COOKIE_CHECK & ~0xFFF, 0x1000))
    for address, size in regions:
        vm.mem_map(address, size)
    for address, size in ((0x180429000, 0x2000), (0x180962000, 0x1000),
                          (0x180919000, 0x1000)):
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, size))
    vm.mem_write(COOKIE_CHECK, b"\x90")
    vm.mem_write(STUB, b"\x90" * 0x1000)
    vm.mem_write(QUERY_IAT, u64(QUERY_STUB))
    vm.mem_write(TARGET - 5, b"\x90" * 5)
    vm.mem_write(TARGET, code + b"\x90" * 32)
    vm.mem_write(PARAM, u64(TARGET) + u64(DETOUR) + u64(SLOT))
    vm.mem_write(STACK_POINTER, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER)
    vm.reg_write(UC_X86_REG_RCX, PARAM)
    calls = []

    def intercept(machine, address, _size, _context):
        if address == QUERY_STUB:
            calls.append("query")
            info = machine.reg_read(UC_X86_REG_RDX)
            machine.mem_write(info + 32, u32(0x1000) + u32(0x20))
            return_from_stub(machine, 0x30)
        elif address == COOKIE_CHECK:
            calls.append("cookie")
            return_from_stub(machine, machine.reg_read(UC_X86_REG_RAX))

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x1804295F0, STOP, count=200000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "trampoline: unexpected exit")
    read64 = lambda address: struct.unpack("<Q", vm.mem_read(address, 8))[0]
    read32 = lambda address: struct.unpack("<I", vm.mem_read(address, 4))[0]
    return (vm.reg_read(UC_X86_REG_EAX), read64(PARAM + 24), read32(PARAM + 32),
            bytes(vm.mem_read(SLOT, 64)), calls)


def absolute_jump(destination):
    return b"\xff\x25\x00\x00\x00\x00" + u64(destination)


def absolute_call(destination):
    return b"\xff\x15\x02\x00\x00\x00\xeb\x08" + u64(destination)


def verify_trampolines(pe):
    prologue = b"\x55\x48\x89\xe5\x48\x83\xec\x20"
    result, relay, above, output, _ = create_trampoline(pe, prologue)
    require(result == 1 and relay == SLOT + 22 and above == 0, "ordinary trampoline metadata")
    require(output[:8] == prologue and output[8:22] == absolute_jump(TARGET + 8)
            and output[22:36] == absolute_jump(DETOUR), "ordinary trampoline bytes")

    address = TARGET + 0x80
    original = b"\x48\x8b\x05" + struct.pack("<i", address - (TARGET + 7))
    result, _, _, output, _ = create_trampoline(pe, original)
    relocated = SLOT + 7 + struct.unpack("<i", output[3:7])[0]
    require(result == 1 and output[:3] == original[:3] and relocated == address
            and output[7:21] == absolute_jump(TARGET + 7), "RIP-relative relocation")

    original = b"\xe8" + struct.pack("<i", CALL_DEST - (TARGET + 5))
    result, _, _, output, _ = create_trampoline(pe, original)
    require(result == 1 and output[:16] == absolute_call(CALL_DEST)
            and output[16:30] == absolute_jump(TARGET + 5), "relative call relocation")

    result, _, _, output, _ = create_trampoline(pe, b"\xeb\x1e")
    require(result == 1 and output[:14] == absolute_jump(TARGET + 32)
            and output[14:28] == absolute_jump(DETOUR), "external jump relocation")
    result, _, _, output, _ = create_trampoline(pe, b"\x75\x1e")
    require(result == 1 and output[:2] == b"\x74\x0e"
            and output[2:16] == absolute_jump(TARGET + 32), "conditional jump relocation")
    require(create_trampoline(pe, b"\xe2\x1e")[0] == 0, "external LOOP should be rejected")
    result, _, above, output, calls = create_trampoline(pe, b"\xc3\xcc\x90\x90\x90")
    require(result == 1 and above == 1 and "query" in calls and output[0] == 0xC3
            and output[1:15] == absolute_jump(DETOUR), "hotpatch fallback")
    require(create_trampoline(pe, b"\xc3\x48\x8b\x90\x90")[0] == 0,
            "insufficient padding should be rejected")
    return 8


def apply_patch(pe, *, above, enable, protection_results=(1, 1), flush_result=1):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    regions = ((0x180428000, 0x1000), (PARAM, 0x1000), (0x5000000, 0x1000),
               (STUB, 0x1000), (STACK, 0x10000), (0x181111000, 0x1000),
               (0x18056B000, 0x1000))
    for address, size in regions:
        vm.mem_map(address, size)
    vm.mem_write(0x180428000, pe.get_data(0x428000, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    for iat, target in ((PROTECT_IAT, PROTECT_STUB), (PROCESS_IAT, PROCESS_STUB),
                        (FLUSH_IAT, FLUSH_STUB)):
        vm.mem_write(iat, u64(target))
    vm.mem_write(RECORD_ARRAY_POINTER, u64(PARAM))
    vm.mem_write(PARAM, u64(TARGET) + u64(RELAY))
    backup = b"\x90" * 5 + b"\x8b\xff" if above else b"\x55\x48\x89\xe5\x90"
    start = TARGET - 5 if above else TARGET
    patched = b"\xe9" + struct.pack("<i", RELAY - (start + 5))
    if above:
        patched += b"\xeb\xf9"
    vm.mem_write(PARAM + 0x18, backup)
    vm.mem_write(start, backup if enable else patched)
    vm.mem_write(PARAM + 0x20, bytes([(1 if above else 0) | (0 if enable else 6)]))
    vm.mem_write(STACK_POINTER, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER)
    vm.reg_write(UC_X86_REG_RCX, 0)
    vm.reg_write(UC_X86_REG_RDX, int(enable))
    calls = []
    results = iter(protection_results)

    def intercept(machine, address, _size, _context):
        if address == PROTECT_STUB:
            calls.append(("protect", machine.reg_read(UC_X86_REG_RCX),
                          machine.reg_read(UC_X86_REG_RDX), machine.reg_read(UC_X86_REG_R8)))
            machine.mem_write(machine.reg_read(UC_X86_REG_R9), u32(0x20))
            return_from_stub(machine, next(results))
        elif address == PROCESS_STUB:
            calls.append(("getprocess",))
            return_from_stub(machine, 0x9999)
        elif address == FLUSH_STUB:
            calls.append(("flush", machine.reg_read(UC_X86_REG_RCX),
                          machine.reg_read(UC_X86_REG_RDX), machine.reg_read(UC_X86_REG_R8)))
            return_from_stub(machine, flush_result)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x180428B70, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "patch writer: unexpected exit")
    return (vm.reg_read(UC_X86_REG_EAX), bytes(vm.mem_read(start, len(backup))),
            vm.mem_read(PARAM + 0x20, 1)[0], calls, backup, patched)


def verify_patches(pe):
    count = 0
    for above in (False, True):
        for enable in (False, True):
            result, actual, flags, calls, backup, patched = apply_patch(pe, above=above, enable=enable)
            start = TARGET - 5 if above else TARGET
            size = 7 if above else 5
            expected_flags = (1 if above else 0) | (6 if enable else 0)
            require((result, actual, flags) == (0, patched if enable else backup, expected_flags),
                    "wrong patch bytes, restoration, or flags")
            require(calls == [("protect", start, size, 0x40), ("protect", start, size, 0x20),
                              ("getprocess",), ("flush", 0x9999, start, size)], "wrong patch API calls")
            count += 1
    result, actual, flags, calls, backup, _ = apply_patch(
        pe, above=False, enable=True, protection_results=(0,))
    require(result == 10 and actual == backup and flags == 0 and len(calls) == 1,
            "initial VirtualProtect failure")
    count += 1
    for options in ({"protection_results": (1, 0)}, {"flush_result": 0}):
        result, actual, flags, calls, _, patched = apply_patch(pe, above=False, enable=True, **options)
        require(result == 0 and actual == patched and flags == 6 and calls[-1][0] == "flush",
                "restore/flush failure behavior")
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
    trampolines = verify_trampolines(pe)
    patches = verify_patches(pe)
    print(f"PASS: {trampolines} trampoline and {patches} patch scenarios; Windows APIs stubbed")


if __name__ == "__main__":
    main()
