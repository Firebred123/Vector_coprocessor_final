# Independent Methodology & Area Optimization Review

**Project**: Vector Coprocessor (VCoP) RTL-to-GDS Hardening  
**Author**: `method-review` (Independent Reviewer)  
**Target Design Top**: `vector_coprocessor`  
**Date**: November 2026  
**Status**: Revised Independent Audit (Distinguishing Evidence vs Hypotheses)  

---

## 1. Executive Summary & Audit Scope

This review provides an independent, objective audit of the RTL-to-GDS implementation flow, physical collateral feasibility, timing constraint coverage, silicon area drivers, and formal equivalence requirements for the `vector_coprocessor` macro.

In accordance with [COORDINATION.md](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/COORDINATION.md):
- `phys-lead` is the sole writer driving live Genus and Innovus EDA sessions via RTL2GDS_MCP and managing WorkBoard server synchronization.
- `method-review` maintains strict independence, performing no live tool mutations or source code overrides, and owning this methodology assessment.
- All candidate implementations must be measured against an unchanged-RTL baseline under identical PDK, library corner, operating conditions, and timing constraints.
- **Methodological Distinction**: In this review, all unmeasured architectural assertions are explicitly designated as *hypotheses* or *analytical models* until confirmed by tool log evidence and post-synthesis / post-route reports.

---

## 2. Physical Collateral & PDK Feasibility Audit

### 2.1 Collateral Inventory
A complete RTL-to-GDS flow requires both logical timing models (`.lib`) and physical layout abstractions (`.lef`):

1. **Local ASAP7 7nm Collateral (`PDK/LIB/asap7sc7p5t_*.lib`)**:
   - **Status**: *Incomplete for Physical PnR*.
   - **Evidence**: The local repository contains Liberty NLDM timing models for 7.5-track standard cells (AO, OA, INVBUF, SEQ, SIMPLE) in the slow-slow (SS) corner (`asap7sc7p5t_*_SS_nldm_*.lib`).
   - **Finding**: **No Tech LEF or Standard Cell LEFs exist in the local workspace.** While Genus can synthesize logic using default Wire Load Models (WLM), Innovus physically cannot place standard cells, synthesize clock trees, or route metal layers without physical LEF geometry. Attempting Innovus execution with local ASAP7 alone will halt at `init_design`.
2. **Server-Side SCL 180nm Collateral (`/cadence/scl180/...`)**:
   - **Status**: Complete collateral (Liberty `.lib`, Tech LEF, Cell LEF).
   - **Evidence**: Verified during RTL2GDS_MCP smoke testing (`counter.v`). Suitable for conservative legacy node verification.
3. **Server-Side Cadence GPDK 45nm Collateral (`/cadence/FOUNDRY/digital/45nm/dig`)**:
   - **Status**: *Recommended & Feasible*.
   - **Evidence**: Confirmed present on the EDA server. Provides matching timing libraries (`slow.lib`) and physical LEF collateral (`gsclib045_tech.lef`, `gsclib045_macro.lef`).
   - **Finding**: Enables Genus Physical Layout Estimation (PLE) during synthesis and full closed-loop Place & Route in Innovus.

### 2.2 PDK & Tool Recommendations
- **Adopt GPDK 45nm as the primary implementation target**: Enables clean, repeatable synthesis-to-GDS correlation across both Genus and Innovus.
- **Unit Consistency Verification**: Ensure SDC time and capacitance units match the Liberty library header (`slow.lib`: time unit `1ns`, capacitive load unit `1pF`). The SDC `set_units` command must align with these library defaults to prevent scaling errors.

---

## 3. Stage Ordering & Flow Architecture

### 3.1 RTL2GDS_MCP Operating Environment & Safeguards
- Genus and Innovus are driven through persistent named pipes (`MCP_genus.command`, `MCP_innovus.command`) attached to live GUI event loops.
- **Critical Safeguard**: Flow scripts must **never** execute `exit` or `quit`. Original repository scripts (`cadence_genus_synth.tcl`, `cadence_genus_1ns.tcl`, `cadence_tempus.tcl`) all conclude with `exit`. Sourcing them in live sessions kills the GUI process and permanently terminates the MCP bridge.
- `phys-lead`'s modular proc architecture in [`rtl2gds/flow/genus_flow.tcl`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/flow/genus_flow.tcl) correctly encapsulates commands within procs (`vc::setup`, `vc::read_elab`, `vc::constrain`, `vc::synth`, `vc::report`, `vc::export`) without exit traps.

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
   - `check_design -unresolved` must be augmented with `check_design -all` or `check_design -lint` to catch multi-driven nets, floating inputs, and undriven pins before logic mapping.
   - Sequential Latch Audit: Inferred latches (`get_db insts -if {.is_latch==true}`) must evaluate to zero. Latching in synchronous vector coprocessors indicates incomplete decoder coverage, creating severe STA and testability penalties.
2. **Timing Intent Validation**:
   - Apply constraints *before* generic compilation (`syn_generic`) so logic structuring is timing-driven.
   - Run `check_timing_intent -verbose` and `report_timing -lint` prior to `syn_generic`.
3. **Sequential Synthesis Milestones**:
   - Step through `syn_generic` -> `syn_map` -> `syn_opt` sequentially, capturing intermediate area and timing slack reports at each milestone.

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
   - `vector_coprocessor` has wide I/O interfaces (X-IF CPU request/response/result, OBI/memory request/result).
   - **Pitfall**: Leaving pin placement unconstrained causes Innovus to place all macro pins on default origin coordinates (0,0), creating routing congestion, localized pin density violations, and excessive buffer insertion.
   - **Remedy**: Use `editPin` or an automated pin assignment script to distribute CPU interface pins along one boundary (e.g. West) and memory interface pins along another (e.g. East/North).
2. **Power Grid Robustness**:
   - Run DRC checks on power rings and stripes prior to standard cell placement.
   - Verify `sroute` connects standard cell FollowPin rails cleanly across all rows.
3. **Clock Tree Synthesis (CTS) & Propagated Clocks**:
   - Clock tree latency and skew become physical post-CTS (`set_propagated_clock [all_clocks]`).
   - Clock uncertainty must be updated based on a documented jitter/skew budget (see Section 4.3), applied consistently across baseline and candidate runs.

---

## 4. SDC Correctness, Coverage, & Timing Budget Audit

### 4.1 Critical SDC Bug: Negative In-to-Out Timing Budget ($in12 + out12 > 20\text{ ns}$)
In both [`commercial_flow/coprocessor_commercial.sdc`](file:///Users/vs/function/Vector_coprocessor_final/commercial_flow/coprocessor_commercial.sdc) and [`rtl2gds/flow/constraints/vector_coprocessor.sdc`](file:///Users/vs/function/Vector_coprocessor_final/rtl2gds/flow/constraints/vector_coprocessor.sdc), the clock period is set to $20.0\text{ ns}$, with:
```tcl
set_input_delay  -clock clk 12.0 [get_ports ...]
set_output_delay -clock clk 12.0 [get_ports ...]
set_clock_uncertainty 0.25 [get_clocks clk]
```
**Architectural Defect**:
For any combinational feedthrough or same-cycle path originating at a primary input and terminating at a primary output:
$$\text{Data Required} = T_{\text{period}} - T_{\text{output\_delay}} - T_{\text{uncertainty}} = 20.0 - 12.0 - 0.25 = 7.75\text{ ns}$$
$$\text{Data Arrival} = T_{\text{input\_delay}} + T_{\text{logic\_delay}} = 12.0 + T_{\text{logic\_delay}}$$
$$\text{Slack} = \text{Data Required} - \text{Data Arrival} = 7.75 - 12.0 - T_{\text{logic\_delay}} = -4.25\text{ ns} - T_{\text{logic\_delay}}$$

**Even before factoring in internal logic delays, wire parasitics, and cell transitions, the timing budget is structurally negative by $-4.25\text{ ns}$!**

**Affected RTL Paths in `vector_coprocessor.sv`**:
1. **Instruction Handshake Feedthrough (`xif_issue_req_i` $\rightarrow$ `xif_issue_resp_o`)**:
   In `vector_coprocessor.sv` (lines 175–182):
   ```systemverilog
   always_comb begin
       xif_issue_resp_o = '0;
       if (is_custom_in && (state == IDLE)) begin
           xif_issue_resp_o.accept = 1'b1;
           xif_issue_resp_o.writeback = !is_store_in;
           xif_issue_resp_o.loadstore = is_load_in || is_store_in;
       end
   end
   ```
   `xif_issue_resp_o` is driven combinationally from `xif_issue_req_i.instr` when `state == IDLE`. With an input delay of 12.0 ns and an output delay of 12.0 ns, this path is **guaranteed to violate setup timing by $>4.25\text{ ns}$ in every synthesis run**.
2. **Zero-Latency Memory Request Feedthrough (`xif_issue_req_i` / `xif_issue_valid_i` $\rightarrow$ `xif_mem_valid_o` / `xif_mem_req_o`)**:
   In `vlsu.sv` (lines 53–65, 164–187):
   When `state == IDLE` and an instruction is accepted, `first_load` / `first_store` combinational logic routes `xif_issue_req_i.rs[0]` directly to `xif_mem_req_o.addr` and asserts `xif_mem_valid_o` in the same cycle. This path likewise experiences a structurally negative timing budget of $-4.25\text{ ns} - T_{\text{logic}}$.

**Methodology Recommendation**:
- The I/O budget must be rebalanced to establish a positive internal timing window. For example, if the CPU launch budget is 8.0 ns (40%) and interconnect is 2.0 ns (10%), `set_input_delay` is 10.0 ns; setting `set_output_delay` to 6.0 ns leaves 3.75 ns of positive internal slack for feedthrough decode and multiplexing.
- Alternatively, if feedthrough is protocol-permitted across multiple cycles or multi-cycle path exceptions apply, explicit SDC exceptions (`set_multicycle_path`) or interface pipeline registers must be documented.

### 4.2 Frequency Hypotheses: 1.0 GHz (1.0 ns) vs 50 MHz (20.0 ns)
- **1.0 ns (1.0 GHz) Hypothesis**:
  - In `commercial_flow/coprocessor_1ns.sdc`, the 1.0 ns period with 0.60 ns input delay and 0.05 ns uncertainty leaves only $0.35\text{ ns}$ (350 ps) for internal capture.
  - *Analytical Hypothesis*: The unpipelined combinational path through input decode $\rightarrow$ 256-bit 16:1 VRF read multiplexer $\rightarrow$ 32x32 multiplier $\rightarrow$ 32-bit adder $\rightarrow$ VRF flip-flop setup is expected to exhibit severe negative slack ($WNS \ll 0$) at 1 GHz in 45nm/7nm. The tool is likely to excessively resize gates and insert high-drive buffers without closing timing.
  - *Verification Requirement*: This hypothesis must be substantiated by empirical Genus timing reports under the target library corner.
- **20.0 ns (50 MHz) Hypothesis**:
  - A 20.0 ns clock period provides a reasonable starting target for an unpipelined 32x32 multiplier datapath, provided the $in12 + out12$ negative feedthrough budget is corrected. Actual setup and hold closure will be verified via baseline Genus timing reports.

### 4.3 Clock Uncertainty Methodology & Propagated Clocks
- **Methodology Rule**: Clock uncertainty must not be arbitrarily reduced (e.g. from 0.25 ns to 0.05 ns) as an artificial mechanism to gain slack or claim area reduction.
- **Budgeting Principles**:
  - **Pre-CTS (Synthesis)**: Clock uncertainty covers both expected clock source/PLL jitter *and* an anticipated clock tree skew margin across the macro (e.g., $T_{\text{jitter}} + T_{\text{skew\_margin}}$).
  - **Post-CTS (Innovus PnR)**: Once the clock tree is synthesized and `set_propagated_clock [all_clocks]` is asserted, clock network insertion delay and skew are explicitly calculated from the extracted clock tree. Uncertainty at this stage should represent only documented jitter and power supply noise margins.
  - **Equivalence Rule**: To maintain an apples-to-apples comparison, baseline and candidate designs must be evaluated under **identical documented uncertainty values and identical clock constraint files**.

### 4.4 Additional SDC Hardening
1. **Wildcard Struct Port Coverage**:
   - Replacing wildcard globs (`get_ports xif_issue_req_i*`) with collection arithmetic guarantees 100% pin coverage regardless of how SystemVerilog struct ports are flattened during elaboration:
     ```tcl
     set_input_delay -clock clk 10.0 [remove_from_collection [all_inputs] [get_ports clk_i]]
     set_output_delay -clock clk 6.0 [all_outputs]
     ```
2. **Input Transition Constraints**:
   - Current SDC files omit input transition on data inputs. Genus defaults to ideal (0 ps transition) drivers, leading to optimistic gate delays at the boundary.
   - Recommended constraint:
     ```tcl
     set_input_transition 0.15 [remove_from_collection [all_inputs] [get_ports clk_i]]
     ```
3. **Asynchronous Reset (`rst_ni`) Treatment**:
   - Marking `rst_ni` as an ideal network during logic synthesis prevents Genus from inserting an unplaced, high-fanout buffer tree (>4000 endpoints) prior to physical placement:
     ```tcl
     set_ideal_network [get_ports rst_ni]
     ```

---

## 5. Structural RTL Analysis & Candidate Area Drivers

Absent synthesis area reports, area assertions are grounded in structural cell counts and architectural component analysis:

### 5.1 Storage & Sequential Elements (Vector Register File)
- **Flip-Flop Count**: 16 registers $\times$ 256 bits = 4,096 sequential flip-flops in `vector_reg_file_3port.sv`.
- **Read Multiplexing**: Three 256-bit read ports with 16-to-1 selection require $3 \times 256 \times (16:1\text{ Mux}) = 768$ 16:1 multiplexers.
- **Recirculation Overhead**: Without clock gating, each flip-flop requires feedback multiplexing logic to maintain state when unwritten.
- *Hypothesis*: The VRF is structurally a leading candidate for design area, dominated by 4,096 sequential cells and 768 wide multiplexers.

### 5.2 Arithmetic Datapath Elements (Execution Unit)
- In `vector_exec_unit.sv`, the 256-bit vector is partitioned into eight 32-bit lanes:
  - `vmac_result`: Computes $A \times B + C$ (eight 32x32 multipliers + eight 32-bit adders).
  - `vmul_result`: Computes $A \times B$ (eight 32x32 multipliers).
- **Structural Duplication**: In the RTL, `vmac_result` and `vmul_result` are described in separate `always_comb` blocks.
- *Hypothesis*: Unless the synthesis tool automatically performs common sub-expression elimination or datapath resource sharing, the design risks mapping **16 distinct 32x32 multipliers**, representing a significant source of combinational logic area.

---

## 6. Actionable Tool-Driven Area Optimization Levers

The following tool optimization levers can be applied without mutating source RTL, preserving functional and interface semantics. Attribute syntax is verified against Cadence Genus 19.13 Common UI:

1. **Automated Clock-Gating Insertion**:
   - Command: `set_db lp_insert_clock_gating true`
   - *Mechanism*: Genus identifies bus-wide register enable conditions (e.g., `vrf_we && (waddr_i == k)`) and replaces individual flip-flop recirculation multiplexers with Integrated Clock Gating (ICG) cells.
   - *Expected Impact*: Replaces hundreds of discrete multiplexer gates across the 4,096 VRF flip-flops with a much smaller number of ICG cells, reducing combinational cell count and clock dynamic power.
2. **Datapath Resource Sharing**:
   - Commands:
     ```tcl
     set_db dp_sharing true
     set_db syn_generic_effort high
     set_db syn_opt_effort high
     ```
   - *Mechanism*: Enables Genus datapath optimization to evaluate resource sharing across conditional branches and arithmetic expressions, targeting the unification of VMAC and VMUL multiplication trees.
3. **Hierarchical Boundary Optimization (Ungrouping)**:
   - Command: `set_db auto_ungroup both`
   - *Mechanism*: Dissolves module boundaries between `vector_coprocessor`, `vrf_inst`, and `exec_unit_inst`, allowing constant propagation, dead logic pruning, and cross-boundary multiplexer collapsing.
4. **Unloaded Sequential Pruning**:
   - Command: `set_db delete_unloaded_seqs true`
   - *Mechanism*: Automatically identifies and removes registers whose outputs do not fan out to observable primary outputs or memory interfaces.

---

## 7. Equivalence Checking & Verification Requirements

Per project rules, candidate optimizations must be formally and functionally verified against baseline RTL:

1. **Conformal LEC Setup**:
   - Golden: Unmodified SystemVerilog RTL.
   - Revised: Synthesized / optimized gate-level netlist.
   - Genus export script generates a Conformal LEC dofile:
     ```tcl
     write_do_lec -golden_design rtl -revised_design <netlist>.v \
         -logfile lec.log > rtl_to_final.lec.do
     ```
2. **LEC Configuration for Tool Optimizations**:
   - Clock Gating: When ICG cells are inserted, configure Conformal with `add clock gate` or `set flatten model -gated_clock`.
   - Multiplier Architectures: Complex datapath transformations (e.g. Booth multipliers, Wallace trees) require Conformal's advanced datapath solver (`set compare options -threads 4`, `set analyze abort -compare`).
3. **Differential Simulation Gate**:
   - Complement LEC with cycle-accurate and transaction-level trace comparisons via `rtl2gds/verif/tb_vcop.sv` across the random seed and stall matrix prior to accepting any candidate netlist.

---

## 8. Area and Timing Comparison Discipline

To ensure rigorous, defensible results:
1. **Identical Setup**: Baseline and candidate designs must be evaluated under identical PDK, library corner, operating conditions, and SDC constraints.
2. **Distinct Metric Reporting**:
   - **Cell Area** (`get_db designs .area`): Standard cell silicon footprint.
   - **Core Area** (`core_width * core_height`): Total allocated macro core area including routing tracks and tap/filler cells.
   - **Timing Slack**: Record Worst Negative Slack (WNS) and Total Negative Slack (TNS). Area reductions accompanied by timing violations ($WNS < 0$) are invalid.
3. **Physical Cleanliness**: GDS signoff requires zero geometry DRC violations (`verify_drc`) and zero open/short connectivity violations (`verify_connectivity`).

---

## 9. Review Summary & Action Checklist

| Item | Status | Action Item / Owner |
| :--- | :---: | :--- |
| **PDK Selection** | Complete | GPDK 45nm confirmed as sole viable path for complete Genus+Innovus flow; `phys-lead` |
| **SDC Budget Fix** | Critical Defect | Fix $in12 + out12 > 20\text{ ns}$ negative timing budget on feedthrough paths; `phys-lead` |
| **SDC Hardening** | Action Needed | Replace wildcards with `all_inputs`/`all_outputs`; add input transition; `phys-lead` |
| **Reset Buffering** | Action Needed | Declare `set_ideal_network [get_ports rst_ni]` in synthesis; `phys-lead` |
| **Clock Uncertainty** | Methodology Rule | Use documented jitter/skew budget; do not arbitrarily reduce uncertainty; `phys-lead` |
| **Area: Clock Gating** | Recommended | Set `lp_insert_clock_gating true` to collapse VRF recirculation multiplexers; `phys-lead` |
| **Area: Multiplier Sharing** | Recommended | Set `dp_sharing true` to evaluate VMAC/VMUL multiplier sharing; `phys-lead` |
| **LEC & Equivalence** | Ready | Conformal LEC dofile generation integrated into `genus_flow.tcl`; `phys-lead` |
| **Verification Gate** | Ready | `tb_vcop.sv` matrix ready for differential validation; `rtl-review` |
