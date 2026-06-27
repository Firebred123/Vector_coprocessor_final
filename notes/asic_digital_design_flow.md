# Industry-Standard ASIC Digital Design Flow (RTL to GDS)

In the semiconductor industry, translating a digital design (like the Vector Coprocessor) from SystemVerilog RTL code to a manufacturing-ready physical layout (GDSII) follows a rigorous, step-by-step engineering pipeline known as the **Digital Physical Implementation and Sign-off Flow**.

---

## The ASIC Design Flow Pipeline

```
  1. RTL Code & Verification (SystemVerilog)
              │
              ▼
  2. Logic Synthesis (Design Compiler / Genus)  ◄── [Liberty Libraries & SDC]
              │
  ┌───────────┴───────────┐
  ▼                       ▼
  [Gate Netlist]     3. Formal Equivalence (Formality / Conformal LEC)
  │                       ▲
  ├───────────────────────┘
  ▼
  4. Physical Design / PnR (ICC2 / Innovus)     ◄── [LEF/Techfiles]
       ├── Floorplanning & Pin Placement
       ├── Power Grid Synthesis (Power Planning)
       ├── Placement & Legalization
       ├── Clock Tree Synthesis (CTS)
       └── Detailed Routing
              │
  ┌───────────┼─────────────────────────┐
  ▼           ▼                         ▼
  [Layout]  [SPEF Parasitics]     [Post-PnR Netlist]
  │           │                         │
  │           ▼                         ▼
  │         5. Parasitic Extraction   6. Sign-off STA (PrimeTime / Tempus)
  │            (StarRC / Quantus)
  ▼
  7. Physical Verification (Calibre / Pegasus)  ──► [DRC & LVS Checks]
  │
  ▼
  8. GDSII Tape-out Export
```

---

## Detailed Step-by-Step Breakdown

### 1. RTL Design and Functional Verification
* **Objective**: Write behavioral SystemVerilog RTL and verify that the logic performs correct calculations.
* **Status for VCoP**: Complete. Verified using Verilator testbenches and RISC-V CPU instruction execution.

### 2. Logic Synthesis
* **Objective**: Translate abstract behavioral code (like `A + B` or registers) into structural cell netlists (like adders, logic gates, and flip-flops) using the target PDK cells.
* **Commercial Tools**: Synopsys Design Compiler (DC) or Cadence Genus.
* **Inputs**:
  * SystemVerilog RTL files.
  * SDC (Synopsys Design Constraints) file (defines the target clock, e.g., 50 MHz).
  * Liberty timing files (`.lib`/`.db`): Contain gate delay data, pin capacitances, and power properties.
* **Outputs**:
  * **Gate-Level Netlist (`.v`)**: The mapped circuit schematic composed of standard cell gates.
  * **Synthesized SDC (`.sdc`)**: Updated constraints mapping to gate pins.

### 3. Formal Logical Equivalence Checking (LEC)
* **Objective**: Formally compare the synthesized gate-level netlist against the original RTL to prove they are logically identical.
* **Commercial Tools**: Cadence Conformal LEC or Synopsys Formality.
* **Why**: Synthesis tools perform complex Boolean math optimizations (such as register retiming or logic factoring). LEC ensures no logic bugs or gate-level mismatches were introduced during synthesis.

### 4. Physical Design: Place & Route (PnR)
* **Objective**: Place the gates onto the silicon floorplan and route the physical metal wires to connect them.
* **Commercial Tools**: Cadence Innovus or Synopsys IC Compiler II (ICC2).
* **Sub-Steps**:
  1. **Floorplanning & Pin Placement**: Define block boundary box size and coordinate locations. Place ports (`clk_i`, `rst_ni`, X-IF, OBI) on the boundaries. Pin placement is crucial in block hardening to align with top-level SoC routing.
  2. **Power Grid Synthesis (Power Planning)**: Route thick VDD and VSS metal rings around the block and vertical/horizontal stripes across the block to distribute power evenly and prevent voltage drops (IR drop).
  3. **Placement**: Place standard cell instances onto the rows. First, coarse placement, then optimization, then legalization (matching cell boundaries to the site grid).
  4. **Clock Tree Synthesis (CTS)**: Standard cells need clock inputs. Because clock skew (difference in clock arrival time at different registers) can ruin timing, PnR builds a tree of clock buffers (a clock tree) to deliver the clock signal to all flip-flops simultaneously.
  5. **Routing**: Interconnects the placed cell pins using metal layers (Metal 1 to Metal 6/8). Runs global routing (finding tracks) and detail routing (respecting DRC grid rules).

### 5. Parasitic Extraction (RC Extraction)
* **Objective**: Extract the physical capacitance and resistance of all routed wires in the design.
* **Commercial Tools**: Synopsys StarRC or Cadence Quantus.
* **Why**: Physical wires introduce resistance and capacitance that delay signals. The PnR router only estimates these delays; sign-off timing analysis requires exact extraction.
* **Output**: **SPEF file (`.spef`)** (Standard Parasitic Exchange Format).

### 6. Sign-off Static Timing Analysis (STA)
* **Objective**: Ensure the design operates without timing violations under all operating conditions.
* **Commercial Tools**: Synopsys PrimeTime or Cadence Tempus.
* **Inputs**: Mapped Netlist + SPEF Parasitics + SDC Constraints + Multi-corner Liberty files (`.lib`).
* **Checks**:
  * **Setup Timing (Max Delay)**: Verifies the longest path completes within the clock cycle.
  * **Hold Timing (Min Delay)**: Verifies fast paths do not overwrite stable register inputs.
  * **Corners Checked**: Evaluates multiple corners (e.g., Worst-Case/Slow corner for setup timing, Best-Case/Fast corner for hold timing).

### 7. Physical Verification
* **Objective**: Check that the physical geometries conform to manufacturing limits.
* **Commercial Tools**: Siemens Calibre, Cadence Pegasus, or Synopsys IC Validator.
* **Checks**:
  * **DRC (Design Rule Checking)**: Checks that wire widths, spacings, and layout patterns do not violate foundry rules (e.g., minimum distance between metal traces).
  * **LVS (Layout vs. Schematic)**: Extracts the transistor/wire netlist from layout shapes and compares it with the gate netlist to confirm that the layout represents the correct logical design.

### 8. Tape-out GDSII Streamout
* **Objective**: Export the final physical layout databases.
* **Output**: **GDSII (`.gds`)** or **OASIS (`.oasis`)** database file. This file contains the layered geometries sent directly to the semiconductor foundry (TSMC, Intel, GlobalFoundries) to manufacture the masks for fabrication.
