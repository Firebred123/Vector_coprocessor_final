// rtl2gds/verif/tb_vcop.sv
//
// Self-contained, simulator-independent testbench for the standalone
// `vector_coprocessor` top (the RTL-to-GDS synthesis top).
//
// Purpose
//   1. Reference-model scoreboard: reports where the RTL deviates from the
//      intended ISA semantics (VLD/VST/VADD/VSUB/VMUL/VMAC, 8 x 32-bit lanes).
//      Deviations of the *baseline* RTL are pre-existing behaviour and are
//      documented in rtl2gds/RTL_REVIEW.md; they are not failures by default.
//   2. Differential gate for area changes: every handshake on every DUT port
//      is written to a cycle-accurate trace (+trace=) and to a cycle-free
//      transaction trace (+txn=), and the final memory image is dumped.
//      A candidate passes the differential gate when its traces match the
//      baseline traces for the whole seed/config matrix (run_matrix.sh +
//      compare.sh). This is sampled simulation evidence, not a proof of
//      functional equivalence.
//
// All randomness comes from private xorshift32 streams indexed by transaction
// count, so stimulus is identical across simulators and across RTL versions
// with different internal latency (txn traces stay comparable).
//
// Plusargs (all optional):
//   +seed=N        stimulus seed (default 1)
//   +ninstr=N      random instructions before the VRF dump (default 300)
//   +lat=0|1       memory result latency in cycles (default 1, like sim/soc_top*)
//   +echo_id=0|1   memory result echoes request id (1) or returns 0 like the SoC (0)
//   +stall=P       percent of memory/result/issue handshakes delayed (default 30)
//   +burst=1       SoC-arbiter-like memory ready (sim/soc_top_with_cache.sv): a
//                  stall can only delay the first request of a burst; once
//                  granted, ready stays high until one cycle after mem_valid
//                  drops. (Baseline vlsu hangs with mid-burst stalls, see review.)
//   +kill=P        percent of commits signalled with commit_kill (default 0)
//   +nonvec=P      percent of non-custom-0 instructions offered (default 5)
//   +trace=FILE +txn=FILE   output files (defaults trace.txt / txn.txt)
//   +hang_test     directed check: custom-0 with unsupported funct7 (VDOT)
//   +strict        exit with failure if the reference model disagrees
`timescale 1ns/1ps
`include "custom_opcodes.vh"

module tb_vcop;
  import cv32e40x_xif_pkg::*;

  localparam int VLEN   = 256;
  localparam int NW     = VLEN / 32;   // words per vector
  localparam int NREG   = 16;          // registers implemented by the top
  localparam int MEMW   = 4096;        // 16 KiB test memory
  localparam int DUMP_BASE = 32'h3800; // VRF dump area (outside data region)
  localparam int MAXPROG = 4096;

  // ------------------------------------------------------------------ config
  int unsigned seed = 1;
  int ninstr = 300, lat = 1, echo_id = 1, stall_pct = 30, kill_pct = 0, nonvec_pct = 5, burst = 0;
  bit hang_test = 0, strict = 0;
  string trace_fn = "trace.txt", txn_fn = "txn.txt";
  int ftrace, ftxn;

  // ------------------------------------------------------------------ RNG
  // stream 0: program, 1: memory stalls, 2: result stalls, 3: issue gaps, 4: kill
  int unsigned rs [5];
  function automatic int unsigned rnd(input int k);
    int unsigned s;
    s = rs[k];
    s = s ^ (s << 13);
    s = s ^ (s >> 17);
    s = s ^ (s << 5);
    rs[k] = s;
    return s;
  endfunction
  function automatic logic [31:0] bemask(input logic [3:0] be);
    return {{8{be[3]}}, {8{be[2]}}, {8{be[1]}}, {8{be[0]}}};
  endfunction
  function automatic int draw_stall(input int k);
    if ((rnd(k) % 100) < stall_pct) return 1 + int'(rnd(k) % 3);
    return 0;
  endfunction

  // ------------------------------------------------------------------ DUT
  logic clk = 1'b0, rst_n = 1'b0;
  always #5 clk = ~clk;

  logic           issue_valid, issue_ready;
  x_issue_req_t   issue_req;
  x_issue_resp_t  issue_resp;
  logic           commit_valid;
  x_commit_t      commit;
  logic           result_valid, result_ready;
  x_result_t      result;
  logic           mem_valid, mem_ready;
  x_mem_req_t     mem_req;
  x_mem_resp_t    mem_resp;
  logic           mem_result_valid;
  x_mem_result_t  mem_result;

  vector_coprocessor #(.VLEN(VLEN), .ELEMENT_WIDTH(32), .X_ID_WIDTH(4)) dut (
    .clk_i(clk), .rst_ni(rst_n),
    .xif_issue_valid_i(issue_valid), .xif_issue_ready_o(issue_ready),
    .xif_issue_req_i(issue_req), .xif_issue_resp_o(issue_resp),
    .xif_commit_valid_i(commit_valid), .xif_commit_i(commit),
    .xif_result_valid_o(result_valid), .xif_result_ready_i(result_ready),
    .xif_result_o(result),
    .xif_mem_valid_o(mem_valid), .xif_mem_ready_i(mem_ready),
    .xif_mem_req_o(mem_req), .xif_mem_resp_i(mem_resp),
    .xif_mem_result_valid_i(mem_result_valid), .xif_mem_result_i(mem_result)
  );

  assign mem_resp = '0;

  // ------------------------------------------------------------------ program
  logic [31:0] p_instr [MAXPROG];
  logic [31:0] p_rs0   [MAXPROG];
  logic [31:0] p_rs1   [MAXPROG];
  int nprog;

  function automatic logic [31:0] enc(input logic [6:0] f7, input int rd, input int r1, input int r2,
                                      input logic [6:0] opc = `CUSTOM0_OPCODE);
    return {f7, 5'(r2), 5'(r1), 3'b000, 5'(rd), opc};
  endfunction

  task automatic gen_program();
    int i, op, r, sel, x1, x2, x3;
    logic [6:0] f7;
    nprog = 0;
    // Prime registers with loads so arithmetic sees non-zero data.
    for (r = 1; r < NREG; r++) begin
      p_instr[nprog] = enc(`FUNCT7_VLD, r, 5, 0);
      p_rs0[nprog]   = (rnd(0) % 380) * 32;   // < 0x2F80, 32 B aligned
      p_rs1[nprog]   = rnd(0);
      nprog++;
    end
    for (i = 0; i < ninstr; i++) begin
      op = int'(rnd(0) % 100);
      p_rs1[nprog] = rnd(0);
      if (op < nonvec_pct) begin
        // Non-custom opcode (e.g. OP 0x33): must be rejected, no side effects.
        x1 = int'(rnd(0) % 32); x2 = int'(rnd(0) % 32); x3 = int'(rnd(0) % 32);
        p_instr[nprog] = enc(7'h00, x1, x2, x3, 7'b0110011);
        p_rs0[nprog] = rnd(0);
      end else begin
        sel = int'(rnd(0) % 6);
        case (sel)
          0: f7 = `FUNCT7_VLD;
          1: f7 = `FUNCT7_VST;
          2: f7 = `FUNCT7_VADD;
          3: f7 = `FUNCT7_VSUB;
          4: f7 = `FUNCT7_VMUL;
          default: f7 = `FUNCT7_VMAC;
        endcase
        // Draw operands one per statement: argument evaluation order is
        // simulator-dependent and would otherwise change the program.
        x1 = int'(rnd(0) % NREG); x2 = int'(rnd(0) % NREG); x3 = int'(rnd(0) % NREG);
        p_instr[nprog] = enc(f7, x1, x2, x3);
        // Word-aligned (not vector-aligned) base inside the data region.
        p_rs0[nprog] = (rnd(0) % 3000) * 4;
      end
      nprog++;
    end
    // Dump all architected registers to memory so the final memory image
    // captures the complete VRF state.
    for (r = 0; r < NREG; r++) begin
      p_instr[nprog] = enc(`FUNCT7_VST, 0, 5, r);
      p_rs0[nprog]   = DUMP_BASE + r * 32;
      p_rs1[nprog]   = 0;
      nprog++;
    end
  endtask

  // ------------------------------------------------------------------ reference model
  logic [31:0] ref_vrf [NREG][NW];
  logic [31:0] mem     [MEMW];
  logic [31:0] ref_mem [MEMW];

  // Expected-result FIFO (plain arrays: portable to Icarus and Verilator).
  logic [3:0]  e_id   [MAXPROG];
  logic [4:0]  e_rd   [MAXPROG];
  logic        e_we   [MAXPROG];
  logic [31:0] e_data [MAXPROG];
  int e_head = 0, e_tail = 0;

  int n_issue = 0, n_result = 0, n_memreq = 0, n_memres = 0;
  int err_result = 0, err_resp = 0, err_proto = 0, err_mem = 0, err_hang = 0;
  // Out-of-domain marker: with a zero-latency memory, a VLD whose first request
  // is not granted in the issue cycle makes vlsu.sv write load_data at index
  // req_cnt_q-1 = 15 (bits 480+ of a 256-bit vector). That write is undefined
  // (simulator-dependent), so such runs are classified separately by compare.sh.
  int n_ub_oor = 0;

  function automatic logic [31:0] vread(input int r, input int e);
    return (r == 0) ? 32'h0 : ref_vrf[r][e];
  endfunction

  task automatic model_exec(input logic [31:0] instr, input logic [31:0] rs0, input logic [3:0] id);
    logic [6:0] f7;
    int rd, r1, r2, e;
    logic [31:0] res [NW];
    f7 = instr[31:25]; rd = instr[11:7]; r1 = instr[19:15]; r2 = instr[24:20];
    for (e = 0; e < NW; e++) begin
      case (f7)
        `FUNCT7_VLD:  res[e] = ref_mem[((rs0 >> 2) + e) % MEMW];
        `FUNCT7_VADD: res[e] = vread(r1, e) + vread(r2, e);
        `FUNCT7_VSUB: res[e] = vread(r1, e) - vread(r2, e);
        `FUNCT7_VMUL: res[e] = vread(r1, e) * vread(r2, e);
        `FUNCT7_VMAC: res[e] = vread(r1, e) * vread(r2, e) + vread(rd, e);
        default:      res[e] = 32'h0;
      endcase
    end
    if (f7 == `FUNCT7_VST) begin
      for (e = 0; e < NW; e++) ref_mem[((rs0 >> 2) + e) % MEMW] = vread(r2, e);
    end else if (rd != 0 && rd < NREG) begin
      for (e = 0; e < NW; e++) ref_vrf[rd][e] = res[e];
    end
    e_id[e_tail] = id; e_rd[e_tail] = 5'(rd);
    e_we[e_tail] = (f7 != `FUNCT7_VST);
    e_data[e_tail] = (f7 == `FUNCT7_VST) ? 32'h0 : res[0];
    e_tail = e_tail + 1;
  endtask

  // ------------------------------------------------------------------ issue driver
  int pc = 0, issue_gap = 0;
  int unsigned cyc = 0;
  logic [3:0] next_id;
  assign next_id = 4'(pc);
  always_comb begin
    issue_valid = (issue_gap == 0) && (pc < nprog) && rst_n;
    issue_req   = '0;
    if (pc < nprog) begin
      issue_req.instr = p_instr[pc];
      issue_req.id    = next_id;
      issue_req.rs    = {p_rs1[pc], p_rs0[pc]};
      issue_req.rs_valid = 2'b11;
      issue_req.mode  = 2'b11;
    end
  end

  // Commit: one cycle after each accepted offload (kill per +kill=).
  logic       commit_pend;
  logic [3:0] commit_id;
  logic       commit_kill_n;
  always_comb begin
    commit_valid = commit_pend;
    commit.id = commit_id;
    commit.commit_kill = commit_kill_n;
  end

  // ------------------------------------------------------------------ memory model
  int mem_stall = 0, res_stall = 0;
  logic        rv_q;
  logic [31:0] rd_q;
  logic [3:0]  rid_q;
  logic burst_q;   // +burst=1: grant held like the SoC arbiter's MEM_VPU state
  assign mem_ready = (mem_stall == 0) || (burst != 0 && burst_q);
  always_comb begin
    if (lat == 0) begin
      mem_result_valid = mem_valid && mem_ready && !mem_req.we;
      mem_result.rdata = mem[mem_req.addr[13:2]];
      mem_result.id    = echo_id ? mem_req.id : 4'h0;
    end else begin
      mem_result_valid = rv_q;
      mem_result.rdata = rd_q;
      mem_result.id    = rid_q;
    end
    mem_result.err = 1'b0;
    mem_result.dbg = 1'b0;
  end
  assign result_ready = (res_stall == 0);

  // Stability checks (X-IF: valid must stay asserted and payload stable until ready).
  logic       pend_res, pend_mem;
  x_result_t  last_res;
  x_mem_req_t last_mem;

  always @(posedge clk) begin
    if (rst_n) begin
      cyc <= cyc + 1;
      // -------- issue handshake
      if (issue_valid && issue_ready) begin
        $fdisplay(ftrace, "%0d ISSUE id=%0d instr=%08x rs0=%08x resp=%b", cyc, issue_req.id,
                  issue_req.instr, p_rs0[pc], issue_resp);
        $fdisplay(ftxn, "ISSUE id=%0d instr=%08x resp=%b", issue_req.id, issue_req.instr, issue_resp);
        if (issue_req.instr[6:0] == `CUSTOM0_OPCODE) begin
          if (!issue_resp.accept || issue_resp.writeback != (issue_req.instr[31:25] != `FUNCT7_VST) ||
              issue_resp.loadstore != (issue_req.instr[31:25] == `FUNCT7_VLD || issue_req.instr[31:25] == `FUNCT7_VST)) begin
            err_resp++;
            $fdisplay(ftrace, "%0d ERR issue_resp", cyc);
          end
          model_exec(issue_req.instr, p_rs0[pc], issue_req.id);
          if (lat == 0 && issue_req.instr[31:25] == `FUNCT7_VLD && !mem_ready) begin
            n_ub_oor++;
            $fdisplay(ftrace, "%0d UB_OOR_INDEX id=%0d", cyc, issue_req.id);
          end
          commit_pend   <= 1'b1;
          commit_id     <= issue_req.id;
          commit_kill_n <= (int'(rnd(4) % 100) < kill_pct);
        end else begin
          if (issue_resp.accept) begin
            err_resp++;
            $fdisplay(ftrace, "%0d ERR non-custom accepted", cyc);
          end
          commit_pend <= 1'b0;
        end
        n_issue++;
        pc <= pc + 1;
        issue_gap <= draw_stall(3);
      end else begin
        commit_pend <= 1'b0;
        if (issue_gap > 0) issue_gap <= issue_gap - 1;
      end

      // -------- memory request handshake
      if (mem_valid) begin
        if (pend_mem && last_mem !== mem_req) begin
          err_proto++;
          $fdisplay(ftrace, "%0d ERR mem_req changed while waiting for ready", cyc);
        end
        if (mem_ready) begin
          $fdisplay(ftrace, "%0d MEMREQ id=%0d addr=%08x we=%0d be=%b wdata=%08x last=%0d size=%0d mode=%0d",
                    cyc, mem_req.id, mem_req.addr, mem_req.we, mem_req.be, mem_req.wdata, mem_req.last,
                    mem_req.size, mem_req.mode);
          $fdisplay(ftxn, "MEMREQ id=%0d addr=%08x we=%0d be=%b wdata=%08x last=%0d",
                    mem_req.id, mem_req.addr, mem_req.we, mem_req.be, mem_req.wdata, mem_req.last);
          n_memreq++;
          if (mem_req.we) begin
            mem[mem_req.addr[13:2]] <= (mem[mem_req.addr[13:2]] & ~bemask(mem_req.be)) |
                                       (mem_req.wdata & bemask(mem_req.be));
          end
          mem_stall <= draw_stall(1);
          pend_mem  <= 1'b0;
          burst_q   <= 1'b1;
        end else begin
          mem_stall <= mem_stall - 1;
          pend_mem  <= 1'b1;
          last_mem  <= mem_req;
        end
      end else begin
        burst_q <= 1'b0;
        if (pend_mem) begin
          err_proto++;
          $fdisplay(ftrace, "%0d ERR mem_valid dropped before ready", cyc);
        end
        pend_mem <= 1'b0;
      end
      // memory latency-1 read response
      rv_q  <= mem_valid && mem_ready && !mem_req.we;
      rd_q  <= mem[mem_req.addr[13:2]];
      rid_q <= echo_id ? mem_req.id : 4'h0;
      if (mem_result_valid) begin
        n_memres++;
        $fdisplay(ftrace, "%0d MEMRES id=%0d rdata=%08x", cyc, mem_result.id, mem_result.rdata);
      end

      // -------- result handshake
      if (result_valid) begin
        if (pend_res && last_res !== result) begin
          err_proto++;
          $fdisplay(ftrace, "%0d ERR result changed while waiting for ready", cyc);
        end
        if (result_ready) begin
          $fdisplay(ftrace, "%0d RESULT id=%0d rd=%0d we=%0d data=%08x exc=%0d", cyc, result.id,
                    result.rd, result.we, result.data, result.exc);
          $fdisplay(ftxn, "RESULT id=%0d rd=%0d we=%0d data=%08x exc=%0d", result.id, result.rd,
                    result.we, result.data, result.exc);
          n_result++;
          if (e_head == e_tail) begin
            err_result++;
            $fdisplay(ftrace, "%0d ERR unexpected result", cyc);
          end else begin
            if (e_id[e_head] != result.id || e_rd[e_head] != result.rd || e_we[e_head] != result.we[0] ||
                (e_we[e_head] && e_data[e_head] != result.data)) begin
              err_result++;
              $fdisplay(ftrace, "%0d ERR result exp id=%0d rd=%0d we=%0d data=%08x", cyc, e_id[e_head],
                        e_rd[e_head], e_we[e_head], e_data[e_head]);
            end
            e_head <= e_head + 1;
          end
          res_stall <= draw_stall(2);
          pend_res  <= 1'b0;
        end else begin
          res_stall <= res_stall - 1;
          pend_res  <= 1'b1;
          last_res  <= result;
        end
      end else begin
        if (pend_res) begin
          err_proto++;
          $fdisplay(ftrace, "%0d ERR result_valid dropped before ready", cyc);
        end
        pend_res <= 1'b0;
      end
    end
  end

  // ------------------------------------------------------------------ main
  int unsigned cks;
  initial begin
    void'($value$plusargs("seed=%d", seed));
    void'($value$plusargs("ninstr=%d", ninstr));
    void'($value$plusargs("lat=%d", lat));
    void'($value$plusargs("echo_id=%d", echo_id));
    void'($value$plusargs("stall=%d", stall_pct));
    void'($value$plusargs("kill=%d", kill_pct));
    void'($value$plusargs("nonvec=%d", nonvec_pct));
    void'($value$plusargs("burst=%d", burst));
    void'($value$plusargs("trace=%s", trace_fn));
    void'($value$plusargs("txn=%s", txn_fn));
    hang_test = $test$plusargs("hang_test");
    strict    = $test$plusargs("strict");
    if (seed == 0) seed = 1;
    for (int k = 0; k < 5; k++) rs[k] = seed * 32'h9E3779B1 + k * 32'h85EBCA6B + 1;
    for (int k = 0; k < 5; k++) void'(rnd(k));
    ftrace = $fopen(trace_fn, "w");
    ftxn   = $fopen(txn_fn, "w");

    for (int i = 0; i < MEMW; i++) begin
      mem[i] = rnd(0);
      if (i % 7 == 0) mem[i] = mem[i] & 32'h0000_FFFF;   // small operands too
      ref_mem[i] = mem[i];
    end
    for (int r = 0; r < NREG; r++) for (int e = 0; e < NW; e++) ref_vrf[r][e] = 32'h0;
    pend_res = 0; pend_mem = 0; burst_q = 0; rv_q = 0; rd_q = 0; rid_q = 0;
    commit_pend = 0; commit_id = 0; commit_kill_n = 0;

    if (hang_test) begin
      nprog = 2;
      p_instr[0] = enc(`FUNCT7_VDOT, 1, 2, 3); p_rs0[0] = 0; p_rs1[0] = 0;
      p_instr[1] = enc(`FUNCT7_VADD, 1, 2, 3); p_rs0[1] = 0; p_rs1[1] = 0;
    end else begin
      gen_program();
    end
    $fdisplay(ftrace, "# cfg seed=%0d ninstr=%0d lat=%0d echo_id=%0d stall=%0d kill=%0d burst=%0d nprog=%0d",
              seed, ninstr, lat, echo_id, stall_pct, kill_pct, burst, nprog);
    $fdisplay(ftxn, "# cfg seed=%0d ninstr=%0d lat=%0d echo_id=%0d stall=%0d kill=%0d burst=%0d nprog=%0d",
              seed, ninstr, lat, echo_id, stall_pct, kill_pct, burst, nprog);

    repeat (3) @(posedge clk);
    @(negedge clk);          // release reset away from the active edge (no race)
    rst_n = 1'b1;

    // Run until every instruction has been issued and the coprocessor is idle.
    while (!(pc >= nprog && e_head == e_tail && issue_ready && !mem_valid) &&
           cyc < 200 + nprog * 60) @(posedge clk);
    if (pc >= nprog && e_head == e_tail && issue_ready && !mem_valid) begin
      repeat (4) @(posedge clk);
    end else begin
      err_hang++;
      $fdisplay(ftrace, "%0d HANG pc=%0d/%0d pending_results=%0d issue_ready=%0d", cyc, pc, nprog,
                (e_tail - e_head), issue_ready);
      $fdisplay(ftxn, "HANG pc=%0d/%0d pending_results=%0d", pc, nprog, (e_tail - e_head));
    end

    // Final memory image: part of the observable outcome.
    cks = 0;
    for (int i = 0; i < MEMW; i++) begin
      if (mem[i] !== ref_mem[i]) begin
        if (err_mem < 20)
          $fdisplay(ftrace, "ERR mem[%08x] dut=%08x ref=%08x", i * 4, mem[i], ref_mem[i]);
        err_mem++;
      end
      cks = (cks * 32'd16777619) ^ mem[i];
    end
    for (int r = 0; r < NREG; r++) begin
      $fwrite(ftxn, "VREG v%0d:", r);
      for (int e = 0; e < NW; e++) $fwrite(ftxn, " %08x", mem[(DUMP_BASE >> 2) + r * NW + e]);
      $fwrite(ftxn, "\n");
    end
    $fdisplay(ftxn, "MEMCKS %08x", cks);
    $fdisplay(ftrace, "MEMCKS %08x cycles=%0d", cks, cyc);
    // Completion markers: compare.sh rejects traces without them.
    $fdisplay(ftxn, "END ub_oor=%0d", n_ub_oor);
    $fdisplay(ftrace, "END ub_oor=%0d", n_ub_oor);

    $display("TBSUMMARY seed=%0d lat=%0d echo_id=%0d stall=%0d kill=%0d burst=%0d issued=%0d results=%0d memreq=%0d memres=%0d cycles=%0d err_result=%0d err_resp=%0d err_proto=%0d err_mem_words=%0d hang=%0d ub_oor=%0d memcks=%08x",
             seed, lat, echo_id, stall_pct, kill_pct, burst, n_issue, n_result, n_memreq, n_memres, cyc,
             err_result, err_resp, err_proto, err_mem, err_hang, n_ub_oor, cks);
    $fclose(ftrace);
    $fclose(ftxn);
    if (strict && (err_result + err_resp + err_proto + err_mem + err_hang) != 0) $fatal(1, "reference model mismatch");
    $finish;
  end
endmodule
