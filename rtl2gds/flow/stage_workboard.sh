#!/bin/sh
# Mirror the design sources and flow files into the WorkBoard staging tree
# (workboard/vector_coprocessor), which WorkBoard exports to
# ~/Desktop/rtl2gds/vector_coprocessor on the EDA server. Only open source RTL and
# our own flow scripts are staged; no PDK/library content.
set -e
repo=$(cd "$(dirname "$0")/../.." && pwd)
wb=$repo/workboard/vector_coprocessor
mkdir -p "$wb/rtl/core" "$wb/rtl/execution" "$wb/rtl/include" "$wb/include" "$wb/flow"
for f in rtl/include/cv32e40x_xif_pkg.sv rtl/core/vector_reg_file_3port.sv \
         rtl/execution/vlsu.sv rtl/execution/vector_exec_unit.sv rtl/core/vector_coprocessor.sv \
         include/custom_opcodes.vh; do
  cp "$repo/$f" "$wb/$f"
done
rsync -a --delete --exclude '*.sh' "$repo/rtl2gds/flow/" "$wb/flow/"
echo "staged into $wb"
