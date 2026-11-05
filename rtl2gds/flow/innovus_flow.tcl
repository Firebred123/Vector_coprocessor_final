# innovus_flow.tcl -- vector_coprocessor implementation procs for the live Innovus GUI.
#
# Sourced into the user's open Innovus session through RTL2GDS_MCP and run stage by
# stage so each stage can be inspected. Never calls exit/quit.
#
#   source <root>/flow/innovus_flow.tcl
#   vi::init <run> <netlist> <sdc>   ;# MMMC (slow setup / fast hold), LEF, netlist
#   vi::floorplan <util> ?aspect?    ;# core rows, IO pins
#   vi::power                        ;# global nets, ring, stripes, followpins
#   vi::place                        ;# placeDesign + preCTS opt
#   vi::cts                          ;# ccopt + postCTS setup/hold
#   vi::route                        ;# NanoRoute + postRoute setup/hold
#   vi::finish                       ;# fillers, checks, final reports, outputs
#
# Library: Cadence gsclib045 digital release (tech LEF names M1..M11, matching
# captable). RC: captable (no QRC techfile with matching layer names exists for this
# LEF), so postroute extraction is the Innovus native engine, not signoff QRC.

namespace eval vi {
    variable root /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor
    variable kit  /cadence/FOUNDRY/digital/45nm/dig
    variable top  vector_coprocessor
}

proc vi::rpt {name body} {
    redirect $::vi::rdir/reports/$name $body
}

proc vi::init {run netlist sdc} {
    variable root; variable kit; variable top
    set ::vi::run $run
    set ::vi::rdir $root/runs/$run/innovus
    foreach d {reports outputs db} { file mkdir $::vi::rdir/$d }
    set captbl [glob $kit/captable/*.capTbl]
    set mmmc $::vi::rdir/mmmc.tcl
    set f [open $mmmc w]
    puts $f "create_library_set -name ls_slow -timing {$kit/lib/slow.lib}"
    puts $f "create_library_set -name ls_fast -timing {$kit/lib/fast.lib}"
    puts $f "create_rc_corner -name rc_slow -cap_table {$captbl} -T 125"
    puts $f "create_rc_corner -name rc_fast -cap_table {$captbl} -T 0"
    puts $f "create_delay_corner -name dc_slow -library_set ls_slow -rc_corner rc_slow"
    puts $f "create_delay_corner -name dc_fast -library_set ls_fast -rc_corner rc_fast"
    puts $f "create_constraint_mode -name func -sdc_files {$sdc}"
    puts $f "create_analysis_view -name av_setup -constraint_mode func -delay_corner dc_slow"
    puts $f "create_analysis_view -name av_hold  -constraint_mode func -delay_corner dc_fast"
    puts $f "set_analysis_view -setup {av_setup} -hold {av_hold}"
    close $f
    set ::init_lef_file   [list $kit/lef/gsclib045_tech.lef $kit/lef/gsclib045_macro.lef]
    set ::init_verilog    $netlist
    set ::init_top_cell   $top
    set ::init_mmmc_file  $mmmc
    set ::init_pwr_net    VDD
    set ::init_gnd_net    VSS
    init_design
    setDesignMode -process 45
    setMultiCpuUsage -localCpu 8
    globalNetConnect VDD -type pgpin -pin VDD -inst * -override
    globalNetConnect VSS -type pgpin -pin VSS -inst * -override
    globalNetConnect VDD -type tiehi -inst * -override
    globalNetConnect VSS -type tielo -inst * -override
    vi::rpt init_check_design.rpt { checkDesign -all -noHtml -outfile $::vi::rdir/reports/init_checkDesign.rpt }
    vi::rpt init_check_timing.rpt { check_timing -verbose }
    return "run=$run insts=[llength [dbGet top.insts]] netlist=$netlist"
}

# util = target core utilization; margin leaves room for the power ring.
proc vi::floorplan {util {aspect 1.0} {margin 6.0}} {
    set ::vi::util $util
    floorPlan -site CoreSite -r $aspect $util $margin $margin $margin $margin
    # IO pins: inputs on the left/top, outputs on the right/bottom, mid-stack layers.
    set ins  [lsort -dictionary [dbGet [dbGet -p top.terms.direction input].name]]
    set outs [lsort -dictionary [dbGet [dbGet -p top.terms.direction output].name]]
    set half [expr {[llength $ins] / 2}]
    setPinAssignMode -pinEditInBatch true
    editPin -pin [lrange $ins 0 [expr {$half-1}]] -side Left -layer M3 -spreadType side -fixOverlap 1
    editPin -pin [lrange $ins $half end]          -side Top  -layer M4 -spreadType side -fixOverlap 1
    set ohalf [expr {[llength $outs] / 2}]
    editPin -pin [lrange $outs 0 [expr {$ohalf-1}]] -side Right  -layer M3 -spreadType side -fixOverlap 1
    editPin -pin [lrange $outs $ohalf end]          -side Bottom -layer M4 -spreadType side -fixOverlap 1
    setPinAssignMode -pinEditInBatch false
    vi::rpt fp_summary.rpt { report_area }
    return "core=[dbGet top.fPlan.coreBox] die=[dbGet top.fPlan.box] ins=[llength $ins] outs=[llength $outs]"
}

proc vi::power {} {
    # Wide-metal spacing rule: 1.25 um for 1.0-1.5 um wires (IMPPP-136), use 1.3.
    editDelete -type Special -net {VDD VSS}
    addRing -nets {VDD VSS} -type core_rings -follow core \
        -layer {top M11 bottom M11 left M10 right M10} \
        -width 1.5 -spacing 1.3 -offset 0.8
    addStripe -nets {VDD VSS} -layer M10 -direction vertical \
        -width 1.0 -spacing 1.3 -set_to_set_distance 40 -start_from left -start_offset 10
    sroute -connect {corePin} -nets {VDD VSS} -corePinTarget {ring stripe}
    vi::rpt power_verify_pg.rpt { verifyPowerVia }
    return "pg done"
}

proc vi::place {} {
    setPlaceMode -place_global_place_io_pins false
    placeDesign
    vi::rpt place_density.rpt { reportDensityMap }
    timeDesign -preCTS -outDir $::vi::rdir/reports/timing_place -prefix place
    optDesign -preCTS -outDir $::vi::rdir/reports/timing_preCTS -prefix preCTS
    vi::rpt preCTS_area.rpt { report_area }
    saveDesign $::vi::rdir/db/preCTS.enc
    return [vi::qor preCTS]
}

proc vi::cts {} {
    set_ccopt_property buffer_cells   {CLKBUFX2 CLKBUFX3 CLKBUFX4 CLKBUFX6 CLKBUFX8 CLKBUFX12 CLKBUFX16}
    set_ccopt_property inverter_cells {CLKINVX1 CLKINVX2 CLKINVX3 CLKINVX4 CLKINVX6 CLKINVX8 CLKINVX12 CLKINVX16}
    create_ccopt_clock_tree_spec -file $::vi::rdir/reports/ccopt.spec
    ccopt_design
    vi::rpt cts_clock_trees.rpt { report_ccopt_clock_trees }
    vi::rpt cts_skew_groups.rpt { report_ccopt_skew_groups }
    optDesign -postCTS -outDir $::vi::rdir/reports/timing_postCTS -prefix postCTS
    optDesign -postCTS -hold -outDir $::vi::rdir/reports/timing_postCTS_hold -prefix postCTS_hold
    saveDesign $::vi::rdir/db/postCTS.enc
    return [vi::qor postCTS]
}

proc vi::route {} {
    # gsclib045_tech.lef has only VIARULE ... GENERATE (no fixed VIA cells), so
    # NanoRoute stops with NRDB-158 "Missing via from M1 to M2". Generate them.
    if {[llength [dbGet head.vias]] < 20} {
        setGenerateViaMode -auto true
        generateVias
    }
    setNanoRouteMode -routeWithTimingDriven true -routeWithSiDriven true \
        -routeTopRoutingLayer 9 -routeBottomRoutingLayer 1
    routeDesign
    setExtractRCMode -engine postRoute
    setAnalysisMode -analysisType onChipVariation
    optDesign -postRoute -outDir $::vi::rdir/reports/timing_postRoute -prefix postRoute
    optDesign -postRoute -hold -outDir $::vi::rdir/reports/timing_postRoute_hold -prefix postRoute_hold
    saveDesign $::vi::rdir/db/postRoute.enc
    return [vi::qor postRoute]
}

proc vi::finish {} {
    variable top
    set r $::vi::rdir/reports
    set o $::vi::rdir/outputs
    addFiller -cell {FILL64 FILL32 FILL16 FILL8 FILL4 FILL2 FILL1} -prefix FILLER
    ecoRoute
    timeDesign -postRoute -outDir $r/timing_signoff -prefix final
    timeDesign -postRoute -hold -outDir $r/timing_signoff_hold -prefix final_hold
    vi::rpt final_area.rpt        { report_area }
    vi::rpt final_summary.rpt     { summaryReport -noHtml -outfile $::vi::rdir/reports/final_summaryReport.rpt }
    vi::rpt final_power.rpt       { report_power }
    vi::rpt final_check_place.rpt { checkPlace }
    verify_drc -limit 10000 -report $r/final_verify_drc.rpt
    verifyConnectivity -type all -error 10000 -report $r/final_verify_conn.rpt
    verifyProcessAntenna -report $r/final_verify_antenna.rpt
    saveNetlist $o/$top.final.v
    saveNetlist -includePowerGround -excludeLeafCell $o/$top.final.pg.v
    write_sdf $o/$top.final.sdf
    defOut -floorplan -netlist -routing $o/$top.final.def
    # GDS: layer map and merged cell GDS are generated on the server from the
    # installed gpdk045/gsclib045 collateral (pdk_local/, never committed to git).
    set pl $::vi::root/pdk_local
    streamOut $o/$top.final.gds -mapFile $pl/streamOut_M1_M11.map \
        -merge [list $pl/gsclib045.gds] -units 2000 -mode ALL \
        -outputMacros -reportFile $r/final_streamOut.rpt
    saveDesign $::vi::rdir/db/final.enc
    return [vi::qor final]
}

# Geometry + timing snapshot for the stage ledger.
proc vi::qor {stage} {
    lassign [lindex [dbGet top.fPlan.coreBox] 0] cx0 cy0 cx1 cy1
    lassign [lindex [dbGet top.fPlan.box] 0] dx0 dy0 dx1 dy1
    set core_a [expr {($cx1-$cx0)*($cy1-$cy0)}]
    set die_a  [expr {($dx1-$dx0)*($dy1-$dy0)}]
    # Standard-cell area excluding physical-only fillers.
    set ca 0.0; set n 0
    foreach i [dbGet top.insts] {
        if {[dbGet $i.isPhysOnly]} continue
        set ca [expr {$ca + [dbGet $i.area]}]; incr n
    }
    set line "stage=$stage insts=$n cell_area=[format %.2f $ca] core_area=[format %.2f $core_a] die_area=[format %.2f $die_a] util=[format %.4f [expr {$ca/$core_a}]]"
    set f [open $::vi::rdir/reports/qor_ledger.txt a]; puts $f $line; close $f
    return $line
}

# Two-call wrappers (each under the MCP client idle limit); verbose output goes to
# <rdir>/reports/*.log and the reply is the QoR ledger line.
proc vi::front {run genus_run util {aspect 1.0}} {
    set t0 [clock seconds]
    catch {freeDesign}
    set g $::vi::root/runs/$genus_run/genus/outputs
    set ::vi::rdir $::vi::root/runs/$run/innovus
    file mkdir $::vi::rdir/reports
    redirect $::vi::rdir/reports/front.log {
        vi::init $run $g/vector_coprocessor.v $g/vector_coprocessor.sdc
        vi::floorplan $util $aspect
        vi::power
        vi::place
        set ::vi::cts_q [vi::cts]
    }
    return "$::vi::cts_q runtime=[expr {[clock seconds]-$t0}]s"
}

proc vi::back {} {
    set t0 [clock seconds]
    redirect $::vi::rdir/reports/back.log {
        vi::route
        set ::vi::fin_q [vi::finish]
    }
    return "$::vi::fin_q runtime=[expr {[clock seconds]-$t0}]s"
}

# Signoff-style summary pulled from the final reports for the ledger.
proc vi::signoff_summary {} {
    set r $::vi::rdir/reports
    set out {}
    foreach f {back.log finish.log} {
        if {![file exists $r/$f]} continue
        set fh [open $r/$f]; set txt [read $fh]; close $fh
        foreach l [split $txt "\n"] {
            if {[regexp {WNS \(ns\)|Violating Paths|Setup mode|Hold mode|max_tran  |Total Violations} $l]} { lappend keep $l }
        }
    }
    if {[info exists keep]} { set out [lrange $keep end-11 end] }
    foreach f {final_verify_drc.rpt final_verify_conn.rpt final_verify_antenna.rpt} {
        if {![file exists $r/$f]} { lappend out "$f missing"; continue }
        set fh [open $r/$f]; set txt [read $fh]; close $fh
        if {[regexp {Total Violations : (\d+)} $txt -> n]} { lappend out "$f viols=$n" } \
        elseif {[regexp {Found no problems|No Violations Found} $txt]} { lappend out "$f clean" } \
        else { lappend out "$f see report" }
    }
    return [join $out "\n"]
}
