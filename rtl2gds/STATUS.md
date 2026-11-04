# RTL-to-GDS stage ledger (phys-lead)

Owner: phys-lead (Claude Opus 5.5, `claude-opus-5-5`). Live tools: RTL2GDS_MCP Genus GUI and
Innovus GUI in `/home/vaibhav22555/Desktop/rtl2gds` on edatools-server2 (`eda-uni`).
Experiment root on server: `~/Desktop/rtl2gds/vector_coprocessor` (own git repo; runs under
`runs/<run>/{genus,innovus}`).

## Environment (verified)

| Item | Value |
|---|---|
| Genus | 19.13-s073_1 (GUI, pid 34703 used for runs; see "Incidents") |
| Innovus | 20.10-p004_1 (GUI) |
| Top | `vector_coprocessor` (VLEN=256, ELEMENT_WIDTH=32, 16 VREGs, X_ID_WIDTH=4) |
| RTL files | `rtl/include/cv32e40x_xif_pkg.sv`, `rtl/core/vector_reg_file_3port.sv`, `rtl/execution/vlsu.sv`, `rtl/execution/vector_exec_unit.sv`, `rtl/core/vector_coprocessor.sv`, `include/custom_opcodes.vh` |
| Source revision | dbc5fcd; server copies sha256-identical to `SOURCE_MANIFEST.json` |
| Library | Cadence gsclib045 v3.5 digital release `/cadence/FOUNDRY/digital/45nm/dig` |
| Setup corner | `slow.lib` 1.08 V / 125 C |
| Hold corner | `fast.lib` 1.32 V / 0 C |
| Physical | `gsclib045_tech.lef` (M1..M11, CoreSite 0.2 x 1.71 um) + `gsclib045_macro.lef` |
| RC | `dig/captable/*.capTbl` (layer names match LEF). Kit QRC uses Metal1.. names of another stack, so it is not usable. Extraction is Innovus native, not signoff QRC |
| Area units | um^2 from LEF SIZE (`use_area_from_lef true`): every Liberty cell has `area : 0.0` |
| GDS | map `pdk_local/streamOut_M1_M11.map` built from `gpdk045.layermap` numbers; cell GDS `pdk_local/gsclib045.gds` streamed from the OA library with strmout (723 cells, 0 errors). Boundaries match the dig LEF. Server-only, gitignored |
| Constraints | `flow/constraints/vector_coprocessor.sdc` = unchanged `commercial_flow/coprocessor_commercial.sdc` (clk_i 20 ns, IO delay 12 ns, load 0.034 pF, max_transition 0.5, max_fanout 20) |

## Stage ledger

| Run | Stage | Result | Evidence |
|---|---|---|---|
| attempt0 | elaborate | design elaborates. No unresolved refs, 0 latches, 4701 generic seq insts. Removed unused regs funct7_q, scalar_rs1_q, is_alu_q (CDFG-508). `initial` block in VRF ignored (VLOGPT-37) | `runs/attempt0_st_deadlock/genus/reports/elab_*.rpt` |
| attempt0 | SDC | all IO have clocked delays. 168 inputs lack input transition (SDC unchanged). `set_units` partial support warning SDC-201 | `timing_lint.rpt`, `timing_intent.rpt` |
| attempt0 | syn_generic | completed | `generic_area.rpt`, `generic_timing.rpt` |
| attempt0 | syn_map | **HUNG**: ST server deadlock (shm errno=28). Not a design issue | see Incidents |

## Incidents

1. **WorkBoard export blocked** by the eda-mcp command guard. Allowed dirs: `~/Desktop/cmos65`, `~/Desktop/eldo`, `/tmp`. The guard was not modified. WorkBoard `vector_coprocessor` exports to `/tmp/vector_coprocessor_wb` (mode 700). An ssh rsync then promotes it into the experiment root.
2. **Two Genus GUIs** (pid 21628, older; pid 34703, newer) both read `MCP_genus.command`. Neither was exited.
3. **Genus super-threading deadlock** in pid 21628 during syn_map. Only the forked ST helper processes were killed. The master then remains in a `vwait` inside `launch_super_thread_servers_int` (pstack), so it is unrecoverable without an interrupt. It was left open, and its bridge listener is idle-disabled while its command "runs". Later runs use super-threading off.
