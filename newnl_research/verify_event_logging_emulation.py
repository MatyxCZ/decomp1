#!/usr/bin/env python3
"""Exercise vote logging and purchase-filter instructions in Unicorn.

The sample's original code runs on synthetic events and state. Event, name,
string helpers and the stack-cookie check are stubbed; no game or DLL runs.
The purchase exercise stops at the weapon-read call or its rejection branch.
Requires the Python packages `pefile` and `unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_R8, UC_X86_REG_R15, UC_X86_REG_RAX, UC_X86_REG_RBX, UC_X86_REG_RCX,
    UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP, UC_X86_REG_XMM0,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64,
)

EVENT = 0x2000100
PLAYER = 0x2000200
LOCAL = 0x2000300
NAME = 0x1809EBC30


def write_string(vm, address, text):
    data = text.encode("ascii")
    require(len(data) <= 15, "only synthetic small strings supported")
    vm.mem_write(address, data.ljust(16, b"\0") + u64(len(data)) + u64(15))


def return_from(vm, result):
    sp = vm.reg_read(UC_X86_REG_RSP)
    target = struct.unpack("<Q", vm.mem_read(sp, 8))[0]
    vm.reg_write(UC_X86_REG_RAX, result & 0xFFFFFFFFFFFFFFFF)
    vm.reg_write(UC_X86_REG_RSP, sp + 8)
    vm.reg_write(UC_X86_REG_RIP, target)


def execute_purchase(pe, *, buy=True, generic=False, user=True, self_purchase=False,
                     local=True, team_offset=True, event_team=2.0, local_team=2,
                     equal_enabled=True, different_enabled=True):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    originals = (0x1800D5000, 0x1800D6000, 0x180011000)
    blank = (0x180919000, 0x180920000, 0x180CD1000, 0x181108000,
             0x180CA0000, 0x180273000)
    for address in originals + blank:
        vm.mem_map(address, 0x1000)
    vm.mem_map(0x2000000, 0x1000)
    vm.mem_map(STACK, 0x10000)
    for address in originals:
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
    for address in (0x180273F90, 0x180273CC0):
        vm.mem_write(address, b"\xc3")
    vm.mem_write(0x180920E48, bytes([buy]))
    vm.mem_write(0x180920EAC, bytes([generic]))
    vm.mem_write(0x180920E49, bytes([different_enabled]))
    vm.mem_write(0x180920E4A, bytes([equal_enabled]))
    vm.mem_write(0x180CD1304, b"\x01")
    vm.mem_write(0x181108A00, u64(LOCAL if local else 0))
    vm.mem_write(0x180CA09F4, u32(0x10 if team_offset else 0))
    vm.mem_write(LOCAL + 0x10, bytes([local_team]))
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER + 8)
    vm.reg_write(UC_X86_REG_RCX, EVENT)
    calls = []

    def intercept(machine, address, _size, _context):
        if address in (0x1800D5E61, 0x1800D63F1):
            machine.emu_stop()
        elif address == 0x180273F90:
            calls.append("userid")
            require(machine.reg_read(UC_X86_REG_RCX) == EVENT, "wrong event")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x1806D23DC, "wrong user field")
            result = (LOCAL if self_purchase else PLAYER) if user else 0
            return_from(machine, result)
        elif address == 0x180273CC0:
            calls.append("team")
            require(machine.reg_read(UC_X86_REG_RCX) == EVENT, "wrong event")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x1806E0C0C, "wrong team field")
            machine.reg_write(UC_X86_REG_XMM0, struct.unpack("<I", struct.pack("<f", event_team))[0])
            return_from(machine, 0)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x1800D5D70, 0, count=10000)
    rip = vm.reg_read(UC_X86_REG_RIP)
    require(rip in (0x1800D5E61, 0x1800D63F1), f"unexpected purchase stop {rip:#x}")
    return rip == 0x1800D5E61, calls


def execute_timeout(pe, now, then):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    vm.mem_map(0x1800D6000, 0x1000)
    vm.mem_map(0x2000000, 0x1000)
    vm.mem_write(0x1800D6000, pe.get_data(0xD6000, 0x1000))
    vm.mem_write(PLAYER + 0x60, u32(then))
    vm.reg_write(UC_X86_REG_RBX, PLAYER)
    vm.reg_write(UC_X86_REG_R15, now)

    def stop(machine, address, _size, _context):
        if address in (0x1800D657D, 0x1800D6586):
            machine.emu_stop()

    vm.hook_add(unicorn.UC_HOOK_CODE, stop)
    vm.emu_start(0x1800D6570, 0, count=100)
    rip = vm.reg_read(UC_X86_REG_RIP)
    require(rip in (0x1800D657D, 0x1800D6586), f"unexpected timer stop {rip:#x}")
    return rip == 0x1800D6586


def execute_vote_start(pe, *, reveal=True, generic=False, initiator=True, name="Alice"):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    originals = (0x1800D9000, 0x1800DA000)
    blank = (0x180919000, 0x180920000, 0x1809EB000, 0x180273000,
             0x1803A0000, 0x18000F000, 0x1804EC000)
    for address in originals + blank:
        vm.mem_map(address, 0x1000)
    vm.mem_map(0x2000000, 0x1000)
    vm.mem_map(STUB, 0x1000)
    vm.mem_map(STACK, 0x10000)
    for address in originals:
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    for address in (0x180273F90, 0x1803A0620, 0x18000F890, 0x1804ECA80):
        vm.mem_write(address, b"\xc3")
    vm.mem_write(0x180920E44, bytes([reveal]))
    vm.mem_write(0x180920EC0, bytes([generic]))
    write_string(vm, NAME, "Previous")
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, sp)
    vm.reg_write(UC_X86_REG_RCX, EVENT)
    calls = []

    def intercept(machine, address, _size, _context):
        if address == 0x180273F90:
            calls.append("initiator")
            require(machine.reg_read(UC_X86_REG_RCX) == EVENT, "wrong event")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x1806F1368, "wrong initiator field")
            return_from(machine, PLAYER if initiator else 0)
        elif address == 0x1803A0620:
            calls.append("name")
            ref = machine.reg_read(UC_X86_REG_RCX)
            require(struct.unpack("<Q", machine.mem_read(ref, 8))[0] == PLAYER, "wrong player")
            destination = machine.reg_read(UC_X86_REG_RDX)
            write_string(machine, destination, name)
            return_from(machine, destination)
        elif address in (0x18000F890, 0x1804ECA80):
            return_from(machine, 0)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x1800D9E80, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "vote callback did not return")
    length = struct.unpack("<Q", vm.mem_read(NAME + 0x10, 8))[0]
    require(length <= 15, "unexpected synthetic string length")
    return bytes(vm.mem_read(NAME, length)).decode("ascii"), calls


def execute_vote_choice(pe, binary, choice):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    originals = (0x1800D9000, 0x1806F1000, 0x1806E5000)
    blank = (0x180919000, 0x180962000, 0x18003A000, 0x180066000,
             0x18000F000, 0x1804EC000)
    for address in originals + blank:
        vm.mem_map(address, 0x1000)
    vm.mem_map(0x2000000, 0x1000)
    vm.mem_map(STUB, 0x1000)
    vm.mem_map(STACK, 0x10000)
    for address in originals:
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    for address in (0x18003A390, 0x180066AB0, 0x18000F890, 0x1804ECA80):
        vm.mem_write(address, b"\xc3")
    vm.mem_write(0x180962433, bytes([binary]))
    output = 0x2000800
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, sp)
    vm.reg_write(UC_X86_REG_RCX, output)
    vm.reg_write(UC_X86_REG_RDX, choice & 0xFFFFFFFF)

    def intercept(machine, address, _size, _context):
        if address == 0x18003A390:
            destination = machine.reg_read(UC_X86_REG_RCX)
            value = machine.reg_read(UC_X86_REG_RDX) & 0xFFFFFFFF
            signed = value if value < 0x80000000 else value - 0x100000000
            write_string(machine, destination, str(signed))
            return_from(machine, destination)
        elif address == 0x180066AB0:
            destination = machine.reg_read(UC_X86_REG_RCX)
            prefix = machine.reg_read(UC_X86_REG_RDX)
            source = machine.reg_read(UC_X86_REG_R8)
            require(bytes(machine.mem_read(prefix, 8)) == b"option \0", "wrong option prefix")
            length = struct.unpack("<Q", machine.mem_read(source + 0x10, 8))[0]
            require(length <= 8, "unexpected numeric text")
            suffix = bytes(machine.mem_read(source, length)).decode("ascii")
            write_string(machine, destination, "option " + suffix)
            write_string(machine, source, "")
            return_from(machine, destination)
        elif address == 0x18000F890:
            return_from(machine, 0)
        elif address == 0x1804ECA80:
            return_from(machine, machine.reg_read(UC_X86_REG_RAX))

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x1800D9350, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "choice formatter did not return")
    require(vm.reg_read(UC_X86_REG_RAX) == output, "wrong choice result pointer")
    length = struct.unpack("<Q", vm.mem_read(output + 0x10, 8))[0]
    require(length <= 15, "unexpected choice length")
    return bytes(vm.mem_read(output, length)).decode("ascii")


def verify(pe):
    purchase_cases = (
        ("disabled", {"buy": False}, (False, [])),
        ("buy enabled", {}, (True, ["userid", "team"])),
        ("generic log only", {"buy": False, "generic": True}, (True, ["userid", "team"])),
        ("unknown buyer", {"user": False}, (False, ["userid"])),
        ("self purchase", {"self_purchase": True}, (False, ["userid"])),
        ("equal team disabled", {"equal_enabled": False}, (False, ["userid", "team"])),
        ("equal team enabled", {"different_enabled": False}, (True, ["userid", "team"])),
        ("different team enabled", {"event_team": 3.0, "equal_enabled": False}, (True, ["userid", "team"])),
        ("different team disabled", {"event_team": 3.0, "different_enabled": False}, (False, ["userid", "team"])),
        ("missing local uses team zero", {"local": False, "event_team": 0.0, "equal_enabled": False},
         (False, ["userid", "team"])),
        ("missing team offset uses zero", {"team_offset": False, "event_team": 0.0, "equal_enabled": False},
         (False, ["userid", "team"])),
        ("fractional team truncates", {"event_team": 2.9, "equal_enabled": False}, (False, ["userid", "team"])),
    )
    for name, options, expected in purchase_cases:
        actual = execute_purchase(pe, **options)
        require(actual == expected, f"{name}: expected {expected}, got {actual}")
    timeout_cases = ((1000, 1000, False), (1799, 1000, False), (1800, 1000, True),
                     (1801, 1000, True), (0x10, 0xFFFFFFF0, False),
                     (0x310, 0xFFFFFFF0, True))
    for now, then, expected in timeout_cases:
        require(execute_timeout(pe, now, then) == expected, f"timer {now:#x}, {then:#x}")
    vote_cases = (
        ("disabled", {"reveal": False}, ("Previous", [])),
        ("reveal enabled", {}, ("Alice", ["initiator", "name"])),
        ("generic log only", {"reveal": False, "generic": True}, ("Alice", ["initiator", "name"])),
        ("null initiator", {"initiator": False}, ("", ["initiator"])),
        ("empty resolved name", {"name": ""}, ("", ["initiator", "name"])),
    )
    for name, options, expected in vote_cases:
        actual = execute_vote_start(pe, **options)
        require(actual == expected, f"{name}: expected {expected}, got {actual}")
    choices = (
        (True, 0, "yes"), (True, 1, "no"), (True, 2, "option 3"),
        (True, -1, "option 0"), (False, 0, "option 1"),
        (False, 1, "option 2"), (False, 5, "option 6"),
        (False, -2, "option -1"),
    )
    for binary, choice, expected in choices:
        actual = execute_vote_choice(pe, binary, choice)
        require(actual == expected, f"vote choice {binary}/{choice}: expected {expected!r}, got {actual!r}")
    return len(purchase_cases), len(timeout_cases), len(vote_cases), len(choices)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("dll", nargs="?", type=Path,
                        default=Path(__file__).resolve().parent.parent / "newnl.dll")
    args = parser.parse_args()
    data = args.dll.read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, "DLL SHA-256 does not match")
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, "Unexpected PE image base")
    purchase, timers, votes, choices = verify(pe)
    print(f"PASS: {purchase} purchase-filter, {timers} timer, {votes} vote-start and {choices} vote-choice scenarios; helpers stubbed")


if __name__ == "__main__":
    main()
