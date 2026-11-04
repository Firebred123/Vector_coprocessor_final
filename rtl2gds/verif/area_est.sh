#!/usr/bin/env bash
# rtl2gds/verif/area_est.sh [-r RTL_ROOT] [-o OUT] [-l LIBDIR] [-g]
#   -g  insert library ICG clock gating (yosys clockgate, min 8 flops/enable)
#       before flop mapping, to estimate the flow-level clock-gating candidate
#
# Quick, open-source RELATIVE area estimate of the vector_coprocessor top
# (sv2v -> Yosys synth -> ABC mapping to the ASAP7 RVT SS libs shipped in
# PDK/LIB). Used only to rank RTL candidates before spending Genus runs:
# absolute numbers are NOT Genus/Innovus results and must not be reported as
# such. No timing-driven sizing is done (ABC area recovery only).
set -euo pipefail
HERE="$(cd "$(dirname "$0")" && pwd)"
ROOT="$(cd "$HERE/../.." && pwd)"
OUT=""
LIBDIR=""
CG=""
while getopts "r:o:l:g" o; do
  case $o in r) ROOT="$(cd "$OPTARG" && pwd)";; o) OUT="$OPTARG";; l) LIBDIR="$OPTARG";; g) CG=1;; *) exit 2;; esac
done
LIBDIR="${LIBDIR:-$ROOT/PDK/LIB}"
[ -d "$LIBDIR" ] || LIBDIR="$HERE/../../PDK/LIB"
OUT="${OUT:-$HERE/out/area_$(basename "$ROOT")}"
mkdir -p "$OUT"; OUT="$(cd "$OUT" && pwd)"

sv2v -I"$ROOT/include" -I"$ROOT/rtl/include" \
  "$ROOT/rtl/include/cv32e40x_xif_pkg.sv" "$ROOT/rtl/core/vector_reg_file_3port.sv" \
  "$ROOT/rtl/execution/vlsu.sv" "$ROOT/rtl/execution/vector_exec_unit.sv" \
  "$ROOT/rtl/core/vector_coprocessor.sv" > "$OUT/design.v"

# Merge the five ASAP7 libs into one liberty for ABC (cells only, header once).
python3 - "$LIBDIR" "$OUT/asap7_merged.lib" <<'EOF'
import sys, glob, os, re
libdir, out = sys.argv[1], sys.argv[2]
files = sorted(glob.glob(os.path.join(libdir, "asap7sc7p5t_*_RVT_SS_*.lib")))
def split(txt):
    i = txt.find("\n  cell (") if "\n  cell (" in txt else txt.find("cell (")
    j = txt.rstrip().rfind("}")
    return txt[:i], txt[i:j]
hdr, body = split(open(files[0]).read())
bodies = [body] + [split(open(f).read())[1] for f in files[1:]]
open(out, "w").write(hdr + "\n".join(bodies) + "\n}\n")
EOF

LIB="$OUT/asap7_merged.lib"
CGSTEP=""
if [ -n "$CG" ]; then CGSTEP="clockgate -liberty $LIB -min_net_size 8; opt_clean"; fi
yosys -l "$OUT/yosys.log" -q -p "
  read_verilog -sv $OUT/design.v
  hierarchy -top vector_coprocessor
  synth -top vector_coprocessor -flatten
  delete t:\$print
  opt_clean
  tee -o $OUT/stat_generic.txt stat
  $CGSTEP
  dfflibmap -liberty $LIB
  abc -liberty $LIB
  opt_clean
  tee -o $OUT/stat_asap7.txt stat -liberty $LIB
  write_verilog -noattr $OUT/netlist.v
"
grep -E "Chip area|DFF|ICG" "$OUT/stat_asap7.txt" | head -20
