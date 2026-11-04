#!/usr/bin/env bash
# rtl2gds/verif/gate_selftest.sh BASE_OUT [WORK]
# Negative tests of the harness itself (independent of RTL mutants, which are
# in eval_candidates.sh). Every case below MUST be rejected; prints
# SELFTEST-OK/SELFTEST-FAIL per case and exits non-zero if any case passes.
set -uo pipefail
HERE="$(cd "$(dirname "$0")" && pwd)"; REPO="$(cd "$HERE/../.." && pwd)"
B=${1:?baseline run_matrix output dir}; W=${2:-$HERE/out/selftest}
rm -rf "$W"; mkdir -p "$W"; W="$(cd "$W" && pwd)"
bad=0
expect_reject() { # name, command...
  local name=$1; shift
  if "$@" > "$W/$name.log" 2>&1; then echo "SELFTEST-FAIL $name (accepted)"; bad=$((bad+1));
  else echo "SELFTEST-OK $name (rejected: $(tail -1 "$W/$name.log"))"; fi
}
# 1. two empty-but-equal trace sets (zero-run / empty-file false pass)
mkdir -p "$W/empty"; : > "$W/empty/x.trace"; : > "$W/empty/summary_x.txt"
expect_reject empty_equal "$HERE/compare.sh" "$W/empty" "$W/empty"
# 2. directory with no runs at all
mkdir -p "$W/none"
expect_reject zero_runs "$HERE/compare.sh" "$W/none" "$W/none"
# 3. run missing from candidate
cp -R "$B" "$W/missing"; rm "$W/missing"/s3_l1_e1_st0.trace
expect_reject missing_run "$HERE/compare.sh" "$B" "$W/missing"
# 4. truncated trace (no END completion marker)
cp -R "$B" "$W/trunc"; sed -i.bak '$d' "$W/trunc"/s3_l1_e1_st0.trace
expect_reject truncated "$HERE/compare.sh" "$B" "$W/trunc"
# 5. intentionally wrong output in an in-domain run (one result data word)
cp -R "$B" "$W/wrong"; f="$W/wrong/s2_l1_e1_st0.trace"
awk 'done==0 && / RESULT / {sub(/data=[0-9a-f]+/, "data=deadbeef"); done=1} {print}' "$f" > "$f.new" && mv "$f.new" "$f"
expect_reject wrong_output "$HERE/compare.sh" "$B" "$W/wrong"
# 6. simulator fatal / crash: DUT tree with an elaboration-time $fatal
t="$W/tree_fatal"; mkdir -p "$t"; cp -R "$REPO/rtl" "$REPO/include" "$t/"
sed -i.bak 's/^endmodule/  initial begin #50; $fatal(1, "selftest crash"); end\nendmodule/' "$t/rtl/execution/vlsu.sv"
expect_reject sim_fatal_run_matrix "$HERE/run_matrix.sh" -r "$t" -s 1 -o "$W/sim_fatal"
expect_reject sim_fatal_compare "$HERE/compare.sh" "$B" "$W/sim_fatal"
# 7. build failure
t="$W/tree_build"; mkdir -p "$t"; cp -R "$REPO/rtl" "$REPO/include" "$t/"
echo "this is not verilog" >> "$t/rtl/execution/vlsu.sv"
expect_reject build_failure "$HERE/run_matrix.sh" -r "$t" -s 1 -o "$W/sim_build"
echo "gate_selftest: failures=$bad"
[ $bad -eq 0 ]
