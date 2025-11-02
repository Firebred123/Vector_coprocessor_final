// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top_with_cache.h for the primary calling header

#include "Vsoc_top_with_cache___024root.h"
#include "Vsoc_top_with_cache__Syms.h"

#include "verilated_dpi.h"

void Vsoc_top_with_cache___024root___initial__TOP__1(Vsoc_top_with_cache___024root* vlSelf) VL_ATTR_COLD;

void Vsoc_top_with_cache___024root___eval_initial(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___eval_initial\n"); );
    // Body
    Vsoc_top_with_cache___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vclklast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__clk 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__clk;
}

void Vsoc_top_with_cache___024root___settle__TOP__3(Vsoc_top_with_cache___024root* vlSelf) VL_ATTR_COLD;
void Vsoc_top_with_cache___024root___settle__TOP__5(Vsoc_top_with_cache___024root* vlSelf) VL_ATTR_COLD;

void Vsoc_top_with_cache___024root___eval_settle(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___eval_settle\n"); );
    // Body
    Vsoc_top_with_cache___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsoc_top_with_cache___024root___settle__TOP__5(vlSelf);
}

void Vsoc_top_with_cache___024root___final(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___final\n"); );
}

void Vsoc_top_with_cache___024root___ctor_var_reset(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_top_with_cache__DOT__instr_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__instr_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__instr_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__data_gnt = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__data_rvalid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__data_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu_mem_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(82, vlSelf->soc_top_with_cache__DOT__vpu_mem_req);
    vlSelf->soc_top_with_cache__DOT__vpu_mem_result = VL_RAND_RESET_Q(38);
    vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_result_valid_o = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o = VL_RAND_RESET_I(9);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        VL_RAND_RESET_W(275, vlSelf->soc_top_with_cache__DOT__icache[__Vi0]);
    }
    vlSelf->soc_top_with_cache__DOT__icache_hit = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__icache_refill_pending = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__icache_refill_count = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__icache_state = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__icache_next_state = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__icache_refill_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__icache_mem_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        VL_RAND_RESET_W(276, vlSelf->soc_top_with_cache__DOT__dcache[__Vi0]);
    }
    vlSelf->soc_top_with_cache__DOT__dcache_hit = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__dcache_state = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__dcache_refill_count = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu_state = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__vpu_result_reg = VL_RAND_RESET_Q(38);
    vlSelf->soc_top_with_cache__DOT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__icache_hits = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__icache_misses = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__dcache_hits = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__dcache_misses = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__instructions_executed = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__prev_pc = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__pc_stall_count = VL_RAND_RESET_I(8);
    vlSelf->soc_top_with_cache__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_busy = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_interruptible = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(353, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe);
    VL_RAND_RESET_W(248, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe);
    VL_RAND_RESET_W(191, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(201, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_wdata_ex = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_if = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_ex = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_if = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_re_id = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_rdata_id[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_waddr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz = VL_RAND_RESET_I(28);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_err_wb = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_mtvec_init_if = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__xif_csr_error_ex = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__irq_req_ctrl = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__irq_id_ctrl = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__id_stage_i__rf_rdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__controller_i__rf_raddr_id_i[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__we_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__waddr_i[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__register_file_wrapper_i__rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__raddr_i[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o = VL_RAND_RESET_I(5);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_busy_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__branch_addr_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_instr = VL_RAND_RESET_Q(35);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_Q(35);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_compressed = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__core_trans = VL_RAND_RESET_Q(38);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__xif_id = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_last = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_instr = VL_RAND_RESET_Q(35);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_tbljmp = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_pushpop = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o = VL_RAND_RESET_Q(38);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o = VL_RAND_RESET_Q(35);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_meta_n = VL_RAND_RESET_I(5);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(105, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n = VL_RAND_RESET_Q(35);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound3 = VL_RAND_RESET_Q(35);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_n = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(68, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q = VL_RAND_RESET_Q(38);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode = VL_RAND_RESET_Q(45);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__alu_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__mul_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__lsu_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__csr_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__sys_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__imm_i_type = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_waiting = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_accept = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_reject = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = VL_RAND_RESET_Q(55);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = VL_RAND_RESET_Q(55);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = VL_RAND_RESET_Q(55);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = VL_RAND_RESET_Q(55);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_a_ctrl_int = VL_RAND_RESET_Q(55);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_b_ctrl_int = VL_RAND_RESET_Q(55);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux = VL_RAND_RESET_Q(55);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_cmp_result = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__lsu_en_gated = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_result = VL_RAND_RESET_I(6);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__csr_is_illegal = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt = VL_RAND_RESET_I(6);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp = VL_RAND_RESET_Q(64);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes);
    VL_RAND_RESET_W(192, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q = VL_RAND_RESET_I(6);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d = VL_RAND_RESET_I(6);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al = VL_RAND_RESET_I(17);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl = VL_RAND_RESET_I(17);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah = VL_RAND_RESET_I(17);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh = VL_RAND_RESET_I(17);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a = VL_RAND_RESET_I(17);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b = VL_RAND_RESET_I(17);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc = VL_RAND_RESET_Q(33);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = VL_RAND_RESET_Q(33);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res = VL_RAND_RESET_Q(33);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result = VL_RAND_RESET_Q(34);
    VL_RAND_RESET_W(77, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(81, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__alcheck_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(71, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__buffer_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__buffer_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_resp = VL_RAND_RESET_Q(35);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(81, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__cnt_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__next_cnt = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_size_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_sext_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_we_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__last_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__be = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__misaligned_access = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__done_0 = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_res_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_id_q = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_ext = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_aligned = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(81, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o);
    VL_RAND_RESET_W(71, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o);
    VL_RAND_RESET_W(71, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(68, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_n = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q = VL_RAND_RESET_I(6);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next = VL_RAND_RESET_I(6);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(81, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__wb_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_exception = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__xif_waiting = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_align_status_q = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_valid_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_mpu_status = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_align_status = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_en_gated = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__illegal_csr_read = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata1_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata1_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata2_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata2_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tinfo_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_rdata = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatush_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__misa_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mip_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtval_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_n = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_wr_in_wb = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VL_RAND_RESET_W(2048, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_n);
    VL_RAND_RESET_W(2048, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q);
    VL_RAND_RESET_W(1024, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n);
    VL_RAND_RESET_W(1024, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(2048, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw = VL_RAND_RESET_I(16);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_stopcount = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_we = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk1__DOT__b = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk2__DOT__b = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__mret_ptr_in_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb = VL_RAND_RESET_I(11);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = VL_RAND_RESET_I(11);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__1__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__2__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__3__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__4__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__5__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__6__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__7__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__8__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__9__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__10__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__11__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__12__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__13__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__14__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__15__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__16__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__17__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__18__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__19__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__20__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__21__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__22__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__23__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__24__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__25__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__26__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__27__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__28__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__29__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__30__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__31__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q = VL_RAND_RESET_I(5);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q = VL_RAND_RESET_I(5);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q = VL_RAND_RESET_I(5);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q = VL_RAND_RESET_I(7);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct3_q = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__scalar_val_q = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_op = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vi0]);
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter = VL_RAND_RESET_I(5);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__is_load = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result);
    VL_RAND_RESET_W(256, vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count = VL_RAND_RESET_I(6);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q = VL_RAND_RESET_I(7);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_size = VL_RAND_RESET_I(2);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_start = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row0 = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row1 = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col0 = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col1 = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid = VL_RAND_RESET_I(1);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        for (int __Vi1=0; __Vi1<8; ++__Vi1) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[__Vi0][__Vi1] = VL_RAND_RESET_Q(64);
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod = VL_RAND_RESET_Q(64);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod = VL_RAND_RESET_Q(64);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk12__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk14__DOT__idx = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            VL_RAND_RESET_W(129, vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter = VL_RAND_RESET_I(4);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_row1_delay = VL_RAND_RESET_I(32);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_col1_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_sn_to_regnum__2__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__2__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__3__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__3__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__4__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__4__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__5__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__5__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__6__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__6__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__7__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__7__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__8__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__8__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__9__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__9__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__10__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__10__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__11__Vfuncout = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_sn_to_regnum__11__snum = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__next_value = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 0;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 0;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp = VL_RAND_RESET_I(18);
    VL_RAND_RESET_W(201, vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm);
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode = VL_RAND_RESET_Q(45);
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes);
    VL_RAND_RESET_W(192, vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum);
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
