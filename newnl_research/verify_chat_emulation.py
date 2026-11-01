#!/usr/bin/env python3
"""Exercise the sample's player-chat gates in isolated Unicorn VMs.

Original instructions run on synthetic events, rules and player objects.
Event/string helpers and game lookups are stubbed; no game or DLL is loaded.
This stops before text formatting or delivery. Requires `pefile` and `unicorn`.
"""

import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import (
    UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDI,
    UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP, UC_X86_REG_XMM0,
)

from verify_raw_input_emulation import (
    IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, require, u32, u64,
)

EVENT = 0x2000100
LOCAL = 0x2000200
SENDER = 0x2000300
RULES = 0x2000400
CVAR = 0x2000500
ACCEPT = 0x1802704C6
REJECT = (0x180270FDC, 0x180270FE5)


def ret(vm, result):
    sp = vm.reg_read(UC_X86_REG_RSP)
    target = struct.unpack("<Q", vm.mem_read(sp, 8))[0]
    vm.reg_write(UC_X86_REG_RAX, result & 0xFFFFFFFFFFFFFFFF)
    vm.reg_write(UC_X86_REG_RSP, sp + 8)
    vm.reg_write(UC_X86_REG_RIP, target)


def write_small_string(vm, address, data):
    require(len(data) <= 15, "only synthetic small strings supported")
    vm.mem_write(address, data.ljust(16, b"\0") + u64(len(data)) + u64(15))


def execute_gate(pe, *, enabled=True, local=True, rules_first=True, rules_second=True,
                 valve_offset=True, valve_server=False, numeric=0.0, team_text=b"1",
                 sender=True, same_sender=False, sender_team=2, local_team=3,
                 team_offset=True, cvar_exists=True, cvar_value=0.0):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    originals = (0x180270000, 0x180011000, 0x18073E000, 0x1806D3000, 0x1806DF000)
    blank = (0x180919000, 0x180920000, 0x180CD1000, 0x181108000,
             0x180CF9000, 0x180CA0000, 0x180266000, 0x180264000,
             0x180273000, 0x180540000)
    for address in originals + blank:
        vm.mem_map(address, 0x1000)
    vm.mem_map(0x2000000, 0x1000)
    vm.mem_map(STACK, 0x10000)
    for address in originals:
        vm.mem_write(address, pe.get_data(address - IMAGE_BASE, 0x1000))
    for address in (0x180266660, 0x180273D10, 0x180273CC0, 0x180273F90,
                    0x180540BC0, 0x180264B70, 0x180264D70):
        vm.mem_write(address, b"\xc3")
    vm.mem_write(0x180920E18, bytes([enabled]))
    vm.mem_write(0x180CD1304, b"\x01")
    vm.mem_write(0x181108A00, u64(LOCAL if local else 0))
    vm.mem_write(0x180CF9F80, u32(0x10 if valve_offset else 0))
    vm.mem_write(RULES + 0x10, bytes([valve_server]))
    vm.mem_write(0x180CA09F4, u32(0x20 if team_offset else 0))
    vm.mem_write(LOCAL + 0x20, bytes([local_team]))
    vm.mem_write(SENDER + 0x20, bytes([sender_team]))
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER + 8)
    vm.reg_write(UC_X86_REG_RCX, EVENT)
    rules_results = iter((RULES if rules_first else 0, RULES if rules_second else 0))
    calls = []

    def intercept(machine, address, _size, _context):
        if address in REJECT or address == ACCEPT:
            machine.emu_stop()
        elif address == 0x180266660:
            calls.append("rules")
            ret(machine, next(rules_results))
        elif address == 0x180273D10:
            calls.append("team_text")
            require(machine.reg_read(UC_X86_REG_RDX) == EVENT, "wrong event")
            require(machine.reg_read(UC_X86_REG_R8) == 0x18073E210, "wrong teamonly field")
            dest = machine.reg_read(UC_X86_REG_RCX)
            write_small_string(machine, dest, team_text)
            ret(machine, dest)
        elif address == 0x180273CC0:
            calls.append("team_number")
            require(machine.reg_read(UC_X86_REG_RCX) == EVENT, "wrong event")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x18073E210, "wrong teamonly field")
            machine.reg_write(UC_X86_REG_XMM0, struct.unpack("<I", struct.pack("<f", numeric))[0])
            ret(machine, 0)
        elif address == 0x180540BC0:
            length = machine.reg_read(UC_X86_REG_R8)
            left = bytes(machine.mem_read(machine.reg_read(UC_X86_REG_RCX), length))
            right = bytes(machine.mem_read(machine.reg_read(UC_X86_REG_RDX), length))
            ret(machine, (left > right) - (left < right))
        elif address == 0x180273F90:
            calls.append("userid")
            require(machine.reg_read(UC_X86_REG_RCX) == EVENT, "wrong event")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x1806D23DC, "wrong userid field")
            result = (LOCAL if same_sender else SENDER) if sender else 0
            ret(machine, result)
        elif address == 0x180264B70:
            calls.append("cvar_lookup")
            ret(machine, CVAR if cvar_exists else 0)
        elif address == 0x180264D70:
            calls.append("cvar_value")
            require(machine.reg_read(UC_X86_REG_RCX) == CVAR, "wrong cvar pointer")
            bits = struct.unpack("<I", struct.pack("<f", cvar_value))[0]
            ret(machine, bits)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x180270290, 0, count=10000)
    rip = vm.reg_read(UC_X86_REG_RIP)
    require(rip in REJECT or rip == ACCEPT, f"unexpected gate stop {rip:#x}")
    if rip == ACCEPT:
        token = vm.reg_read(UC_X86_REG_RDI)
        require(token in (0x18073E238, 0x18073E250), f"unexpected chat token {token:#x}")
        return True, token, calls
    return False, None, calls


def verify_gate(pe):
    accepted = (
        ("opposing team", {}),
        ("numeric team-only", {"numeric": 1.0, "team_text": b"false"}),
        ("numeric NaN", {"numeric": float("nan"), "team_text": b"false"}),
        ("string true", {"team_text": b"true"}),
        ("second rules missing", {"rules_second": False, "valve_server": True}),
        ("unresolved server offset", {"valve_offset": False, "valve_server": True}),
        ("same team enemy cvar", {"sender_team": 3, "cvar_value": 1.0}),
        ("missing team offset with cvar", {"team_offset": False, "cvar_value": -1.0}),
    )
    rejected = (
        ("disabled", {"enabled": False}),
        ("missing local", {"local": False}),
        ("missing initial rules", {"rules_first": False}),
        ("Valve server", {"valve_server": True}),
        ("not team only", {"team_text": b"false"}),
        ("uppercase not accepted", {"team_text": b"TRUE"}),
        ("unknown sender", {"sender": False}),
        ("self message", {"same_sender": True}),
        ("same team zero cvar", {"sender_team": 3}),
        ("same team missing cvar", {"sender_team": 3, "cvar_exists": False}),
        ("same team infinite cvar", {"sender_team": 3, "cvar_value": float("inf")}),
        ("same team NaN cvar", {"sender_team": 3, "cvar_value": float("nan")}),
        ("missing team offset zero cvar", {"team_offset": False}),
    )
    for name, options in accepted:
        ok, token, _ = execute_gate(pe, **options)
        require(ok, f"{name}: unexpectedly rejected")
        expected = 0x18073E250 if options.get("sender_team", 2) == 2 and options.get("team_offset", True) else 0x18073E238
        require(token == expected, f"{name}: unexpected team token {token:#x}")
    for name, options in rejected:
        ok, _, _ = execute_gate(pe, **options)
        require(not ok, f"{name}: unexpectedly accepted")
    return len(accepted) + len(rejected)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("dll", nargs="?", type=Path,
                        default=Path(__file__).resolve().parent.parent / "newnl.dll")
    args = parser.parse_args()
    data = args.dll.read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, "DLL SHA-256 does not match")
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, "Unexpected PE image base")
    count = verify_gate(pe)
    print(f"PASS: {count} synthetic player-chat gate scenarios; game helpers stubbed")


if __name__ == "__main__":
    main()
