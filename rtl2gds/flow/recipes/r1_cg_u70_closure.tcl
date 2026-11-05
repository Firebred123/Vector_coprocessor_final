# r1_cg_u70_closure.tcl -- exact post-route closure sequence executed on r1_cg_u70.
#
# Record of what was actually run (2026-11-05, Innovus 20.10 GUI pid 35967, via
# RTL2GDS_MCP), in order, including attempts that failed. Each block ran as one MCP
# call. Its verbose log is in runs/r1_cg_u70/innovus/reports/<log>; the outcome is in
# the comment. Replaying it reproduces the steps, but Innovus optimization is not
# guaranteed to be bit-identical. Later runs (u80/u90/u97) closed without any of this:
# the flow now has 0.02 ns post-route target slack and a repeated DRC-fix loop.
#
# Starting point: flow innovus_flow.tcl sha256 299391cc... (spreading off, one
# `ecoRoute -fix_drc` in finish, post-route optDesign at default target slack).
#   vi::front r1_cg_u70 r1_cg 0.70   -> postCTS cell 77,814.76 um2, setup -0.003 (1 IO path)
#   vi::back                          -> final: setup -0.003 ns (1 path), hold +0.071, verify_drc 18 (M1 PRL spacing)

set r $::vi::rdir/reports

# --- step 1: close_loop.log -- 3 x (optDesign postRoute + DRC fix) ----------------
# Outcome: DRC 18 -> 0 in iteration 1; WNS stayed -0.003 in all 3 iterations.
for {set i 1} {$i <= 3} {incr i} {
    optDesign -postRoute -outDir $r/timing_close$i -prefix close$i
    setNanoRouteMode -droutePostRouteSpreadWire false
    ecoRoute -fix_drc
    verify_drc -limit 10000 -report $r/close$i.drc.rpt
    timeDesign -postRoute -outDir $r/timing_close${i}_chk -prefix chk$i
}

# --- step 2: close_hi.log -- high effort, target slack 0.03 -----------------------
# Outcome: no change (cell area identical), WNS -0.003, DRC 0.
setOptMode -effort high -setupTargetSlack 0.03
optDesign -postRoute -outDir $r/timing_close_hi -prefix close_hi
setNanoRouteMode -droutePostRouteSpreadWire false
ecoRoute -fix_drc
verify_drc -limit 10000 -report $r/close_hi.drc.rpt
timeDesign -postRoute -outDir $r/timing_close_hi_chk -prefix chkhi
timeDesign -postRoute -hold -outDir $r/timing_close_hi_chkh -prefix chkhih

# --- step 3: eco_upsize.log -- manual ECO on the failing in2reg path -----------------
# Path: xif_issue_valid_i -> ... -> FE_OFC4119_n_858 (INVX1, 0.159 ns) -> ... ->
# vrf_inst_vrf_reg[4][95]/D. Outcome: setup +0.007 / hold +0.071, connectivity clean,
# verify_drc 1 (M1 short between net vrf_inst_vrf[7][108] and the INVX3 pin).
ecoChangeCell -inst FE_OFC4119_n_858 -cell INVX3
refinePlace -eco true
setNanoRouteMode -droutePostRouteSpreadWire false
ecoRoute -fix_drc
verify_drc -limit 10000 -report $r/eco_upsize.drc.rpt
verifyConnectivity -type all -error 10000 -report $r/eco_upsize.conn.rpt
timeDesign -postRoute -outDir $r/timing_eco -prefix eco
timeDesign -postRoute -hold -outDir $r/timing_eco_hold -prefix ecoh

# --- step 4: finish2.log -- vi::finish (flow 299391cc) ----------------------------
# Outcome: setup +0.007, verify_drc 1 (same short), connectivity/antenna clean.
vi::finish

# --- step 5: fix_short attempts ---------------------------------------------------
# 5a: a dbGet name pattern returned no pointer and the Tcl script errored before
#     changing anything (no log of design changes).
# 5b (fix_short.log): routing of the shorted net deleted; ecoRoute -fix_drc does not
#     route open nets (NRDR-27), so the net was left open. Script errored after this.
editSelect -net {vrf_inst_vrf[7][108]}
editDelete -selected
deselectAll
setNanoRouteMode -droutePostRouteSpreadWire false
ecoRoute -fix_drc
# 5c (fix_short2.log): Outcome: net rerouted, connectivity clean, verify_drc 1 (short again).
ecoRoute
ecoRoute -fix_drc
verify_drc -limit 10000 -report $r/fix_short2.drc.rpt
verifyConnectivity -type all -error 10000 -report $r/fix_short2.conn.rpt
# 5d (fix_short3.log): moved the INVX3 out of the conflict. ecoRoute failed with
#     NRIG-69 (instance unplaced) because refinePlace -eco does not place unplaced cells.
deleteFiller -prefix FILLER
dbSet [dbGet -p top.insts.name FE_OFC4119_n_858].pStatus unplaced
refinePlace -eco true
editSelect -net {vrf_inst_vrf[7][108]}
editDelete -selected
deselectAll
setNanoRouteMode -droutePostRouteSpreadWire false
ecoRoute
# 5e (fix_short4.log): Outcome: INVX3 placed at (181.8, 231.8); verify_drc 0, connectivity clean.
ecoPlace
setNanoRouteMode -droutePostRouteSpreadWire false
ecoRoute
ecoRoute -fix_drc
verify_drc -limit 10000 -report $r/fix_short4.drc.rpt
verifyConnectivity -type all -error 10000 -report $r/fix_short4.conn.rpt

# --- step 6: finish3.log -- vi::finish ---------------------------------------------
# Outcome: moving the INVX3 ~80 um broke setup: -0.065 ns on 15 IO paths; DRC 0.
vi::finish

# --- step 7: close2.log -- high effort, target slack 0.02 -------------------------
# Outcome: setup +0.021, DRC 0, cell 77,849.70 um2.
deleteFiller -prefix FILLER
setOptMode -effort high -setupTargetSlack 0.02
optDesign -postRoute -outDir $r/timing_close2 -prefix close2
setNanoRouteMode -droutePostRouteSpreadWire false
ecoRoute -fix_drc
verify_drc -limit 10000 -report $r/close2.drc.rpt
timeDesign -postRoute -outDir $r/timing_close2_chk -prefix c2

# --- step 8: finish4.log -- vi::finish: final outputs ------------------------------
# Outcome (accepted): cell 77,849.70 um2, core 118,992.40, die 127,472.63 um2;
# setup +0.021, hold +0.071, 0 violators/DRV; verify_drc 0, connectivity and antenna
# clean; outputs/vector_coprocessor.final.{v,pg.v,def,sdf,gds}; db/final.enc.
vi::finish
