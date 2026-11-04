# RTL review: vector_coprocessor (area-focused RTL-to-GDS experiment)

Owner: rtl-review (Claude Opus 5.5, `claude-opus-5-5`). Scope: functional and synthesis
risk review of the synthesis top, area opportunities that preserve function, and
self-contained verification evidence. No design RTL in `rtl/` was modified and no EDA
session was driven. All RTL candidates are delivered as patches under
`rtl2gds/verif/candidates/` for phys-lead / codex-1 to adopt.

Reviewed source: repo files at `dbc5fcd` (unchanged through this review):

| file | sha256 |
|---|---|
| rtl/core/vector_coprocessor.sv | 2164c442606947da9262b0e93aa98ed9907e76982ea5fda999deffb69a688826 |
| rtl/core/vector_reg_file_3port.sv | 79eb322f5ae83e21dbc3408d760c216c97838da33733b0e493f380de2affd4d8 |
| rtl/execution/vlsu.sv | c697c18741c545552e91afa0d4c1ad975a1d01a364436b736d8c0ecd6715e5d8 |
| rtl/execution/vector_exec_unit.sv | b6432211e287d34f6281b910c6483af2ad0f86ced78aa080a9b9b053bc62f831 |
| rtl/include/cv32e40x_xif_pkg.sv | becd1a8ca3ac25064eeeab2adf25f340f3a95324ea366d006c0c0db0fe09f4d5 |
| include/custom_opcodes.vh | bfe2cc077d03e986269a1180828102495ce5acd700d21e696d01ccba8b056a50 |

Tools used locally: Verilator 5.032, Icarus Verilog 12.0, sv2v, Yosys 0.60 (+ABC).
RISC-V GCC is absent, so the SoC-level software tests (`sim/tests/*.s`, `make test`)
could not be rebuilt; the standalone testbench below replaces them for this top.

## 1. Active hierarchy and interfaces

`vector_coprocessor` (top, params VLEN=256, ELEMENT_WIDTH=32, X_ID_WIDTH=4)
- `vector_reg_file_3port` (NUM_REGS=16 from the top, VLEN=256 default): 16 x 256 b,
  3 combinational read ports, 1 write port, async active-low reset of every entry,
  v0 hardwired to zero (reads forced to 0, writes dropped).
- `vlsu`: one 32-bit X-IF memory request per cycle, 8 words per vector;
  `load_data_q` (256 b) and `store_data_q` (256 b).
- `vector_exec_unit`: 8 lanes, single-cycle VADD/VSUB/VMUL/VMAC (low 32 bits).

Not instantiated by the top, but read by the commercial Genus scripts:
`vmac_unit.sv`, `systolic_2x2.sv`, `vector_matmul_unit.sv`, `vector_reg_file.sv`.
They only add elaboration noise. `vector_coprocessor_backup.sv` and `vlsu_debug.sv` are unused.

Control: FSM IDLE -> (ALU) WRITEBACK, or IDLE -> EXEC_LSU -> WRITEBACK.
- `xif_issue_ready_o = (state==IDLE)`.
- `issue_resp` is combinational from `issue_req.instr`.
- The ALU result and the VRF write happen in the accept cycle, straight from the X-IF
  input instruction: decode -> 16:1 256 b VRF read mux -> 8 multipliers -> VRF D pins.
- `xif_result_o.data` is element 0 only.

## 2. Findings

Severity: H = affects silicon/QoR or the comparison; M = real defect with a limited
trigger; L = hygiene. "Preserved" means this experiment must keep the behaviour
(COORDINATION rule 5); the finding is documentation, not a fix request.

### Synthesis and STA hazards

| id | sev | finding | evidence | action |
|---|---|---|---|---|
| S1 | H | 5-bit VRF addresses index a 16-entry array (`vrf[raddr]`, `vrf[waddr]`). For v16..v31, simulation drops the write and returns X/0 on read, while synthesis may truncate to [3:0] (aliasing v16->v0 .. v31->v15). This is a sim/synth mismatch and an LEC risk. | Verilator `WIDTHTRUNC` x4 (`vector_reg_file_3port.sv:38-40,51`) | phys-lead: record how Genus resolves it (elab messages); LEC must not hide it. The TB uses v0..v15 only. |
| S2 | H | `vlsu.sv:96-106,116-126`: `result_idx = req_cnt_q - 1` underflows to 15 when a load result arrives with `req_cnt_q==0`, so it writes bits [511:480] of a 256-bit vector. The result is undefined: Icarus drops the write, Verilator wraps it. Reachable with a zero-latency memory when the first VLD request is not granted in the issue cycle (F4). | Icarus vs Verilator traces differ only in those runs (17/89 baseline runs, all flagged `ub_oor>0`) | Documented exclusion in the gate. Genus behaviour must be checked, not assumed. |
| S3 | M | `vlsu.sv:116`: block-local `idx` in `always_comb`, which Verilator reports as LATCH. | Verilator `-Wall` | phys-lead: confirm 0 latches after elaboration. |
| S4 | H | SDC (`commercial_flow/coprocessor_commercial.sdc` = `rtl2gds/flow/constraints/vector_coprocessor.sdc`): 12 ns input + 12 ns output delay on a 20 ns clock, while the RTL has real in->out paths: `issue_req.instr -> issue_resp`, `issue_valid/rs[0] -> mem_valid/mem_req.addr`, `instr -> VRF read -> mem_req.wdata` (first store word). These cannot be met regardless of logic. In->reg paths get ~8 ns for decode + 16:1 read mux + 32x32 multiply-add (S5). | RTL inspection; same diagnosis in COORDINATOR_REVIEW / METHODOLOGY_REVIEW | Report in2out separately. Do not let the optimizer upsize chasing it. Keep constraints identical across baseline and candidates. |
| S5 | H | The whole exec unit sits in the input->VRF path (accept cycle). Under S4 this drives upsizing, so it inflates area as well as timing. | RTL | Candidate R5 removes it (operands from registered addresses). |
| S6 | L | `$display` in `always_comb` and `always_ff` (top, VRF, exec). Genus ignores them; in simulation the comb ones fire on every evaluation. | lint / iverilog warnings | none |
| S7 | L | VRF has an `initial` loop plus async reset. Synthesis ignores `initial`. | RTL | none |
| S8 | L | Dead or unloaded logic that synthesis should strip (no RTL action; ports must stay): `funct7_q`, `scalar_rs1_q`, `is_alu_q`, `result_data_q[255:32]`, `vrf[0]` (never written), exec `funct3_i`/`rst_ni`/`done_o`, `xif_commit_*`, `xif_mem_resp_i`, `issue_req.mode/rs_valid/ecs`. | Verilator `UNUSED*`; Yosys keeps `vrf[0]` (4702 flops), Genus may not | phys-lead: confirm the mapped flop count (expected ~4.44k = 15x256 + 512 + ~70). |
| S9 | L | Arithmetic duplication in source (VMAC and VMUL each write `a*b` in 64-bit context) is not a real area cost. Genus generic shows 8 multipliers, not 16 (COORDINATOR_REVIEW), and Yosys merges them too. | R1/R1b measurements below | no action |

### Functional findings (pre-existing, preserved by every candidate)

Found by `rtl2gds/verif/tb_vcop.sv` against its ISA reference model. Count fields are
from `out/*/summary_*.txt`.

| id | sev | finding | trigger / evidence |
|---|---|---|---|
| F1 | H | With a 1-cycle memory (as in `sim/soc_top*.sv`), every VLD writes element 7 = 0. `done_o` fires on the result for word 6 in the cycle the last request is sent, and word 7's response arrives after vlsu is IDLE. | `s*_l1_e1_st0`: err_result=0 but err_mem_words>0, always in v[*][255:224] |
| F2 | M | VLD hangs forever if `xif_mem_ready_i` is low in the cycle after the last request: done requires `ready && result_valid` even though no request is pending. The SoC arbiter keeps grant high for that cycle, so the SoC does not show it. | `s*_l1_*_st30` (random mid-burst stalls): hang=1 after ~9 instructions |
| F3 | H (SoC) | vlsu only captures load data when `mem_result.id == id`, but `sim/soc_top_with_cache.sv` ties the result id to 0. Any VLD with X-IF id != 0 loads zeros in the SoC. | `s*_l1_e0_*`: err_result in the hundreds |
| F4 | M | With a zero-latency memory, the "zero-latency" vlsu is off by one (element i receives word i+1) and hits S2 on a stalled first request. | `s*_l0_*` |
| F5 | M | Any custom-0 instruction with an unsupported funct7 (e.g. VDOT/VMMUL/VSETVL) is accepted (`issue_resp.accept=1`), goes to EXEC_LSU, never starts vlsu and hangs permanently (`issue_ready` stuck at 0). | `hang_test`: hang=1 |
| F6 | M | Commit interface ignored: killed instructions still write the VRF, perform memory writes and return results; memory requests are issued before commit with `spec=0`. This deviates from CV-X-IF. | `*_k20` runs: identical outcome with 20% kills |
| F7 | L | `rs_valid` is ignored; base address is taken from `rs[0]` at accept. With the pinned cv32e40x, `rs_valid` only reflects illegal register addresses (`cv32e40x_id_stage.sv:733`) and the core stalls on hazards, so this is low risk. | code inspection |
| F8 | L | VLD/ALU return element 0 as a scalar write to `x[rd]` (`writeback=1`). `mem_req.mode=2'b10` is a reserved privilege encoding (the core is M-mode, 2'b11). | code inspection |

Fixing F1-F5 is a separate non-area change set if the coordinator wants it. None of the
area candidates touch these paths, and the differential gate checks that they stay the same.

## 3. Area analysis and candidates

### Where the area is (relative estimate)

Yosys 0.60 + ABC mapped to the repo's ASAP7 RVT SS libs (`rtl2gds/verif/area_est.sh`).
This is not timing-driven and uses a different library than the server flow (GPDK045
`gsclib045`). Use it only to rank candidates, never as a Genus/Innovus result.

| block (standalone) | est. area um2 | notes |
|---|---|---|
| vector_reg_file_3port (16x256) | 2951 | 4096 async-reset flops = 1553; rest = 3 read muxes + write-enable recirculation muxes |
| vector_exec_unit (8 lanes) | 2117 | dominated by 8 x (32x32 -> low 32) multipliers |
| vlsu | 340 | 512 data flops + counters |
| top (flattened) | 5445 | 4702 flops (~33% of area) |

Levers, largest first:
1. **Exec lanes (≈39%)**: only time-multiplexing reduces multiplier count (R5).
2. **Recirculation muxes (flow, measured -10.8% est. with Yosys `clockgate`, 19 ICGs)**: ~4400 enable flops (VRF 15x256 in
   16 banks, vlsu 2x256). Neither ASAP7 nor (to my knowledge) gsclib045 has an async-reset
   enable flop, so each bit gets a hold mux. Clock gating (Genus `lp_insert_clock_gating`
   with the library ICG, e.g. gsclib045 `TLATNTSCA*`) replaces them with ~25 ICGs.
   Function-preserving, no RTL change. Recommended as a flow candidate.
3. **Removable state**: R2 (store_data_q, 256 flops).
4. **VRF reset (~6% est.)**: dropping async reset on the VRF array would change reset
   behaviour (registers read as 0 after reset is observable). **Rejected** under rule 5.
5. **Dropping VRF read port 3**: VMAC would need a second cycle. This is subsumed by R5,
   which reads port 3 per lane group; no separate candidate.

### Candidates (all patches apply to the reviewed RTL with `git apply`)

Evidence for every row comes from `rtl2gds/verif/eval_candidates.sh` (results in §4).

- **R1 `R1_fused_muladd.patch`** (exec unit): one multiply-add per lane
  `a*(mul|mac ? b : 1) + (mac ? c : add ? b : sub ? ~b : 0) + sub`. Cycle-identical, and
  the top's next-state functions are unchanged, so Conformal comb LEC should prove it.
  Estimated effect is noise-level (top −0.6%, standalone exec +3%; a shared add/sub
  variant R1b is −0.2%) because the tools already share the multipliers (S9).
  **Not recommended** unless Genus shows a datapath gain.
- **R2 `R2_drop_store_data_q.patch`** (vlsu): delete the 256-bit `store_data_q`; store words
  are read from VRF port 2. During EXEC_LSU, `raddr2 = rs2_q` because `accept_instr=0`,
  and the VRF is never written during a store. Cycle-identical. Removes state, so it
  needs sequential equivalence or simulation evidence (provided), not comb LEC.
  Contract note: vlsu now requires `store_data_i` to stay stable for the burst, which the
  top guarantees. **Recommended** (safe, ~−3%).
- **R3** (raddr1/raddr3 straight from `instr`): **rejected**. It breaks the decoder
  sharing between raddr3 and waddr (same expression) and grows area (+1.9%; the
  raddr1-only variant is also +1.8% on top of R1R2).
- **R5 `R5_time_multiplexed_alu.patch`** (top only, parameter `ALU_LANES`, patch default 2):
  - IDLE accept -> new EXEC_ALU state that runs `8/ALU_LANES` cycles. Each cycle reads
    operands via `rs1_q/rs2_q/rd_q` and evaluates one lane group with
    `vector_exec_unit #(VLEN=ALU_LANES*32)`.
  - Each cycle writes `vd = port3 (old vd)` with that group replaced. In-place aliasing
    (vd = vs1/vs2) is safe because each lane depends only on the same lane of its
    operands, and group k is read before it is written.
  - Element 0 for `xif_result_o.data` is captured in group 0.
  - Function, ports, reset/commit/kill behaviour and all memory traffic are unchanged.
    **ALU instruction latency grows from 1 to 1+8/ALU_LANES cycles** (VLD/VST are
    unchanged and already take ≥9 cycles).
  - It also removes S5: the multiplier no longer sits in the 12 ns input-delay path, so
    it should cut timing-driven upsizing in Genus. That effect does not show in the
    non-timing-driven Yosys numbers.
  - Gate: txn mode (identical handshake payloads, memory traffic and final VRF/memory;
    cycles differ by design).
  - **Recommended for approval by codex-1/user** as a performance-for-area trade:
    `ALU_LANES=4` (−19%) or `2` (−27%, balanced with the 32 b/cycle memory port); with R2,
    −21% / −30% (estimates).
  - `ALU_LANES=8` keeps 8 lanes but registers operands: +1.6% here, but its purpose
    would be timing relief only.
- **Flow candidate CG**: clock gating as above (phys-lead).

## 4. Measured candidate results

Source: `rtl2gds/verif/results/eval_results.txt` (run 2026-11-04T22:17Z on repo `18a224b`; design
RTL identical to `dbc5fcd`). After this run the only TB change was a header comment. Area
is the relative Yosys/ABC ASAP7 estimate; the baseline is 5445.37 um2 with 4702 flops.
"cycles" is the s1_l1_e1_st0 run length (331 instructions). Gate = Verilator AND Icarus,
89 runs each, against the same simulator's baseline.

| candidate | gate mode | gate result (V / I) | est. area um2 | delta | flops | cycles |
|---|---|---|---|---|---|---|
| baseline | - | V vs I: 72 identical, 17 EXCLUDED-UB, 0 failing | 5445.4 | - | 4702 | 1475 |
| R1 fused mul-add | cycle | 89/89 identical, both | 5412.1 | -0.6% | 4702 | 1475 |
| R2 drop store_data_q | cycle | 89/89, both | 5289.7 | -2.9% | 4446 | 1475 |
| R1+R2 | cycle | 89/89, both | 5263.2 | -3.3% | 4446 | 1475 |
| R5 ALU_LANES=8 | txn | 89/89, both | 5533.5 | +1.6% | 4711 | 1679 |
| R5 ALU_LANES=4 | txn | 89/89, both | 4415.9 | -18.9% | 4711 | 1883 |
| R5 ALU_LANES=2 | txn | 89/89, both | 3955.5 | -27.4% | 4712 | 2291 |
| R5 ALU_LANES=1 | txn | 89/89, both | 3657.9 | -32.8% | 4713 | 3107 |
| R5(4)+R2 | txn | 89/89, both | 4281.7 | -21.4% | 4455 | 1883 |
| R5(2)+R2 | txn | 89/89, both | 3835.5 | -29.6% | 4456 | 2291 |
| baseline + CG (flow) | n/a (no RTL change) | - | 4855.6 | -10.8% | 4702 + 19 ICG | 1475 |
| R2 + CG | (R2 gate) | - | 4748.9 | -12.8% | 4446 + 18 ICG | 1475 |
| R5(4)+R2 + CG | (R5R2 gate) | - | 3737.3 | -31.4% | 4455 + 19 ICG | 1883 |
| R5(2)+R2 + CG | (R5R2 gate) | - | 3269.5 | -40.0% | 4456 + 19 ICG | 2291 |

Rejected or not run in the script: R3 +1.9%, R3a +1.8% vs R1R2, R1b exec-only -0.2% (manual runs, §3).

Gate self-tests (same file):
- RTL mutants on top of R1+R2 are all caught:
  - M1: VSUB carry dropped, 43 failing runs.
  - M2: store word order swapped, 42 failing.
  - M3: raddr2 unregistered, 42 failing.
  - M4: writes to v15 lost, 38 failing.
- Harness negative tests (`gate_selftest.sh`) are all rejected: empty-equal traces,
  zero runs, missing run, truncated trace, one wrong RESULT word, an injected simulator
  `$fatal` (both `run_matrix` and `compare`), and a build failure.

Recommendation for phys-lead and codex-1, in order:
1. Adopt R2 (safe, cycle-identical).
2. Run clock gating as a flow candidate.
3. Decide whether the R5 latency trade is acceptable. If it is, use ALU_LANES=4 (ALU
   latency 1 -> 3 cycles) or ALU_LANES=2 (1 -> 5 cycles).
4. Skip R1.

All numbers must be re-measured in Genus with gsclib045 under the baseline SDC before
they are reported as results.

## 5. Verification artifacts (`rtl2gds/verif/`)

| file | purpose |
|---|---|
| `tb_vcop.sv` | Standalone TB for the synthesis top, with an ISA reference model and simulator-independent xorshift stimulus. Covers memory latency 0/1, id echo or SoC-style id=0, random or SoC-arbiter-like ("burst") ready stalls, result back-pressure, issue gaps, commit_kill, non-custom opcodes, and a final VRF dump through VST. Checks X-IF valid/payload stability. Writes a cycle trace and a cycle-free txn trace, each ending with `END ub_oor=N`. |
| `run_matrix.sh` | Builds on Verilator or Icarus and runs 89 configs (8 seeds x 11 + hang_test). Harness/runtime failures fail the script: build errors, non-zero simulator exit (`$fatal`/crash), missing TBSUMMARY, or a missing END marker. Known baseline ISA mismatches (`err_*`, and `hang=1` from the TB watchdog, which ends the run cleanly) are recorded separately in the summary and gated only differentially. |
| `compare.sh` | Differential gate (cycle or txn mode). Fails on missing dirs, run-set mismatch, run_matrix FAIL lines, empty or unterminated files, and any in-domain difference. Runs with `ub_oor>0` (S2) are listed as EXCLUDED-UB; STRICT_UB=1 makes them fail. |
| `area_est.sh` | Relative Yosys/ABC ASAP7 area estimate; `-g` adds library ICG clock gating. |
| `eval_candidates.sh` | Reproduces §4: applies each patch to a scratch tree, runs both simulators, gates, estimates area (with and without CG), checks that 4 RTL mutants fail, and runs `gate_selftest.sh`. |
| `gate_selftest.sh` | Harness negative tests. Each must be rejected: empty/zero runs, missing or truncated files, an intentional wrong output, an injected simulator `$fatal`, and a build failure. |
| `candidates/*.patch` | R1, R2, R5. |
| `results/` | Committed summaries; full traces are regenerated under `out/` (git-ignored). |

Gate checks performed:
- Two empty equal trace sets, a missing run file, and a truncated trace each exit 1.
- The baseline Icarus vs Verilator comparison passes with exactly the 17 UB-flagged runs
  excluded; STRICT_UB=1 makes it fail.

Limits (please read before quoting):
- A finite random matrix is sampled evidence, not proof.
- Registers v16..v31 are not exercised (S1). VLEN/ELEMENT_WIDTH other than 256/32 are not
  exercised.
- The TB memory model is an abstraction of the SoC arbiter.
- Equivalence of the final netlist to RTL still requires Conformal LEC (R1/R5 comb parts)
  or sequential/simulation evidence (R2, R5) in the server flow.
- Area numbers here are relative estimates on ASAP7, not Genus/Innovus results.

Usage:
```
rtl2gds/verif/run_matrix.sh -o OUT_BASE                     # baseline (Verilator)
rtl2gds/verif/run_matrix.sh -r CAND_TREE -o OUT_CAND        # candidate tree
rtl2gds/verif/compare.sh OUT_BASE OUT_CAND cycle            # or txn for R5
rtl2gds/verif/eval_candidates.sh                             # full reproduction
```

## 6. Review of phys-lead candidates C1-C5 (landline m45)

| item | verdict | notes |
|---|---|---|
| C1 shared 32-bit product per lane (VMUL/VMAC) + one add/sub `a + (b ^ {32{sub}}) + sub` | **Accept as functionally safe; low value.** | Bit-identical mod 2^32 and cycle-identical; this is R1b in §3. The expected "16 -> 8 multipliers" does not hold: Genus generic already shows 8 multipliers and 8 add/sub (COORDINATOR_REVIEW), and Yosys merges them too. Measured R1b exec-only is -0.2% and fused R1 is -0.6% at the top (noise). Hazards: declare the product as `logic [31:0]` so the multiply is in 32-bit context (fine either way, since only [31:0] is used). Keep default funct7 -> 0, or any value: exec_result is consumed only when is_alu_in, so the top is unaffected and comb LEC holds. Adopt only if Genus mapped datapath reports show a gain. |
| C2 remove vlsu store_data_q | **Accept** (= R2, cycle-identical over 89 runs x 2 simulators). | No path changes rs2_q or the VRF contents between first_store and the last store beat: (1) `rs2_q` is written only under `accept_instr`, which needs `xif_issue_ready_o = (state==IDLE)`; the top is in EXEC_LSU for the whole store. (2) `vrf_we` is asserted only in IDLE+accept+ALU or EXEC_LSU+vlsu_done+is_load_q, and is_load_q=0 for a store. (3) vlsu STORE_ACTIVE and top EXEC_LSU are entered on the same `accept && is_store_in` edge and left on the same `done_o` edge, and vlsu is always IDLE when the top is IDLE. (4) Word 0 still comes from `store_data_i[31:0]` in the first_store cycle, with raddr2 = instr[24:20], exactly as before. (5) Async reset clears both FSMs together. One residual contract: vlsu now depends on its integrator holding store_data_i stable, which the top guarantees (comment in the patch). Verification: simulation or sequential equivalence; comb LEC cannot map the removed flops. |
| C3 result_data_q[255:32] | **Accept: verify in the netlist, no RTL edit.** | Unloaded; Yosys prunes them. |
| C4 VRF v0 constant + out-of-range 16..31 | **Agree, and flag both.** | (a) Yosys did NOT remove v0's 256 async-reset flops (4702 = 4096 + ...). If Genus also keeps them, a tiny RTL candidate is to not allocate storage for v0. Reads are already forced to 0 and writes dropped, so behaviour is identical. Check the Genus flop count first (expected ~4.44k without v0 and without result_data_q[255:32]). (b) The out-of-range hazard is also on WRITES: sim drops a write to v16..v31, while synthesis may truncate the index and alias it onto v0..v15. Please record Genus's elaboration message and make LEC treat it explicitly (S1). |
| C5 no VRF reset removal / no VLEN/regs reduction | **Agree.** | Both change observable behaviour. |

Top: `vector_coprocessor` is correct. It instantiates only vector_reg_file_3port, vlsu and
vector_exec_unit, and it is the top of the commercial Genus scripts. The sim/ regressions
are SoC-level (cv32e40x + caches, `sim/tests/*.s`) and need RISC-V GCC, which is absent.
No sim/ test targets the standalone top. Use `rtl2gds/verif/` instead (Verilator 5.032 and
Icarus 12 are installed locally).

Better candidates than C1, in order: flow clock gating (-10.8% est.), C2/R2 (-2.9%), and,
if the latency trade is approved, R5 with ALU_LANES=4 or 2 (-19% / -27%; with R2+CG,
-31% / -40%). R5 also removes the multiplier from the 12 ns input->VRF path.
