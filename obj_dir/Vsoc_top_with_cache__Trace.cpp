// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top_with_cache__Syms.h"


void Vsoc_top_with_cache___024root__traceChgSub0(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep);

void Vsoc_top_with_cache___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsoc_top_with_cache___024root* const __restrict vlSelf = static_cast<Vsoc_top_with_cache___024root*>(voidSelf);
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vsoc_top_with_cache___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0;

void Vsoc_top_with_cache___024root__traceChgSub0(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp352;
    VlWide<8>/*255:0*/ __Vtemp355;
    VlWide<5>/*159:0*/ __Vtemp360;
    VlWide<5>/*159:0*/ __Vtemp361;
    VlWide<5>/*159:0*/ __Vtemp362;
    VlWide<5>/*159:0*/ __Vtemp363;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->soc_top_with_cache__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+1,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+2,(vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.s_req));
            tracep->chgIData(oldp+3,(((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                               >> 8U)) 
                                      << 2U)),32);
            tracep->chgBit(oldp+4,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans_valid));
            tracep->chgBit(oldp+5,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                          >> 0xaU))));
            tracep->chgCData(oldp+6,((0xfU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                              >> 6U))),4);
            tracep->chgIData(oldp+7,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                       << 0xfU) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                   >> 0x11U))),32);
            tracep->chgIData(oldp+8,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                       << 0x1aU) | 
                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                       >> 6U))),32);
            tracep->chgBit(oldp+9,(vlSelf->soc_top_with_cache__DOT__icache_hit));
            tracep->chgSData(oldp+10,((0x1ffU & (IData)(
                                                        (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                         >> 0xbU)))),9);
            tracep->chgIData(oldp+11,((0x3ffffU & (IData)(
                                                          (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                           >> 0x14U)))),18);
            tracep->chgCData(oldp+12,((0x1cU & ((IData)(
                                                        (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                         >> 8U)) 
                                                << 2U))),5);
            tracep->chgCData(oldp+13,(vlSelf->soc_top_with_cache__DOT__icache_next_state),2);
            tracep->chgBit(oldp+14,(vlSelf->soc_top_with_cache__DOT__dcache_hit));
            tracep->chgSData(oldp+15,((0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                 >> 0x16U))),9);
            tracep->chgIData(oldp+16,((0x3ffffU & (
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                                    << 1U) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                      >> 0x1fU)))),18);
            tracep->chgCData(oldp+17,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                >> 0x11U))),5);
            tracep->chgCData(oldp+18,((3U & (IData)(
                                                    (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                     >> 4U)))),2);
            tracep->chgCData(oldp+19,((7U & (IData)(
                                                    (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                     >> 1U)))),3);
            tracep->chgBit(oldp+20,((1U & (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload))));
            tracep->chgCData(oldp+21,((3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                             >> 4U))),2);
            tracep->chgCData(oldp+22,((7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                             >> 1U))),3);
            tracep->chgBit(oldp+23,((1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U])));
            tracep->chgCData(oldp+24,((0x3fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                >> 0xbU))),6);
            tracep->chgBit(oldp+25,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__clk));
            tracep->chgCData(oldp+26,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp),2);
            tracep->chgIData(oldp+27,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target),32);
            tracep->chgBit(oldp+28,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_busy));
            tracep->chgIData(oldp+29,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_wdata_wb),32);
            tracep->chgIData(oldp+30,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_wdata_ex),32);
            tracep->chgBit(oldp+31,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_if));
            tracep->chgBit(oldp+32,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_id));
            tracep->chgBit(oldp+33,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_ex));
            tracep->chgBit(oldp+34,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_if));
            tracep->chgBit(oldp+35,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_id));
            tracep->chgBit(oldp+36,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_wb));
            tracep->chgCData(oldp+37,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_re_id),2);
            tracep->chgIData(oldp+38,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_wdata[0]),32);
            tracep->chgBit(oldp+39,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_we[0]));
            tracep->chgIData(oldp+40,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+41,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_we)) 
                                     | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_we))));
            tracep->chgBit(oldp+42,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex));
            tracep->chgBit(oldp+43,((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex)))));
            tracep->chgCData(oldp+44,((3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                             >> 2U))),2);
            tracep->chgIData(oldp+45,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                        << 0x1eU) | 
                                       (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[0U] 
                                        >> 2U))),32);
            tracep->chgCData(oldp+46,((3U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[0U])),2);
            tracep->chgIData(oldp+47,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_ext),32);
            tracep->chgCData(oldp+48,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_err_wb),2);
            tracep->chgBit(oldp+49,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_ready));
            tracep->chgBit(oldp+50,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__lsu_en_gated));
            tracep->chgBit(oldp+51,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__done_0) 
                                      & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex))) 
                                     & (~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)))));
            tracep->chgBit(oldp+52,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_valid_1));
            tracep->chgIData(oldp+53,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                        << 0xfU) | 
                                       (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                        >> 0x11U))),32);
            tracep->chgBit(oldp+54,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0xaU))));
            tracep->chgCData(oldp+55,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__be),4);
            tracep->chgIData(oldp+56,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match),32);
            tracep->chgCData(oldp+57,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_mpu_status),2);
            tracep->chgCData(oldp+58,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_align_status),2);
            tracep->chgBit(oldp+59,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ready));
            tracep->chgBit(oldp+60,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_ready));
            tracep->chgBit(oldp+61,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_valid));
            tracep->chgBit(oldp+62,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_valid));
            tracep->chgBit(oldp+63,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_valid));
            tracep->chgBit(oldp+64,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__wb_valid));
            tracep->chgBit(oldp+65,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_mtvec_init_if));
            tracep->chgIData(oldp+66,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_rdata),32);
            tracep->chgIData(oldp+67,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if),32);
            tracep->chgIData(oldp+68,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex),32);
            tracep->chgBit(oldp+69,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                   >> 0x34U)))));
            tracep->chgBit(oldp+70,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                   >> 0x33U)))));
            tracep->chgBit(oldp+71,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__alu_en));
            tracep->chgBit(oldp+72,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__sys_en));
            tracep->chgBit(oldp+73,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                   >> 2U)))));
            tracep->chgBit(oldp+74,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                   >> 0x17U)))));
            tracep->chgBit(oldp+75,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_illegal));
            tracep->chgBit(oldp+76,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__xif_csr_error_ex));
            tracep->chgBit(oldp+77,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
            tracep->chgBit(oldp+78,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready));
            tracep->chgIData(oldp+79,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__branch_addr_n),32);
            tracep->chgBit(oldp+80,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid));
            tracep->chgQData(oldp+81,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_instr),35);
            tracep->chgBit(oldp+83,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgQData(oldp+84,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed),35);
            tracep->chgBit(oldp+86,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_compressed));
            tracep->chgBit(oldp+87,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_resp_valid));
            tracep->chgBit(oldp+88,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid));
            tracep->chgBit(oldp+89,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_ready));
            tracep->chgIData(oldp+90,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_addr),32);
            tracep->chgBit(oldp+91,((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n))));
            tracep->chgBit(oldp+92,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                     & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus)))));
            tracep->chgQData(oldp+93,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o),38);
            tracep->chgQData(oldp+95,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__core_trans),38);
            tracep->chgBit(oldp+97,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid));
            tracep->chgBit(oldp+98,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_last));
            tracep->chgQData(oldp+99,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_instr),35);
            tracep->chgBit(oldp+101,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_tbljmp));
            tracep->chgBit(oldp+102,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_pushpop));
            tracep->chgIData(oldp+103,((0xfffffffeU 
                                        & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__branch_addr_n)),32);
            tracep->chgBit(oldp+104,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready));
            tracep->chgBit(oldp+105,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access));
            tracep->chgBit(oldp+106,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp));
            tracep->chgBit(oldp+107,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state));
            tracep->chgCData(oldp+108,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n),2);
            tracep->chgBit(oldp+109,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready))));
            tracep->chgCData(oldp+110,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins),2);
            tracep->chgBit(oldp+111,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n));
            tracep->chgBit(oldp+112,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n));
            tracep->chgCData(oldp+113,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n),2);
            tracep->chgCData(oldp+114,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch),2);
            tracep->chgBit(oldp+115,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned));
            tracep->chgCData(oldp+116,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned),2);
            tracep->chgBit(oldp+117,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
            tracep->chgCData(oldp+118,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n),3);
            tracep->chgCData(oldp+119,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int),3);
            tracep->chgQData(oldp+120,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n),35);
            tracep->chgCData(oldp+122,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n),2);
            tracep->chgCData(oldp+123,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n),2);
            tracep->chgIData(oldp+124,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n),32);
            tracep->chgIData(oldp+125,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr),32);
            tracep->chgBit(oldp+126,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid));
            tracep->chgBit(oldp+127,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+128,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+129,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err));
            tracep->chgBit(oldp+130,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core));
            tracep->chgBit(oldp+131,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus));
            tracep->chgBit(oldp+132,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
            tracep->chgBit(oldp+133,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
            tracep->chgCData(oldp+134,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status),2);
            tracep->chgCData(oldp+135,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_n),3);
            tracep->chgBit(oldp+136,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+137,((((0xf0000000U 
                                        <= (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__core_trans 
                                                    >> 6U))) 
                                       & (0xf0003fffU 
                                          >= (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__core_trans 
                                                      >> 6U)))) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__core_trans))));
            tracep->chgIData(oldp+138,((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__core_trans 
                                                >> 6U))),32);
            tracep->chgWData(oldp+139,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg),68);
            tracep->chgIData(oldp+142,((0x3fffffffU 
                                        & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__core_trans 
                                                   >> 8U)))),32);
            tracep->chgBit(oldp+143,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state));
            tracep->chgIData(oldp+144,((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 3U))),32);
            tracep->chgQData(oldp+145,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode),45);
            tracep->chgCData(oldp+147,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr),4);
            tracep->chgCData(oldp+148,((0xfU & (IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 7U)))),4);
            tracep->chgBit(oldp+149,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load));
            tracep->chgBit(oldp+150,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store));
            tracep->chgBit(oldp+151,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s));
            tracep->chgBit(oldp+152,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a));
            tracep->chgCData(oldp+153,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n),4);
            tracep->chgBit(oldp+154,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm));
            tracep->chgBit(oldp+155,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm));
            tracep->chgBit(oldp+156,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s));
            tracep->chgBit(oldp+157,((3U < (0xfU & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 7U))))));
            tracep->chgCData(oldp+158,((3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x19U)))),2);
            tracep->chgBit(oldp+159,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__rf_we));
            tracep->chgBit(oldp+160,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 0x35U)))));
            tracep->chgCData(oldp+161,((0x3fU & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                         >> 0x2dU)))),6);
            tracep->chgBit(oldp+162,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__mul_en));
            tracep->chgBit(oldp+163,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__div_en));
            tracep->chgBit(oldp+164,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__lsu_en));
            tracep->chgBit(oldp+165,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x13U)))));
            tracep->chgCData(oldp+166,((3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x11U)))),2);
            tracep->chgBit(oldp+167,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+168,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__csr_en));
            tracep->chgCData(oldp+169,((3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                      >> 0x15U)))),2);
            tracep->chgBit(oldp+170,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 4U)))));
            tracep->chgBit(oldp+171,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 3U)))));
            tracep->chgBit(oldp+172,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 5U)))));
            tracep->chgBit(oldp+173,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 6U)))));
            tracep->chgBit(oldp+174,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 7U)))));
            tracep->chgBit(oldp+175,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 1U)))));
            tracep->chgBit(oldp+176,((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))));
            tracep->chgIData(oldp+177,(((0U == (3U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x27U))))
                                         ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw
                                         : ((1U == 
                                             (3U & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x27U))))
                                             ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                                             : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw))),32);
            tracep->chgIData(oldp+178,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw),32);
            tracep->chgIData(oldp+179,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw),32);
            tracep->chgCData(oldp+180,((3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x2bU)))),2);
            tracep->chgCData(oldp+181,((3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x29U)))),2);
            tracep->chgCData(oldp+182,((3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x27U)))),2);
            tracep->chgBit(oldp+183,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x26U)))));
            tracep->chgCData(oldp+184,((3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x24U)))),2);
            tracep->chgCData(oldp+185,((3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                      >> 0x22U)))),2);
            tracep->chgBit(oldp+186,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__illegal_insn));
            tracep->chgBit(oldp+187,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__instr_valid));
            tracep->chgBit(oldp+188,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_accept) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_reject))));
            tracep->chgBit(oldp+189,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_waiting));
            tracep->chgBit(oldp+190,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_accept));
            tracep->chgBit(oldp+191,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_reject));
            tracep->chgBit(oldp+192,(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                      & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                         >> 7U))));
            tracep->chgBit(oldp+193,(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o))));
            tracep->chgBit(oldp+194,(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                      & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                         >> 6U))));
            tracep->chgBit(oldp+195,(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                      & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                         >> 2U))));
            tracep->chgBit(oldp+196,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+197,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+198,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                    >> 9U)))));
            tracep->chgQData(oldp+200,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl),55);
            tracep->chgQData(oldp+202,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int),55);
            tracep->chgQData(oldp+204,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux),55);
            tracep->chgBit(oldp+206,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__instr_valid));
            tracep->chgBit(oldp+207,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_ready));
            tracep->chgBit(oldp+208,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_valid));
            tracep->chgBit(oldp+209,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_ready));
            tracep->chgBit(oldp+210,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_valid));
            tracep->chgIData(oldp+211,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_result),32);
            tracep->chgIData(oldp+212,((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)),32);
            tracep->chgCData(oldp+213,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_result),6);
            tracep->chgIData(oldp+214,((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)),32);
            tracep->chgBit(oldp+215,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__csr_is_illegal));
            tracep->chgCData(oldp+216,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt),6);
            tracep->chgQData(oldp+217,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp),64);
            tracep->chgIData(oldp+219,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux),32);
            tracep->chgIData(oldp+220,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux),32);
            tracep->chgCData(oldp+221,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d),6);
            tracep->chgCData(oldp+222,((0x3fU & ((IData)(0x20U) 
                                                 - (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_result)))),6);
            tracep->chgBit(oldp+223,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt));
            tracep->chgBit(oldp+224,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en));
            tracep->chgBit(oldp+225,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en));
            tracep->chgBit(oldp+226,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en));
            tracep->chgBit(oldp+227,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en));
            tracep->chgCData(oldp+228,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state),2);
            tracep->chgBit(oldp+229,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift));
            tracep->chgCData(oldp+230,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next),2);
            tracep->chgIData(oldp+231,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a),17);
            tracep->chgIData(oldp+232,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b),17);
            tracep->chgQData(oldp+233,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next),33);
            tracep->chgQData(oldp+235,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res),33);
            tracep->chgQData(oldp+237,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result),34);
            tracep->chgQData(oldp+239,((0x3ffffffffULL 
                                        & VL_SHIFTRS_QQI(34,34,32, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))),34);
            tracep->chgWData(oldp+241,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans),77);
            tracep->chgBit(oldp+244,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid));
            tracep->chgBit(oldp+245,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans_ready));
            tracep->chgWData(oldp+246,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans),81);
            tracep->chgBit(oldp+249,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__alcheck_trans_valid));
            tracep->chgBit(oldp+250,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                                       & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core))) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready))));
            tracep->chgWData(oldp+251,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o),81);
            tracep->chgBit(oldp+254,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_trans_valid));
            tracep->chgBit(oldp+255,((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                                         & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core))) 
                                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready)) 
                                       & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core))) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready))));
            tracep->chgBit(oldp+256,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+257,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp_valid));
            tracep->chgIData(oldp+258,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                         << 0x19U) 
                                        | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                           >> 7U))),32);
            tracep->chgWData(oldp+259,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp),71);
            tracep->chgWData(oldp+262,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o),71);
            tracep->chgWData(oldp+265,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o),71);
            tracep->chgBit(oldp+268,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__buffer_trans_valid));
            tracep->chgBit(oldp+269,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__buffer_trans_ready));
            tracep->chgBit(oldp+270,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_valid));
            tracep->chgBit(oldp+271,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_ready));
            tracep->chgWData(oldp+272,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans),81);
            tracep->chgCData(oldp+275,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__next_cnt),2);
            tracep->chgBit(oldp+276,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans_ready))));
            tracep->chgBit(oldp+277,((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__next_cnt))));
            tracep->chgBit(oldp+278,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgIData(oldp+279,(((0x4000U & 
                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U])
                                         ? ((0x2000U 
                                             & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? ((0xff000000U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                    << 0x15U)) 
                                                | (0xffffffU 
                                                   & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                       << 0x15U) 
                                                      | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                         >> 0xbU))))
                                             : ((0xffff0000U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                    << 0xdU)) 
                                                | (0xffffU 
                                                   & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                       << 0xdU) 
                                                      | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                         >> 0x13U)))))
                                         : ((0x2000U 
                                             & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? ((0xffffff00U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                    << 5U)) 
                                                | (0xffU 
                                                   & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                       << 5U) 
                                                      | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                         >> 0x1bU))))
                                             : ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                 << 0x1dU) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   >> 3U))))),32);
            tracep->chgBit(oldp+280,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword));
            tracep->chgBit(oldp+281,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__misaligned_access));
            tracep->chgBit(oldp+282,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__done_0));
            tracep->chgBit(oldp+283,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err));
            tracep->chgBit(oldp+284,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                            >> 0x10U))));
            tracep->chgQData(oldp+285,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_aligned),64);
            tracep->chgBit(oldp+287,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core));
            tracep->chgBit(oldp+288,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus));
            tracep->chgBit(oldp+289,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
            tracep->chgBit(oldp+290,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
            tracep->chgCData(oldp+291,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status),2);
            tracep->chgCData(oldp+292,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n),3);
            tracep->chgBit(oldp+293,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+294,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                              >> 2U) 
                                             & (~ (
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x10U))) 
                                            & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+295,((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+296,((((0xf0000000U 
                                        <= ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                             << 0xfU) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               >> 0x11U))) 
                                       & (0xf0003fffU 
                                          >= ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                               << 0xfU) 
                                              | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 >> 0x11U)))) 
                                      & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[0U])));
            tracep->chgWData(oldp+297,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg),68);
            tracep->chgIData(oldp+300,((0x3fffffffU 
                                        & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                            << 0xdU) 
                                           | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                              >> 0x13U)))),32);
            tracep->chgBit(oldp+301,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                       >> 0x10U) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__misaligned_access))));
            tracep->chgBit(oldp+302,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core));
            tracep->chgBit(oldp+303,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus));
            tracep->chgBit(oldp+304,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid));
            tracep->chgBit(oldp+305,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready));
            tracep->chgBit(oldp+306,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+307,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status),2);
            tracep->chgCData(oldp+308,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_n),3);
            tracep->chgCData(oldp+309,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt),2);
            tracep->chgBit(oldp+310,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted));
            tracep->chgCData(oldp+311,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt),2);
            tracep->chgBit(oldp+312,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_valid))));
            tracep->chgCData(oldp+313,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next),6);
            tracep->chgBit(oldp+314,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
            tracep->chgBit(oldp+315,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push));
            tracep->chgBit(oldp+316,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                            >> 4U))));
            tracep->chgBit(oldp+317,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus));
            tracep->chgBit(oldp+318,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready));
            tracep->chgCData(oldp+319,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n),2);
            tracep->chgIData(oldp+320,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n),32);
            tracep->chgBit(oldp+321,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__instr_valid));
            tracep->chgBit(oldp+322,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_exception));
            tracep->chgBit(oldp+323,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_valid));
            tracep->chgIData(oldp+324,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+325,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgBit(oldp+326,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_en_gated));
            tracep->chgBit(oldp+327,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__illegal_csr_read));
            tracep->chgIData(oldp+328,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n),32);
            tracep->chgBit(oldp+329,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we));
            tracep->chgBit(oldp+330,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we));
            tracep->chgBit(oldp+331,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata1_we));
            tracep->chgBit(oldp+332,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata2_we));
            tracep->chgBit(oldp+333,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tinfo_we));
            tracep->chgIData(oldp+334,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n),32);
            tracep->chgBit(oldp+335,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we));
            tracep->chgIData(oldp+336,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n),32);
            tracep->chgBit(oldp+337,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we));
            tracep->chgIData(oldp+338,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n),32);
            tracep->chgBit(oldp+339,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we));
            tracep->chgIData(oldp+340,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n),32);
            tracep->chgBit(oldp+341,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we));
            tracep->chgIData(oldp+342,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n),32);
            tracep->chgBit(oldp+343,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we));
            tracep->chgIData(oldp+344,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n),32);
            tracep->chgBit(oldp+345,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we));
            tracep->chgIData(oldp+346,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_n),32);
            tracep->chgBit(oldp+347,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_we));
            tracep->chgBit(oldp+348,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatush_we));
            tracep->chgBit(oldp+349,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__misa_we));
            tracep->chgIData(oldp+350,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n),32);
            tracep->chgBit(oldp+351,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we));
            tracep->chgIData(oldp+352,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n),32);
            tracep->chgBit(oldp+353,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we));
            tracep->chgBit(oldp+354,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mip_we));
            tracep->chgIData(oldp+355,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n),32);
            tracep->chgBit(oldp+356,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we));
            tracep->chgBit(oldp+357,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtval_we));
            tracep->chgCData(oldp+358,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_n),2);
            tracep->chgBit(oldp+359,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_we));
            tracep->chgWData(oldp+360,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_n),2048);
            tracep->chgQData(oldp+424,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_we),64);
            tracep->chgWData(oldp+426,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n),1024);
            tracep->chgIData(oldp+458,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n),32);
            tracep->chgIData(oldp+459,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower),32);
            tracep->chgIData(oldp+460,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper),32);
            tracep->chgIData(oldp+461,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment),32);
            tracep->chgSData(oldp+462,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw),16);
            tracep->chgBit(oldp+463,((0xffffffffU == 
                                      (0xfffffff2U 
                                       | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n))));
            tracep->chgBit(oldp+464,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_stopcount));
            tracep->chgBit(oldp+465,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_we));
            tracep->chgIData(oldp+466,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n),32);
            tracep->chgIData(oldp+467,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n),32);
            tracep->chgIData(oldp+468,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r),32);
            tracep->chgIData(oldp+469,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r),32);
            tracep->chgBit(oldp+470,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r));
            tracep->chgBit(oldp+471,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata2_we) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we))));
            tracep->chgBit(oldp+472,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int));
            tracep->chgBit(oldp+473,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit));
            tracep->chgBit(oldp+474,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int));
            tracep->chgIData(oldp+475,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0]),32);
            tracep->chgBit(oldp+476,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if));
            tracep->chgBit(oldp+477,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex));
            tracep->chgCData(oldp+478,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0]),4);
            tracep->chgCData(oldp+479,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb),2);
            tracep->chgCData(oldp+480,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb),2);
            tracep->chgIData(oldp+481,(((0xfffffffcU 
                                         & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                             << 0xfU) 
                                            | (0x7ffcU 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                  >> 0x11U)))) 
                                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb))),32);
            tracep->chgIData(oldp+482,(((0xfffffffcU 
                                         & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                             << 0xfU) 
                                            | (0x7ffcU 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                  >> 0x11U)))) 
                                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb))),32);
            tracep->chgIData(oldp+483,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0]),32);
            tracep->chgCData(oldp+484,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[0]),2);
            tracep->chgIData(oldp+485,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk1__DOT__b),32);
            tracep->chgIData(oldp+486,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk2__DOT__b),32);
            tracep->chgIData(oldp+487,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk7__DOT__i),32);
            tracep->chgIData(oldp+488,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                                       [0U]),32);
            tracep->chgCData(oldp+489,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns),2);
            tracep->chgCData(oldp+490,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns),3);
            tracep->chgBit(oldp+491,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
            tracep->chgBit(oldp+492,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n));
            tracep->chgBit(oldp+493,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id));
            tracep->chgBit(oldp+494,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id));
            tracep->chgBit(oldp+495,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id));
            tracep->chgBit(oldp+496,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
            tracep->chgBit(oldp+497,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb));
            tracep->chgSData(oldp+498,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb),11);
            tracep->chgBit(oldp+499,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb));
            tracep->chgBit(oldp+500,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb));
            tracep->chgBit(oldp+501,((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_err_wb) 
                                            >> 1U))));
            tracep->chgBit(oldp+502,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug));
            tracep->chgBit(oldp+503,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step));
            tracep->chgBit(oldp+504,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
            tracep->chgBit(oldp+505,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed));
            tracep->chgBit(oldp+506,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible));
            tracep->chgCData(oldp+507,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n),3);
            tracep->chgSData(oldp+508,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause),11);
            tracep->chgBit(oldp+509,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set));
            tracep->chgBit(oldp+510,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr));
            tracep->chgCData(oldp+511,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl),2);
            tracep->chgBit(oldp+512,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated));
            tracep->chgBit(oldp+513,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n));
            tracep->chgBit(oldp+514,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear));
            tracep->chgCData(oldp+515,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match),2);
            tracep->chgCData(oldp+516,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match),2);
            tracep->chgCData(oldp+517,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz),2);
            tracep->chgCData(oldp+518,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz),2);
            tracep->chgIData(oldp+519,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__wdata_i[0]),32);
            tracep->chgBit(oldp+520,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__we_i[0]));
            tracep->chgIData(oldp+521,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i[0]),32);
            tracep->chgBit(oldp+522,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i[0]));
            tracep->chgIData(oldp+523,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0]),32);
            tracep->chgBit(oldp+524,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid));
            tracep->chgSData(oldp+525,(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o),9);
            tracep->chgCData(oldp+526,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.commit),5);
            tracep->chgCData(oldp+527,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state),3);
            tracep->chgWData(oldp+528,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a),256);
            tracep->chgWData(oldp+536,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b),256);
            tracep->chgBit(oldp+544,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load));
            tracep->chgBit(oldp+545,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store));
            tracep->chgWData(oldp+546,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result),256);
            tracep->chgBit(oldp+554,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue));
            tracep->chgBit(oldp+555,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op));
            tracep->chgBit(oldp+556,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op));
            tracep->chgBit(oldp+557,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_op));
            tracep->chgCData(oldp+558,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state),3);
            tracep->chgWData(oldp+559,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result),256);
            tracep->chgWData(oldp+567,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result),256);
            tracep->chgWData(oldp+575,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result),256);
            tracep->chgWData(oldp+583,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result),256);
            tracep->chgIData(oldp+591,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem),32);
            tracep->chgIData(oldp+592,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem),32);
            tracep->chgQData(oldp+593,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod),64);
            tracep->chgIData(oldp+595,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem),32);
            tracep->chgIData(oldp+596,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem),32);
            tracep->chgIData(oldp+597,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem),32);
            tracep->chgIData(oldp+598,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem),32);
            tracep->chgIData(oldp+599,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem),32);
            tracep->chgIData(oldp+600,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem),32);
            tracep->chgQData(oldp+601,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod),64);
            tracep->chgBit(oldp+603,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__done_0) 
                                      & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex)))));
            tracep->chgCData(oldp+604,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_resp),8);
            tracep->chgQData(oldp+605,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_result),38);
            tracep->chgQData(oldp+607,(vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload),38);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+609,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o),35);
            if ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                __Vtemp352[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[0U];
                __Vtemp352[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[1U];
                __Vtemp352[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[2U];
                __Vtemp352[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[3U];
                __Vtemp352[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[4U];
                __Vtemp352[5U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[5U];
                __Vtemp352[6U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[6U];
                __Vtemp352[7U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[7U];
            } else {
                __Vtemp352[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[0U];
                __Vtemp352[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[1U];
                __Vtemp352[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[2U];
                __Vtemp352[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[3U];
                __Vtemp352[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[4U];
                __Vtemp352[5U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[5U];
                __Vtemp352[6U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[6U];
                __Vtemp352[7U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[7U];
            }
            tracep->chgWData(oldp+611,(__Vtemp352),256);
            tracep->chgBit(oldp+619,(((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                                      | ((3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                                         & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state))))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgBit(oldp+620,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+621,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+622,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+623,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[1U] 
                                            >> 4U))));
            tracep->chgBit(oldp+624,(((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid))));
            tracep->chgIData(oldp+625,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp),18);
            tracep->chgWData(oldp+626,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm),201);
            tracep->chgBit(oldp+633,(((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__cnt_q))
                                         ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid) 
                                            & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                                         : ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                            | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid) 
                                               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans_ready)))) 
                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__lsu_en_gated)) 
                                      & (~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)))));
            tracep->chgBit(oldp+634,(((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp_valid))));
            tracep->chgBit(oldp+635,((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U] 
                                        >> 0x1eU) & 
                                       (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_valid))) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__instr_valid))));
            tracep->chgBit(oldp+636,(((((5U == (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                [0U] 
                                                >> 0x1cU)) 
                                        & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                             [0U] >> 9U) 
                                            & (3U == 
                                               (3U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                   >> 0x12U)))) 
                                           | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                               [0U] 
                                               >> 6U) 
                                              & (0U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                     >> 0x12U)))))) 
                                       & (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
                                          [0U])) & 
                                      (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                          >> 0x13U)))));
            tracep->chgBit(oldp+637,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[5U] 
                                            >> 0xbU))));
            tracep->chgSData(oldp+638,((0x3ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[5U] 
                                                  >> 1U))),10);
            tracep->chgCData(oldp+639,((0xffU & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[5U] 
                                                  << 7U) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                                    >> 0x19U)))),8);
            tracep->chgCData(oldp+640,((3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+641,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                            >> 0x16U))));
            tracep->chgBit(oldp+642,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+643,((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                       | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))));
            tracep->chgBit(oldp+644,((1U & ((((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                                 >> 0x15U) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[5U] 
                                                   >> 0xbU)) 
                                               | (0U 
                                                  != 
                                                  (0x3ffU 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[5U] 
                                                      >> 1U)))) 
                                              | (0U 
                                                 != 
                                                 (0xffU 
                                                  & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[5U] 
                                                      << 7U) 
                                                     | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                                        >> 0x19U))))) 
                                             | (0U 
                                                != 
                                                (3U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                                    >> 0x17U)))) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
                                               >> 0x16U)))));
            tracep->chgBit(oldp+645,((1U & ((((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid)) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                                                >> 8U)) 
                                            | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_busy)))));
            tracep->chgCData(oldp+646,((0xfU & ((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                                                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))
                                                 ? 
                                                ((IData)(1U) 
                                                 + 
                                                 ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] 
                                                   << 0x1dU) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                                                     >> 3U)))
                                                 : 
                                                ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] 
                                                  << 0x1dU) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                                                    >> 3U))))),4);
            tracep->chgBit(oldp+647,((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)
                                             ? (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ready) 
                                                 & (~ 
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                                     >> 0x15U))) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                                   >> 0x10U))
                                             : (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm)))));
            tracep->chgBit(oldp+648,((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid)
                                             ? ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
                                                & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm))
                                             : (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q))))));
            tracep->chgBit(oldp+649,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                                            >> 6U))));
            tracep->chgCData(oldp+650,(((0x10000U & 
                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U])
                                         ? 0U : (7U 
                                                 & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                                     + (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                                                    - 
                                                    ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                                                      ? 1U
                                                      : 0U))))),3);
            tracep->chgBit(oldp+651,((((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                       & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                          >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                      | (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                          & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                             >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated)))));
            tracep->chgBit(oldp+652,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                            >> 0x15U))));
            tracep->chgBit(oldp+653,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+654,((1U & ((~ ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp 
                                                 >> 4U) 
                                                | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                    >> 0x17U) 
                                                   & (~ 
                                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U] 
                                                       >> 1U))))) 
                                            & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                       >> 0x18U))))));
            tracep->chgIData(oldp+655,(((0U == (3U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x2bU))))
                                         ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw
                                         : ((1U == 
                                             (3U & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x2bU))))
                                             ? ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                 << 0xaU) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                   >> 0x16U))
                                             : ((2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x2bU))))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x26U)))
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                     >> 0xdU)))
                                                 : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw)))),32);
            tracep->chgIData(oldp+656,(((0U == (3U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x29U))))
                                         ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw
                                         : ((1U == 
                                             (3U & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x29U))))
                                             ? ((1U 
                                                 & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x25U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x24U)))
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U])
                                                   ? 2U
                                                   : 4U)
                                                  : 
                                                 (0xfffff000U 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                     << 2U)))
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x24U)))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                                  >> 0x1dU)))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                         >> 0x12U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                           >> 5U))))
                                                  : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__imm_i_type))
                                             : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw))),32);
            tracep->chgIData(oldp+657,(((0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp)
                                         ? ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                                             << 0xeU) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                               >> 0x12U))
                                         : ((0x2000U 
                                             & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp)
                                             ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                            [0U] : 
                                            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                            [0U]))),32);
            tracep->chgIData(oldp+658,(((1U & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                       >> 0x26U)))
                                         ? 0U : (0x1fU 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                    >> 0xdU)))),32);
            tracep->chgIData(oldp+659,(((1U & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                       >> 0x25U)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x24U)))
                                             ? ((0x4000000U 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U])
                                                 ? 2U
                                                 : 4U)
                                             : (0xfffff000U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                   << 2U)))
                                         : ((1U & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x24U)))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                                >> 0x1dU)))) 
                                                 << 0xcU) 
                                                | ((0xfe0U 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                       >> 0x12U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                         >> 5U))))
                                             : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__imm_i_type))),32);
            tracep->chgBit(oldp+660,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp 
                                            >> 4U))));
            tracep->chgCData(oldp+661,((0x1fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])),5);
            tracep->chgBit(oldp+662,((1U & (~ vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))));
            tracep->chgCData(oldp+663,((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                        >> 0x1aU)),6);
            tracep->chgIData(oldp+664,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes),32);
            tracep->chgWData(oldp+665,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes),160);
            tracep->chgWData(oldp+670,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum),192);
            tracep->chgBit(oldp+676,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+677,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                            >> 0xeU))));
            tracep->chgIData(oldp+678,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                         ? 0U : ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                                                  ? 
                                                 ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                                                   << 1U) 
                                                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                                                  : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q))),32);
            tracep->chgIData(oldp+679,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
                                         ? (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) 
                                             & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
                                                   & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                                       >> 0x10U) 
                                                      ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))))
                                             ? (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                                + vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                                             : (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                                - vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
                                         : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q)),32);
            tracep->chgIData(oldp+680,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
                                         ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                             ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                             : (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                                 << 0x1fU) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                                   >> 1U)))
                                         : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q)),32);
            tracep->chgBit(oldp+681,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                       ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)
                                       : (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q))));
            tracep->chgBit(oldp+682,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                       ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                                       : (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))));
            tracep->chgBit(oldp+683,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                       ? ((((0U != 
                                             ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                               << 0xfU) 
                                              | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                 >> 0x11U))) 
                                            | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed)) 
                                          & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                              >> 0x10U) 
                                             ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))
                                       : (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q))));
            tracep->chgIData(oldp+684,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) 
                                         & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
                                               & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                                   >> 0x10U) 
                                                  ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))))
                                         ? (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                            + vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                                         : (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                            - vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))),32);
            tracep->chgIData(oldp+685,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                         ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                         : (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                             << 0x1fU) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                               >> 1U)))),32);
            tracep->chgBit(oldp+686,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) 
                                      & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
                                            & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                                >> 0x10U) 
                                               ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))))));
            tracep->chgIData(oldp+687,(((0x400000U 
                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U])
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                            >> 0x10U)))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                         : ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                             << 0xfU) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                               >> 0x11U)))),32);
            tracep->chgIData(oldp+688,(((0x400000U 
                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U])
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                            >> 0x10U)))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                         : ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                             << 0xfU) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                               >> 0x11U)))),32);
            tracep->chgQData(oldp+689,((0x3ffffffffULL 
                                        & VL_MULS_QQQ(34,34,34, 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,32, 
                                                                       ((0x400000U 
                                                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U])
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                                                >> 0x10U)))) 
                                                                          << 0x10U) 
                                                                         | (0xffffU 
                                                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                                                         : 
                                                                        ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                                                          << 0xfU) 
                                                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                                                            >> 0x11U))))), 
                                                      (0x3ffffffffULL 
                                                       & VL_EXTENDS_QI(34,32, 
                                                                       ((0x400000U 
                                                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U])
                                                                         ? 
                                                                        (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                                                >> 0x10U)))) 
                                                                          << 0x10U) 
                                                                         | (0xffffU 
                                                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                                                         : 
                                                                        ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                                                          << 0xfU) 
                                                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                                            >> 0x11U)))))))),34);
            tracep->chgBit(oldp+691,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q) 
                                       | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex)) 
                                      | ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid) 
                                         & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_req[1U] 
                                            >> 2U)))));
            tracep->chgBit(oldp+692,(((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_trans_valid))));
            tracep->chgQData(oldp+693,(((((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                          & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                         | ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                            & (3U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_offset_q))))
                                         ? (((QData)((IData)(
                                                             ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                               << 0x19U) 
                                                              | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                 >> 7U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_q)))
                                         : (((QData)((IData)(
                                                             ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                               << 0x19U) 
                                                              | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                 >> 7U)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                                << 0x19U) 
                                                               | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                  >> 7U))))))),64);
            tracep->chgBit(oldp+695,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                              >> 0x15U) 
                                             & (~ (
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                                   >> 0xdU))) 
                                            & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                                  >> 0x12U))))));
            tracep->chgSData(oldp+696,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events),16);
            tracep->chgBit(oldp+697,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                      & (0x320U == 
                                         (0xfffU & 
                                          vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U])))));
            tracep->chgBit(oldp+698,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0U]))));
            tracep->chgBit(oldp+699,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[1U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[1U]))));
            tracep->chgBit(oldp+700,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[2U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[2U]))));
            tracep->chgBit(oldp+701,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[4U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[4U]))));
            tracep->chgBit(oldp+702,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[5U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[5U]))));
            tracep->chgBit(oldp+703,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[6U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[6U]))));
            tracep->chgBit(oldp+704,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[7U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[7U]))));
            tracep->chgBit(oldp+705,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[8U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[8U]))));
            tracep->chgBit(oldp+706,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[9U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[9U]))));
            tracep->chgBit(oldp+707,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xaU]))));
            tracep->chgBit(oldp+708,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xbU]))));
            tracep->chgBit(oldp+709,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xcU]))));
            tracep->chgBit(oldp+710,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xdU]))));
            tracep->chgBit(oldp+711,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xeU]))));
            tracep->chgBit(oldp+712,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xfU]))));
            tracep->chgBit(oldp+713,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x10U]))));
            tracep->chgBit(oldp+714,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x11U]))));
            tracep->chgBit(oldp+715,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x12U]))));
            tracep->chgBit(oldp+716,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x13U]))));
            tracep->chgBit(oldp+717,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x14U]))));
            tracep->chgBit(oldp+718,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x15U]))));
            tracep->chgBit(oldp+719,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x16U]))));
            tracep->chgBit(oldp+720,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x17U]))));
            tracep->chgBit(oldp+721,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x18U]))));
            tracep->chgBit(oldp+722,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x19U]))));
            tracep->chgBit(oldp+723,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1aU]))));
            tracep->chgBit(oldp+724,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1bU]))));
            tracep->chgBit(oldp+725,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1cU]))));
            tracep->chgBit(oldp+726,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1dU]))));
            tracep->chgBit(oldp+727,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1eU]))));
            tracep->chgBit(oldp+728,((((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU]) 
                                       | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU])) 
                                      | (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1fU]))));
            tracep->chgBit(oldp+729,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__lsu_en_gated) 
                                      & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                          [0U] & (~ 
                                                  (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0xaU))) 
                                         | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                             [0U] >> 1U) 
                                            & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               >> 0xaU))))));
            tracep->chgBit(oldp+730,(((0U == (0xfU 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                 [0U] 
                                                 >> 7U)))
                                       ? (((0x3fffffffU 
                                            & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                << 0xdU) 
                                               | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                  >> 0x13U))) 
                                           == (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U] 
                                               >> 2U)) 
                                          & (0U != 
                                             vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
                                             [0U]))
                                       : ((2U == (0xfU 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                     [0U] 
                                                     >> 7U)))
                                           ? (((0xfffffffcU 
                                                & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                    << 0xfU) 
                                                   | (0x7ffcU 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                         >> 0x11U)))) 
                                               | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb)) 
                                              >= vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                              [0U])
                                           : (((0xfffffffcU 
                                                & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                    << 0xfU) 
                                                   | (0x7ffcU 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                         >> 0x11U)))) 
                                               | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb)) 
                                              < vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                              [0U])))));
            tracep->chgBit(oldp+731,((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                        [0U] >> 6U) 
                                       & (3U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))) 
                                      | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                          [0U] >> 3U) 
                                         & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))))));
            tracep->chgBit(oldp+732,((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                         & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                               >> 0x17U))) 
                                        & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp 
                                              >> 0xcU))) 
                                       | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                           & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                              >> 0x17U)) 
                                          & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp 
                                                >> 0xaU)))) 
                                      | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
                                         & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp 
                                               >> 0xaU))))));
            tracep->chgCData(oldp+733,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                         ? 2U : (((
                                                   ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                       >> 0xfU)) 
                                                   & (3U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                          >> 0x12U)))) 
                                                  & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                                  ? 1U
                                                  : 
                                                 (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))
                                                   ? 1U
                                                   : 0U)))),3);
            tracep->chgBit(oldp+734,((1U & ((IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 2U)) 
                                            & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                               >> 0x1eU)))));
            tracep->chgBit(oldp+735,((1U & (((IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                      >> 2U)) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                >> 0x1eU)) 
                                            | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                >> 0x17U) 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                  >> 0x1eU))))));
            tracep->chgBit(oldp+736,((1U & ((IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 0x33U)) 
                                            & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                               >> 0x1eU)))));
            tracep->chgWData(oldp+737,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req),111);
            tracep->chgBit(oldp+741,((1U & ((((~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                                  >> 0x13U)) 
                                              | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                                 >> 0xeU)) 
                                             & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                 >> 7U) 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                   >> 0xaU))) 
                                            & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q))))));
            tracep->chgIData(oldp+742,(((vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                         << 0x11U) 
                                        | (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                           >> 0xfU))),32);
            tracep->chgCData(oldp+743,((0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op)
                                                 ? 
                                                ((vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                    >> 3U))
                                                 : 
                                                ((vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                                    >> 0x1bU))))),4);
            tracep->chgCData(oldp+744,((0xfU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                                >> 0x16U))),4);
            tracep->chgCData(oldp+745,((0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op)
                                                 ? 
                                                ((vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                  << 0x1dU) 
                                                 | (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                    >> 3U))
                                                 : 
                                                ((vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                                  << 5U) 
                                                 | (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                                    >> 0x1bU))))),5);
            tracep->chgCData(oldp+746,((0xfU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                                >> 0x16U))),5);
            tracep->chgBit(oldp+747,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__last_q) 
                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp_valid)) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_res_q))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+748,(vlSelf->soc_top_with_cache__DOT__instr_gnt));
            tracep->chgBit(oldp+749,(vlSelf->soc_top_with_cache__DOT__instr_rvalid));
            tracep->chgIData(oldp+750,(vlSelf->soc_top_with_cache__DOT__instr_rdata),32);
            tracep->chgBit(oldp+751,(vlSelf->soc_top_with_cache__DOT__data_gnt));
            tracep->chgBit(oldp+752,(vlSelf->soc_top_with_cache__DOT__data_rvalid));
            tracep->chgIData(oldp+753,(vlSelf->soc_top_with_cache__DOT__data_rdata),32);
            tracep->chgBit(oldp+754,(((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                                      | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)))));
            tracep->chgBit(oldp+755,(vlSelf->soc_top_with_cache__DOT__vpu_mem_ready));
            tracep->chgBit(oldp+756,(vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid));
            tracep->chgWData(oldp+757,(vlSelf->soc_top_with_cache__DOT__vpu_mem_req),82);
            tracep->chgQData(oldp+760,(vlSelf->soc_top_with_cache__DOT__vpu_mem_result),38);
            tracep->chgBit(oldp+762,(vlSelf->soc_top_with_cache__DOT__icache_refill_pending));
            tracep->chgCData(oldp+763,(vlSelf->soc_top_with_cache__DOT__icache_refill_count),3);
            tracep->chgCData(oldp+764,(vlSelf->soc_top_with_cache__DOT__icache_state),2);
            tracep->chgIData(oldp+765,(vlSelf->soc_top_with_cache__DOT__icache_refill_addr),32);
            tracep->chgIData(oldp+766,(vlSelf->soc_top_with_cache__DOT__icache_mem_data),32);
            tracep->chgCData(oldp+767,(vlSelf->soc_top_with_cache__DOT__dcache_state),2);
            tracep->chgCData(oldp+768,(vlSelf->soc_top_with_cache__DOT__dcache_refill_count),3);
            tracep->chgCData(oldp+769,(vlSelf->soc_top_with_cache__DOT__vpu_state),2);
            tracep->chgQData(oldp+770,(vlSelf->soc_top_with_cache__DOT__vpu_result_reg),38);
            tracep->chgIData(oldp+772,(vlSelf->soc_top_with_cache__DOT__cycle_count),32);
            tracep->chgIData(oldp+773,(vlSelf->soc_top_with_cache__DOT__icache_hits),32);
            tracep->chgIData(oldp+774,(vlSelf->soc_top_with_cache__DOT__icache_misses),32);
            tracep->chgIData(oldp+775,(vlSelf->soc_top_with_cache__DOT__dcache_hits),32);
            tracep->chgIData(oldp+776,(vlSelf->soc_top_with_cache__DOT__dcache_misses),32);
            tracep->chgIData(oldp+777,(vlSelf->soc_top_with_cache__DOT__instructions_executed),32);
            tracep->chgIData(oldp+778,(vlSelf->soc_top_with_cache__DOT__prev_pc),32);
            tracep->chgCData(oldp+779,(vlSelf->soc_top_with_cache__DOT__pc_stall_count),8);
            tracep->chgIData(oldp+780,(vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i),32);
            tracep->chgIData(oldp+781,(vlSelf->soc_top_with_cache__DOT__unnamedblk4__DOT__i),32);
            tracep->chgIData(oldp+782,(vlSelf->soc_top_with_cache__DOT__unnamedblk5__DOT__i),32);
            tracep->chgIData(oldp+783,(vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i),32);
            tracep->chgIData(oldp+784,(vlSelf->soc_top_with_cache__DOT__unnamedblk6__DOT__i),32);
            tracep->chgBit(oldp+785,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__fetch_enable_q));
            tracep->chgBit(oldp+786,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_busy_q));
            tracep->chgQData(oldp+787,(((QData)((IData)(vlSelf->soc_top_with_cache__DOT__instr_rdata)) 
                                        << 1U)),33);
            tracep->chgQData(oldp+789,((1ULL | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__data_rdata)) 
                                                << 3U))),35);
            tracep->chgBit(oldp+791,((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))));
            tracep->chgBit(oldp+792,(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_result_valid_o));
            tracep->chgQData(oldp+793,(((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q)) 
                                        << 0x38U)),60);
            tracep->chgCData(oldp+795,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state),3);
            tracep->chgCData(oldp+796,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q),4);
            tracep->chgCData(oldp+797,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q),5);
            tracep->chgCData(oldp+798,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q),5);
            tracep->chgCData(oldp+799,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q),5);
            tracep->chgCData(oldp+800,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q),7);
            tracep->chgCData(oldp+801,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct3_q),3);
            tracep->chgIData(oldp+802,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__scalar_val_q),32);
            tracep->chgBit(oldp+803,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_we));
            tracep->chgCData(oldp+804,((0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q))),4);
            tracep->chgWData(oldp+805,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg),256);
            tracep->chgBit(oldp+813,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start));
            tracep->chgBit(oldp+814,(((((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start) 
                                        & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q))) 
                                       & (8U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) 
                                      | ((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q)) 
                                         & (9U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))))));
            if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))) {
                __Vtemp355[0U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
                __Vtemp355[1U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
                __Vtemp355[2U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
                __Vtemp355[3U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
                __Vtemp355[4U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
                __Vtemp355[5U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
                __Vtemp355[6U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
                __Vtemp355[7U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
            } else {
                __Vtemp355[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                    [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][0U];
                __Vtemp355[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                    [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][1U];
                __Vtemp355[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                    [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][2U];
                __Vtemp355[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                    [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][3U];
                __Vtemp355[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                    [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][4U];
                __Vtemp355[5U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                    [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][5U];
                __Vtemp355[6U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                    [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][6U];
                __Vtemp355[7U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                    [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][7U];
            }
            tracep->chgWData(oldp+815,(__Vtemp355),256);
            tracep->chgCData(oldp+823,((0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q))),5);
            tracep->chgWData(oldp+824,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0]),256);
            tracep->chgWData(oldp+832,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1]),256);
            tracep->chgWData(oldp+840,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2]),256);
            tracep->chgWData(oldp+848,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3]),256);
            tracep->chgWData(oldp+856,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4]),256);
            tracep->chgWData(oldp+864,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5]),256);
            tracep->chgWData(oldp+872,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6]),256);
            tracep->chgWData(oldp+880,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7]),256);
            tracep->chgWData(oldp+888,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8]),256);
            tracep->chgWData(oldp+896,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9]),256);
            tracep->chgWData(oldp+904,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[10]),256);
            tracep->chgWData(oldp+912,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[11]),256);
            tracep->chgWData(oldp+920,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[12]),256);
            tracep->chgWData(oldp+928,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[13]),256);
            tracep->chgWData(oldp+936,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[14]),256);
            tracep->chgWData(oldp+944,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[15]),256);
            tracep->chgIData(oldp+952,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__unnamedblk2__DOT__i),32);
            tracep->chgCData(oldp+953,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state),3);
            tracep->chgCData(oldp+954,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter),5);
            tracep->chgIData(oldp+955,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr),32);
            tracep->chgBit(oldp+956,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__is_load));
            tracep->chgWData(oldp+957,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q),256);
            tracep->chgBit(oldp+965,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q));
            tracep->chgCData(oldp+966,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count),6);
            tracep->chgCData(oldp+967,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q),7);
            tracep->chgCData(oldp+968,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q),3);
            tracep->chgBit(oldp+969,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active));
            tracep->chgCData(oldp+970,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_size),2);
            tracep->chgCData(oldp+971,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row),3);
            tracep->chgCData(oldp+972,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col),3);
            tracep->chgCData(oldp+973,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k),3);
            tracep->chgCData(oldp+974,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles),3);
            tracep->chgCData(oldp+975,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size),3);
            tracep->chgBit(oldp+976,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_start));
            tracep->chgBit(oldp+977,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear));
            tracep->chgBit(oldp+978,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate));
            tracep->chgBit(oldp+979,(((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                                      & (4U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))));
            tracep->chgBit(oldp+980,((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))));
            tracep->chgIData(oldp+981,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row0),32);
            tracep->chgIData(oldp+982,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row1),32);
            tracep->chgIData(oldp+983,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col0),32);
            tracep->chgIData(oldp+984,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col1),32);
            tracep->chgBit(oldp+985,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid));
            tracep->chgBit(oldp+986,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid));
            tracep->chgQData(oldp+987,((((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                         [0U]
                                                         [0U][2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                            [0U]
                                                            [0U][1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                              [0U]
                                                              [0U][0U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+989,((((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                         [0U]
                                                         [1U][2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                            [0U]
                                                            [1U][1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                              [0U]
                                                              [1U][0U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+991,((((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                         [1U]
                                                         [0U][2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                            [1U]
                                                            [0U][1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                              [1U]
                                                              [0U][0U])) 
                                              >> 1U)))),64);
            tracep->chgQData(oldp+993,((((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                         [1U]
                                                         [1U][2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                            [1U]
                                                            [1U][1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                              [1U]
                                                              [1U][0U])) 
                                              >> 1U)))),64);
            tracep->chgCData(oldp+995,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state),4);
            tracep->chgCData(oldp+996,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state),4);
            tracep->chgIData(oldp+997,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk11__DOT__i),32);
            tracep->chgIData(oldp+998,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk12__DOT__i),32);
            tracep->chgIData(oldp+999,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j),32);
            tracep->chgIData(oldp+1000,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__i),32);
            tracep->chgIData(oldp+1001,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
            tracep->chgIData(oldp+1002,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk14__DOT__idx),32);
            __Vtemp360[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][0U][0U];
            __Vtemp360[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][0U][1U];
            __Vtemp360[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][0U][2U];
            __Vtemp360[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][0U][3U];
            __Vtemp360[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][0U][4U];
            tracep->chgWData(oldp+1003,(__Vtemp360),129);
            __Vtemp361[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][1U][0U];
            __Vtemp361[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][1U][1U];
            __Vtemp361[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][1U][2U];
            __Vtemp361[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][1U][3U];
            __Vtemp361[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [0U][1U][4U];
            tracep->chgWData(oldp+1008,(__Vtemp361),129);
            __Vtemp362[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][0U][0U];
            __Vtemp362[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][0U][1U];
            __Vtemp362[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][0U][2U];
            __Vtemp362[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][0U][3U];
            __Vtemp362[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][0U][4U];
            tracep->chgWData(oldp+1013,(__Vtemp362),129);
            __Vtemp363[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][1U][0U];
            __Vtemp363[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][1U][1U];
            __Vtemp363[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][1U][2U];
            __Vtemp363[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][1U][3U];
            __Vtemp363[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                [1U][1U][4U];
            tracep->chgWData(oldp+1018,(__Vtemp363),129);
            tracep->chgIData(oldp+1023,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                        [0U][0U]),32);
            tracep->chgIData(oldp+1024,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                        [0U][1U]),32);
            tracep->chgIData(oldp+1025,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                        [1U][0U]),32);
            tracep->chgIData(oldp+1026,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                        [1U][1U]),32);
            tracep->chgIData(oldp+1027,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                        [0U][0U]),32);
            tracep->chgIData(oldp+1028,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                        [0U][1U]),32);
            tracep->chgIData(oldp+1029,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                        [1U][0U]),32);
            tracep->chgIData(oldp+1030,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                        [1U][1U]),32);
            tracep->chgCData(oldp+1031,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state),3);
            tracep->chgCData(oldp+1032,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__next_state),3);
            tracep->chgCData(oldp+1033,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter),4);
            tracep->chgIData(oldp+1034,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_row1_delay),32);
            tracep->chgIData(oldp+1035,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_col1_delay),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+1036,((((QData)((IData)(
                                                          vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U])))),64);
            tracep->chgBit(oldp+1038,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))));
            tracep->chgIData(oldp+1039,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U] 
                                          << 2U) | 
                                         (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[2U] 
                                          >> 0x1eU))),32);
            tracep->chgIData(oldp+1040,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q),32);
            tracep->chgBit(oldp+1041,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer));
            tracep->chgIData(oldp+1042,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                          << 8U) | 
                                         (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                          >> 0x18U))),32);
            tracep->chgBit(oldp+1043,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_cmp_result));
            tracep->chgBit(oldp+1044,((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q))));
            tracep->chgBit(oldp+1045,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_interruptible));
            tracep->chgWData(oldp+1046,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe),353);
            tracep->chgWData(oldp+1058,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe),248);
            tracep->chgWData(oldp+1066,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe),191);
            tracep->chgCData(oldp+1072,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                                                  >> 0x12U))),5);
            tracep->chgBit(oldp+1073,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1074,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1075,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id[0]),5);
            tracep->chgCData(oldp+1076,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id[1]),5);
            tracep->chgIData(oldp+1077,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_rdata_id[0]),32);
            tracep->chgIData(oldp+1078,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_rdata_id[1]),32);
            tracep->chgCData(oldp+1079,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_waddr[0]),5);
            tracep->chgIData(oldp+1080,((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                                         >> 7U)),25);
            tracep->chgCData(oldp+1081,((3U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)),2);
            tracep->chgIData(oldp+1082,((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                                         >> 6U)),26);
            tracep->chgCData(oldp+1083,((0x3fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q)),6);
            tracep->chgIData(oldp+1084,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q),32);
            tracep->chgBit(oldp+1085,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read));
            tracep->chgBit(oldp+1086,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_wr_in_wb));
            tracep->chgIData(oldp+1087,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz),28);
            tracep->chgBit(oldp+1088,((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q)))));
            tracep->chgBit(oldp+1089,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U] 
                                              >> 0x1eU) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                >> 0x15U)))));
            tracep->chgIData(oldp+1090,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1091,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1092,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1093,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1094,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q),32);
            tracep->chgBit(oldp+1095,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__irq_req_ctrl));
            tracep->chgSData(oldp+1096,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__irq_id_ctrl),10);
            tracep->chgBit(oldp+1097,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q));
            tracep->chgBit(oldp+1098,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q));
            tracep->chgBit(oldp+1099,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q));
            tracep->chgCData(oldp+1100,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q),2);
            tracep->chgBit(oldp+1101,((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)))));
            tracep->chgBit(oldp+1102,(((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm))));
            tracep->chgBit(oldp+1103,((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
            tracep->chgCData(oldp+1104,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_meta_n),5);
            tracep->chgCData(oldp+1105,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q),2);
            tracep->chgBit(oldp+1106,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q));
            tracep->chgIData(oldp+1107,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q),32);
            tracep->chgIData(oldp+1108,(((IData)(4U) 
                                         + (0xfffffffeU 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q))),32);
            tracep->chgBit(oldp+1109,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q));
            tracep->chgCData(oldp+1110,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q),2);
            tracep->chgCData(oldp+1111,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q),3);
            tracep->chgBit(oldp+1112,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
            tracep->chgBit(oldp+1113,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q));
            tracep->chgBit(oldp+1114,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q));
            tracep->chgCData(oldp+1115,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q),2);
            tracep->chgCData(oldp+1116,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q),2);
            tracep->chgBit(oldp+1117,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q));
            tracep->chgWData(oldp+1118,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q),105);
            tracep->chgCData(oldp+1122,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q),3);
            tracep->chgCData(oldp+1123,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr),2);
            tracep->chgCData(oldp+1124,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2),2);
            tracep->chgCData(oldp+1125,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr),2);
            tracep->chgIData(oldp+1126,(((IData)(4U) 
                                         + (0xfffffffcU 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))),32);
            tracep->chgCData(oldp+1127,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q),3);
            tracep->chgBit(oldp+1128,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q));
            tracep->chgQData(oldp+1129,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q),38);
            tracep->chgCData(oldp+1131,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q),4);
            tracep->chgCData(oldp+1132,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q),4);
            tracep->chgBit(oldp+1133,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm));
            tracep->chgCData(oldp+1134,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o[0]),5);
            tracep->chgCData(oldp+1135,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o[1]),5);
            tracep->chgIData(oldp+1136,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__id_stage_i__rf_rdata_i[0]),32);
            tracep->chgIData(oldp+1137,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__id_stage_i__rf_rdata_i[1]),32);
            tracep->chgIData(oldp+1138,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                          << 2U) | 
                                         (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                          >> 0x1eU))),32);
            tracep->chgCData(oldp+1139,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                  >> 5U))),5);
            tracep->chgBit(oldp+1140,((1U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                     >> 0x20U)))));
            tracep->chgCData(oldp+1141,((3U & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                       >> 0x1eU)))),2);
            tracep->chgCData(oldp+1142,((3U & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                       >> 0x1bU)))),2);
            tracep->chgIData(oldp+1143,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__imm_i_type),32);
            tracep->chgIData(oldp+1144,((((- (IData)(
                                                     (1U 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                         >> 0x1dU)))) 
                                          << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                >> 0x12U)) 
                                            | (0x1fU 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                  >> 5U))))),32);
            tracep->chgIData(oldp+1145,((((- (IData)(
                                                     (1U 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                         >> 0x1dU)))) 
                                          << 0xdU) 
                                         | ((0x1000U 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                >> 0x11U)) 
                                            | ((0x800U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                   << 6U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                      >> 0x12U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                        >> 5U))))))),32);
            tracep->chgIData(oldp+1146,((0xfffff000U 
                                         & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                            << 2U))),32);
            tracep->chgIData(oldp+1147,((((- (IData)(
                                                     (1U 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                         >> 0x1dU)))) 
                                          << 0x14U) 
                                         | ((0xff000U 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                << 2U)) 
                                            | ((0x800U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                   >> 7U)) 
                                               | (0x7feU 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                     >> 0x12U)))))),32);
            tracep->chgIData(oldp+1148,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                  >> 0xdU))),32);
            tracep->chgBit(oldp+1149,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                              >> 0x17U) 
                                             & (~ (
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U] 
                                                   >> 1U))))));
            tracep->chgCData(oldp+1150,((0xffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                  >> 0xaU))),8);
            tracep->chgBit(oldp+1151,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q));
            tracep->chgBit(oldp+1152,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q));
            tracep->chgIData(oldp+1153,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                          << 0xaU) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                            >> 0x16U))),32);
            tracep->chgCData(oldp+1154,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[0]),5);
            tracep->chgCData(oldp+1155,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[1]),5);
            tracep->chgBit(oldp+1156,((1U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1157,((1U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                     >> 0x1dU)))));
            tracep->chgQData(oldp+1158,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl),55);
            tracep->chgQData(oldp+1160,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int),55);
            tracep->chgBit(oldp+1162,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                             >> 0x17U))));
            tracep->chgIData(oldp+1163,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                                          ? (- vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                                          : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)),32);
            tracep->chgBit(oldp+1164,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en));
            tracep->chgIData(oldp+1165,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev),32);
            tracep->chgBit(oldp+1166,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_en));
            tracep->chgBit(oldp+1167,((1U & (((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                 >> 0x19U) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                   >> 0x12U)) 
                                               | (0U 
                                                  != 
                                                  (3U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                      >> 0x10U)))) 
                                              | (0U 
                                                 != 
                                                 ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                   << 7U) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                                     >> 0x19U)))) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1168,((1U & ((0x2000U 
                                              & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U])
                                              ? ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q)) 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                                                    >> 2U))
                                              : (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                                                 >> 2U)))));
            tracep->chgCData(oldp+1169,((0x3fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                  >> 0x18U))),6);
            tracep->chgIData(oldp+1170,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                          << 8U) | 
                                         (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                          >> 0x18U))),32);
            tracep->chgIData(oldp+1171,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                          << 8U) | 
                                         (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                          >> 0x18U))),32);
            tracep->chgIData(oldp+1172,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                          << 0xfU) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                            >> 0x11U))),32);
            tracep->chgIData(oldp+1173,(VL_STREAML_FAST_III(32,32,32,
                                                            ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                              << 8U) 
                                                             | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                >> 0x18U)), 0)),32);
            tracep->chgIData(oldp+1174,(VL_STREAML_FAST_III(32,32,32,
                                                            ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                              << 8U) 
                                                             | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                                >> 0x18U)), 0)),32);
            tracep->chgQData(oldp+1175,((1ULL | ((QData)((IData)(
                                                                 ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                                   << 8U) 
                                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                     >> 0x18U)))) 
                                                 << 1U))),33);
            tracep->chgQData(oldp+1177,((((QData)((IData)(
                                                          ((0x8000000U 
                                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU])
                                                            ? 
                                                           (~ 
                                                            ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                              << 8U) 
                                                             | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                                >> 0x18U)))
                                                            : 
                                                           ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                             << 8U) 
                                                            | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                               >> 0x18U))))) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                                       >> 0x1bU)))))),33);
            tracep->chgIData(oldp+1179,((IData)((0x1ffffffffULL 
                                                 & (((1ULL 
                                                      | ((QData)((IData)(
                                                                         ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                                           << 8U) 
                                                                          | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                             >> 0x18U)))) 
                                                         << 1U)) 
                                                     + 
                                                     (((QData)((IData)(
                                                                       ((0x8000000U 
                                                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU])
                                                                         ? 
                                                                        (~ 
                                                                         ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                           << 8U) 
                                                                          | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                                             >> 0x18U)))
                                                                         : 
                                                                        ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                          << 8U) 
                                                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                                            >> 0x18U))))) 
                                                       << 1U) 
                                                      | (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                                            >> 0x1bU)))))) 
                                                    >> 1U)))),32);
            tracep->chgQData(oldp+1180,((0x3ffffffffULL 
                                         & ((1ULL | 
                                             ((QData)((IData)(
                                                              ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                                << 8U) 
                                                               | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                  >> 0x18U)))) 
                                              << 1U)) 
                                            + (((QData)((IData)(
                                                                ((0x8000000U 
                                                                  & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU])
                                                                  ? 
                                                                 (~ 
                                                                  ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                    << 8U) 
                                                                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                                      >> 0x18U)))
                                                                  : 
                                                                 ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                   << 8U) 
                                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                                     >> 0x18U))))) 
                                                << 1U) 
                                               | (QData)((IData)(
                                                                 (1U 
                                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                                     >> 0x1bU)))))))),34);
            tracep->chgBit(oldp+1182,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1183,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                             >> 0x1aU))));
            tracep->chgIData(oldp+1184,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en)
                                          ? ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                              << 0xfU) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                >> 0x11U))
                                          : ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                              << 8U) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                >> 0x18U)))),32);
            tracep->chgIData(oldp+1185,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb),32);
            tracep->chgIData(oldp+1186,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd),32);
            tracep->chgBit(oldp+1187,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
            tracep->chgBit(oldp+1188,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
            tracep->chgIData(oldp+1189,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result),32);
            tracep->chgIData(oldp+1190,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result),32);
            tracep->chgIData(oldp+1191,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in),32);
            tracep->chgCData(oldp+1192,((3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                               >> 0x11U))),2);
            tracep->chgIData(oldp+1193,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                          << 0xfU) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                            >> 0x11U))),32);
            tracep->chgIData(oldp+1194,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data),32);
            tracep->chgIData(oldp+1195,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q),32);
            tracep->chgIData(oldp+1196,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q),32);
            tracep->chgIData(oldp+1197,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q),32);
            tracep->chgBit(oldp+1198,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q));
            tracep->chgBit(oldp+1199,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q));
            tracep->chgBit(oldp+1200,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q));
            tracep->chgIData(oldp+1201,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux),32);
            tracep->chgQData(oldp+1202,(((QData)((IData)(
                                                         (~ 
                                                          ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                                            << 0xfU) 
                                                           | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                              >> 0x11U))))) 
                                         << 1U)),33);
            tracep->chgCData(oldp+1204,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q),6);
            tracep->chgBit(oldp+1205,((1U & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))));
            tracep->chgBit(oldp+1206,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out));
            tracep->chgCData(oldp+1207,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state),2);
            tracep->chgBit(oldp+1208,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
            tracep->chgBit(oldp+1209,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem));
            tracep->chgBit(oldp+1210,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg));
            tracep->chgBit(oldp+1211,((1U & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                                          << 0xfU) 
                                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                            >> 0x11U))))))));
            tracep->chgBit(oldp+1212,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1213,((3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                               >> 0x14U))),2);
            tracep->chgCData(oldp+1214,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state),2);
            tracep->chgIData(oldp+1215,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al),17);
            tracep->chgIData(oldp+1216,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl),17);
            tracep->chgIData(oldp+1217,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah),17);
            tracep->chgIData(oldp+1218,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh),17);
            tracep->chgQData(oldp+1219,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc),33);
            tracep->chgBit(oldp+1221,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1222,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__cnt_q),2);
            tracep->chgCData(oldp+1223,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_size_q),2);
            tracep->chgBit(oldp+1224,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_sext_q));
            tracep->chgBit(oldp+1225,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_we_q));
            tracep->chgCData(oldp+1226,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgBit(oldp+1227,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__last_q));
            tracep->chgBit(oldp+1228,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q));
            tracep->chgIData(oldp+1229,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_q),32);
            tracep->chgBit(oldp+1230,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid_q));
            tracep->chgBit(oldp+1231,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_res_q));
            tracep->chgCData(oldp+1232,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_id_q),4);
            tracep->chgBit(oldp+1233,((((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                        & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                       | ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                          & (3U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_offset_q))))));
            tracep->chgCData(oldp+1234,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q),3);
            tracep->chgCData(oldp+1235,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_q),3);
            tracep->chgCData(oldp+1236,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q),2);
            tracep->chgCData(oldp+1237,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q),2);
            tracep->chgBit(oldp+1238,(((5U >= (7U & 
                                               ((IData)(1U) 
                                                + ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                   << 1U)))) 
                                       & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                          >> (7U & 
                                              ((IData)(1U) 
                                               + ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                  << 1U)))))));
            tracep->chgBit(oldp+1239,(((5U >= (7U & 
                                               ((IData)(1U) 
                                                + ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                                   << 1U)))) 
                                       & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                          >> (7U & 
                                              ((IData)(1U) 
                                               + ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                                  << 1U)))))));
            tracep->chgCData(oldp+1240,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q),6);
            tracep->chgBit(oldp+1241,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state));
            tracep->chgWData(oldp+1242,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q),81);
            tracep->chgBit(oldp+1245,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core));
            tracep->chgBit(oldp+1246,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid));
            tracep->chgIData(oldp+1247,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match),32);
            tracep->chgCData(oldp+1248,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q),2);
            tracep->chgIData(oldp+1249,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q),32);
            tracep->chgCData(oldp+1250,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q),2);
            tracep->chgIData(oldp+1251,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q),32);
            tracep->chgCData(oldp+1252,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_align_status_q),2);
            tracep->chgBit(oldp+1253,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_valid_q));
            tracep->chgCData(oldp+1254,((3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                               >> 0xcU))),2);
            tracep->chgSData(oldp+1255,((0xfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U])),12);
            tracep->chgSData(oldp+1256,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr),12);
            tracep->chgIData(oldp+1257,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[5U]),32);
            tracep->chgBit(oldp+1258,((((0U != (3U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                   >> 0xeU))) 
                                        & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                           >> 0x10U)) 
                                       & (3U == (3U 
                                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 0xaU))))));
            tracep->chgIData(oldp+1259,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1260,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata1_rdata),32);
            tracep->chgIData(oldp+1261,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata2_rdata),32);
            tracep->chgIData(oldp+1262,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1263,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1264,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1265,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1266,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1267,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1268,(((0U != (0xffU 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                                    >> 0x10U)))
                                          ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q
                                          : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[5U])),32);
            tracep->chgBit(oldp+1269,((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                         >> 0xeU) & 
                                        (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                         >> 0x15U)) 
                                       & (((1U == (3U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                                      >> 0xcU))) 
                                           | (2U == 
                                              (3U & 
                                               (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                                >> 0xcU)))) 
                                          | (3U == 
                                             (3U & 
                                              (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                               >> 0xcU)))))));
            tracep->chgWData(oldp+1270,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q),2048);
            tracep->chgWData(oldp+1334,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata),2048);
            tracep->chgWData(oldp+1398,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q),1024);
            tracep->chgWData(oldp+1430,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata),1024);
            tracep->chgIData(oldp+1462,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
            tracep->chgWData(oldp+1463,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment),2048);
            tracep->chgBit(oldp+1527,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                        >> 0xeU) & 
                                       (0x349U == (0xfffU 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U])))));
            tracep->chgBit(oldp+1528,(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                        >> 0xeU) & 
                                       (0x345U == (0xfffU 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U])))));
            tracep->chgCData(oldp+1529,((3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                               >> 8U))),2);
            tracep->chgCData(oldp+1530,((3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                               >> 0x12U))),2);
            tracep->chgIData(oldp+1531,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_q[0]),32);
            tracep->chgIData(oldp+1532,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_q[0]),32);
            tracep->chgIData(oldp+1533,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata[0]),32);
            tracep->chgIData(oldp+1534,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata[0]),32);
            tracep->chgBit(oldp+1535,(((0U == (0xfU 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                  [0U] 
                                                  >> 7U)))
                                        ? (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                           == vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                           [0U]) : 
                                       ((2U == (0xfU 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                   [0U] 
                                                   >> 7U)))
                                         ? (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                            >= vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                            [0U]) : 
                                        (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                         < vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                         [0U])))));
            tracep->chgBit(oldp+1536,((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                         [0U] >> 6U) 
                                        & (3U == (3U 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                     >> 8U)))) 
                                       | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 3U) 
                                          & (0U == 
                                             (3U & 
                                              (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                               >> 8U)))))));
            tracep->chgBit(oldp+1537,((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                         [0U] >> 9U) 
                                        & (3U == (3U 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                     >> 0x12U)))) 
                                       | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 6U) 
                                          & (0U == 
                                             (3U & 
                                              (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                               >> 0x12U)))))));
            tracep->chgIData(oldp+1538,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+1539,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q),32);
            tracep->chgCData(oldp+1540,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__controller_i__rf_raddr_id_i[0]),5);
            tracep->chgCData(oldp+1541,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__controller_i__rf_raddr_id_i[1]),5);
            tracep->chgCData(oldp+1542,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs),2);
            tracep->chgCData(oldp+1543,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs),3);
            tracep->chgBit(oldp+1544,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q));
            tracep->chgBit(oldp+1545,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q));
            tracep->chgBit(oldp+1546,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+1547,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q));
            tracep->chgBit(oldp+1548,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id));
            tracep->chgBit(oldp+1549,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__mret_ptr_in_id));
            tracep->chgBit(oldp+1550,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                               >> 0x1fU) 
                                              & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xbU]) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1551,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex));
            tracep->chgBit(oldp+1552,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q));
            tracep->chgBit(oldp+1553,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                              >> 0xeU) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                >> 0xaU)))));
            tracep->chgBit(oldp+1554,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb));
            tracep->chgBit(oldp+1555,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb));
            tracep->chgBit(oldp+1556,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb));
            tracep->chgBit(oldp+1557,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb));
            tracep->chgBit(oldp+1558,((1U & ((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                >> 0x11U) 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                  >> 0xbU)) 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                 >> 0x15U)) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] 
                                                >> 3U)))));
            tracep->chgBit(oldp+1559,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                              >> 0x18U) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1560,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb));
            tracep->chgBit(oldp+1561,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb));
            tracep->chgBit(oldp+1562,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb));
            tracep->chgBit(oldp+1563,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                              >> 0x19U) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1564,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug));
            tracep->chgBit(oldp+1565,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed));
            tracep->chgBit(oldp+1566,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed));
            tracep->chgCData(oldp+1567,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q),3);
            tracep->chgBit(oldp+1568,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q));
            tracep->chgBit(oldp+1569,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q));
            tracep->chgBit(oldp+1570,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q));
            tracep->chgBit(oldp+1571,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q));
            tracep->chgBit(oldp+1572,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing));
            tracep->chgBit(oldp+1573,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event));
            tracep->chgBit(oldp+1574,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q));
            tracep->chgBit(oldp+1575,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb));
            tracep->chgBit(oldp+1576,((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb)))));
            tracep->chgBit(oldp+1577,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id));
            tracep->chgBit(oldp+1578,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable));
            tracep->chgBit(oldp+1579,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q));
            tracep->chgBit(oldp+1580,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id));
            tracep->chgBit(oldp+1581,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q));
            tracep->chgBit(oldp+1582,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q));
            tracep->chgBit(oldp+1583,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                               >> 7U) 
                                              & (~ 
                                                 (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                                                  >> 3U))) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                >> 0xaU)))));
            tracep->chgCData(oldp+1584,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[0]),5);
            tracep->chgCData(oldp+1585,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[1]),5);
            tracep->chgBit(oldp+1586,((((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                                  >> 0x13U)) 
                                        == vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                        [0U]) & (0U 
                                                 != 
                                                 vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                                 [0U]))));
            tracep->chgBit(oldp+1587,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match));
            tracep->chgBit(oldp+1588,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                               >> 0xaU) 
                                              & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                  >> 0x10U) 
                                                 | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                     >> 0xaU) 
                                                    & (((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                           >> 2U) 
                                                          & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                             >> 0x1cU)) 
                                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                            >> 0xeU)) 
                                                        | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                           >> 0xdU)) 
                                                       | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                           >> 0x10U) 
                                                          & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
                                                             >> 0x1aU)))))) 
                                             | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb)))));
            tracep->chgBit(oldp+1589,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                              >> 0xaU) 
                                             & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                 >> 0x10U) 
                                                | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                    >> 0xaU) 
                                                   & (((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                          >> 2U) 
                                                         & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                            >> 0x1cU)) 
                                                        | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                           >> 0xeU)) 
                                                       | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                          >> 0xdU)) 
                                                      | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                          >> 0x10U) 
                                                         & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
                                                            >> 0x1aU)))))))));
            tracep->chgBit(oldp+1590,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb));
            tracep->chgBit(oldp+1591,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                              >> 0xaU) 
                                             & (((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                    >> 2U) 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                      >> 0x1cU)) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                     >> 0xeU)) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                                    >> 0xdU)) 
                                                | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                    >> 0x10U) 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
                                                      >> 0x1aU)))))));
            tracep->chgBit(oldp+1592,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb));
            tracep->chgBit(oldp+1593,(((IData)((0x3000000U 
                                                == 
                                                (0x3000000U 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz))) 
                                       & ((0xfffU & 
                                           (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
                                            >> 0xcU)) 
                                          == (0xfffU 
                                              & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz)))));
            tracep->chgBit(oldp+1594,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex));
            tracep->chgBit(oldp+1595,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb));
            tracep->chgCData(oldp+1596,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                                  >> 0x13U))),5);
            tracep->chgBit(oldp+1597,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                              >> 0x17U) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                >> 0x1eU)))));
            tracep->chgCData(oldp+1598,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__raddr_i[0]),5);
            tracep->chgCData(oldp+1599,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__raddr_i[1]),5);
            tracep->chgIData(oldp+1600,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__register_file_wrapper_i__rdata_o[0]),32);
            tracep->chgIData(oldp+1601,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__register_file_wrapper_i__rdata_o[1]),32);
            tracep->chgCData(oldp+1602,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__waddr_i[0]),5);
            tracep->chgCData(oldp+1603,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[0]),5);
            tracep->chgCData(oldp+1604,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[1]),5);
            tracep->chgIData(oldp+1605,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[0]),32);
            tracep->chgIData(oldp+1606,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[1]),32);
            tracep->chgCData(oldp+1607,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i[0]),5);
            tracep->chgIData(oldp+1608,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0]),32);
            tracep->chgIData(oldp+1609,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1]),32);
            tracep->chgIData(oldp+1610,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2]),32);
            tracep->chgIData(oldp+1611,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3]),32);
            tracep->chgIData(oldp+1612,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4]),32);
            tracep->chgIData(oldp+1613,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5]),32);
            tracep->chgIData(oldp+1614,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6]),32);
            tracep->chgIData(oldp+1615,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7]),32);
            tracep->chgIData(oldp+1616,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8]),32);
            tracep->chgIData(oldp+1617,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9]),32);
            tracep->chgIData(oldp+1618,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[10]),32);
            tracep->chgIData(oldp+1619,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[11]),32);
            tracep->chgIData(oldp+1620,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[12]),32);
            tracep->chgIData(oldp+1621,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[13]),32);
            tracep->chgIData(oldp+1622,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[14]),32);
            tracep->chgIData(oldp+1623,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[15]),32);
            tracep->chgIData(oldp+1624,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[16]),32);
            tracep->chgIData(oldp+1625,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[17]),32);
            tracep->chgIData(oldp+1626,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[18]),32);
            tracep->chgIData(oldp+1627,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[19]),32);
            tracep->chgIData(oldp+1628,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[20]),32);
            tracep->chgIData(oldp+1629,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[21]),32);
            tracep->chgIData(oldp+1630,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[22]),32);
            tracep->chgIData(oldp+1631,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[23]),32);
            tracep->chgIData(oldp+1632,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[24]),32);
            tracep->chgIData(oldp+1633,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[25]),32);
            tracep->chgIData(oldp+1634,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[26]),32);
            tracep->chgIData(oldp+1635,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[27]),32);
            tracep->chgIData(oldp+1636,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[28]),32);
            tracep->chgIData(oldp+1637,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[29]),32);
            tracep->chgIData(oldp+1638,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[30]),32);
            tracep->chgIData(oldp+1639,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[31]),32);
            tracep->chgIData(oldp+1640,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__1__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1641,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__2__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1642,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__3__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1643,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__4__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1644,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__5__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1645,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__6__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1646,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__7__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1647,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__8__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1648,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__9__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1649,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__10__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1650,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__11__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1651,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__12__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1652,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__13__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1653,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__14__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1654,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__15__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1655,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__16__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1656,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__17__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1657,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__18__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1658,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__19__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1659,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__20__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1660,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__21__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1661,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__22__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1662,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__23__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1663,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__24__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1664,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__25__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1665,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__26__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1666,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__27__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1667,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__28__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1668,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__29__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1669,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__30__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgIData(oldp+1670,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__31__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
            tracep->chgCData(oldp+1671,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o),5);
            tracep->chgBit(oldp+1672,((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                             >> 3U))));
            tracep->chgIData(oldp+1673,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual),32);
            tracep->chgBit(oldp+1674,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                              >> 0x15U) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                >> 8U)))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+1675,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_resp_valid));
            tracep->chgQData(oldp+1676,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_resp),35);
            tracep->chgBit(oldp+1678,(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__xif_waiting));
        }
        tracep->chgBit(oldp+1679,(vlSelf->clk_i));
        tracep->chgBit(oldp+1680,(vlSelf->rst_ni));
        tracep->chgBit(oldp+1681,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                   & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                         & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U] 
                                             >> 9U) 
                                            | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_busy_q)))))));
        tracep->chgBit(oldp+1682,((((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                                       >> 0x17U) & 
                                      (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_exception))) 
                                     & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__xif_waiting))) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match)))) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__instr_valid))));
        tracep->chgBit(oldp+1683,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                   & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U] 
                                       >> 9U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_busy_q)))));
        tracep->chgBit(oldp+1684,((1U & (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                          & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                             >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                          ? ((0x68U 
                                              >= (0x7fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                (3U 
                                                 & (((IData)(2U) 
                                                     + 
                                                     ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                          : (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                     >> 2U))))));
        tracep->chgCData(oldp+1685,((3U & (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                               >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                            ? ((0x68U 
                                                >= 
                                                (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                ? (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x23U) 
                                                         * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (((IData)(1U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                      (3U 
                                                       & (((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                : 0U)
                                            : (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o)))),2);
        tracep->chgIData(oldp+1686,((((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                      & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                         >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))
                                      ? ((((0x68U >= 
                                            (0x7fU 
                                             & ((IData)(3U) 
                                                + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                            ? (0xffffU 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        ((IData)(0x23U) 
                                                         * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                    (((IData)(0xfU) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (3U 
                                                      & (((IData)(3U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                            : 0U) << 0x10U) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U))
                                      : (((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                   >> 3U)) 
                                          << 0x10U) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U)))),32);
        tracep->chgBit(oldp+1687,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_resp_valid) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid))));
        tracep->chgBit(oldp+1688,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__filter_resp_valid) 
                                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid)) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid))));
    }
}

void Vsoc_top_with_cache___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vsoc_top_with_cache___024root* const __restrict vlSelf = static_cast<Vsoc_top_with_cache___024root*>(voidSelf);
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    }
}
