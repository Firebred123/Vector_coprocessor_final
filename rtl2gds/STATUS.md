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
| baseline (R0) | Genus | completed in GUI pid 34703: generic 158 s, map 282 s, opt 367 s. **Std-cell area 98,768.369 um2**, 28,237 instances, 4,443 seq (v0 flops pruned). Worst path is IO feedthrough, -5.545 ns | `runs/baseline/genus/reports/{qor_ledger.txt,opt_*.rpt}` |
| baseline (R0) | LEC | Conformal 20.1 batch, RTL->fv_map and fv_map->netlist both **PASS** (hierarchical compare). Critical warnings RTL7.3/7.4 for array index out of range (VRF 16 entries, 5-bit index) | `runs/baseline/genus/reports/lec.log` |
| baseline_u70 (R0) | init/floorplan/PG | 28,237 insts, core 376.8 x 374.49 um, die 388.8 x 386.65 um. Ring M10/M11 and M10 stripes rebuilt at 1.3 um spacing after the IMPPP-136 warning | `runs/baseline_u70/innovus/reports/` |
| baseline_u70 (R0) | place/preCTS | cell area 91,692 um2, util 0.650, overflow 0%, DRV clean. reg2reg WNS +11.4 ns, IO WNS -5.507 ns | `timing_preCTS/`, `qor_ledger.txt` |
| baseline_u70 (R0) | CTS/postCTS | skew 0.103 ns at hold corner. Hold fixing for the 0.25 ns hold uncertainty grew cell area to **124,301 um2 (+36%)**, density 88.1% | `cts_skew_groups.rpt`, `timing_postCTS_hold/` |
| baseline_u70 (R0) | route | failed first with NRDB-158 (tech LEF has only VIARULE GENERATE). After `generateVias`: routed, 0 antenna | `back.log`/session |
| baseline_u70 (R0) | postRoute/finish | cell 128,222.55 um2, util 0.909, die 150,329.52 um2. reg2reg setup +10.897 ns, IO setup -5.476 ns (275 paths), **hold -0.312 ns (6,830 paths)**, max_tran 41. verify_drc **23** (M1 spacing). Connectivity clean, antenna clean. GDS/DEF/netlist/SDF written. **Not an accepted result** | `final_*.rpt`, `outputs/` |
| r1_base (R1) | Genus | implementation SDC. **91,829.685 um2**, 25,923 inst, 4,443 seq, WNS met | `runs/r1_base/genus/` |
| r1_cg (R1) | Genus | + clock gating (28 x TLATNTSCAX2). **83,267.561 um2 (-9.32%)**, 4,471 seq, met | `runs/r1_cg/genus/` |
| r1_r2_cg (R1) | Genus | cand/r2 (drop vlsu store_data_q) + clock gating. **80,957.453 um2 (-11.84%)**, 4,214 seq, met. Secondary: original-to-R2 formal equivalence incomplete | `runs/r1_r2_cg/genus/` |

Constraint regimes: **R0** = unchanged commercial SDC, kept as a diagnostic reference only. **R1** = implementation SDC `flow/constraints/vector_coprocessor_impl.sdc` (hold uncertainty 0.05 ns, IO 10/6 ns, input transition 0.10 ns), applied identically to all compared runs. Timing values printed by Genus `get_db .slack` are in ps.

## Physical results (R1 implementation SDC, gsclib045 slow setup / fast hold, captable RC)

All rows below are fully closed: setup and hold have 0 violating paths, 0 max_tran/max_cap, Innovus `verify_drc` 0, `verifyConnectivity` clean and `verifyProcessAntenna` clean. Each has a GDS (gsclib045 cell GDS merged), DEF, netlists and SDF under `runs/<run>/innovus/outputs/` on the server. Areas are in um^2, timing in ns. The "util" target is relative to Genus netlist area; "placed" is final cell/core.

| Run | RTL / flow | Util target / placed | Final cell area | Core area | Die area | Setup WNS | Hold WNS |
|---|---|---|---:|---:|---:|---:|---:|
| r1_base_u70 | original | 0.70 / 0.661 | 86,686.81 | 131,190.52 | 140,087.53 | +0.007 | +0.043 |
| r1_cg_u70 | original + CG | 0.70 / 0.654 | 77,849.70 | 118,992.40 | 127,472.63 | +0.021 | +0.071 |
| r1_cg_u80 | original + CG | 0.80 / 0.749 | 77,974.32 | 104,095.22 | 112,036.31 | +0.018 | +0.070 |
| r1_cg_u90 | original + CG | 0.90 / 0.840 | 77,783.80 | 92,556.49 | 100,052.97 | +0.014 | +0.072 |
| **r1_base_u97** | original | 0.97 / 0.911 | 86,290.19 | 94,704.25 | **102,285.55** | +0.016 | +0.042 |
| **r1_cg_u97** (primary result) | original + CG | 0.97 / 0.905 | 77,650.93 | 85,851.58 | **93,076.59** | +0.018 | +0.070 |
| r1_r2_cg_u97 (secondary) | R2 + CG | 0.97 / 0.910 | 76,004.73 | 83,483.57 | 90,610.54 | +0.011 | +0.070 |

Comparisons:
- Clock gating at equal constraints and equal target utilization: die -9.4% at 0.70 (140,088 -> 127,473) and **-9.0% at 0.97 (102,286 -> 93,077)**. Final cell area -10.2% / -10.0%.
- Primary best result vs the 0.70 baseline: die **-33.6%** (140,088 -> 93,077). About 27 points of that come from floorplan density, which the baseline also reaches (r1_base_u97). The RTL/flow saving itself is the 9.0% at equal utilization.
- Secondary R2+CG at 0.97: die -11.4% vs r1_base_u97. It stays secondary until original-to-R2 equivalence is proven (simulation evidence only).
- R0 diagnostic (`baseline_u70`, original SDC): not closed (hold -0.312 ns on 6,830 paths, IO setup -5.476 ns, 23 DRC). Kept only to motivate R1.

Post-route equivalence: Conformal, final netlist vs Genus netlist, PASS for r1_cg_u97, r1_base_u97 and r1_r2_cg_u97 (4,597 / 4,597 / 4,341 points, 0 non-EQ/abort). Run by method-review; logs checked by phys-lead. Details and hashes are in `results/MANIFEST.md`. u70 runs: see FORMAL_ACCEPTANCE.md.

GDS structural check (`gds_check.py`, server): every final GDS has one top cell `vector_coprocessor` and 0 undefined cell references. It contains M1..M11/Via1..Via10 on the gpdk045 layer numbers plus base layers from the merged cell GDS. Raw summaries: `rtl2gds/results/run_summaries.txt`.

Closure notes: post-route wire spreading created M1 parallel-run-length spacing errors, so it is disabled and `ecoRoute -fix_drc` is repeated until clean (1-3 passes). r1_cg_u70 needed one manual ECO (INVX1->INVX3 plus ecoPlace) and a high-effort post-route pass. The flow now uses 0.02 ns target slack, and the later runs closed without manual steps.

## Limitations (not signoff)

- Educational Cadence 45 nm kit (gsclib045 + gpdk045 layer numbers), not the original ASAP7 target.
- RC comes from the kit captable (labelled cln28hpl, shrink 0.9) with Innovus native extraction. No QRC with matching layer names exists. No SI/IR/EM signoff.
- DRC is Innovus `verify_drc` against LEF rules only. Foundry PVS/Pegasus DRC and LVS on the GDS were **not run**.
- R1 IO budgets (10/6 ns) and the hold margin (0.05 ns) are experimental assumptions for a standalone macro, not a verified host budget.
- Timing is single-corner per check (slow for setup, fast for hold) with OCV mode post-route. No multi-corner/multi-mode signoff.

## Incidents

1. **WorkBoard export blocked** by the eda-mcp command guard. Allowed dirs: `~/Desktop/cmos65`, `~/Desktop/eldo`, `/tmp`. The guard was not modified. WorkBoard `vector_coprocessor` exports to `/tmp/vector_coprocessor_wb` (mode 700). An ssh rsync then promotes it into the experiment root.
2. **Two Genus GUIs** (pid 21628, older; pid 34703, newer) both read `MCP_genus.command`. Neither was exited.
3. **Genus super-threading deadlock** in pid 21628 during syn_map. Only the forked ST helper processes were killed. The master then remains in a `vwait` inside `launch_super_thread_servers_int` (pstack), so it is unrecoverable without an interrupt. It was left open, and its bridge listener is idle-disabled while its command "runs". Later runs use super-threading off.
4. **Genus redirect-pipe hang (pid 34703).** After syn_generic the GUI blocked in `RedirectUndo::undo`/pthread_join: the auto-launched ST server's csh wrapper had inherited the write end of the MCP bridge `redirect` pipe. Killing only that csh released it. `auto_super_thread false` prevents the fork.
5. **WorkBoard scp -r nesting.** Re-exporting a folder into an existing remote folder nested it (`flow/flow`). The /tmp staging subdir is now deleted before each export, and `promote.sh` refuses nested trees. Promoted hashes are verified against local.
6. **SSH outage** at 07:3x IST (eda-uni 192.168.3.58:22 timing out) right after issuing `vi::front r1_base_u70`.
