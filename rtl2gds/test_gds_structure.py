"""Negative and positive fixtures for the server-side GDS structural checker."""
import os
import struct
import tempfile
import unittest

from verify_gds_structure import inspect


def record(kind, data=b"", dtype=0):
    data += b"\0" * (len(data) % 2)
    return struct.pack(">HBB", len(data) + 4, kind, dtype) + data


def real(value):
    exponent = 64
    while value >= 1:
        value /= 16
        exponent += 1
    while value < 1 / 16:
        value *= 16
        exponent -= 1
    return bytes([exponent]) + int(value * 2 ** 56).to_bytes(7, "big")


def cell(name, reference=None, geometry=True):
    result = record(5, b"\0" * 24, 2) + record(6, name.encode(), 6)
    if geometry:
        result += record(8) + record(13, struct.pack(">H", 1), 2)
        result += record(14, b"\0\0", 2)
        result += record(16, struct.pack(">10i", 0, 0, 10, 0, 10, 10, 0, 10, 0, 0), 3)
        result += record(17)
    if reference:
        result += record(10) + record(18, reference.encode(), 6)
        result += record(16, b"\0" * 8, 3) + record(17)
    return result + record(7)


def library(body):
    return (record(0, b"\0\x03", 2) + record(1, b"\0" * 24, 2) + record(2, b"test", 6)
            + record(3, real(0.001) + real(1e-9), 5) + body + record(4))


class StructureCheck(unittest.TestCase):
    def check_data(self, data):
        with tempfile.TemporaryDirectory() as directory:
            path = os.path.join(directory, "test.gds")
            with open(path, "wb") as stream:
                stream.write(data)
            return inspect(path, "top")

    def test_merged_library_and_routed_top(self):
        result = self.check_data(library(cell("top", "leaf") + cell("leaf")))
        self.assertEqual(result["structures"], 2)
        self.assertEqual(result["undefined_references"], [])
        self.assertEqual(result["top_reference_instances"], 1)
        self.assertEqual(result["top_geometry_elements"], 1)
        self.assertAlmostEqual(result["database_unit_metres"] / 1e-9, 1.0)

    def test_missing_merged_cell_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "undefined referenced"):
            self.check_data(library(cell("top", "missing")))

    def test_truncated_payload_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "truncated"):
            self.check_data(library(cell("top"))[:-6])

    def test_duplicate_cell_names_are_rejected(self):
        with self.assertRaisesRegex(ValueError, "duplicate structure"):
            self.check_data(library(cell("top") + cell("top")))

    def test_missing_top_geometry_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "no direct geometry"):
            self.check_data(library(cell("top", "leaf", geometry=False) + cell("leaf")))

    def test_cyclic_references_are_rejected(self):
        with self.assertRaisesRegex(ValueError, "cyclic structure"):
            self.check_data(library(cell("top", "leaf") + cell("leaf", "top")))

    def test_missing_top_is_rejected(self):
        with self.assertRaisesRegex(ValueError, "expected top"):
            self.check_data(library(cell("other")))


if __name__ == "__main__":
    unittest.main()
