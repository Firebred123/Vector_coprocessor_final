#!/usr/bin/env python
"""Check exported GDS records/references; this is not a DRC or LVS checker.

Uses only Python 2.6-compatible standard-library APIs for the legacy EDA server.
Usage: python verify_gds_structure.py FILE.gds [TOP]
"""
from __future__ import print_function

from collections import defaultdict
import hashlib
import json
import os
import struct
import sys


def real8(data):
    b = bytearray(data)
    if len(b) != 8:
        raise ValueError("invalid GDS real8 length")
    mantissa = 0
    for value in b[1:]:
        mantissa = mantissa * 256 + value
    return (-1 if b[0] & 128 else 1) * (mantissa / float(2 ** 56)) * 16 ** ((b[0] & 127) - 64)


def inspect(path, top="vector_coprocessor"):
    before = os.stat(path)
    cells = {}
    references = defaultdict(list)
    geometry = defaultdict(int)
    layers = defaultdict(lambda: defaultdict(int))
    current = None
    element = None
    layer = None
    has_xy = False
    units = None
    ended = False
    records = 0
    with open(path, "rb") as stream:
        while True:
            header = stream.read(4)
            if not header:
                break
            if len(header) != 4:
                raise ValueError("truncated GDS record header")
            size, kind, dtype = struct.unpack(">HBB", header)
            if size < 4 or size % 2:
                raise ValueError("invalid GDS record length")
            data = stream.read(size - 4)
            if len(data) != size - 4:
                raise ValueError("truncated GDS record payload")
            records += 1
            if records == 1 and kind != 0:
                raise ValueError("GDS HEADER record missing")
            if kind == 3:  # UNITS: database unit in user units, then metres.
                if len(data) != 16:
                    raise ValueError("invalid UNITS record")
                units = real8(data[8:])
                if not 0 < units < 1:
                    raise ValueError("invalid database unit")
            elif kind == 5:  # BGNSTR
                if current is not None:
                    raise ValueError("nested structure")
            elif kind == 6:  # STRNAME
                current = data.rstrip(b"\0").decode("ascii")
                if current in cells:
                    raise ValueError("duplicate structure: " + current)
                cells[current] = True
            elif kind == 7:  # ENDSTR
                if current is None or element is not None:
                    raise ValueError("unbalanced structure/element")
                current = None
            elif kind in (8, 9, 10, 11, 12, 21, 45):
                if current is None or element is not None:
                    raise ValueError("element outside structure or nested element")
                element, layer, has_xy = kind, None, False
            elif kind == 13:  # LAYER
                if len(data) != 2 or element is None:
                    raise ValueError("invalid LAYER record")
                layer = struct.unpack(">H", data)[0]
            elif kind == 16:  # XY
                if element is None or not data or len(data) % 8:
                    raise ValueError("invalid XY coordinates")
                has_xy = True
            elif kind == 18:  # SNAME
                if element not in (10, 11):
                    raise ValueError("reference name outside SREF/AREF")
                references[current].append(data.rstrip(b"\0").decode("ascii"))
            elif kind == 17:  # ENDEL
                if element is None:
                    raise ValueError("unbalanced ENDEL")
                if element in (8, 9, 45):
                    if layer is None or not has_xy:
                        raise ValueError("geometry missing layer/coordinates")
                    geometry[current] += 1
                    layers[current][layer] += 1
                element = None
            elif kind == 4:  # ENDLIB; some writers append zero padding.
                if current is not None or element is not None:
                    raise ValueError("ENDLIB inside structure/element")
                if any(bytearray(stream.read())):
                    raise ValueError("nonzero bytes after ENDLIB")
                ended = True
                break
    if not ended or units is None:
        raise ValueError("missing ENDLIB or UNITS")
    if top not in cells:
        raise ValueError("expected top structure missing: " + top)
    missing = sorted(set(name for names in references.values() for name in names) - set(cells))
    if missing:
        raise ValueError("undefined referenced structures: " + ", ".join(missing))
    visiting, done = set(), set()

    def visit(cell):
        if cell in visiting:
            raise ValueError("cyclic structure reference: " + cell)
        if cell in done:
            return
        visiting.add(cell)
        for child in references[cell]:
            visit(child)
        visiting.remove(cell)
        done.add(cell)

    for cell in cells:
        visit(cell)
    if not geometry[top]:
        raise ValueError("expected routed top has no direct geometry")
    digest = hashlib.sha256()
    with open(path, "rb") as stream:
        for block in iter(lambda: stream.read(1024 * 1024), b""):
            digest.update(block)
    after = os.stat(path)
    if (before.st_size, before.st_mtime) != (after.st_size, after.st_mtime):
        raise ValueError("GDS changed during inspection")
    return {
        "check": "record_integrity_and_structure_references_only",
        "path": path, "sha256": digest.hexdigest(), "bytes": after.st_size,
        "records": records, "structures": len(cells), "top": top,
        "database_unit_metres": units, "undefined_references": missing,
        "top_geometry_elements": geometry[top],
        "top_reference_instances": len(references[top]),
        "top_geometry_counts_by_layer": dict((str(k), v) for k, v in layers[top].items()),
    }


if __name__ == "__main__":
    try:
        if len(sys.argv) not in (2, 3):
            raise ValueError("usage: verify_gds_structure.py FILE.gds [TOP]")
        result = inspect(sys.argv[1], sys.argv[2] if len(sys.argv) == 3 else "vector_coprocessor")
        print(json.dumps(result, indent=2, sort_keys=True))
    except (ValueError, IOError, OSError, UnicodeError) as error:
        print("GDS structure check FAILED: " + str(error), file=sys.stderr)
        sys.exit(1)
