// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top_with_cache.h for the primary calling header

#include "Vsoc_top_with_cache___024root.h"
#include "Vsoc_top_with_cache__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vsoc_top_with_cache___024root___multiclk__TOP__13(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___multiclk__TOP__13\n"); );
    // Body
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp_valid 
        = (((5U >= (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                         << 1U)))) 
            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
               >> (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                        << 1U))))) ? 
           ((5U >= (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                         << 1U)))) 
            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
               >> (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                        << 1U))))) : (IData)(vlSelf->soc_top_with_cache__DOT__data_rvalid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp 
        = (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__data_rdata)) 
            << 3U) | (QData)((IData)((1U | (((5U >= 
                                              (7U & 
                                               ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                << 1U))) 
                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                    << 1U)))) 
                                            << 2U)))));
}

VL_INLINE_OPT void Vsoc_top_with_cache___024root___sequent__TOP__14(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___sequent__TOP__14\n"); );
    // Body
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__state 
        = vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__state;
}

extern const VlUnpacked<CData/*1:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_5078abe8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_df53dd33_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_4e2d0d20_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_93a67eec_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_9cf96f61_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_f1f802d5_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_3491683c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_1e6388d2_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vsoc_top_with_cache__ConstPool__TABLE_5bfb044c_0;

VL_INLINE_OPT void Vsoc_top_with_cache___024root___combo__TOP__15(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___combo__TOP__15\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx7;
    SData/*31:0*/ __Vtemp301;
    // Body
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid 
        = ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp_valid) 
             | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid)) 
            | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid)) 
           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q;
    if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_ready) 
         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_valid))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt)));
    }
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp_valid) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt) 
                     - (IData)(1U)));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[0U] 
        = (IData)((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[1U] 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp) 
            << 4U) | (IData)(((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status)) 
                              >> 0x20U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[2U] 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp) 
            >> 0x1cU) | ((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp 
                                  >> 0x20U)) << 4U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_waiting 
        = ((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
             & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) 
            & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q))) 
           & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue 
        = ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state)) 
           & (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U] 
        = ((0xfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U]) 
           | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                          vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[2U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[1U])) 
                                            >> 4U)))) 
              << 4U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U] 
        = (0x7fU & (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                 vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[2U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[1U])) 
                                                   >> 4U)))) 
                     >> 0x1cU) | ((IData)(((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[1U])) 
                                                  >> 4U))) 
                                           >> 0x20U)) 
                                  << 4U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[0U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                    << 0x22U) | (QData)((IData)((3U 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[0U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U] 
        = ((0xfffffff0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U]) 
           | (IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                        << 0x22U) | (QData)((IData)(
                                                    (3U 
                                                     & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[0U])))) 
                      >> 0x20U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_valid 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__instr_valid) 
           & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_waiting)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__state;
    vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_result_valid_o = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_we = 0U;
    if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
        if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
            if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
                vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_result_valid_o = 1U;
                if ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                            >> 0x15U) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                         >> 8U)))) {
                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 0U;
                }
            } else {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_we = 1U;
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 7U;
            }
        } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
            if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_done) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 6U;
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start = 1U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
            if (((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                 | ((3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                    & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state))))) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state 
                    = ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))
                        ? 6U : 7U);
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_q;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_q) 
             | (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 2U;
        } else if (VL_LIKELY(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_q)) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 4U;
        } else {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 0U;
            VL_WRITEF("  WARNING: Unknown operation, returning to IDLE\n");
        }
    } else if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state = 1U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[0U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match)) 
                    << 2U) | (QData)((IData)((3U & 
                                              vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[0U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U])) 
                                           >> 2U)))) 
            << 2U) | (IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match)) 
                                << 2U) | (QData)((IData)(
                                                         (3U 
                                                          & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[0U])))) 
                              >> 0x20U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U])) 
                                           >> 2U)))) 
            >> 0x1eU) | ((IData)(((0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U])) 
                                       << 0x1eU) | 
                                      ((QData)((IData)(
                                                       vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U])) 
                                       >> 2U))) >> 0x20U)) 
                         << 2U));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state;
    if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state = 0U;
    } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state))) {
            if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu_mem_ready) 
                 & (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter)))) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state = 0U;
            }
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid) 
                    & ((0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                                        >> 0x22U))) 
                       == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q)))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state 
                = ((7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter))
                    ? 4U : 1U);
        }
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state))) {
        if (vlSelf->soc_top_with_cache__DOT__vpu_mem_ready) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state = 2U;
        }
    } else if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state = 1U;
    } else if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state = 3U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__xif_waiting 
        = (1U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                   >> 0x15U) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                >> 8U)) & (~ (IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_result_valid_o))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_err_wb 
        = ((2U & (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_res_q)) 
                   << 1U) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                             >> 4U))) | (1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_res_q)) 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                  >> 6U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_aligned 
        = ((0x3fU >= ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q) 
                      << 3U)) ? (((((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                    & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                   | ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                      & (3U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q))))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                         << 0x19U) 
                                                        | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                           >> 7U)))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_q)))
                                   : (((QData)((IData)(
                                                       ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                         << 0x19U) 
                                                        | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                           >> 7U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                                     << 0x19U) 
                                                                    | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                       >> 7U)))))) 
                                 >> ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q) 
                                     << 3U)) : 0ULL);
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_valid_q) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match_q;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status 
            = (3U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status_q));
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status 
            = (3U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status_q));
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match 
            = ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                << 0x1eU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[0U] 
                             >> 2U));
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status 
            = (3U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                      << 0x1eU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                   >> 2U)));
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status 
            = (3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[0U]);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid 
        = ((((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                 >> 0x1eU)) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__xif_waiting))) 
            | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                >> 0x1eU) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_valid))) 
           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__instr_valid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0xdU) | (((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q)) 
                                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid)) 
                                & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__xif_waiting))) 
                               & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                     >> 0x12U))) & 
                              (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                  >> 0x11U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_ext 
        = ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q))
            ? (((- (IData)(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                            & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_aligned 
                                       >> 7U))))) << 8U) 
               | (0xffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_aligned)))
            : ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q))
                ? (((- (IData)(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                                & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_aligned 
                                           >> 0xfU))))) 
                    << 0x10U) | (0xffffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_aligned)))
                : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_aligned)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb 
        = (((0U != ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                     << 2U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                               >> 0x1eU))) | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match)) 
           & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
              >> 0x15U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb 
        = ((0U != (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                         >> 0x1bU))) ? 1U : ((0x20000000U 
                                              & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U])
                                              ? 0x18U
                                              : ((0x100000U 
                                                  & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U])
                                                  ? 2U
                                                  : 
                                                 ((1U 
                                                   & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                       >> 0x11U) 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                         >> 0xeU)))
                                                   ? 0xbU
                                                   : 
                                                  ((((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                        >> 0x11U) 
                                                       & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                          >> 0xfU)) 
                                                      & (3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                             >> 0x12U)))) 
                                                     & (~ 
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                         >> 0xfU))) 
                                                    & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status))
                                                      ? 5U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status))
                                                       ? 7U
                                                       : 5U))))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb 
        = (1U & ((((((((0U != (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                     >> 0x1bU))) | 
                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                        >> 0x1dU)) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                      >> 0x14U)) | 
                     ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                       >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                    >> 0xeU))) | ((
                                                   (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                      >> 0x11U) 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                        >> 0xfU)) 
                                                    & (3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                           >> 0x12U)))) 
                                                   & (~ 
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                       >> 0xfU))) 
                                                  & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))) 
                   | (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status))) 
                  | (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status))) 
                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                    >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_exception 
        = ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status)) 
           | (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb 
        = (((((5U == (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                      [0U] >> 0x1cU)) & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 9U) 
                                          & (3U == 
                                             (3U & 
                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                               >> 0x12U)))) 
                                         | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                             [0U] >> 6U) 
                                            & (0U == 
                                               (3U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                   >> 0x12U)))))) 
             & (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
                [0U])) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                             >> 0x13U))) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state;
    if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 2U;
    } else if ((0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 1U;
    }
    if ((0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc;
    if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
        }
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
    } else if ((0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
    }
    if ((0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = (0x3f7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = (0x3ffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = (0x3f9ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = (0x3ffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = (0x3fffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    if ((1U & (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                   >> 0x1dU) | (0U != (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                             >> 0x1bU)))) 
                 | (0U != ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[3U] 
                            << 0x1dU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[2U] 
                                         >> 3U)))) 
                | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                   >> 0x19U)) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                 >> 0x18U)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
            = (0x10U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    }
    if ((((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
             >> 0xdU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                         >> 7U)) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex)) 
          & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz))) 
         | (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready)) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb)) 
            & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz))))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
            = (0x800U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = ((0x3efffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp) 
           | (0x3000U & ((((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    >> 0x33U)) << 0xcU) 
                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                             >> 0x12U)) & (((0x3000U 
                                             & ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                                                 << 0xcU) 
                                                & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                                                    >> 0x12U) 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                      >> 9U)))) 
                                            | (0x1000U 
                                               & ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                                                   << 0xcU) 
                                                  & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                                                      >> 0x13U) 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                                        >> 2U))))) 
                                           | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) 
                                               & (((0x1fU 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                                                       >> 0x13U)) 
                                                   == 
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                                   [0U]) 
                                                  & (0U 
                                                     != 
                                                     vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                                     [0U]))) 
                                              << 0xcU)))));
    if ((1U & ((((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                          >> 2U)) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                     >> 0x1eU)) | (
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                                    >> 0x17U) 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                      >> 0x1eU))) 
               & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                    >> 0xaU) & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                 >> 0x10U) | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                               >> 0xaU) 
                                              & (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                     >> 2U) 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[4U] 
                                                       >> 0x1cU)) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                      >> 0xeU)) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                     >> 0xdU)) 
                                                 | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                     >> 0x10U) 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz 
                                                       >> 0x1aU)))))) 
                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb))))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
            = (0x400U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    }
    if (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz 
            >> 0x1bU) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb)) 
          | (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
               >> 0x10U) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                            >> 0xaU)) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb))) 
         | ((IData)((0x3000000U == (0x3000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz))) 
            & ((0xfffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz 
                          >> 0xcU)) == (0xfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz))))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
            = (0x200U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    }
    if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_counter_read) 
         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
            >> 0x15U))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
            = (0x20U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    }
    if (((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) 
           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_we)) 
          | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_we)) 
         & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
             >> 0xaU) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                         >> 0xdU)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
            = (2U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_ready = 0U;
    if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                      >> 0x16U)))) {
            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    }
    if ((1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_ready = 1U;
    } else if ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_ready = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__done_0 
        = (((~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__lsu_en_gated) 
                | (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid))) 
            | ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q))
                ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid) 
                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                : ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q)) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid) 
                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready))))) 
           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready) 
              | ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid) 
                 & ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q)) 
                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid)))));
    __Vtableidx3 = ((0x80U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                              >> 0xcU)) | ((0x40U & 
                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                             >> 8U)) 
                                           | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                                               << 5U) 
                                              | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out) 
                                                  << 4U) 
                                                 | ((8U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready) 
                                                        << 2U) 
                                                       | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state)))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state 
        = Vsoc_top_with_cache__ConstPool__TABLE_5078abe8_0
        [__Vtableidx3];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_valid 
        = Vsoc_top_with_cache__ConstPool__TABLE_df53dd33_0
        [__Vtableidx3];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_ready 
        = Vsoc_top_with_cache__ConstPool__TABLE_4e2d0d20_0
        [__Vtableidx3];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en 
        = Vsoc_top_with_cache__ConstPool__TABLE_93a67eec_0
        [__Vtableidx3];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt 
        = Vsoc_top_with_cache__ConstPool__TABLE_9cf96f61_0
        [__Vtableidx3];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en 
        = Vsoc_top_with_cache__ConstPool__TABLE_f1f802d5_0
        [__Vtableidx3];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en 
        = Vsoc_top_with_cache__ConstPool__TABLE_3491683c_0
        [__Vtableidx3];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en 
        = Vsoc_top_with_cache__ConstPool__TABLE_1e6388d2_0
        [__Vtableidx3];
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_result 
        = (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_id_q)) 
            << 0x22U) | (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_ext)) 
                          << 2U) | (QData)((IData)(
                                                   (2U 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                       >> 4U))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_wb 
        = ((0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U])
            ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_ext
            : ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U])
                ? 0U : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
                         << 0xeU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                     >> 0x12U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
            | ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                    >> 0xfU)) & (3U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                              >> 0x12U)))) 
               & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))) 
           | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = ((0xfffff000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]) 
           | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
               << 0xbU) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated 
        = (((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
                & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
               & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb))) 
              & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
             & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                   >> 0xdU))) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                    >> 0x12U))) & (~ 
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                                    >> 0x11U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_wb 
        = (1U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[0U] 
                   >> 1U) | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                              >> 0x1eU) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_exception))) 
                 | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                     >> 0x1eU) & (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_we[0U] 
        = (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
               >> 0x17U) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_exception))) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__xif_waiting))) 
            & (~ (IData)((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match)))) 
           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__instr_valid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__done_0) 
           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__lsu_en_gated) 
              | (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_valid 
        = ((((((((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xbU] 
                    | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                       >> 0x10U)) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                     >> 2U)) | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                                 >> 0x17U) 
                                                & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_valid))) 
                 | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                     >> 0x13U) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_valid))) 
                | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                    >> 0xdU) & ((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q))
                                   ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                                   : ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q)) 
                                      | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid) 
                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready)))) 
                                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__lsu_en_gated)) 
                                & (~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid))))) 
               | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                  >> 7U)) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                             >> 0xeU)) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                          >> 0xdU)) 
            | (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[4U] 
                   >> 0x19U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                >> 0x12U)) | (0U != 
                                              (3U & 
                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                >> 0x10U)))) 
                | (0U != ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[4U] 
                           << 7U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                                     >> 0x19U)))) & 
               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                >> 0xaU))) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__instr_valid));
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg;
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q;
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_result;
    } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = (0x3fU & (((IData)(0x20U) - (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_result)) 
                        - (IData)(1U)));
    } else if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = (0x3fU & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                        - (IData)(1U)));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
            ? 0U : ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                     ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                         << 1U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                     : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
            ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                    << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                 >> 1U))) : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q);
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = ((((0U != ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                          << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                      >> 0x11U))) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
                & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed)) 
               & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                   >> 0x10U) ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)));
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                            >> 0x11U));
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0xeU) | ((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_ready)) 
                                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_ready)) 
                                & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__done_0) 
                                    & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_split_ex))) 
                                   & (~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)))) 
                               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready)) 
                              & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                    >> 0x13U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_wb;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_a_fw 
        = ((1U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                         >> 0x10U))) ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_ex
            : ((2U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                             >> 0x10U))) ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_wb
                : ((0U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                 >> 0x10U))) ? vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i
                   [0U] : vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i
                   [0U])));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_b_fw 
        = ((1U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                         >> 0xeU))) ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_ex
            : ((2U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                             >> 0xeU))) ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_wb
                : ((0U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                 >> 0xeU))) ? vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i
                   [1U] : vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i
                   [1U])));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 1U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))))) {
                            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))) {
                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 0U;
                                        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))))) {
                            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))))) {
                                        if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_wr_in_wb) {
                                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))))) {
                            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))) {
                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set 
                                            = (1U & 
                                               (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_busy)));
                                        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
    if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                = ((4U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))
                    ? ((0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U])
                        ? 3U : ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U])
                                 ? 2U : ((0x40000000U 
                                          & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U])
                                          ? 1U : 0U)))
                    : 0U);
        }
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                = ((0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U])
                    ? 3U : ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U])
                             ? 2U : ((0x40000000U & 
                                      vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U])
                                      ? 1U : 0U)));
        } else if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
            if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                    = ((0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U])
                        ? 3U : ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U])
                                 ? 2U : ((0x40000000U 
                                          & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U])
                                          ? 1U : 0U)));
            } else if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))))) {
                if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
                } else if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                     | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                    if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))) {
                        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                              ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                              : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                = ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U])
                                    ? 2U : ((0x40000000U 
                                             & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U])
                                             ? 1U : 0U));
                        }
                    } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                        if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_wr_in_wb)))) {
                            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                    = ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U])
                                        ? 2U : ((0x40000000U 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U])
                                                 ? 1U
                                                 : 0U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q;
    if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 1U;
        }
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))))) {
                        if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                          | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))))) {
                                    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step 
        = (1U & (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                  & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                     >> 2U)) & ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid) 
                                  & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[0U] 
                                      >> 2U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_wb))) 
                                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                    >> 0xbU)) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                                                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__we_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_we
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
            ? (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) 
                & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
                      & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                          >> 0x10U) ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))))
                ? (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   + vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   - vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]) 
           | (0xff800000U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                               << 0xbU) & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_valid)) 
                                           << 0x17U)) 
                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready) 
                                << 0x17U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]) 
           | (0xff000000U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                               << 0xdU) & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_valid)) 
                                           << 0x18U)) 
                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready) 
                                << 0x18U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0xfU) | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready) 
                               & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                     >> 0x14U))) & 
                              (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_waiting)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))))) {
                            if ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_valid)) 
                                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready))) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__wdata_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata
        [0U];
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U] 
        = (0x7fU & vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U]);
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[1U] = 0U;
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
        = (0xfffffe00U & vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U]);
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U] 
        = ((0x1ffU & vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U]) 
           | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_a_fw 
              << 9U));
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[1U] 
        = ((0xfffffe00U & vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[1U]) 
           | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_a_fw 
              >> 0x17U));
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U] 
        = (0x80U | vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U]);
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[1U] 
        = ((0x1ffU & vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[1U]) 
           | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_b_fw 
              << 9U));
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
        = ((0xfffffe00U & vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U]) 
           | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_b_fw 
              >> 0x17U));
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U] 
        = (0x100U | vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
        = ((0x1ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U]) 
           | (0xfffffe00U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                              << 0xbU) | (0x600U & 
                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[2U] 
                                           >> 0x15U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
        = ((0xfffffe00U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U]) 
           | (0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                        >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
        = ((0x1ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U]) 
           | (((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                        << 2U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[2U] 
                                  >> 0x1eU)) : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                                                 << 0xdU) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[2U] 
                                                   >> 0x13U)))
                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                        << 0xaU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[3U] 
                                    >> 0x16U)) : vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
              << 9U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
        = ((0xfffffe00U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U]) 
           | (((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                        << 2U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[2U] 
                                  >> 0x1eU)) : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                                                 << 0xdU) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[2U] 
                                                   >> 0x13U)))
                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                        << 0xaU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[3U] 
                                    >> 0x16U)) : vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
              >> 0x17U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
        = ((0xffe7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U]) 
           | (0xfff80000U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                              << 0x14U) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                           << 0x13U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 3U;
                } else if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                    if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n 
                            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                ? 2U : (((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                           & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                                              >> 0xfU)) 
                                          & (3U == 
                                             (3U & 
                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                               >> 0x12U)))) 
                                         & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                         ? 1U : (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))
                                                  ? 1U
                                                  : 0U)));
                    }
                }
            }
            if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) 
                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n 
                    = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb)
                        ? 2U : 4U);
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__we_i
        [0U];
    __Vtemp301 = ((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                      << 0xbU) | (0xfc00U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                              << 0xaU) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                >> 0x10U)))) 
                    | ((0x300U & (((- (IData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated))) 
                                   << 8U) & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                              << 0x18U) 
                                             | (0xffff00U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                                   >> 8U))))) 
                       | ((0xffff80U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                         << 7U) & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                                   >> 8U))) 
                          | ((0x40U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                       >> 5U)) | ((
                                                   ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__data_gnt)) 
                                                   & (~ 
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                       >> 0xaU))) 
                                                  << 5U))))) 
                   | ((0x3fffff0U & ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                       & (IData)(vlSelf->soc_top_with_cache__DOT__data_gnt)) 
                                      << 4U) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                >> 6U))) 
                      | (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_valid)) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready)) 
                         << 3U))) | ((((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_valid)) 
                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready)) 
                                      << 2U) | ((((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_valid)) 
                                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready)) 
                                                 << 1U) 
                                                | (1U 
                                                   & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = ((0x1ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]) 
           | (__Vtemp301 << 0x19U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
        = ((0xffffffe0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]) 
           | (__Vtemp301 >> 7U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))))) {
                            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))))) {
                                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))))) {
                                        if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_wr_in_wb)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q)))) {
                                                    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                                    } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                                    } else if (
                                                               ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                                                                | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__mret_ptr_in_id))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                                                  >> 0x1dU) 
                                                                 | (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                                                        >> 0x1bU))))))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)))) {
                                                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q) 
          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_valid)) 
         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 0U;
    if ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 1U;
    } else if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                    = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready) 
                       & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                             >> 0x15U)));
            }
        } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((4U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready) 
                           & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                 >> 0x15U)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready) 
                   & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                         >> 0x15U)));
        }
    } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q)))) {
        if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)))) {
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store)))) {
                if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s)))) {
                    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_tbljmp) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready) 
                               & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                     >> 0x15U)));
                    }
                }
            }
        }
    }
    if ((1U & (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_valid)) 
                & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                      >> 0x15U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                     >> 0x10U)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 1U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
        = (0x180U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
        = (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
        = (0x1bfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
        = (0x1fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
        = (0xfffff000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q) 
              << 0x15U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]) 
           | (0x100000U & ((((IData)((0U != (0x1d80U 
                                             & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp))) 
                             << 0x14U) | ((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q)) 
                                             << 0x14U) 
                                            | (0xfff00000U 
                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_err_wb) 
                                                  << 0x13U))) 
                                           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible) 
                                              << 0x14U)) 
                                          & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable) 
                                             << 0x14U))) 
                           | ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                                | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug)) 
                               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable)) 
                              << 0x14U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]) 
           | ((IData)((0U != (0x267U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp))) 
              << 0x13U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = (0xfff81fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
        = (0x3fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
        = (0xfffffe00U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
        = (0x3fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
        = (0xffff0000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U]);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
        = (0x1cfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
    if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                = (0x200000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0xaU | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]) 
                   | (0x40U & ((~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))) 
                               << 6U)));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                = (0x8000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U]);
            if ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
                    = ((0x3fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U]) 
                       | ((IData)((1ULL | ((QData)((IData)(
                                                           (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                                                              << 2U) 
                                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                                                                >> 0x1eU)) 
                                                            | vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match))) 
                                           << 1U))) 
                          << 0xeU));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                    = ((0xffff8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U]) 
                       | (((IData)((1ULL | ((QData)((IData)(
                                                            (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                                                               << 2U) 
                                                              | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                                                                 >> 0x1eU)) 
                                                             | vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match))) 
                                            << 1U))) 
                           >> 0x12U) | ((IData)(((1ULL 
                                                  | ((QData)((IData)(
                                                                     (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                                                                        << 2U) 
                                                                       | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                                                                          >> 0x1eU)) 
                                                                      | vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match))) 
                                                     << 1U)) 
                                                 >> 0x20U)) 
                                        << 0xeU)));
            }
            if ((4U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x1c000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]) 
                       | (0x2000U & ((~ ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)) 
                                         | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)))) 
                                     << 0xdU)));
            } else {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x10000U | (0xfffe1fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]));
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0x7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                = (0x20000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
            if ((0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U])) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (0x100U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x100000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
            }
        }
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                = (0x1e000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0xcU | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
                = (0x100U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                = ((0xfff001ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]) 
                   | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                        ? 0x401U : 0x400U) << 9U));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
                = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U]);
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                = (0x3c0000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                = (0x1e000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                = ((0xfffff001U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U]) 
                   | (0xfffffffeU & (0x800U | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_id_ctrl) 
                                               << 1U))));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
                = (0x100U | (0xfffffe7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U]));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (9U | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                = ((0xfff001ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_id_ctrl) 
                      << 9U));
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                = (0x3c0000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        } else {
            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x1c000U | (0xfffe1fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = ((0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]) 
                       | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)
                           ? 0xbU : 8U));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                    = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]) 
                       | (0x40U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                   << 6U)));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                    = ((0xfff001ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]) 
                       | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb) 
                          << 9U));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
                    = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U]) 
                       | (0x80U & ((0x3f80U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                >> 0x12U) 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                  >> 0xeU))) 
                                   | (0x7f80U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                  >> 0x11U) 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                    >> 0xeU))))));
            } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) 
                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x40000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (0x17fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
            } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x3c0000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                      ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                      : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                        = (0x1c000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                        = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                        = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                        = (6U | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
                }
            } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x1c000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (2U | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                    = (0x80U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]);
            } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_wr_in_wb) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x380000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
            } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x1c000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (6U | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
            } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x18000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (5U | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
            } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                    = (0x10000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) {
                    if ((0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q)) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                            = (0x60U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                            = (1U | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
                    } else {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                            = (1U | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                            = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                    }
                } else {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                        = ((0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]) 
                           | ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                      >> 0x17U) & (~ 
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                                                    >> 1U))))
                               ? 0xfU : ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                                 >> 0x17U) 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                                                   >> 1U)))
                                          ? 0xeU : 4U)));
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                        = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                        = ((0x1efU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]) 
                           | (0x10U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                        >> 0x13U) & 
                                       ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                                            >> 1U)) 
                                        << 4U))));
                }
            } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__mret_ptr_in_id))) {
                if ((1U & (~ ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                               >> 0x1dU) | (0U != (3U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                                      >> 0x1bU))))))) {
                    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)))) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                            = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                            = (0xeU | (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]));
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                            = (0x10000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U]);
                    }
                }
            }
            if ((1U & ((((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                            >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                         >> 0xbU)) 
                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                             >> 0x15U)) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[0U] 
                                           >> 3U)) 
                        & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                              >> 0xdU))) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                               >> 0x12U))))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                    = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]) 
                       | (0x100U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                    << 8U)));
            }
        }
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) 
             | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
            = (0x17fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0x80U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0x1f0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                = (0x40U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]);
        }
    }
    if (((((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
               >> 0x13U)) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                             >> 2U)) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q))) 
         & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_valid) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready)) 
            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__last_op_if) 
               | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_if))))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 1U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__wdata_i
        [0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op 
        = ((0xbU == (0x7fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                              >> 0xfU))) & (1U == (0x7fU 
                                                   & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                      >> 8U))));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op 
        = ((0xbU == (0x7fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                              >> 0xfU))) & (2U == (0x7fU 
                                                   & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                      >> 8U))));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_op 
        = ((0xbU == (0x7fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                              >> 0xfU))) & (((((4U 
                                                == 
                                                (0x7fU 
                                                 & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                    >> 8U))) 
                                               | (5U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                      >> 8U)))) 
                                              | (6U 
                                                 == 
                                                 (0x7fU 
                                                  & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                     >> 8U)))) 
                                             | (3U 
                                                == 
                                                (0x7fU 
                                                 & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                    >> 8U)))) 
                                            | (8U == 
                                               (0x7fU 
                                                & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                                   >> 8U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                      [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                     [0U]));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 1U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 2U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 3U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 4U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 5U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 6U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 7U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 8U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 9U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xaU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xbU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xcU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xdU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xeU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xfU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x10U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x11U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x12U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x13U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x14U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x15U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x16U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x17U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x18U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x19U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1aU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1bU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1cU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1dU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1eU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1fU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__if_ready 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0x10U) | ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)
                                  ? (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready) 
                                      & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                            >> 0x15U))) 
                                     | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                        >> 0x10U)) : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm)) 
                                & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready)) 
                               & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                     >> 0x15U)))));
    __Vtableidx7 = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns) 
                     << 4U) | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                                << 3U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns 
        = Vsoc_top_with_cache__ConstPool__TABLE_5bfb044c_0
        [__Vtableidx7];
    vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) 
            << 8U) | ((((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_op) 
                        | (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op)) 
                       << 7U) | (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op) 
                                  | (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op)) 
                                 << 2U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int;
    if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid) 
         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__if_ready))) {
        if ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    >> 1U) | ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                  >> 1U)) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound2 = 0U;
            if ((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n)) 
                       | (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound2) 
                                << (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))));
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_insn_accept 
        = ((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
             & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) 
            & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
               >> 8U)) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_insn_reject 
        = ((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
             & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) 
            & (~ ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                  >> 8U))) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__rf_we 
        = (1U & (((~ ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                       >> 4U) | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                  >> 0x17U) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                                                  >> 1U))))) 
                  & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                             >> 0x18U))) | ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                            & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                               >> 7U))));
}

void Vsoc_top_with_cache___024root___combo__TOP__2(Vsoc_top_with_cache___024root* vlSelf);
void Vsoc_top_with_cache___024root___sequent__TOP__4(Vsoc_top_with_cache___024root* vlSelf);
void Vsoc_top_with_cache___024root___sequent__TOP__5(Vsoc_top_with_cache___024root* vlSelf);
void Vsoc_top_with_cache___024root___combo__TOP__7(Vsoc_top_with_cache___024root* vlSelf);
void Vsoc_top_with_cache___024root___sequent__TOP__8(Vsoc_top_with_cache___024root* vlSelf);
void Vsoc_top_with_cache___024root___sequent__TOP__9(Vsoc_top_with_cache___024root* vlSelf);
void Vsoc_top_with_cache___024root___sequent__TOP__10(Vsoc_top_with_cache___024root* vlSelf);
void Vsoc_top_with_cache___024root___sequent__TOP__11(Vsoc_top_with_cache___024root* vlSelf);
void Vsoc_top_with_cache___024root___combo__TOP__12(Vsoc_top_with_cache___024root* vlSelf);

void Vsoc_top_with_cache___024root___eval(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___eval\n"); );
    // Body
    Vsoc_top_with_cache___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vsoc_top_with_cache___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vsoc_top_with_cache___024root___sequent__TOP__5(vlSelf);
    }
    Vsoc_top_with_cache___024root___combo__TOP__7(vlSelf);
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vsoc_top_with_cache___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)) 
         | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__soc_top_with_cache__DOT__cpu__DOT__clk))))) {
        Vsoc_top_with_cache___024root___sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vsoc_top_with_cache___024root___sequent__TOP__10(vlSelf);
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vsoc_top_with_cache___024root___sequent__TOP__11(vlSelf);
    }
    Vsoc_top_with_cache___024root___combo__TOP__12(vlSelf);
    if (((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni))) 
         | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__clk) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__soc_top_with_cache__DOT__cpu__DOT__clk))))) {
        Vsoc_top_with_cache___024root___multiclk__TOP__13(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vsoc_top_with_cache___024root___sequent__TOP__14(vlSelf);
    }
    Vsoc_top_with_cache___024root___combo__TOP__15(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vclklast__TOP__soc_top_with_cache__DOT__cpu__DOT__clk 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__clk;
}

QData Vsoc_top_with_cache___024root___change_request_1(Vsoc_top_with_cache___024root* vlSelf);

VL_INLINE_OPT QData Vsoc_top_with_cache___024root___change_request(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___change_request\n"); );
    // Body
    return (Vsoc_top_with_cache___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsoc_top_with_cache___024root___change_request_1(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_byp)
         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6])
         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready)
         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid)
        || (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode)
         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4])
         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2])|| (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5])
         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready)
         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid)
         | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__vpu__DOT__exec_start)
         | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state));
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_byp))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_core.sv:183: soc_top_with_cache.cpu.ctrl_byp\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6]))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_core.sv:184: soc_top_with_cache.cpu.ctrl_fsm\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_if_stage.sv:125: soc_top_with_cache.cpu.if_stage_i.prefetch_trans_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_mpu.sv:77: soc_top_with_cache.cpu.if_stage_i.mpu_i.mpu_err_trans_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_sequencer.sv:63: soc_top_with_cache.cpu.if_stage_i.gen_seq.sequencer_i.decode\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_ff_one.sv:39: soc_top_with_cache.cpu.ex_stage_i.alu_i.ff_one_i.sel_nodes\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4]))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_ff_one.sv:40: soc_top_with_cache.cpu.ex_stage_i.alu_i.ff_one_i.index_nodes\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4]) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5] ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5]))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_alu_b_cpop.sv:34: soc_top_with_cache.cpu.ex_stage_i.alu_i.alu_b_cpop_i.sum\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_load_store_unit.sv:108: soc_top_with_cache.cpu.load_store_unit_i.wpt_trans_ready\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid))) VL_DBG_MSGF("        CHANGE: vendor/cv32e40x/rtl/cv32e40x_load_store_unit.sv:130: soc_top_with_cache.cpu.load_store_unit_i.wpt_resp_valid\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__vpu__DOT__exec_start))) VL_DBG_MSGF("        CHANGE: rtl/core/vector_coprocessor.sv:97: soc_top_with_cache.vpu.exec_start\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state ^ vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state))) VL_DBG_MSGF("        CHANGE: rtl/execution/vlsu.sv:47: soc_top_with_cache.vpu.vlsu_inst.next_state\n"); );
    // Final
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U];
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__vpu__DOT__exec_start 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start;
    vlSelf->__Vchglast__TOP__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state;
    return __req;
}

#ifdef VL_DEBUG
void Vsoc_top_with_cache___024root___eval_debug_assertions(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
}
#endif  // VL_DEBUG
