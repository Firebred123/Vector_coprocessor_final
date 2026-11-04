#!/usr/bin/env bash
# rtl2gds/verif/run_matrix.sh - build tb_vcop against an RTL tree and run the
# seed/config matrix. Writes traces + summary to OUT.
#
#   run_matrix.sh [-r RTL_ROOT] [-o OUT] [-s "SEEDS"] [-t verilator|icarus] [-n NINSTR]
#
# RTL_ROOT is a checkout with the repo layout (rtl/, include/); default is the
# repo containing this script. Compare two runs with compare.sh.
#
# Exit status is non-zero if the build fails or ANY run crashes, exits
# non-zero, lacks its TBSUMMARY line, or produces a trace/txn file without the
# END completion marker. Known baseline ISA bugs (reference-model mismatches,
# deliberate HANG detection) do NOT fail this script: they are recorded in the
# summary and compared differentially by compare.sh.
set -euo pipefail
HERE="$(cd "$(dirname "$0")" && pwd)"
ROOT="$(cd "$HERE/../.." && pwd)"
OUT="$HERE/out/baseline"
SEEDS="1 2 3 4 5 6 7 8"
TOOL=verilator
NINSTR=300
while getopts "r:o:s:t:n:" o; do
  case $o in
    r) ROOT="$(cd "$OPTARG" && pwd)";; o) OUT="$OPTARG";; s) SEEDS="$OPTARG";;
    t) TOOL="$OPTARG";; n) NINSTR="$OPTARG";; *) exit 2;;
  esac
done
mkdir -p "$OUT"; OUT="$(cd "$OUT" && pwd)"
rm -f "$OUT"/*.trace "$OUT"/*.txn "$OUT"/*.log

# Same source list as the synthesis top (commercial_flow/cadence_genus_*.tcl),
# restricted to modules reachable from vector_coprocessor.
SRCS=(
  "$ROOT/rtl/include/cv32e40x_xif_pkg.sv"
  "$ROOT/rtl/core/vector_reg_file_3port.sv"
  "$ROOT/rtl/execution/vlsu.sv"
  "$ROOT/rtl/execution/vector_exec_unit.sv"
  "$ROOT/rtl/core/vector_coprocessor.sv"
)
INC=(-I"$ROOT/include" -I"$ROOT/rtl/include")
{
  echo "rtl_root=$ROOT tool=$TOOL seeds=$SEEDS ninstr=$NINSTR"
  ( cd "$ROOT" && git rev-parse HEAD 2>/dev/null || echo "no-git" )
  ( cd "$ROOT" && git status --porcelain -- rtl include 2>/dev/null || true )
  shasum -a 256 "${SRCS[@]}" "$ROOT/include/custom_opcodes.vh" "$HERE/tb_vcop.sv"
} > "$OUT/rtl_rev_$TOOL.txt"

BLD="$OUT/build_$TOOL"
rm -rf "$BLD"; mkdir -p "$BLD"
if [ "$TOOL" = verilator ]; then
  verilator --version > "$BLD/version.txt"
  verilator --binary --timing -j 4 -Wno-fatal -Wno-lint -Wno-style -Wno-MULTIDRIVEN \
    --top-module tb_vcop -Mdir "$BLD" "${INC[@]}" "${SRCS[@]}" "$HERE/tb_vcop.sv" \
    > "$BLD/build.log" 2>&1 || { tail -40 "$BLD/build.log"; echo "BUILD FAILED"; exit 1; }
  SIM=("$BLD/Vtb_vcop")
else
  { iverilog -V 2>&1 || true; } | head -1 > "$BLD/version.txt"
  iverilog -g2012 -o "$BLD/tb.vvp" "${INC[@]}" "${SRCS[@]}" "$HERE/tb_vcop.sv" \
    > "$BLD/build.log" 2>&1 || { tail -40 "$BLD/build.log"; echo "BUILD FAILED"; exit 1; }
  SIM=(vvp -n "$BLD/tb.vvp")
fi

SUM="$OUT/summary_$TOOL.txt"
: > "$SUM"
bad=0
run() { # name, plusargs...
  local name=$1; shift
  local rc=0
  "${SIM[@]}" +trace="$OUT/$name.trace" +txn="$OUT/$name.txn" "$@" > "$OUT/$name.log" 2>&1 || rc=$?
  local s; s=$(grep '^TBSUMMARY' "$OUT/$name.log" || true)
  local st=OK
  if [ $rc -ne 0 ]; then st="FAIL(exit=$rc)"; fi
  if [ -z "$s" ]; then st="FAIL(no TBSUMMARY)"; s="-"; fi
  for f in "$OUT/$name.trace" "$OUT/$name.txn"; do
    if [ ! -s "$f" ] || [ "$(tail -1 "$f" | cut -d' ' -f1)" != END ]; then st="FAIL(no END marker in $(basename "$f"))"; fi
  done
  [ "$st" = OK ] || bad=$((bad+1))
  echo "$name $st $s" | tee -a "$SUM"
}
for seed in $SEEDS; do
  for lat in 0 1; do
    for echo in 1 0; do
      run "s${seed}_l${lat}_e${echo}_st30" +seed=$seed +lat=$lat +echo_id=$echo +stall=30 +ninstr=$NINSTR
    done
  done
  run "s${seed}_l1_e1_st0"      +seed=$seed +lat=1 +echo_id=1 +stall=0  +ninstr=$NINSTR
  # lat=0 without stalls: zero-latency path fully in-domain (no UB_OOR_INDEX)
  run "s${seed}_l0_e1_st0"      +seed=$seed +lat=0 +echo_id=1 +stall=0  +ninstr=$NINSTR
  run "s${seed}_l1_e1_st30_k20" +seed=$seed +lat=1 +echo_id=1 +stall=30 +kill=20 +ninstr=$NINSTR
  # SoC-like memory: stalls only at burst start (main stall coverage, see tb header)
  run "s${seed}_l1_e1_st30_b1"     +seed=$seed +lat=1 +echo_id=1 +stall=30 +burst=1 +ninstr=$NINSTR
  run "s${seed}_l1_e0_st30_b1"     +seed=$seed +lat=1 +echo_id=0 +stall=30 +burst=1 +ninstr=$NINSTR
  run "s${seed}_l1_e1_st50_b1_k20" +seed=$seed +lat=1 +echo_id=1 +stall=50 +burst=1 +kill=20 +ninstr=$NINSTR
  run "s${seed}_l0_e1_st30_b1"     +seed=$seed +lat=0 +echo_id=1 +stall=30 +burst=1 +ninstr=$NINSTR
done
run hang_test +hang_test +lat=1
n=$(wc -l < "$SUM" | tr -d ' ')
echo "run_matrix: tool=$TOOL runs=$n failed=$bad out=$OUT" | tee -a "$SUM"
[ $bad -eq 0 ]
