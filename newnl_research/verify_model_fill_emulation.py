#!/usr/bin/env python3
"""Investigate the failed .model fill routine against the original PE bytes.

First demonstrates the raw outer-section dispatch target, then tests candidate
tables in synthetic memory and the nested PE laid out by its own section RVAs.
Neither DLL is patched or loaded through Windows; AVX, import resolution and
runtime initialization are not modeled.
Requires pefile and unicorn.
"""
import argparse
import hashlib
import struct
from pathlib import Path

import pefile
import unicorn
from unicorn.x86_const import UC_X86_REG_R8, UC_X86_REG_RAX, UC_X86_REG_RCX, UC_X86_REG_RDX, UC_X86_REG_RIP, UC_X86_REG_RSP
from verify_raw_input_emulation import IMAGE_BASE, SAMPLE_SHA256, STACK, STACK_POINTER, STOP, STUB, require, u32, u64
from inspect_embedded_profile import LOADER_DATA_VA, SIZE, EXPECTED_SHA256

MODEL = 0x1811BE000
MODEL_SIZE = 0xE2000
ENTRY = 0x181261130
IMAGE_REFERENCE = 0x181253350
SHORT_TABLE = 0x181269E70
SSE_TABLE = 0x181269EF8
BUFFER = 0x2000000
INNER_BASE = 0x5000000
INNER_FILL_RVA = 0xDDE0


def make_vm(pe):
    vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    vm.mem_map(MODEL, MODEL_SIZE)
    vm.mem_write(MODEL, pe.get_data(MODEL - IMAGE_BASE, 0xE1800))
    vm.mem_map(BUFFER, 0x4000)
    vm.mem_map(STACK, 0x10000)
    vm.mem_map(STUB, 0x1000)
    vm.mem_write(STOP, b'\xc3')
    return vm


def invoke(vm, destination, fill, length, entry=ENTRY):
    sp = STACK_POINTER + 8
    vm.mem_write(sp, u64(STOP))
    for reg, value in ((UC_X86_REG_RSP, sp), (UC_X86_REG_RCX, destination),
                       (UC_X86_REG_RDX, fill), (UC_X86_REG_R8, length)):
        vm.reg_write(reg, value)
    vm.emu_start(entry, STOP, count=100000)
    require(vm.reg_read(UC_X86_REG_RIP) == STOP, 'fill routine did not return')
    return vm.reg_read(UC_X86_REG_RAX)

def verify_cases(vm, entry):
    lengths = list(range(33)) + [33, 47, 48, 63, 64, 127, 128, 129, 255, 256, 257, 1023, 2048, 4096]
    cases = 0
    for length in lengths:
        for alignment in range(16):
            for fill in (0, 0x5a, 0x1a5):
                destination = BUFFER + 0x100 + alignment
                vm.mem_write(BUFFER, b'\xcc' * 0x1200)
                result = invoke(vm, destination, fill, length, entry)
                observed = bytes(vm.mem_read(destination - 16, length + 32))
                require(result == destination, f'return pointer length={length} alignment={alignment}')
                require(observed == b'\xcc' * 16 + bytes([fill & 0xff]) * length + b'\xcc' * 16,
                        f'buffer bounds or value length={length} alignment={alignment} fill={fill:#x}')
                cases += 1
    return cases



def verify(pe):
    vm = make_vm(pe)
    raw_entry = struct.unpack('<I', vm.mem_read(SHORT_TABLE, 4))[0]
    require(raw_entry == 0x70016002, 'unexpected raw dispatch entry')
    table_rva = SHORT_TABLE - IMAGE_BASE
    require(not any(entry.type and table_rva - 7 <= entry.rva < table_rva + 64
                    for block in pe.DIRECTORY_ENTRY_BASERELOC for entry in block.entries),
            'base relocation overlaps referenced short table')
    candidate = struct.unpack('<16I', vm.mem_read(SHORT_TABLE - 0x800, 64))
    require(candidate[0] == 0xDE32 and candidate[15] == 0xDE21,
            'unexpected candidate short table')
    try:
        invoke(vm, BUFFER + 0x100, 0x5a, 0)
    except unicorn.UcError as exc:
        require(exc.errno == unicorn.UC_ERR_FETCH_UNMAPPED and
                vm.reg_read(UC_X86_REG_RIP) == IMAGE_REFERENCE + raw_entry,
                'unexpected raw-image failure')
    else:
        raise AssertionError('raw-image zero-length dispatch unexpectedly returned')
    for length in (16, 17, 31, 32):
        destination = BUFFER + 0x101
        vm.mem_write(BUFFER, b'\xcc' * 0x200)
        require(invoke(vm, destination, 0x5a, length) == destination,
                f'raw direct-path return length={length}')
        require(bytes(vm.mem_read(destination - 1, length + 2)) ==
                b'\xcc' + b'\x5a' * length + b'\xcc', f'raw direct-path fill length={length}')


    # Analytical experiment only: candidate bytes are present 0x800 earlier in
    # the PE; copying them here does not establish how a real loader behaves.
    for table, count in ((SHORT_TABLE, 16), (SSE_TABLE, 9)):
        vm.mem_write(table, bytes(vm.mem_read(table - 0x800, count * 4)))
    vm.mem_write(0x18126C3D8, u32(0))  # select SSE, not the AVX path
    vm.mem_write(0x18126C3E0, u64(0xffffffffffffffff))  # avoid fast-string branch

    cases = verify_cases(vm, ENTRY)

    # Map the embedded PE according to its own section RVAs, not raw file offsets.
    embedded = pe.get_data(LOADER_DATA_VA - IMAGE_BASE, SIZE)
    require(hashlib.sha256(embedded).hexdigest() == EXPECTED_SHA256, 'embedded PE hash mismatch')
    inner = pefile.PE(data=embedded)
    nested_vm = unicorn.Uc(unicorn.UC_ARCH_X86, unicorn.UC_MODE_64)
    nested_vm.mem_map(INNER_BASE, inner.OPTIONAL_HEADER.SizeOfImage)
    nested_vm.mem_write(INNER_BASE, inner.get_memory_mapped_image())
    nested_vm.mem_map(BUFFER, 0x4000)
    nested_vm.mem_map(STACK, 0x10000)
    nested_vm.mem_map(STUB, 0x1000)
    nested_vm.mem_write(STOP, b'\xc3')
    require(struct.unpack('<I', nested_vm.mem_read(INNER_BASE + 0x19088, 4))[0] < 3,
            'unexpected embedded feature selector')
    nested_cases = verify_cases(nested_vm, INNER_BASE + INNER_FILL_RVA)
    return cases, nested_cases


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    data = Path(parser.parse_args().dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'DLL SHA-256 does not match')
    pe = pefile.PE(data=data)
    require(pe.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, 'unexpected image base')
    cases, nested_cases = verify(pe)
    print('PASS: raw zero-length dispatch reaches an unmapped address in the synthetic image')
    print('PASS: four 16–32-byte direct-path cases using unmodified synthetic image bytes')
    print(f'PASS: {cases} bounded fill cases with candidate tables and SSE selection supplied synthetically')
    print(f'PASS: {nested_cases} bounded fill cases from nested PE section-RVA mapping')


if __name__ == '__main__':
    main()
