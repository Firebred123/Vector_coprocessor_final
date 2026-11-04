#!/usr/bin/env bash
# rtl2gds/verif/compare.sh BASE_OUT CAND_OUT [cycle|txn]
#
# Differential functional gate between two run_matrix.sh output directories.
#   cycle (default): cycle-accurate port traces must be identical (for area
#                    changes that must not alter timing behaviour).
#   txn:             ordered handshake payloads (issue/resp, every memory
#                    request, every result) + final VRF dump + memory checksum
#                    must be identical; cycle numbers are ignored (for changes
#                    that add latency but must preserve function).
#
# FAILS (exit 1) on: missing directories, mismatched run sets in either
# direction, any run_matrix FAIL line, any file that is empty or lacks the END
# completion marker, and any in-domain difference.
#
# Documented exclusion (reported, never silent): a run whose baseline or
# candidate END line reports ub_oor>0 exercised the undefined out-of-range
# load_data write in vlsu.sv (zero-latency memory + stalled first VLD request,
# see RTL_REVIEW.md F4). Differences in such runs are listed as EXCLUDED-UB and
# do not fail the gate unless STRICT_UB=1. Runs with ub_oor=0 are always gated,
# including lat=0 runs.
set -uo pipefail
B=${1:?base dir}; C=${2:?candidate dir}; MODE=${3:-cycle}
case $MODE in cycle) ext=trace;; txn) ext=txn;; *) echo "bad mode $MODE"; exit 2;; esac
fail=0; n=0; excl=0; same=0
die() { echo "GATE-ERROR $*"; fail=$((fail+1)); }

[ -d "$B" ] || { echo "GATE-ERROR no base dir $B"; exit 1; }
[ -d "$C" ] || { echo "GATE-ERROR no candidate dir $C"; exit 1; }
for d in "$B" "$C"; do
  ls "$d"/summary_*.txt > /dev/null 2>&1 || die "no run_matrix summary in $d"
  if grep -h " FAIL" "$d"/summary_*.txt > /dev/null 2>&1; then
    die "run_matrix reported failing runs in $d:"; grep -h " FAIL" "$d"/summary_*.txt | head -5
  fi
done
bl=$(cd "$B" && ls *."$ext" 2>/dev/null | sort); cl=$(cd "$C" && ls *."$ext" 2>/dev/null | sort)
[ -n "$bl" ] || die "no .$ext files in base"
if [ "$bl" != "$cl" ]; then
  die "run sets differ:"; diff <(echo "$bl") <(echo "$cl") | head -10
fi

ub_of() { [ -s "$1" ] && tail -1 "$1" | sed -n 's/^END ub_oor=\([0-9][0-9]*\)$/\1/p'; }
for name in $bl; do
  f="$B/$name"; g="$C/$name"
  n=$((n+1))
  [ -f "$g" ] || { die "missing $name in candidate"; continue; }
  ubb=$(ub_of "$f"); ubc=$(ub_of "$g")
  [ -n "$ubb" ] || { die "$name: base file empty or lacks END marker"; continue; }
  [ -n "$ubc" ] || { die "$name: candidate file empty or lacks END marker"; continue; }
  if cmp -s "$f" "$g"; then same=$((same+1)); continue; fi
  if { [ "$ubb" -gt 0 ] || [ "$ubc" -gt 0 ]; } && [ "${STRICT_UB:-0}" != 1 ]; then
    echo "EXCLUDED-UB $name (ub_oor base=$ubb cand=$ubc)"; excl=$((excl+1))
  else
    echo "DIFF $name"; diff "$f" "$g" | head -6; fail=$((fail+1))
  fi
done
echo "compare mode=$MODE runs=$n identical=$same excluded_ub=$excl failing=$fail"
[ $fail -eq 0 ]
