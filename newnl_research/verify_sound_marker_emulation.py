#!/usr/bin/env python3
"""Exercise the sample's sound-marker producer and expiry loop in Unicorn.

Original code operates on synthetic entities and records. Clock, lock and
buffer-move calls are stubbed; no game or DLL loader is used.
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
    UC_X86_REG_RIP, UC_X86_REG_RSP, UC_X86_REG_XMM9,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64,
)

ENTRY = 0x180233B60
QUEUE = 0x180CF9050
COUNT = 0x180CF9850
MEMORY = 0x2000000
ARGUMENT = MEMORY
ACTOR = MEMORY + 0x100
LOCAL = MEMORY + 0x200
ACTOR_NODE = MEMORY + 0x300
LOCAL_NODE = MEMORY + 0x400
CLOCK_FREQUENCY = STUB + 0x200
CLOCK_COUNTER = STUB + 0x300
LOCK = 0x1804E4D70
UNLOCK = 0x1804E4E90
MOVE = 0x180540530


def execute(pe, *, feature=True, sounds=True, local=True, same_actor=False,
            health=100, team=2, local_team=3, position=(100.0, 0.0, 0.0),
            local_position=(0.0, 0.0, 0.0), initial_count=0):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    original_pages = (0x180233000, 0x18000F000, 0x180011000, 0x1808AC000, 0x1808AD000)
    blank_pages = (0x18091A000, 0x18091B000, 0x180CD1000, 0x181108000,
                   0x180CA0000, 0x180CF9000, 0x1809F2000, 0x181116000,
                   0x18056B000, 0x1804E4000, 0x180540000)
    for address in original_pages + blank_pages:
        vm.mem_map(address, 0x1000)
    vm.mem_map(MEMORY, 0x1000)
    vm.mem_map(STUB, 0x1000)
    vm.mem_map(STACK, 0x10000)
    for address in original_pages:
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    for address in (LOCK, UNLOCK, MOVE):
        vm.mem_write(address, b"\x90")
    vm.mem_write(0x18056B1A0, u64(CLOCK_FREQUENCY))
    vm.mem_write(0x18056B1C0, u64(CLOCK_COUNTER))
    vm.mem_write(0x18091A1E0, bytes([feature]))
    vm.mem_write(0x18091B3A4, bytes([sounds]))
    vm.mem_write(0x180CD1304, b"\x01")  # Use the synthetic cached local object.
    vm.mem_write(0x1811089F8, u64(LOCAL if local else 0))
    vm.mem_write(0x1811160E0, u32(40))  # Bypass optional diagnostic logging.
    for address, offset in ((0x180CA09F0, 0x10), (0x180CA09F4, 0x14),
                            (0x180CA09F8, 0x18), (0x180CA0950, 0x30)):
        vm.mem_write(address, u32(offset))
    vm.mem_write(ARGUMENT, u64(LOCAL if same_actor else ACTOR))
    vm.mem_write(ACTOR + 0x10, u32(health))
    vm.mem_write(ACTOR + 0x14, bytes([team]))
    vm.mem_write(LOCAL + 0x14, bytes([local_team]))
    vm.mem_write(ACTOR + 0x18, u64(ACTOR_NODE))
    vm.mem_write(LOCAL + 0x18, u64(LOCAL_NODE))
    vm.mem_write(ACTOR_NODE + 0x30, struct.pack("<fff", *position))
    vm.mem_write(LOCAL_NODE + 0x30, struct.pack("<fff", *local_position))
    vm.mem_write(COUNT, u64(initial_count))
    for index in range(initial_count):
        vm.mem_write(QUEUE + index * 0x20, struct.pack("<dfffIQ", float(index),
                     float(index), 0.0, 0.0, 0, 0x1000 + index))
    sp = STACK_POINTER + 8  # Windows x64 entry: RSP is 8 modulo 16.
    vm.mem_write(sp, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, sp)
    vm.reg_write(UC_X86_REG_RCX, ARGUMENT)
    vm.reg_write(UC_X86_REG_RDX, 0)
    calls = []

    def intercept(machine, address, _size, _context):
        if address in (CLOCK_FREQUENCY, CLOCK_COUNTER):
            calls.append("clock")
            machine.mem_write(machine.reg_read(UC_X86_REG_RCX),
                              u64(100 if address == CLOCK_FREQUENCY else 1000))
            result = 1
        elif address in (LOCK, UNLOCK):
            calls.append("lock" if address == LOCK else "unlock")
            result = 0
        elif address == MOVE:
            calls.append("move")
            dest = machine.reg_read(UC_X86_REG_RCX)
            source = machine.reg_read(UC_X86_REG_RDX)
            size = machine.reg_read(UC_X86_REG_R8)
            require((dest, source, size) == (QUEUE, QUEUE + 0x20, 0x7E0),
                    "unexpected queue move")
            machine.mem_write(dest, bytes(machine.mem_read(source, size)))
            result = dest
        else:
            return
        current_sp = machine.reg_read(UC_X86_REG_RSP)
        return_address = struct.unpack("<Q", machine.mem_read(current_sp, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, result)
        machine.reg_write(UC_X86_REG_RSP, current_sp + 8)
        machine.reg_write(UC_X86_REG_RIP, return_address)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(ENTRY, STOP, count=20000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "producer did not return")
    count = struct.unpack("<Q", vm.mem_read(COUNT, 8))[0]
    return count, bytes(vm.mem_read(QUEUE, 0x800)), calls


def verify(pe):
    cases = (
        ("eligible", {}, True),
        ("parent disabled", {"feature": False}, False),
        ("sounds disabled", {"sounds": False}, False),
        ("missing local", {"local": False}, False),
        ("same actor", {"same_actor": True}, False),
        ("same team", {"team": 3}, False),
        ("health zero", {"health": 0}, False),
        ("health one", {"health": 1}, True),
        ("health 1000", {"health": 1000}, True),
        ("health 1001", {"health": 1001}, False),
        ("small coordinates", {"position": (0.009, 0.0, 0.0)}, False),
        ("coordinate threshold", {"position": (0.01, 0.0, 0.0)}, True),
        ("range below", {"position": (1199.0, 0.0, 0.0)}, True),
        ("range equal", {"position": (1200.0, 0.0, 0.0)}, False),
        ("three-dimensional range", {"position": (720.0, 960.0, 0.0)}, False),
    )
    for name, options, expected in cases:
        count, queue, calls = execute(pe, **options)
        require(count == int(expected), f"{name}: unexpected count {count}")
        if expected:
            timestamp, x, y, z = struct.unpack_from("<dfff", queue)
            require(timestamp == 10.0, f"{name}: wrong timestamp")
            require((x, y, z) == struct.unpack("<fff", struct.pack("<fff", *options.get("position", (100.0, 0.0, 0.0)))),
                    f"{name}: wrong position")
            require(struct.unpack_from("<Q", queue, 0x18)[0] == ACTOR, f"{name}: wrong actor")
            require(calls == ["lock", "clock", "clock", "unlock"], f"{name}: wrong stub calls {calls}")
        else:
            require(calls == [], f"{name}: unexpected stub calls {calls}")
    count, queue, calls = execute(pe, initial_count=64)
    require(count == 64, "full queue did not remain at 64 records")
    require(struct.unpack_from("<d", queue, 0)[0] == 1.0, "oldest record not evicted")
    require(struct.unpack_from("<Q", queue, 0x18)[0] == 0x1001, "wrong first retained record")
    require(struct.unpack_from("<d", queue, 63 * 0x20)[0] == 10.0, "new record not appended")
    require(calls == ["lock", "move", "clock", "clock", "unlock"], "wrong full-queue calls")
    return len(cases) + 1


def execute_expiry(pe, timestamps, now=10.0):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    for address in (0x180234000, 0x1808AC000, 0x180CF9000, 0x18091A000):
        vm.mem_map(address, 0x1000)
    vm.mem_map(STACK, 0x10000)
    for address in (0x180234000, 0x1808AC000):
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
    vm.mem_write(COUNT, u64(len(timestamps)))
    records = []
    for index, timestamp in enumerate(timestamps):
        record = struct.pack("<dfffIQ", timestamp, float(index), float(index + 1),
                             float(index + 2), index, 0x1000 + index)
        records.append(record)
        vm.mem_write(QUEUE + index * 0x20, record)
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER)
    vm.reg_write(UC_X86_REG_XMM9, struct.unpack("<Q", struct.pack("<d", now))[0])
    vm.emu_start(0x1802341B1, 0x180234314, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == 0x180234314, "expiry loop did not finish")
    count = struct.unpack("<Q", vm.mem_read(COUNT, 8))[0]
    return records, bytes(vm.mem_read(QUEUE, count * 0x20)) if count else b"", count


def verify_expiry(pe):
    cases = (
        ("empty", [], []),
        ("one expired", [9.0], []),
        ("one fresh", [9.5], [0]),
        ("scalar mixed and boundary", [9.0, 9.5, 10.25], [1, 2]),
        ("unrolled mixed", [8.0, 9.0, 9.5, 9.99, 8.5, 10.25, 9.2], [2, 3, 5, 6]),
        ("all expired", [1.0] * 8, []),
        ("capacity mixed", [9.5 if i % 2 else 9.0 for i in range(64)],
         list(range(1, 64, 2))),
    )
    for name, timestamps, survivors in cases:
        records, actual, count = execute_expiry(pe, timestamps)
        expected = b"".join(records[index] for index in survivors)
        require(count == len(survivors) and actual == expected,
                f"{name}: wrong surviving records or order")
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
    producers = verify(pe)
    expiry = verify_expiry(pe)
    print(f"PASS: {producers} producer and {expiry} expiry scenarios; clocks and locks stubbed")


if __name__ == "__main__":
    main()
