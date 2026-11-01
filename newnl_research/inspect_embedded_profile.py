#!/usr/bin/env python3
"""Inspect the embedded PE referenced by the sample's temporary-file loader.

Does not load or execute either DLL. Optional extraction refuses to overwrite an
existing file. Requires pefile. The input is identified by SHA-256 first.
"""
import argparse
import hashlib
from pathlib import Path

import pefile

IMAGE_BASE = 0x180000000
SAMPLE_SHA256 = '03c8ab74b4318cf17c87be8b39f4d868dba4ee1aa45d60fe38ab781a54b3eb57'


def require(condition, message):
    if not condition:
        raise ValueError(message)

LOADER_DATA_VA = 0x181253F50
SIZE = 0x19E00
EXPECTED_SHA256 = '5166d43e2ec15d1dad82823bbffc4508064ed0dac8720498ae165d3d0314ce6a'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('dll', nargs='?', default='newnl.dll')
    parser.add_argument('--extract', metavar='NEW_FILE', help='write the exact embedded bytes to a new file')
    args = parser.parse_args()
    data = Path(args.dll).read_bytes()
    require(hashlib.sha256(data).hexdigest() == SAMPLE_SHA256, 'outer DLL SHA-256 does not match')
    outer = pefile.PE(data=data)
    require(outer.OPTIONAL_HEADER.ImageBase == IMAGE_BASE, 'unexpected outer image base')
    offset = outer.get_offset_from_rva(LOADER_DATA_VA - IMAGE_BASE)
    embedded = data[offset:offset + SIZE]
    require(len(embedded) == SIZE and hashlib.sha256(embedded).hexdigest() == EXPECTED_SHA256,
            'embedded bytes do not match the sample')
    inner = pefile.PE(data=embedded)
    require(inner.FILE_HEADER.Machine == 0x8664, 'unexpected embedded machine')
    print(f'Outer file offset: {offset:#x}; loader data VA: {LOADER_DATA_VA:#x}; length: {SIZE:#x}')
    print(f'Embedded SHA-256: {EXPECTED_SHA256}')
    print(f'Embedded name: {inner.DIRECTORY_ENTRY_EXPORT.name.decode("ascii")}')
    print(f'Machine: AMD64; preferred image base: {inner.OPTIONAL_HEADER.ImageBase:#x}; image size: {inner.OPTIONAL_HEADER.SizeOfImage:#x}')
    print('Exports:', ', '.join(f'{s.name.decode("ascii")} RVA {s.address:#x}' for s in inner.DIRECTORY_ENTRY_EXPORT.symbols if s.name))
    print('Imports:', ', '.join(f'{x.dll.decode("ascii")} ({len(x.imports)})' for x in inner.DIRECTORY_ENTRY_IMPORT))
    print('Sections: name RVA virtual-size raw-offset raw-size')
    for section in inner.sections:
        name = section.Name.rstrip(b'\0').decode('ascii')
        print(f'  {name} {section.VirtualAddress:#x} {section.Misc_VirtualSize:#x} {section.PointerToRawData:#x} {section.SizeOfRawData:#x}')
    if args.extract:
        try:
            with Path(args.extract).open('xb') as output:
                output.write(embedded)
        except FileExistsError:
            parser.error(f'extraction destination already exists: {args.extract}')
        print(f'Extracted exact bytes to new file: {args.extract}')


if __name__ == '__main__':
    main()
