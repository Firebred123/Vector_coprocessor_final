# genus_flow.tcl -- vector_coprocessor synthesis procs for the live Genus GUI.
#
# Sourced into the user's open Genus session through RTL2GDS_MCP and run step by
# step so each stage can be checked. Never calls exit/quit: the GUI must stay open.
#
#   source <root>/flow/genus_flow.tcl
#   vc::setup <run> ?rtl_dir?    ;# clear old design, libs, paths, run dirs
#   vc::read_elab                ;# read RTL, elaborate, unresolved/latch checks
#   vc::constrain                ;# read SDC, timing-intent / lint checks
#   vc::synth                    ;# syn_generic / syn_map / syn_opt
#   vc::report <stage>           ;# area / gates / timing / qor / power / checks
#   vc::export                   ;# netlist, SDC, LEC dofile for Innovus + Conformal

namespace eval vc {
    variable root /home/vaibhav22555/Desktop/rtl2gds/vector_coprocessor
    variable kit  /cadence/FOUNDRY/digital/45nm/dig
    variable top  vector_coprocessor
    variable sdc  ""
    # Design files actually instantiated under vector_coprocessor (verified from the
    # RTL: top instantiates vector_reg_file_3port, vlsu, vector_exec_unit only).
    variable rtl_files {
        rtl/include/cv32e40x_xif_pkg.sv
        rtl/core/vector_reg_file_3port.sv
        rtl/execution/vlsu.sv
        rtl/execution/vector_exec_unit.sv
        rtl/core/vector_coprocessor.sv
    }
    variable syn_opts {}
}

proc vc::setup {run {rtl_dir ""} {opts {}}} {
    variable root; variable kit
    set ::vc::run $run
    set ::vc::opts [dict merge {clock_gating 0} $opts]
    # Super-threading forks helper processes that talk over /dev/shm + sockets; on
    # this shared server that deadlocked syn_map (shm errno=28, master stuck in
    # launch_super_thread_servers vwait). Run in-process only.
    catch {set_db super_thread_servers {}}
    catch {set_db max_cpus_per_server 1}
    set ::vc::rtl_dir [expr {$rtl_dir eq "" ? $root : $rtl_dir}]
    set ::vc::rdir $root/runs/$run/genus
    set ::vc::sdc  $root/flow/constraints/vector_coprocessor.sdc
    file mkdir $::vc::rdir/reports $::vc::rdir/outputs
    foreach d [get_db designs] { delete_obj $d }
    if {[llength [get_db libraries]] == 0} {
        set_db init_lib_search_path [list $kit/lib $kit/lef]
        read_libs $kit/lib/slow.lib
        # Physical layer data: PLE wire modelling instead of wireload tables.
        read_physical -lef [list $kit/lef/gsclib045_tech.lef $kit/lef/gsclib045_macro.lef]
    }
    # gsclib045 Liberty files carry "area : 0.0" for all 477 cells, so cell area
    # must come from the LEF SIZE (um^2), otherwise area optimization is blind.
    set_db use_area_from_lef true
    set_db init_hdl_search_path [list $::vc::rtl_dir/include $::vc::rtl_dir/rtl/include]
    set_db hdl_track_filename_row_col true
    set_db lp_insert_clock_gating [expr {[dict get $::vc::opts clock_gating] ? true : false}]
    set st [list [get_db super_thread_servers] [get_db max_cpus_per_server]]
    return "run=$run rdir=$::vc::rdir rtl=$::vc::rtl_dir opts=$::vc::opts st=$st libs=[get_db libraries .name]"
}

proc vc::read_elab {} {
    variable top; variable rtl_files
    set files {}
    foreach f $rtl_files { lappend files $::vc::rtl_dir/$f }
    read_hdl -language sv $files
    elaborate $top
    if {[llength [get_db designs]] != 1} { error "elaboration did not produce one design" }
    set r $::vc::rdir/reports
    redirect $r/elab_check_design.rpt  { check_design -all }
    redirect $r/elab_unresolved.rpt    { check_design -unresolved }
    set latches [get_db insts -if {.is_latch==true}]
    set seq [llength [get_db insts -if {.is_sequential==true}]]
    return "design=[get_db designs .name] seq_insts=$seq latches=[llength $latches]"
}

proc vc::constrain {} {
    set r $::vc::rdir/reports
    read_sdc $::vc::sdc
    redirect $r/timing_lint.rpt   { report_timing -lint -verbose }
    redirect $r/timing_intent.rpt { check_timing_intent -verbose }
    return "clocks=[get_db clocks .base_name] sdc=$::vc::sdc"
}

# One MCP call per stage keeps each call under the client's idle limit.
proc vc::stage {name} {
    set t0 [clock seconds]
    switch -- $name {
        generic { syn_generic }
        map     { syn_map }
        opt     { syn_opt }
        default { error "unknown stage $name" }
    }
    vc::report $name
    set s "[vc::summary] stage=$name runtime=[expr {[clock seconds]-$t0}]s"
    set f [open $::vc::rdir/reports/qor_ledger.txt a]; puts $f $s; close $f
    return $s
}

proc vc::synth {} {
    foreach s {generic map opt} { vc::stage $s }
    return [vc::summary]
}

proc vc::report {stage} {
    set r $::vc::rdir/reports
    redirect $r/${stage}_area.rpt   { report_area }
    redirect $r/${stage}_timing.rpt { report_timing -max_paths 5 }
    if {$stage ne "generic"} {
        redirect $r/${stage}_gates.rpt  { report_gates }
        redirect $r/${stage}_qor.rpt    { report_qor }
    }
    if {$stage eq "opt"} {
        redirect $r/opt_power.rpt         { report_power }
        redirect $r/opt_check_design.rpt  { check_design -all }
        redirect $r/opt_area_hier.rpt     { report_area -depth 3 }
        redirect $r/opt_dp.rpt            { report_dp }
        redirect $r/opt_messages.rpt      { report_messages -all }
    }
}

proc vc::summary {} {
    set d [get_db designs]
    set cell_area [get_db $d .area]
    set ninst [llength [get_db insts]]
    set nseq  [llength [get_db insts -if {.is_sequential==true}]]
    set slack [get_db $d .slack]
    return "run=$::vc::run insts=$ninst seq=$nseq cell_area=$cell_area wns=$slack"
}

proc vc::export {} {
    variable top
    set o $::vc::rdir/outputs
    write_hdl > $o/$top.v
    write_sdc > $o/$top.sdc
    write_do_lec -golden_design rtl -revised_design $o/$top.v \
        -logfile $::vc::rdir/reports/lec.log > $o/rtl_to_final.lec.do
    return "netlist=$o/$top.v sdc=$o/$top.sdc"
}
