#!/usr/bin/env python3
"""Exercise the identified sample's window procedure in an isolated Unicorn VM.

Internal helpers and Windows APIs are stubbed; this does not initialize the DLL.
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
    UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP,
)

from verify_raw_input_emulation import (
    CODE, IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB,
    require, u32, u64,
)

FORWARD_STUB = STUB + 0x200
HEADER_STUB = STUB + 0x300
IAT_GET_RAW_INPUT_DATA = 0x18056B698
IAT_CALL_WINDOW_PROC = 0x18056B6A0
GLOBALS = {
    "enabled": 0x180CC3E1A,
    "shutdown": 0x180CC3E1E,
    "hotkey_mode": 0x180CC3E1C,
    "hotkey_count": 0x180CD1E20,
    "hotkey": 0x18091A194,
    "menu": 0x18091A190,
    "original": 0x180CD1E58,
    "counter": 0x180CD1AA0,
    "context": 0x180CA0A50,
    "notify": 0x180920F20,
}
HELPERS = {
    0x1801C5510: "tracker",
    0x1800725E0: "script",
    0x1804279C0: "ui",
    0x1803BB180: "tick1",
    0x1800E46D0: "tick2",
    0x18021ACE0: "tick3",
    0x18021FC60: "tick4",
    0x18022CBC0: "tick5",
    0x180232450: "tick6",
    0x1800736E0: "tick7",
}


def execute(pe, message, *, enabled=1, shutdown=0, menu=0, script=0, ui=0,
            has_context=False, raw_type=0, raw_error=False, wparam=0x33,
            lparam=0x44, hotkey=0x70):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    pages = {CODE, STUB, STACK, IAT_GET_RAW_INPUT_DATA & ~0xFFF}
    pages.update(address & ~0xFFF for address in GLOBALS.values())
    pages.update(address & ~0xFFF for address in HELPERS)
    for page in sorted(pages):
        vm.mem_map(page, 0x10000 if page == STACK else 0x1000)
    vm.mem_write(CODE, pe.get_data(CODE - IMAGE_BASE, 0x1000))
    vm.mem_write(STUB, b"\x90" * 0x1000)
    for address in HELPERS:
        vm.mem_write(address, b"\x90")
    for name, value in (("enabled", enabled), ("shutdown", shutdown),
                        ("menu", menu), ("notify", 0)):
        vm.mem_write(GLOBALS[name], bytes([value]))
    vm.mem_write(GLOBALS["hotkey"], u32(hotkey))
    vm.mem_write(GLOBALS["context"], u64(0x5000000 if has_context else 0))
    vm.mem_write(GLOBALS["original"], u64(0x7777))
    vm.mem_write(IAT_GET_RAW_INPUT_DATA, u64(HEADER_STUB))
    vm.mem_write(IAT_CALL_WINDOW_PROC, u64(FORWARD_STUB))
    vm.mem_write(STACK_POINTER, u64(STOP))
    vm.reg_write(UC_X86_REG_RSP, STACK_POINTER)
    for register, value in ((UC_X86_REG_RCX, 0x1234), (UC_X86_REG_RDX, message),
                            (UC_X86_REG_R8, wparam), (UC_X86_REG_R9, lparam)):
        vm.reg_write(register, value)
    calls = []

    def intercept(machine, address, _size, _context):
        if address in HELPERS:
            name = HELPERS[address]
            result = script if name == "script" else ui if name == "ui" else 0
        elif address == FORWARD_STUB:
            name, result = "forward", 0x7B
            stack_pointer = machine.reg_read(UC_X86_REG_RSP)
            require(machine.reg_read(UC_X86_REG_RCX) == 0x7777, "wrong previous procedure")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x1234, "wrong forwarded HWND")
            require(machine.reg_read(UC_X86_REG_R8) == message, "wrong forwarded message")
            require(machine.reg_read(UC_X86_REG_R9) == wparam, "wrong forwarded wParam")
            forwarded_lparam = struct.unpack("<Q", machine.mem_read(stack_pointer + 0x28, 8))[0]
            require(forwarded_lparam == lparam, "wrong forwarded lParam")
        elif address == HEADER_STUB:
            name, result = "header", 0xFFFFFFFF if raw_error else 24
            stack_pointer = machine.reg_read(UC_X86_REG_RSP)
            require(machine.reg_read(UC_X86_REG_RCX) == lparam, "wrong raw-input handle")
            require(machine.reg_read(UC_X86_REG_RDX) == 0x10000005, "expected RID_HEADER")
            header_size = struct.unpack("<I", machine.mem_read(stack_pointer + 0x28, 4))[0]
            require(header_size == 24, "wrong RAWINPUTHEADER size")
            machine.mem_write(machine.reg_read(UC_X86_REG_R8), u32(raw_type))
        else:
            return
        calls.append(name)
        stack_pointer = machine.reg_read(UC_X86_REG_RSP)
        return_address = struct.unpack("<Q", machine.mem_read(stack_pointer, 8))[0]
        machine.reg_write(UC_X86_REG_RAX, result)
        machine.reg_write(UC_X86_REG_RSP, stack_pointer + 8)
        machine.reg_write(UC_X86_REG_RIP, return_address)

    vm.hook_add(unicorn.UC_HOOK_CODE, intercept)
    vm.emu_start(0x1801CD870, STOP, count=10000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, "instruction limit or unexpected exit")
    counter = struct.unpack("<I", vm.mem_read(GLOBALS["counter"], 4))[0]
    require(counter == 0, "callback counter did not balance")
    hotkey_count = struct.unpack("<I", vm.mem_read(GLOBALS["hotkey_count"], 4))[0]
    hotkey_mode = vm.mem_read(GLOBALS["hotkey_mode"], 1)[0]
    return vm.reg_read(UC_X86_REG_RAX), calls, hotkey_count, hotkey_mode


def verify(pe):
    count = 0
    for message in range(0x200, 0x210):
        result, calls, _, _ = execute(pe, message, menu=1)
        expected = 0 if message <= 0x20C or message == 0x20E else 0x7B
        expected_calls = ["tracker", "script"] + ([] if expected == 0 else ["forward"])
        require((result, calls) == (expected, expected_calls), f"message {message:#x}: wrong route")
        count += 1
    for raw_type, raw_error, expected in ((0, False, 0), (1, False, 0x7B),
                                          (2, False, 0x7B), (0, True, 0x7B)):
        result, calls, _, _ = execute(pe, 0xFF, menu=1, raw_type=raw_type, raw_error=raw_error)
        expected_calls = ["tracker", "script", "header"] + ([] if expected == 0 else ["forward"])
        require((result, calls) == (expected, expected_calls), "WM_INPUT: wrong route")
        count += 1
    result, calls, _, _ = execute(pe, 0xFF, menu=0)
    require((result, calls) == (0x7B, ["tracker", "script", "forward"]),
            "WM_INPUT: menu-closed route changed")
    count += 1
    routes = (
        ({"enabled": 0, "menu": 1}, 0x7B, ["forward"]),
        ({"shutdown": 1, "menu": 1}, 0x7B, ["forward"]),
        ({"menu": 0}, 0x7B, ["tracker", "script", "forward"]),
        ({"menu": 0, "script": 1}, 0, ["tracker", "script"]),
        ({"menu": 0, "has_context": True, "ui": 1}, 0x7B, ["tracker", "script", "forward"]),
        ({"menu": 1, "script": 1, "has_context": True, "ui": 1}, 0, ["tracker", "script"]),
        ({"menu": 1, "has_context": True, "ui": 1}, 1, ["tracker", "script", "ui"]),
        ({"menu": 1, "has_context": True, "ui": 0}, 0, ["tracker", "script", "ui"]),
    )
    for options, expected, expected_calls in routes:
        result, calls, _, _ = execute(pe, 0x200, **options)
        require((result, calls) == (expected, expected_calls), f"wrong route: {options}")
        count += 1
    for message, lparam, expected_count in ((0x100, 0, 1), (0x104, 0, 1),
                                            (0x100, 1 << 30, 0), (0x101, 0, 0)):
        result, _, hotkey_count, hotkey_mode = execute(pe, message, wparam=0x70, lparam=lparam)
        require((result, hotkey_count, hotkey_mode) == (0x7B, expected_count, expected_count),
                f"key message {message:#x}: wrong hotkey state")
        count += 1
    result, calls, _, _ = execute(pe, 0x8057, shutdown=1)
    require((result, calls) == (0, []), "private message: shutdown route changed")
    count += 1
    result, calls, _, _ = execute(pe, 0x8057)
    require((result, calls) == (0, [f"tick{i}" for i in range(1, 8)]),
            "private message: helper sequence changed")
    return count + 1


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
    print(f"PASS: {count} isolated window-message scenarios; all helpers and APIs stubbed")


if __name__ == "__main__":
    main()
