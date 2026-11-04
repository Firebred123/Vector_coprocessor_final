#!/usr/bin/env bash
# rtl2gds/verif/eval_candidates.sh [WORK_DIR]
#
# Reproducible evidence driver for rtl-review area candidates. For each entry
# below it copies the repo's rtl/ + include/ into a scratch tree, applies the
# candidate patches (design RTL in the repo is never touched), runs the matrix
# on Verilator and Icarus, compares against the baseline in the required mode,
# and runs the relative Yosys/ABC area estimate. Then it runs gate self-tests:
# injected mutants must FAIL the gate.
#
# Output: WORK_DIR/results.txt (default rtl2gds/verif/out/eval).
set -uo pipefail
HERE="$(cd "$(dirname "$0")" && pwd)"
REPO="$(cd "$HERE/../.." && pwd)"
W="${1:-$HERE/out/eval}"; mkdir -p "$W"; W="$(cd "$W" && pwd)"
P="$HERE/candidates"
RES="$W/results.txt"; : > "$RES"
log() { echo "$*" | tee -a "$RES"; }

mktree() { # name -> fresh tree with repo rtl/include
  local t="$W/tree_$1"; rm -rf "$t"; mkdir -p "$t"
  cp -R "$REPO/rtl" "$REPO/include" "$t/"; echo "$t"
}

log "# eval_candidates $(date -u +%FT%TZ) repo=$(cd "$REPO" && git rev-parse --short HEAD)"
log "# yosys: $(yosys -V)  verilator: $(verilator --version)  icarus: $({ iverilog -V 2>&1 || true; } | head -1)"

# Baseline (unchanged repo RTL)
"$HERE/run_matrix.sh" -o "$W/sim_base_v" > /dev/null || log "BASELINE verilator run_matrix FAILED"
"$HERE/run_matrix.sh" -t icarus -o "$W/sim_base_i" > /dev/null || log "BASELINE icarus run_matrix FAILED"
log "baseline sim cross-check icarus vs verilator: $("$HERE/compare.sh" "$W/sim_base_i" "$W/sim_base_v" cycle | tail -1)"
"$HERE/area_est.sh" -r "$REPO" -o "$W/area_base" > /dev/null 2>&1
base_area=$(grep 'Chip area' "$W/area_base/stat_asap7.txt" | awk '{print $NF}')
log "baseline yosys_asap7_area=$base_area flops=$(grep DFFASRHQN "$W/area_base/stat_asap7.txt" | awk '{print $1}')"

# name | mode | patches (space separated) | optional sed on vector_coprocessor.sv
CANDS=(
  "R1|cycle|R1_fused_muladd.patch|"
  "R2|cycle|R2_drop_store_data_q.patch|"
  "R1R2|cycle|R1_fused_muladd.patch R2_drop_store_data_q.patch|"
  "R5L8|txn|R5_time_multiplexed_alu.patch|s/parameter int ALU_LANES = 2/parameter int ALU_LANES = 8/"
  "R5L4|txn|R5_time_multiplexed_alu.patch|s/parameter int ALU_LANES = 2/parameter int ALU_LANES = 4/"
  "R5L2|txn|R5_time_multiplexed_alu.patch|"
  "R5L1|txn|R5_time_multiplexed_alu.patch|s/parameter int ALU_LANES = 2/parameter int ALU_LANES = 1/"
  "R5L4R2|txn|R5_time_multiplexed_alu.patch R2_drop_store_data_q.patch|s/parameter int ALU_LANES = 2/parameter int ALU_LANES = 4/"
  "R5L2R2|txn|R5_time_multiplexed_alu.patch R2_drop_store_data_q.patch|"
)
for c in "${CANDS[@]}"; do
  IFS='|' read -r name mode patches sedexpr <<< "$c"
  t=$(mktree "$name")
  ok=1
  for p in $patches; do (cd "$t" && patch -s -p1 < "$P/$p") || { log "$name PATCH FAILED $p"; ok=0; }; done
  if [ -n "$sedexpr" ]; then
    sed -i.bak "$sedexpr" "$t/rtl/core/vector_coprocessor.sv"
    cmp -s "$t/rtl/core/vector_coprocessor.sv" "$t/rtl/core/vector_coprocessor.sv.bak" && { log "$name SED NO-OP"; ok=0; }
    rm -f "$t/rtl/core/vector_coprocessor.sv.bak"
  fi
  [ $ok = 1 ] || continue
  "$HERE/run_matrix.sh" -r "$t" -o "$W/sim_${name}_v" > /dev/null; rv=$?
  "$HERE/run_matrix.sh" -r "$t" -t icarus -o "$W/sim_${name}_i" > /dev/null; ri=$?
  gv=$("$HERE/compare.sh" "$W/sim_base_v" "$W/sim_${name}_v" "$mode" | tail -1)
  gi=$("$HERE/compare.sh" "$W/sim_base_i" "$W/sim_${name}_i" "$mode" | tail -1)
  "$HERE/area_est.sh" -r "$t" -l "$REPO/PDK/LIB" -o "$W/area_$name" > /dev/null 2>&1
  a=$(grep 'Chip area' "$W/area_$name/stat_asap7.txt" | awk '{print $NF}')
  fl=$(grep DFFASRHQN "$W/area_$name/stat_asap7.txt" | awk '{print $1}')
  cyc=$(grep '^s1_l1_e1_st0 ' "$W/sim_${name}_v/summary_verilator.txt" | grep -o 'cycles=[0-9]*')
  pct=$(python3 -c "print(f'{($a-$base_area)/$base_area*100:+.1f}%')")
  verdict=PASS
  { [ $rv -ne 0 ] || [ $ri -ne 0 ]; } && verdict=FAIL
  "$HERE/compare.sh" "$W/sim_base_v" "$W/sim_${name}_v" "$mode" > /dev/null || verdict=FAIL
  "$HERE/compare.sh" "$W/sim_base_i" "$W/sim_${name}_i" "$mode" > /dev/null || verdict=FAIL
  log "$name mode=$mode gate=$verdict area=$a ($pct) flops=$fl s1_l1_st0_$cyc | verilator: $gv | icarus: $gi"
done

# Flow-level clock-gating estimate (yosys clockgate with the library ICG) on
# the baseline and the main RTL candidates. Function is unchanged by CG; its
# equivalence is a flow/LEC matter, not a simulation one.
for name in base R2 R5L4R2 R5L2R2; do
  r="$W/tree_$name"; [ "$name" = base ] && r="$REPO"
  "$HERE/area_est.sh" -g -r "$r" -l "$REPO/PDK/LIB" -o "$W/areacg_$name" > /dev/null 2>&1
  a=$(grep 'Chip area' "$W/areacg_$name/stat_asap7.txt" | awk '{print $NF}')
  pct=$(python3 -c "print(f'{($a-$base_area)/$base_area*100:+.1f}%')")
  log "${name}+CG area=$a ($pct) icg=$(grep ICGx "$W/areacg_$name/stat_asap7.txt" | awk '{print $1}')"
done

# Gate self-test: each mutant must FAIL (built on R1R2 tree, cycle mode).
MUTS=(
  "M1_sub_carry|rtl/execution/vector_exec_unit.sv|s/ + {31'd0, is_sub};/;/"
  "M2_store_word_swap|rtl/execution/vlsu.sv|s/store_data_i\[req_cnt_q \* 32 +: 32\]/store_data_i[(req_cnt_q ^ 4'd1) * 32 +: 32]/"
  "M3_raddr2_unregistered|rtl/core/vector_coprocessor.sv|s/\.raddr2_i(accept_instr ? xif_issue_req_i.instr\[24:20\] : rs2_q)/.raddr2_i(xif_issue_req_i.instr[24:20])/"
  "M4_vrf_write_v15_lost|rtl/core/vector_reg_file_3port.sv|s/end else if (we_i \&\& (waddr_i != 5'b0)) begin/end else if (we_i \&\& (waddr_i != 5'b0) \&\& (waddr_i != 5'd15)) begin/"
)
for m in "${MUTS[@]}"; do
  IFS='|' read -r name file sedexpr <<< "$m"
  t=$(mktree "$name")
  (cd "$t" && patch -s -p1 < "$P/R1_fused_muladd.patch" && patch -s -p1 < "$P/R2_drop_store_data_q.patch")
  cp "$t/$file" "$t/orig.sv"; sed -i.bak "$sedexpr" "$t/$file"; rm -f "$t/$file.bak"
  if cmp -s "$t/$file" "$t/orig.sv"; then log "$name SELFTEST-INVALID (mutation did not apply)"; continue; fi
  "$HERE/run_matrix.sh" -r "$t" -o "$W/sim_${name}_v" > /dev/null
  out=$("$HERE/compare.sh" "$W/sim_base_v" "$W/sim_${name}_v" cycle | tail -1)
  if "$HERE/compare.sh" "$W/sim_base_v" "$W/sim_${name}_v" cycle > /dev/null; then
    log "$name SELFTEST-FAIL (mutant passed the gate) | $out"
  else
    log "$name SELFTEST-OK (mutant caught) | $out"
  fi
done
log "# harness negative tests (gate_selftest.sh):"
"$HERE/gate_selftest.sh" "$W/sim_base_v" "$W/selftest" | tee -a "$RES"
log "# done"
