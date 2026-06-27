# ASIC Design & Timing Methodology: Hardening a Coprocessor

This document explains the industry-standard physical design (RTL to GDS) and Static Timing Analysis (STA) methodologies for coprocessors (like VCoP) that interface with a host CPU core (like CV32E40X) over a decoupled interface (such as OpenHW's X-IF).

---

## 1. Flat vs. Hierarchical Physical Design Flows

When taking an SoC containing a CPU and a coprocessor from RTL to silicon (GDSII), design teams choose between two main methodologies:

```
  FLAT FLOW:                         HIERARCHICAL FLOW:
  ┌──────────────────────────────┐   ┌──────────────────────────────┐
  │ SoC Top                      │   │ SoC Top                      │
  │  ┌───────┐      ┌────────┐   │   │  ┌───────┐      ┌────────┐   │
  │  │  CPU  │◄────►│ Coproc │   │   │  │  CPU  │◄────►│ Coproc │   │
  │  │       │      │        │   │   │  │ Macro │      │ Macro  │   │
  │  └───────┘      └────────┘   │   │  │ (LEF) │      │ (LEF)  │   │
  │                              │   │  └───────┘      └────────┘   │
  └──────────────────────────────┘   └──────────────────────────────┘
  (One physical layout run)          (Blocks hardened separately,
                                      routed at Top)
```

### Approach A: Flat Design Flow
The entire SoC (CPU + Caches + Coprocessor + Interconnect) is synthesized and placed-and-routed together as a single top-level physical block.
* **When is it used?** For smaller microcontroller-class chips (e.g., designs under 500k gates).
* **Industry Practice**: This coprocessor project (~4,000 gates combined) is ideal for a flat flow. Tools like OpenLane can process the entire `soc_top_with_cache` top module flat in a few hours.
* **Pros**: 
  * The PnR (Place & Route) tool has global visibility, allowing it to optimize timing paths *across* the CPU and Coprocessor boundaries (e.g., optimizing buffers directly on X-IF wires).
  * No need to write complex interface constraints; timing is closed globally.
* **Cons**: Scaling limitations. It cannot be used for larger multi-million gate SoCs due to PnR memory limitations and long runtime.

### Approach B: Hierarchical Design Flow (Industry Standard)
The CPU and Coprocessor are treated as separate physical blocks (called **macros** or **partitions**). Each block is individually taken from RTL to GDS.
1. **Hardening**: The coprocessor RTL is synthesized and routed independently, generating:
   * **GDSII**: The physical layout database.
   * **LEF (Library Exchange Format)**: An abstract geometry model of the block showing boundary size and metal pin locations (but hiding internal gates).
   * **Liberty (`.lib`)**: The timing model representing delays from input pins to registers, and registers to output pins.
2. **Top-Level Integration**: The top-level PnR tool instantiates the pre-hardened CPU macro, Coprocessor macro, and memory blocks, routing only the global interconnect wires between them.
* **Pros**:
  * **Divide and Conquer**: Changes to the coprocessor RTL only require re-hardening that block; the CPU block remains untouched.
  * **Scalability**: Reduces physical design runtime and memory consumption.
* **Cons**: Requires strict **Timing Budgeting** at block boundaries to prevent top-level timing violations.

---

## 2. Timing Budgeting for the eXtension Interface (X-IF)

In a hierarchical flow, when hardening the coprocessor independently, you must tell the STA tool what to expect at its interfaces (X-IF Issue, Commit, Result, Memory). You do this using **timing budgets** defined via Synopsys Design Constraints (SDC).

```
   Host CPU (Block A)                     Coprocessor (Block B)
  ┌──────────────────┐   Global Wire     ┌──────────────────┐
  │                  │   Delay (Net)     │                  │
  │   Reg    Logic   │      Net          │   Logic    Reg   │
  │  ┌───┐   ┌───┐   │      Delay        │   ┌───┐   ┌───┐  │
  │  │ Q ├─► │   ├───┼───────(~)────────►┼──►│   ├──►│ D │  │
  │  └───┘   └───┘   │                   │   └───┘   └───┘  │
  │  Launch  T_launch│      T_wire       │   T_setup Capture│
  └──────────────────┘                   └──────────────────┘
  ◄──── Budget A ────►◄─── Budget Top ──►◄──── Budget B ────►
```

For a target clock period of $T_{clk}$ (e.g., **20.0 ns**):
* **Launch Delay (CPU)**: Time for data to leave the CPU register and reach the CPU boundary pin ($T_{launch}$).
* **Flight Delay (Wire)**: Time for the signal to propagate along top-level interconnect wires ($T_{wire}$).
* **Capture Setup (Coprocessor)**: Time needed for the signal to travel from the coprocessor boundary pin to the first capturing register ($T_{setup}$).

### Industry Rule-of-Thumb Budget Allocation (e.g., 40/20/40 Rule)
* **40% for Source Block**: $T_{launch} \le 8.0\text{ ns}$ (SDC: `set_output_delay` on CPU outputs).
* **20% for Interconnect Wire**: $T_{wire} \le 4.0\text{ ns}$.
* **40% for Destination Block**: $T_{setup} \le 8.0\text{ ns}$ (SDC: `set_input_delay` on Coprocessor inputs).

### How to apply Block-Level Constraints for VCoP (SDC Example)
When running block-level STA on the coprocessor block alone, you constrain its boundaries relative to the virtual clock:

```tcl
# Create clock representing the top-level system clock
create_clock -name clk -period 20.0 [get_ports clk_i]

# Budgeting Input Pins (X-IF Issue/Commit, Memory response):
# Assume host CPU consumes up to 8.0 ns, and top-level wire delay is 4.0 ns.
# Total input delay = 12.0 ns. The coprocessor block has 8.0 ns left to capture.
set_input_delay -clock clk 12.0 [get_ports xif_issue_req_i*]
set_input_delay -clock clk 12.0 [get_ports xif_commit_i*]
set_input_delay -clock clk 12.0 [get_ports xif_mem_resp_i*]

# Budgeting Output Pins (X-IF Issue ready, Results, Memory requests):
# We constrain our outputs so that they leave the coprocessor block within 8.0 ns,
# leaving 12.0 ns for wire flight + CPU setup.
# SDC output delay = Total Period - Coprocessor Output Budget = 20.0 - 8.0 = 12.0 ns.
set_output_delay -clock clk 12.0 [get_ports xif_issue_ready_o]
set_output_delay -clock clk 12.0 [get_ports xif_result_o*]
set_output_delay -clock clk 12.0 [get_ports xif_mem_req_o*]
```

---

## 3. Top-Level Sign-Off (STA)

Once both blocks are hardened and integrated at the top level, timing verification is run at the SoC Top level:

1. **Load Mapped Models**: Read liberty models of the hardened CPU macro, Coprocessor macro, and Caches.
2. **Read Parasitics (SPEF/DSPF)**: Read wire RC extraction data (SPEF files) containing exact physical delays of global routing nets between CPU and Coprocessor pins.
3. **Run Top-Level STA**: OpenSTA evaluates paths across boundaries.
   * If a path violates setup timing (e.g., CPU issues an instruction request to Coprocessor, but it takes 21.0 ns), it shows up as a top-level setup violation.
   * If the violation is inside a block, that block's layout must be re-run with tighter constraints.
   * If the violation is in the interconnect wire delay, the top-level layout must be adjusted (e.g., by inserting repeaters or moving macros closer).
