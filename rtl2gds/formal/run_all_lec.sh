#!/usr/bin/env bash
# ==============================================================================
# Batch Conformal LEC Runner for Vector Coprocessor
# Runs equivalence checks for r1_base, r1_cg, and r1_r2_cg against Golden RTL.
# Outputs are strictly routed to verification/method_review_lec/
# ==============================================================================

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
EXP_ROOT="$(cd "${SCRIPT_DIR}/../.." && pwd)"
VERIF_DIR="${EXP_ROOT}/verification/method_review_lec"

mkdir -p "${VERIF_DIR}"
mkdir -p /tmp/method_review_lec

echo "=========================================================="
echo "Starting Batch Conformal LEC Verification"
echo "Host: $(hostname)"
echo "Date: $(date)"
echo "Verification Directory: ${VERIF_DIR}"
echo "=========================================================="

source /cadence/cshrc 2>/dev/null || true

# Check LEC tool
if ! command -v lec >/dev/null 2>&1; then
    echo "ERROR: 'lec' binary not found on PATH." >&2
    exit 1
fi

echo "LEC Version: $(lec -version 2>&1 | head -n 1)"

run_lec() {
    local name="$1"
    local dofile="$2"
    local logfile="${VERIF_DIR}/${name}.log"
    local tmp_dofile="/tmp/method_review_lec/${name}.do"

    echo "----------------------------------------------------------"
    echo "Running Conformal LEC for: ${name}"
    echo "Dofile: ${dofile}"
    echo "Log:    ${logfile}"
    echo "----------------------------------------------------------"

    cp "${dofile}" "${tmp_dofile}"

    # Run Conformal with Ultra / LowPower licenses
    lec -lp -nogui -64 -dofile "${tmp_dofile}" -logfile "${logfile}" || {
        echo "WARNING: ${name} exited with status $?"
    }

    echo "Completed ${name}. Checking results..."
    grep -E "(Compare Results|Equivalent|NON-EQ|Abort)" "${logfile}" | tail -n 15 || true
}

# Run 1: r1_base
run_lec "r1_base" "${SCRIPT_DIR}/run_lec_r1_base.do"

# Run 2: r1_cg
run_lec "r1_cg" "${SCRIPT_DIR}/run_lec_r1_cg.do"

# Run 3: r1_r2_cg (Golden: Candidate R2 RTL)
run_lec "r1_r2_cg" "${SCRIPT_DIR}/run_lec_r1_r2_cg.do"

# Run 4: orig_vs_r1_r2_cg (Golden: Original RTL - Sequential Divergence Diagnostics)
run_lec "orig_vs_r1_r2_cg" "${SCRIPT_DIR}/run_lec_orig_vs_r1_r2_cg.do"

# Run 5: orig_rtl_vs_r2_rtl_sec (Original RTL vs Candidate R2 RTL - Full-top Sequential Equivalence)
run_lec "orig_rtl_vs_r2_rtl_sec" "${SCRIPT_DIR}/run_orig_rtl_vs_r2_rtl_sec.do"

# Run 6: r1_base_postroute (Genus Netlist vs Innovus Post-Route Netlist)
run_lec "r1_base_postroute" "${SCRIPT_DIR}/run_lec_r1_base_postroute.do"

# Run 7: r1_cg_postroute (Genus Netlist vs Innovus Post-Route Netlist with ECO)
run_lec "r1_cg_postroute" "${SCRIPT_DIR}/run_lec_r1_cg_postroute.do"

echo "=========================================================="
echo "All LEC runs completed."
echo "=========================================================="
