# other_runs_closure.tcl -- manual post-route steps executed outside vi::front/vi::back.
# Order as run on 2026-11-05 (Innovus GUI pid 35967 via RTL2GDS_MCP). Logs are in
# runs/<run>/innovus/reports/.

# ===== r1_base_u70 =====================================================================
# vi::front r1_base_u70 r1_base 0.70 ; vi::back
#   flow innovus_flow.tcl sha256 83dd9a5b... (post-route wire spreading still ON)
#   -> setup +0.007, hold +0.043, verify_drc 23 (M1 parallel-run-length spacing)
# drc_fix.log -- Outcome: verify_drc 0.
setNanoRouteMode -droutePostRouteSpreadWire false
ecoRoute -fix_drc
verify_drc -limit 10000 -report $::vi::rdir/reports/final_verify_drc_fix1.rpt
# finish2.log -- re-sourced flow 299391cc (spreading off, ecoRoute -fix_drc in finish)
# Outcome (accepted): setup +0.007, hold +0.043, verify_drc 0, connectivity and antenna
# clean; final outputs rewritten.
source /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/flow/innovus_flow.tcl
vi::finish

# ===== r1_cg_u80 =======================================================================
# vi::front r1_cg_u80 r1_cg 0.80 ; vi::back   (flow fdae21e3...)
#   -> setup +0.018, hold +0.070, verify_drc 22 (M1 PRL spacing) after one fix pass
# drcfix_loop.log -- Outcome: 22 -> 1 -> 0.
for {set i 1} {$i <= 4} {incr i} {
    setNanoRouteMode -droutePostRouteSpreadWire false
    ecoRoute -fix_drc
    verify_drc -limit 10000 -report $::vi::rdir/reports/drcfix$i.rpt
}
# finish2.log -- re-sourced flow bb2f7788 (DRC-fix loop now inside vi::finish)
# Outcome (accepted): setup +0.018, hold +0.070, verify_drc 0, connectivity and antenna clean.
source /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor/flow/innovus_flow.tcl
vi::finish

# ===== r1_cg_u90, r1_cg_u97, r1_base_u97, r1_r2_cg_u97 =================================
# No manual steps: vi::front <run> <genus_run> <util> ; vi::back with flow bb2f7788
# (finish DRC-fix loop took 2-3 passes).
