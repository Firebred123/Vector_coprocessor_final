# Independent Methodology & Area Optimization Review

**Project**: Vector Coprocessor (VCoP) RTL-to-GDS Hardening  
**Author**: `method-review` (Independent Reviewer)  
**Target Design Top**: `vector_coprocessor`  
**Date**: November 2026  
**Status**: Initial Independent Audit Complete  

---

## 1. Executive Summary & Audit Scope

This review provides an independent, objective audit of the RTL-to-GDS implementation flow, physical collateral feasibility, timing constraint coverage, silicon area drivers, and formal equivalence requirements for the `vector_coprocessor` macro. 

In accordance with [COORDINATION.md](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/COORDINATION.md):
- `phys-lead` is the sole writer driving live Genus and Innovus EDA sessions via RTL2GDS_MCP and managing WorkBoard server synchronization.
- `method-review` maintains strict independence, performing no live tool mutations or source code overrides, and owning this methodology assessment.
- All candidate implementations must be measured against an unchanged-RTL baseline under identical PDK, library corner, and timing constraint conditions.

---

## 2. Physical Collateral & PDK Feasibility Audit

### 2.1 Collateral Inventory
A physical design flow requires both logical timing models (`.lib`) and physical cell abstractions (`.lef`):
1. **Local ASAP7 7nm Collateral (`PDK/LIB/asap7sc7p5t_*.lib`)**:
   - **Status**: *Incomplete for PnR*.
   - **Details**: The repository contains Liberty NLDM timing models for 7.5-track standard cells (AO, OA, INVBUF, SEQ, SIMPLE) in the slow-slow (SS) corner.
   - **Finding**: **No Tech LEF or Standard Cell LEFs exist in the local repository.** While Genus can synthesize using Wire Load Models (WLM), Innovus physically cannot place standard cells, synthesize clock trees, or route metal layers without physical LEF geometry. Attempting Innovus execution with local ASAP7 alone will immediately halt at `init_design`.
2. **Server-Side SCL 180nm Collateral (`/cadence/scl180/...`)**:
   - **Status**: Complete collateral (Liberty `.lib`, Tech LEF, Cell LEF).
   - **Details**: Verified during RTL2GDS_MCP smoke testing (`counter.v`). Suitable for conservative legacy flows.
3. **Server-Side Cadence GPDK 45nm Collateral (`/cadence/FOUNDRY/digital/45nm/dig`)**:
   - **Status**: *Recommended & Feasible*.
   - **Details**: Provides matching timing libraries (`slow.lib`) and physical LEF collateral (`gsclib045_tech.lef`, `gsclib045_macro.lef`).
   - **Finding**: Allows Genus Physical Layout Estimation (PLE) during synthesis and full closed-loop Place & Route in Innovus.

### 2.2 PDK & Tool Recommendations
- **Adopt GPDK 45nm as the primary implementation target**: Enables clean, repeatable synthesis-to-GDS correlation across both Genus and Innovus.
- **Unit Sanity**: Ensure SDC time and capacitance units match the Liberty library header (`slow.lib`: time in `ns`, capacitance in `pF`). SDC `set_units` must strictly align.

---

## 3. Stage Ordering & Flow Architecture

### 3.1 RTL2GDS_MCP Operating Environment & Safeguards
- Genus and Innovus are driven through persistent named pipes (`MCP_genus.command`, `MCP_innovus.command`) attached to live GUI event loops.
- **Critical Flow Rule**: Flow scripts must **never** execute `exit` or `quit`. Original repository scripts (`cadence_genus_synth.tcl`, `cadence_genus_1ns.tcl`, `cadence_tempus.tcl`) all conclude with `exit`. Sourcing them in live sessions kills the GUI and permanently drops the MCP bridge.
- `phys-lead`'s modular proc architecture (`rtl2gds/flow/genus_flow.tcl`) correctly encapsulates commands within procs (`vc::setup`, `vc::read_elab`, `vc::constrain`, `vc::synth`, `vc::report`, `vc::export`) without exit traps.

### 3.2 Recommended Synthesis Stage Ordering (Cadence Genus)
```
1. Setup & Environment  ──► 2. HDL Read & Elab  ──► 3. Design Health Audit
      (Libs, Search Paths)         (read_hdl, elaborate)        (check_design -all, latch check)
                                                                       │
6. Gate Optimization   ◄── 5. Tech Mapping      ◄── 4. SDC & Intent Check
      (syn_opt)                  (syn_map)              (read_sdc, check_timing_intent)
         │
7. Reports & Quality   ──► 8. Signoff Export
   (area, qor, timing, dp)       (write_hdl, write_sdc, write_do_lec)
```

1. **Elaboration Health Check**:
   - `check_design -unresolved` must be augmented with `check_design -all` or `check_design -lint` to catch multi-driven nets, floating inputs, and undriven pins before synthesis.
   - Latch verification: Inferred latches (`get_db insts -if {.is_latch==true}`) must evaluate to zero. Latching in synchronous vector cores indicates incomplete case/if decodes and ruins testability/STA.
2. **Timing Intent Validation**:
   - Apply constraints *before* generic compilation (`syn_generic`) so logic structuring is timing-driven.
   - Run `check_timing_intent -verbose` and `report_timing -lint` prior to `syn_generic`.
3. **Synthesis Optimization**:
   - Step through `syn_generic` -> `syn_map` -> `syn_opt` sequentially, capturing intermediate area and timing slack at each milestone.

### 3.3 Recommended Physical Design Ordering (Cadence Innovus)
```
1. Design Import & MMMC ──► 2. Floorplan & Pins ──► 3. Power Grid Synthesis
      (init_design, LEFs)         (create_floorplan, editPin)   (add_rings, add_stripes, sroute)
                                                                       │
6. Post-CTS Setup/Hold  ◄── 5. Clock Tree (CTS) ◄── 4. Placement & Pre-CTS
   (opt_design -post_cts)         (ccopt_design)                (place_opt_design)
         │
7. Global & Detail Route──► 8. Post-Route Signoff──► 9. Verification & GDS
      (routeDesign)               (opt_design -post_route)      (verify_drc, verify_connectivity)
```

1. **Macro Pin Placement**:
   - `vector_coprocessor` has extensive I/O interfaces (X-IF CPU request/response/result, OBI/memory request/result).
   - **Pitfall**: Leaving pin placement unconstrained causes Innovus to pile pins onto default origin locations (0,0), creating routing bottlenecks, local congestion hotspots, and buffer bloating.
   - **Remedy**: Use `editPin` or an automated pin assignment script to distribute CPU interface pins along one boundary (e.g. West) and memory interface pins along another (e.g. East/North).
2. **Power Grid Robustness**:
   - Run DRC checks on power rings and stripes before standard cell placement.
   - Ensure `sroute` connects standard cell FollowPin rails cleanly across all macro boundaries.
3. **Clock Tree Synthesis (CTS)**:
   - Clock tree latency and skew become physical post-CTS (`set_propagated_clock`).
   - Clock uncertainty must be updated from synthesis margins (250 ps) to pure jitter margin (50-100 ps). Leaving synthesis uncertainty active post-CTS forces severe over-buffering.

---

## 4. SDC Correctness & Timing Coverage Audit

### 4.1 Comparison of SDC Approaches
- **`coprocessor_1ns.sdc` (1.0 GHz / 1.0 ns)**:
  - Budget: Input delay = 0.60 ns, Clock uncertainty = 0.05 ns, Transition = 0.02 ns.
  - Remaining internal setup window: $1.0 - 0.60 - 0.05 = 0.35\text{ ns}$ (350 ps).
  - **Verdict**: Physically impossible on this RTL. The combinational path from inputs through decode -> 256-bit 16:1 VRF read mux -> 32x32 multiplier -> 32-bit adder -> VRF write setup exceeds 1.5 - 2.5 ns. Forcing 1 ns produces thousands of failing paths, negative slack ($<-1.5\text{ ns}$), and massive cell resizing that explodes area.
- **`vector_coprocessor.sdc` / `coprocessor_commercial.sdc` (50 MHz / 20.0 ns)**:
  - Budget: Clock period = 20.0 ns, Input delay = 12.0 ns (60%), Output delay = 12.0 ns (60%), Uncertainty = 0.25 ns.
  - Remaining internal setup window: $20.0 - 12.0 - 0.25 = 7.75\text{ ns}$.
  - **Verdict**: Well-budgeted, realistic, and matches the microarchitecture of single-cycle unpipelined arithmetic execution.

### 4.2 SDC Defects & Actionable Hardening
1. **Wildcard Struct Expansion Vulnerability**:
   - Current constraint lines:
     ```tcl
     set_input_delay -clock clk 12.0 [get_ports xif_issue_req_i*]
     set_output_delay -clock clk 12.0 [get_ports xif_result_o*]
     ```
   - Depending on Genus SystemVerilog elaboration settings, packed/unpacked struct port flattening can alter delimiter naming (e.g., `xif_issue_req_i_instr` vs `xif_issue_req_i.instr`). Any port failing to match the wildcard is left **completely unconstrained**.
   - **Recommended Fix**: Use collection arithmetic to guarantee 100% pin coverage:
     ```tcl
     set_input_delay -clock clk 12.0 [remove_from_collection [all_inputs] [get_ports clk_i]]
     set_output_delay -clock clk 12.0 [all_outputs]
     ```
2. **Missing Input Drive / Transition Constraints**:
   - In `vector_coprocessor.sdc`, data inputs lack `set_driving_cell` or `set_input_transition` (only clock transition is specified).
   - **Impact**: Genus defaults to ideal (0 ps transition) drivers for all data inputs. Input logic delays are artificially minimized during synthesis, leading to setup violations when driven by realistic buffers in physical PnR.
   - **Recommended Fix**:
     ```tcl
     set_input_transition 0.15 [remove_from_collection [all_inputs] [get_ports clk_i]]
     ```
3. **Asynchronous Reset (`rst_ni`) Treatment**:
   - Constraining `rst_ni` with a 12 ns data input delay causes Genus to treat the high-fanout reset net (>4000 endpoints) as ordinary data, attempting to build a massive, unplaced buffer tree during logic synthesis.
   - **Recommended Fix**: Treat `rst_ni` as an ideal network during logic synthesis:
     ```tcl
     set_ideal_network [get_ports rst_ni]
     ```
     Physical buffer tree insertion should be deferred to CTS/PnR.

---

## 5. RTL Microarchitecture & Silicon Area Drivers

An inspection of `rtl/core/vector_coprocessor.sv`, `rtl/core/vector_reg_file_3port.sv`, `rtl/execution/vector_exec_unit.sv`, and `rtl/execution/vlsu.sv` reveals the dominant silicon consumers:

```
+-------------------------------------------------------------------------+
|                  vector_coprocessor (Estimated Area Breakdown)          |
+------------------------------------+------------------------------------+
|  Vector Register File (VRF)        |  Execution Datapath                |
|  - 4,096 Flip-Flops (16 x 256b)    |  - 8x (32x32) VMAC Multipliers     |
|  - 3x 16:1 256-bit Read Muxes      |  - 8x (32x32) VMUL Multipliers     |
|  - Area: ~45 - 55% of total cells  |  - 8x 32b Adders/Subtractors       |
|                                    |  - Area: ~35 - 45% of total cells  |
+------------------------------------+------------------------------------+
|  Control Logic, FSM, & VLSU Buffers                                     |
|  - State registers, request counters, address generators: ~5 - 10%      |
+-------------------------------------------------------------------------+
```

### 5.1 Dominant Area Contributor 1: Vector Register File (VRF)
- **Flip-Flop Footprint**: 16 registers $\times$ 256 bits = 4,096 sequential storage elements. In standard cell libraries, sequential elements consume 4-6x the area of simple logic gates.
- **Multiplexer Footprint**: Three 256-bit read ports with 16-to-1 selection require $3 \times 256 \times (16:1\text{ Mux}) = 768$ 16:1 multiplexers (~6,000 standard gates).
- **Recirculation Logic**: Without clock gating, every flip-flop recirculates data via an input multiplexer, doubling the combinational overhead per bit.

### 5.2 Dominant Area Contributor 2: Arithmetic Execution Unit
- `vector_exec_unit.sv` instantiates 8 parallel lanes across 256-bit vectors:
  - `vmac_result`: Computes $A \times B + C$ (8 parallel 32x32 multipliers + 8 32-bit adders).
  - `vmul_result`: Computes $A \times B$ (8 parallel 32x32 multipliers).
- **Arithmetic Redundancy**: `vmul` is functionally identical to `vmac` with accumulator operand $C = 0$. In the current RTL, separate `always_comb` loops define `vmac_result` and `vmul_result`. Unless the synthesis tool explicitly merges these expressions, the design will synthesize **16 separate 32x32 multipliers**, doubling multiplier silicon area!

---

## 6. Actionable Area Optimization Levers

### 6.1 Tool-Driven Levers (Zero Source RTL Risk)
1. **Automated Clock-Gating Insertion**:
   - Command: `set_db lp_insert_clock_gating true`
   - **Mechanism**: Genus identifies bus-wide register enable conditions (e.g. `vrf_we && (waddr_i == k)`) and replaces individual flip-flop recirculation multiplexers with Integrated Clock Gating (ICG) cells.
   - **Payoff**: Eliminates thousands of multiplexer gates across the 4,096 VRF flip-flops, saving an estimated 15-25% of VRF combinational area while cutting dynamic clock power.
2. **Datapath Resource Sharing & Merging**:
   - Command: `set_db dp_sharing true`, `set_db syn_generic_effort high`, `set_db syn_opt_effort high`
   - **Mechanism**: Forces Genus datapath optimization engine to evaluate common sub-expressions and share 32x32 multiplier instances between VMAC and VMUL operations.
   - **Payoff**: Potential elimination of 8 redundant 32x32 multipliers, reclaiming ~15,000 - 25,000 $\mu\text{m}^2$ of logic in 45nm.
3. **Hierarchical Boundary Optimization (Ungrouping)**:
   - Command: `set_db auto_ungroup both` (or explicit `ungroup vector_exec_unit`)
   - **Mechanism**: Dissolves module boundaries between `vector_coprocessor`, `vrf_inst`, and `exec_unit_inst`.
   - **Payoff**: Allows logic optimizer to propagate constants, simplify multiplexing, and remove unreferenced internal signals.
4. **Unloaded Sequential Pruning**:
   - Command: `set_db delete_unloaded_seqs true`
   - **Mechanism**: Removes state bits or register bits that do not fan out to observable primary outputs or memory requests.

### 6.2 Floorplan & Physical Levers
1. **Target Core Utilization**:
   - Set core utilization to 0.55 - 0.65 (`create_floorplan -core_util 0.60`).
   - Higher utilization (>0.75) in wide-datapath designs causes acute routing congestion, forcing Innovus to insert detour buffers and sizing up drivers, paradoxically increasing total silicon area.
2. **Channel Aspect Ratio**:
   - Square floorplan (`-aspect_ratio 1.0`) minimizes worst-case fly-lines across the 256-bit vector bus.

---

## 7. Equivalence Checking & Verification Requirements

Per project rules, area optimization must guarantee 100% functional fidelity against baseline RTL:
1. **Conformal LEC Setup**:
   - Golden: Unmodified SystemVerilog RTL.
   - Revised: Synthesized / optimized gate netlist.
   - Genus export proc must generate Conformal dofile:
     ```tcl
     write_do_lec -golden_design rtl -revised_design <netlist>.v \
         -logfile lec.log > rtl_to_final.lec.do
     ```
2. **LEC Handling of Clock Gating & Datapath**:
   - If ICG cells are inserted, configure Conformal: `add clock gate` / `set flatten model -gated_clock`.
   - Multiplier retiming / Booth encoding: Enable advanced datapath solver in Conformal (`set compare options -threads 4`, `set analyze abort -compare`).
3. **Differential Simulation Gate**:
   - Complement LEC with cycle/transaction trace comparison via `rtl2gds/verif/tb_vcop.sv` across the random seed and stall matrix before accepting any candidate optimization.

---

## 8. Area and Timing Comparison Discipline

To avoid misleading conclusions, comparisons must adhere to the following rules:
1. **Constant PDK & Library Corner**: Never compare 7nm ASAP7 numbers with 45nm GPDK numbers.
2. **Constant Timing Constraints**: Baseline and candidate designs must be evaluated under identical clock period (20.0 ns), clock uncertainty (0.25 ns), and I/O budgets.
3. **Report Metric Separation**:
   - **Standard Cell Area** (`get_db designs .area`): Pure logic and sequential silicon footprint.
   - **Core Area** (`core_width * core_height`): Total allocated die block area including routing tracks and decap/tap filler cells.
   - **Worst Negative Slack (WNS) & Total Negative Slack (TNS)**: Verification of timing closure ($WNS \ge 0$). An area reduction achieved with failing timing ($WNS < 0$) is invalid.
4. **Physical Cleanliness**: GDS signoff requires zero geometry DRC violations (`verify_drc`) and zero open/short connectivity violations (`verify_connectivity`).

---

## 9. Review Summary & Action Checklist

| Item | Status | Action Item / Owner |
| :--- | :---: | :--- |
| **PDK Selection** | Complete | GPDK 45nm confirmed as sole viable path for complete Genus+Innovus flow; `phys-lead` |
| **SDC Coverage** | Action Needed | Replace wildcards with `all_inputs`/`all_outputs`; add input transition; `phys-lead` |
| **Reset Buffering** | Action Needed | Declare `set_ideal_network [get_ports rst_ni]` in synthesis; `phys-lead` |
| **Area: Clock Gating** | Recommended | Set `lp_insert_clock_gating true` to collapse VRF recirculation muxes; `phys-lead` |
| **Area: Multiplier Sharing** | Recommended | Set `dp_sharing true` to eliminate redundant VMAC/VMUL multipliers; `phys-lead` |
| **LEC & Equivalence** | Ready | Conformal LEC dofile generation integrated into `genus_flow.tcl`; `phys-lead` |
| **Verification Gate** | Ready | `tb_vcop.sv` matrix ready for differential validation; `rtl-review` |
