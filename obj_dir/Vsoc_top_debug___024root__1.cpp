// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top_debug.h for the primary calling header

#include "Vsoc_top_debug___024root.h"
#include "Vsoc_top_debug__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*1:0*/, 16> Vsoc_top_debug__ConstPool__TABLE_6b3161f8_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vsoc_top_debug__ConstPool__TABLE_00ab2ffe_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vsoc_top_debug__ConstPool__TABLE_37c8e92b_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vsoc_top_debug__ConstPool__TABLE_2bb9808f_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vsoc_top_debug__ConstPool__TABLE_0f26d9b8_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vsoc_top_debug__ConstPool__TABLE_06cbfe99_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top_debug__ConstPool__TABLE_133910eb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top_debug__ConstPool__TABLE_8e48073d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top_debug__ConstPool__TABLE_d86bdde2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top_debug__ConstPool__TABLE_9553c2b4_0;

VL_INLINE_OPT void Vsoc_top_debug___024root___combo__TOP__11(Vsoc_top_debug___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_debug__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_debug___024root___combo__TOP__11\n"); );
    // Variables
    CData/*3:0*/ __Vfunc_get_stack_adj_base__0__rlist;
    CData/*3:0*/ __Vfunc_pushpop_reg_length__1__Vfuncout;
    CData/*3:0*/ __Vfunc_pushpop_reg_length__1__rlist4;
    CData/*1:0*/ __Vfunc_mtvec_mode_clint_resolve__25__Vfuncout;
    CData/*1:0*/ __Vfunc_mtvec_mode_clint_resolve__25__current_value;
    CData/*1:0*/ __Vfunc_mtvec_mode_clint_resolve__25__next_value;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__Vfuncout;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__current_value;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__next_value;
    CData/*5:0*/ __Vtableidx1;
    CData/*3:0*/ __Vtableidx6;
    SData/*11:0*/ __Vfunc_get_stack_adj_base__0__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__12__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__12__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__13__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__13__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__14__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__14__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__15__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__15__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__16__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__16__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__19__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__19__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__20__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__20__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__21__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__21__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__24__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__24__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__26__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__26__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__27__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__27__wdata;
    CData/*31:0*/ __Vtemp162;
    CData/*31:0*/ __Vtemp167;
    CData/*31:0*/ __Vtemp178;
    CData/*31:0*/ __Vtemp183;
    CData/*31:0*/ __Vtemp211;
    CData/*31:0*/ __Vtemp217;
    // Body
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw 
        = ((0xfff8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw)) 
           | (1U | ((4U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U] 
                           >> 1U)) | (2U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U] 
                                            >> 3U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw 
        = ((0xffc7U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw)) 
           | ((0x20U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U] 
                        << 5U)) | ((0x10U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U] 
                                             << 3U)) 
                                   | (8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U] 
                                            << 1U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw 
        = ((0xfe3fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw)) 
           | ((0x100U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                         >> 0x15U)) | ((0x80U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                 >> 0x17U)) 
                                       | (0x40U & (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                   >> 0x19U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw 
        = ((0xf1ffU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw)) 
           | ((0x800U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                         >> 0xfU)) | ((0x400U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                 >> 0x11U)) 
                                      | (0x200U & (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                   >> 0x13U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw 
        = ((0x8fffU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw)) 
           | ((0x4000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                          >> 9U)) | ((0x2000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                 >> 0xbU)) 
                                     | (0x1000U & (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                   >> 0xdU)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw 
        = ((0x7fffU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw)) 
           | (0x8000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                         >> 7U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata 
        = ((0xfffffff0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U] 
                     >> 2U)) | (7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q;
    if ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
                = (3U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)));
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid 
        = ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
              >> 7U) & (2U > (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))) 
            & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q) 
                  & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                        >> 6U))))) & (((0U == ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                               - (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q))) 
                                       | ((1U == ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                                  - (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q))) 
                                          & (0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))) 
                                      | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                                         >> 6U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
                = ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                    ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access)
                    : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q));
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
            = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                >> 6U) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access));
    }
    vlSymsp->TOP__soc_top_debug__DOT__xif.mem_result_valid 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__last_q) 
            & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid)) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__xif_res_q));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated 
        = ((0U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 0U;
    if ((0x4000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U])) {
        if ((6U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] >> 0x1cU))) {
            if ((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U])) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 1U;
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                      [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                              >> 0xbU)) & (0U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffdU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x3ffffeU & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                   [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                           >> 0xaU)) 
                                  & ((1U == (0x7ffU 
                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                     << 1U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffbU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x7ffffcU & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                   [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                           >> 9U)) 
                                  & ((2U == (0x7ffU 
                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                     << 2U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffff8U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                   [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                           >> 8U)) 
                                  & ((3U == (0x7ffU 
                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                     << 3U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffefU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x1fffff0U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                    [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                            >> 7U)) 
                                   & ((4U == (0x7ffU 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                      << 4U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffdfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x3ffffe0U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                    [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                            >> 6U)) 
                                   & ((5U == (0x7ffU 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                      << 5U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffbfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x7ffffc0U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                    [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                            >> 5U)) 
                                   & ((6U == (0x7ffU 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                      << 6U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffff7fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffff80U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                    [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                            >> 4U)) 
                                   & ((7U == (0x7ffU 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                      << 7U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffeffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x1fffff00U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             >> 3U)) 
                                    & ((8U == (0x7ffU 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 8U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffdffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x3ffffe00U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             >> 2U)) 
                                    & ((9U == (0x7ffU 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 9U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffbffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x7ffffc00U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             >> 1U)) 
                                    & ((0xaU == (0x7ffU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0xaU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffff7ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffff800U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U]) 
                                    & ((0xbU == (0x7ffU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0xbU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffefffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffff000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 1U)) 
                                    & ((0xcU == (0x7ffU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0xcU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffdfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffffe000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 2U)) 
                                    & ((0xdU == (0x7ffU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0xdU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffbfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffffc000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 3U)) 
                                    & ((0xeU == (0x7ffU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0xeU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffff7fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffff8000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 4U)) 
                                    & ((0xfU == (0x7ffU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0xfU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffeffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffff0000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 5U)) 
                                    & ((0x10U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x10U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffdffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffe0000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 6U)) 
                                    & ((0x11U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x11U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffbffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfffc0000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 7U)) 
                                    & ((0x12U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x12U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfff7ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfff80000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 8U)) 
                                    & ((0x13U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x13U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffefffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfff00000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 9U)) 
                                    & ((0x14U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x14U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffdfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffe00000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0xaU)) 
                                    & ((0x15U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x15U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffbfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xffc00000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0xbU)) 
                                    & ((0x16U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x16U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xff7fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xff800000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0xcU)) 
                                    & ((0x17U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x17U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfeffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xff000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0xdU)) 
                                    & ((0x18U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x18U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfdffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfe000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0xeU)) 
                                    & ((0x19U == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x19U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfbffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xfc000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0xfU)) 
                                    & ((0x1aU == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x1aU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xf7ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xf8000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0x10U)) 
                                    & ((0x1bU == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x1bU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xefffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xf0000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0x11U)) 
                                    & ((0x1cU == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x1cU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xdfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xe0000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0x12U)) 
                                    & ((0x1dU == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x1dU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xbfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0xc0000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0x13U)) 
                                    & ((0x1eU == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x1eU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0x7fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (0x80000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                     [0U] & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             << 0x14U)) 
                                    & ((0x1fU == (0x7ffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) 
                                       << 0x1fU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_valid_1 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
            & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                >> 0x1eU) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                             >> 0x15U))) & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__xif_res_q)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__instr_valid 
        = (1U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                    >> 0x15U) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                    >> 0xdU))) & (~ 
                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                   >> 0x12U))) 
                 & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                       >> 0x11U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_en_gated 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                  >> 0xeU) & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                >> 0x15U) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                >> 0xdU))) 
                              & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                    >> 0x12U)))));
    vlSymsp->TOP__soc_top_debug__DOT__xif.commit_valid 
        = (1U & ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                       >> 0x13U)) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                     >> 0xeU)) & ((
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                                   >> 7U) 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                                     >> 0xaU))) 
                 & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__instr_valid 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                   >> 0xaU) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                  >> 0xeU))) & (~ (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                   >> 0x13U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0x1fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U])
                ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                    << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                              >> 0x18U)) : (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                              << 8U) 
                                             | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                >> 0x18U)) 
                                            + ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                << 8U) 
                                               | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                  >> 0x18U)))) 
              << 0xdU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[2U] 
        = (((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U])
             ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                 << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                           >> 0x18U)) : (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                           << 8U) | 
                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)) 
                                         + ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                             << 8U) 
                                            | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                               >> 0x18U)))) 
           >> 0x13U);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffffffefU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0x10U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                       >> 8U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffffe7ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0x1800U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                         << 1U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
        = (IData)((((QData)((IData)(((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                      << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                                                >> 0x18U)))) 
                    << 3U) | (QData)((IData)((6U | 
                                              (1U & 
                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                                >> 0x13U)))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffff8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (IData)(((((QData)((IData)(((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                          << 8U) | 
                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                                          >> 0x18U)))) 
                        << 3U) | (QData)((IData)((6U 
                                                  | (1U 
                                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                                        >> 0x13U)))))) 
                      >> 0x20U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffff81fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0x7e0U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                        << 2U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                    >> 6U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xfffff03fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0xfc0U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                         + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                  >> 0x19U))) << 6U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xfffc0fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0x3f000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                             << 0x1aU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                          >> 6U)) + 
                           (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                  >> 0x1aU))) << 0xcU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xff03ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0xfc0000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                              << 0x14U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                           >> 0xcU)) 
                            + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                     >> 0x1bU))) << 0x12U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xc0ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (0x3f000000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                << 0xeU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                            >> 0x12U)) 
                              + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                       >> 0x1cU))) 
                             << 0x18U)));
    __Vtemp162 = (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                             << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                       >> 0x18U)) + 
                           (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                  >> 0x1dU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0x3fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                 << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                           >> 0x18U)) + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                               >> 0x1dU))) 
              << 0x1eU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xfffffff0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (__Vtemp162 >> 2U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xfffffc0fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0x3f0U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                           << 2U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                     >> 0x1eU)) + (1U 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                      >> 0x1eU))) 
                        << 4U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xffff03ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0xfc00U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                            << 0x1cU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                         >> 4U)) + 
                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                           >> 0x1fU)) << 0xaU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xffc0ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0x3f0000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                              << 0x16U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                           >> 0xaU)) 
                            + (1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) 
                           << 0x10U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xf03fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | (0xfc00000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                               << 0x10U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                            >> 0x10U)) 
                             + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                      >> 1U))) << 0x16U)));
    __Vtemp167 = (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                             << 0xaU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                         >> 0x16U)) 
                           + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                    >> 2U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = ((0xfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U]) 
           | ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                 << 0xaU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                             >> 0x16U)) + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                 >> 2U))) 
              << 0x1cU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xfffffffcU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (__Vtemp167 >> 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xffffff03U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0xfcU & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                          << 4U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                    >> 0x1cU)) + (1U 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                     >> 3U))) 
                       << 2U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xffffc0ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0x3f00U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                            << 0x1eU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                         >> 2U)) + 
                          (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                 >> 4U))) << 8U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xfff03fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0xfc000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                             << 0x18U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                          >> 8U)) + 
                           (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                  >> 5U))) << 0xeU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0xfc0fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | (0x3f00000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                               << 0x12U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                            >> 0xeU)) 
                             + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                      >> 6U))) << 0x14U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = ((0x3ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U]) 
           | ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                 << 0xcU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                             >> 0x14U)) + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                 >> 7U))) 
              << 0x1aU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xffffffc0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                         << 6U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                   >> 0x1aU)) + (1U 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                    >> 8U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xfffff03fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0xfc0U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                         + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                  >> 9U))) << 6U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xfffc0fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0x3f000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                             << 0x1aU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                          >> 6U)) + 
                           (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                  >> 0xaU))) << 0xcU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xff03ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0xfc0000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                              << 0x14U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                           >> 0xcU)) 
                            + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                     >> 0xbU))) << 0x12U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0xc0ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | (0x3f000000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                << 0xeU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                            >> 0x12U)) 
                              + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                       >> 0xcU))) << 0x18U)));
    __Vtemp178 = (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                             << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                       >> 0x18U)) + 
                           (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                  >> 0xdU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = ((0x3fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U]) 
           | ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                 << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                           >> 0x18U)) + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                               >> 0xdU))) 
              << 0x1eU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xfffffff0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (__Vtemp178 >> 2U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xfffffc0fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0x3f0U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                           << 2U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                     >> 0x1eU)) + (1U 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                      >> 0xeU))) 
                        << 4U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xffff03ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0xfc00U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                            << 0x1cU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                         >> 4U)) + 
                          (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                 >> 0xfU))) << 0xaU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xffc0ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0x3f0000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                              << 0x16U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                           >> 0xaU)) 
                            + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                     >> 0x10U))) << 0x10U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xf03fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | (0xfc00000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                               << 0x10U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                            >> 0x10U)) 
                             + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                      >> 0x11U))) << 0x16U)));
    __Vtemp183 = (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                             << 0xaU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                         >> 0x16U)) 
                           + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                    >> 0x12U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = ((0xfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U]) 
           | ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                 << 0xaU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                             >> 0x16U)) + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x12U))) 
              << 0x1cU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xfffffffcU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (__Vtemp183 >> 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xffffff03U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0xfcU & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                          << 4U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                    >> 0x1cU)) + (1U 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                     >> 0x13U))) 
                       << 2U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xffffc0ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0x3f00U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                            << 0x1eU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                         >> 2U)) + 
                          (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                 >> 0x14U))) << 8U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xfff03fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0xfc000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                             << 0x18U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                          >> 8U)) + 
                           (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                  >> 0x15U))) << 0xeU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0xfc0fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | (0x3f00000U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               << 0x12U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                            >> 0xeU)) 
                             + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                      >> 0x16U))) << 0x14U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = ((0x3ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U]) 
           | ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                 << 0xcU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                             >> 0x14U)) + (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x17U))) 
              << 0x1aU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 0U;
    if ((0x800U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else if ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x400U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read 
                                = (IData)(((0U != (0xcU 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) 
                                           | ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((1U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                                    >> 0x13U))
                                                   : 
                                                  (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                                    >> 0x13U)))
                                               : ((1U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                                    >> 0x13U))
                                                   : 
                                                  (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                                    >> 0x13U))))));
                        } else if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
    if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((0x400000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
    } else if ((0x80000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_valid = 0U;
    if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                      >> 0x16U)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_valid = 0U;
    } else if ((0x80000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_valid = 0U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl;
    if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))
                ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh
                : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl);
    } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh;
    }
    if ((1U & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl;
    } else if ((0x80000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al;
    if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah;
    } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al;
    }
    if ((1U & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al;
    } else if ((0x80000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
        = ((0x3fff3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp) 
           | ((8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                     >> 1U)) | (4U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                        >> 6U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                                  >> 5U)) 
                                      & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                         >> 0x13U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
                = ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                    ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q)
                    : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q));
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__abort_op_id 
        = (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[0U] 
                 | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                    >> 3U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__instr_valid 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                   >> 0x1eU) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                   >> 0xfU))) & (~ 
                                                 (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                  >> 0x14U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
        = (0x7ffffffffffeffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
    if ((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
        if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
            if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                } else if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                            >> 0x1fU)) {
                    if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                        if ((0U == (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          >> 0xaU)))) {
                            if ((0U == ((0x3e0U & (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                   >> 8U)) 
                                        | (0x1fU & 
                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                            >> 5U))))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x200ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0U == (0xfffU 
                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                  >> 0x12U)))
                                        ? (0x20ULL 
                                           | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                        : ((1U == (0xfffU 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                      >> 0x12U)))
                                            ? (0x40ULL 
                                               | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                    >> 0x12U)))
                                                ? (
                                                   (0x80000U 
                                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U])
                                                    ? 0x27d4400000100ULL
                                                    : 
                                                   (4ULL 
                                                    | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                : (
                                                   (0x7b2U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   ((0x80000U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U])
                                                     ? 
                                                    (0x80ULL 
                                                     | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                                     : 0x27d4400000100ULL)
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                         >> 0x12U)))
                                                     ? 
                                                    ((0x7ffffffffffffdULL 
                                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                     | ((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
                                                                             >> 0xdU))))) 
                                                        << 1U))
                                                     : 
                                                    ((0x8c0U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                          >> 0x12U)))
                                                      ? 
                                                     ((0x7ffffffffffffeULL 
                                                       & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                      | (IData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
                                                                             >> 0xdU))))))
                                                      : 0x27d4400000100ULL))))));
                            } else {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                            }
                        } else {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1800000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            if ((0x1000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x100000000000ULL 
                                       | (0x7fe7ffffffffffULL 
                                          & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            } else {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x2000000ULL 
                                       | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x7fe7ffffffffffULL 
                                       & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            }
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x20000000000ULL 
                                   | (0x7ff9ffffffffffULL 
                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x7fff8fffffffffULL 
                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = ((1U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                 >> 0xaU)))
                                    ? (0x200000ULL 
                                       | (0x7fffffff9fffffULL 
                                          & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                    : ((2U == (3U & 
                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                >> 0xaU)))
                                        ? ((0x7fffffff9fffffULL 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                           | ((QData)((IData)(
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                    >> 0xdU)))
                                                                ? 0U
                                                                : 2U))) 
                                              << 0x15U))
                                        : ((3U == (3U 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                      >> 0xaU)))
                                            ? ((0x7fffffff9fffffULL 
                                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                               | ((QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                        >> 0xdU)))
                                                                    ? 0U
                                                                    : 3U))) 
                                                  << 0x15U))
                                            : 0x27d4400000100ULL)));
                        }
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                    if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                         >> 0x1fU)) {
                        if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x40000000000000ULL 
                                   | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x10000000000000ULL 
                                   | (0x67ffffffffffffULL 
                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0xa0000000000ULL 
                                   | (0x7fe1ffffffffffULL 
                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x3000000000ULL 
                                   | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x781fffffffffffULL 
                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1000000ULL | (0x7ffffff8ffffffULL 
                                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = ((0x7ffff3ffffffffULL 
                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                   | ((QData)((IData)(
                                                      ((0x800000U 
                                                        & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])
                                                        ? 0U
                                                        : 1U))) 
                                      << 0x22U));
                        } else {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                        }
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                     >> 0x1fU)) {
                    if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                        if ((0U != (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          >> 0xaU)))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                        } else {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x40000000000000ULL 
                                   | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x18000000000000ULL 
                                   | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0xa0000000000ULL 
                                   | (0x7fe1ffffffffffULL 
                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x3000000000ULL 
                                   | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x781fffffffffffULL 
                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x3000000ULL | (0x7ffffff8ffffffULL 
                                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x800000000ULL | 
                                   (0x7ffff3ffffffffULL 
                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        }
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x60000000000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x8000000000ULL | (0x7fe07fffffffffULL 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x6000000ULL | (0x7ffffff8ffffffULL 
                                           & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0xc00000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x1000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                            ? ((0x781fffffffffffULL 
                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                               | ((QData)((IData)((
                                                   (0x800U 
                                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                                                    ? 
                                                   ((0x400U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                                                     ? 0x17U
                                                     : 0x16U)
                                                    : 
                                                   ((0x400U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                                                     ? 0x1dU
                                                     : 0x1cU)))) 
                                  << 0x2dU)) : ((0x800U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                                                 ? 0x27d4400000100ULL
                                                 : 
                                                ((0x781fffffffffffULL 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                 | ((QData)((IData)(
                                                                    ((0x400U 
                                                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                                                                      ? 0x11U
                                                                      : 0x10U))) 
                                                    << 0x2dU))));
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
        if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
            if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                     >> 0x1fU)) {
                    if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x40000000000000ULL 
                               | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x120000000000ULL | 
                               (0x7fe1ffffffffffULL 
                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x6000000000ULL | (0x7fff8fffffffffULL 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x781fffffffffffULL 
                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x1000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                    if (((3U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                       >> 0x1cU))) 
                         | (2U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                         >> 0x1cU))))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x40000000000000ULL 
                               | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x7fe1ffffffffffULL 
                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x3000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                      >> 0x1aU)))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x4000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        }
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (((((((((0U == ((0x1f8U 
                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                  >> 0x14U)) 
                                              | (7U 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                    >> 0xaU)))) 
                                      | (0x100U == 
                                         ((0x1f8U & 
                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                          | (7U & (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                   >> 0xaU))))) 
                                     | (2U == ((0x1f8U 
                                                & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                   >> 0x14U)) 
                                               | (7U 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                     >> 0xaU))))) 
                                    | (3U == ((0x1f8U 
                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                  >> 0x14U)) 
                                              | (7U 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                    >> 0xaU))))) 
                                   | (4U == ((0x1f8U 
                                              & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                 >> 0x14U)) 
                                             | (7U 
                                                & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                   >> 0xaU))))) 
                                  | (6U == ((0x1f8U 
                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                >> 0x14U)) 
                                            | (7U & 
                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                >> 0xaU))))) 
                                 | (7U == ((0x1f8U 
                                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                               >> 0x14U)) 
                                           | (7U & 
                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                               >> 0xaU))))) 
                                | (1U == ((0x1f8U & 
                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                          | (7U & (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                   >> 0xaU)))))
                                ? ((0x781fffffffffffULL 
                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                   | ((QData)((IData)(
                                                      ((0U 
                                                        == 
                                                        ((0x1f8U 
                                                          & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                             >> 0x14U)) 
                                                         | (7U 
                                                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                               >> 0xaU))))
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         == 
                                                         ((0x1f8U 
                                                           & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                              >> 0x14U)) 
                                                          | (7U 
                                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                >> 0xaU))))
                                                         ? 8U
                                                         : 
                                                        ((2U 
                                                          == 
                                                          ((0x1f8U 
                                                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                               >> 0x14U)) 
                                                           | (7U 
                                                              & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                 >> 0xaU))))
                                                          ? 0x1aU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           ((0x1f8U 
                                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                >> 0x14U)) 
                                                            | (7U 
                                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                  >> 0xaU))))
                                                           ? 0x13U
                                                           : 
                                                          ((4U 
                                                            == 
                                                            ((0x1f8U 
                                                              & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                 >> 0x14U)) 
                                                             | (7U 
                                                                & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                   >> 0xaU))))
                                                            ? 4U
                                                            : 
                                                           ((6U 
                                                             == 
                                                             ((0x1f8U 
                                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                  >> 0x14U)) 
                                                              | (7U 
                                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                    >> 0xaU))))
                                                             ? 6U
                                                             : 
                                                            ((7U 
                                                              == 
                                                              ((0x1f8U 
                                                                & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                   >> 0x14U)) 
                                                               | (7U 
                                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                     >> 0xaU))))
                                                              ? 7U
                                                              : 1U))))))))) 
                                      << 0x2dU)) : 
                               ((5U == ((0x1f8U & (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                   >> 0x14U)) 
                                        | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                 >> 0xaU))))
                                 ? (0xa00000000000ULL 
                                    | (0x781fffffffffffULL 
                                       & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                 : ((0x105U == ((0x1f8U 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                    >> 0x14U)) 
                                                | (7U 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                      >> 0xaU))))
                                     ? (0x1a00000000000ULL 
                                        | (0x781fffffffffffULL 
                                           & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                     : 0x27d4400000100ULL)));
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        } else if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                    >> 0x1fU)) {
            if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x180000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x6000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x20000000000ULL | (0x7fe07fffffffffULL 
                                           & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x1000000000ULL | (0x7fffcfffffffffULL 
                                          & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = ((0x7ffffffff9ffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                       | ((QData)((IData)((3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                 >> 0xaU)))) 
                          << 0x11U));
                if ((1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                            >> 0xcU) | (3U == (3U & 
                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                >> 0xaU)))))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
        if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
            if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                 >> 0x1fU)) {
                if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x40000000000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0xa0000000000ULL | (0x7fe1ffffffffffULL 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x2000000000ULL | (0x7fffcfffffffffULL 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x781fffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x1000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                    >> 0x1fU)) {
            if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x40000000000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x20000000000ULL | (0x7fe1ffffffffffULL 
                                           & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x7fffcfffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x3000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                if ((0x1000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x800U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                            ? ((0x781fffffffffffULL 
                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                               | ((QData)((IData)((
                                                   (0x400U 
                                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                                                    ? 7U
                                                    : 6U))) 
                                  << 0x2dU)) : ((0x400U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                      >> 0x17U)))
                                                  ? 
                                                 (0xa00000000000ULL 
                                                  | (0x781fffffffffffULL 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  (0x1a00000000000ULL 
                                                   | (0x781fffffffffffULL 
                                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                   : 0x27d4400000100ULL))
                                                 : 
                                                (0x800000000000ULL 
                                                 | (0x781fffffffffffULL 
                                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))));
                } else if ((0x800U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x781fffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                           | ((QData)((IData)(((0x400U 
                                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])
                                                ? 0x13U
                                                : 0x1aU))) 
                              << 0x2dU));
                } else if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x200000000000ULL | (0x781fffffffffffULL 
                                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    if ((0U != (0x7fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                         >> 0x17U)))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x781fffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
        if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
            if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                 >> 0x1fU)) {
                if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x200ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0U == (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                         >> 0xaU)))
                            ? (0x10ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                            : ((1U == (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                             >> 0xaU)))
                                ? (8ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                : 0x27d4400000100ULL));
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
    } else if ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                >> 0x1fU)) {
        if ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x100000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x3000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x30000000000ULL | (0x7fe07fffffffffULL 
                                       & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x7fffcfffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = ((0x7ffffffff8ffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                   | ((QData)((IData)(((6U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                              >> 9U)) 
                                       | (1U & (~ (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                   >> 0xcU)))))) 
                      << 0x10U));
            if ((((7U == (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                >> 0xaU))) | (6U == 
                                              (7U & 
                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                >> 0xaU)))) 
                 | (3U == (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                 >> 0xaU))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__mul_en 
        = (1U & ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                        >> 0x21U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__div_en 
        = (1U & ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                        >> 0x1dU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (IData)((0U != (6U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffdU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x18U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 1U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffbU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x60U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 2U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x180U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 3U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffefU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x600U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffdfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x1800U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 5U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffbfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x6000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 6U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffff7fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x18000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 7U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffeffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x60000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 8U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffdffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x180000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 9U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffbffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x600000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xaU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffff7ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x1800000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xbU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffefffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x6000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xcU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffdfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x18000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xdU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffbfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x60000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xeU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xffffffe0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x1fU & ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                        ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                            << 0x1bU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 5U)) : 
                       ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                         << 0x16U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                      >> 0xaU)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfffffc1fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x3e0U & (((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                          ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                              << 0x11U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                           >> 0xfU))
                          : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                              << 0xcU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                          >> 0x14U))) 
                        << 5U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xffff83ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x7c00U & (((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                               << 7U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 0x19U))
                           : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                               << 2U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 0x1eU))) 
                         << 0xaU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfff07fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0xf8000U & (((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                << 0x1dU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 3U))
                            : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                << 0x18U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 8U))) 
                          << 0xfU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfe0fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x1f00000U & (((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                              ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                  << 0x13U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                               >> 0xdU))
                              : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                  << 0xeU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                              >> 0x12U))) 
                            << 0x14U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xc1ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x3e000000U & (((0x800U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                               ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                   << 9U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 0x17U))
                               : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                   << 4U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 0x1cU))) 
                             << 0x19U)));
    __Vtemp211 = (0x1fU & ((0x2000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                << 0x1fU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                             >> 1U))
                            : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                << 0x1aU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                             >> 6U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0x3fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (((0x2000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                    << 0x1fU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                 >> 1U)) : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                             << 0x1aU) 
                                            | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                               >> 6U))) 
              << 0x1eU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffffff8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (__Vtemp211 >> 2U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xffffff07U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf8U & (((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                         ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                             << 0x15U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0xbU))
                         : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                             << 0x10U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0x10U))) 
                       << 3U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xffffe0ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x1f00U & (((0x20000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                               << 0xbU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                           >> 0x15U))
                           : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                               << 6U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                         >> 0x1aU))) 
                         << 8U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffc1fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x3e000U & (((0x80000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                << 1U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0x1fU))
                            : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                << 0x1cU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                             >> 4U))) 
                          << 0xdU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xff83ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x7c0000U & (((0x200000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                             ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                 << 0x17U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 9U))
                             : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                 << 0x12U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 0xeU))) 
                           << 0x12U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xf07fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf800000U & (((0x800000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                              ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                  << 0xdU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 0x13U))
                              : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                  << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                            >> 0x18U))) 
                            << 0x17U)));
    __Vtemp217 = (0x1fU & ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                << 3U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                          >> 0x1dU))
                            : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                << 0x1eU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                             >> 2U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                    << 3U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                              >> 0x1dU)) : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                             << 0x1eU) 
                                            | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                               >> 2U))) 
              << 0x1cU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (__Vtemp217 >> 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xffffffc1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x3eU & (((0x8000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                         ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                             << 0x19U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                          >> 7U)) : 
                        ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                          << 0x14U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                       >> 0xcU))) << 1U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfffff83fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x7c0U & (((0x20000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                          ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                              << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                          >> 0x11U))
                          : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                              << 0xaU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                          >> 0x16U))) 
                        << 6U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events 
        = ((0xffc0U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events)) 
           | (0x3fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
    } else if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__priv_lvl_n 
            = (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                     >> 0xbU));
    } else if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__priv_lvl_n 
            = (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible 
        = (1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                    | (IData)((4U == (0x804U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_stopcount 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata 
                  >> 0xaU) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                              >> 0x13U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
            ? ((0x400U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((8U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                  ? 0U : ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))))) 
                                                    | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))))) 
                                                     | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))))) 
                                                      | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))) 
                                                        | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))) 
                                                        | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U)))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))) 
                                                        | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U)))))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                   (0x3eU 
                                                    & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                       << 1U))]
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                    (0x3eU 
                                                     & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                        << 1U))]
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (0x3eU 
                                                      & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                         << 1U))]
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3eU 
                                                        & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                           << 1U))]
                                                        : 
                                                       vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3eU 
                                                        & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                           << 1U))])
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3eU 
                                                        & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                           << 1U))]))))))))))
                : ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        (0x7c0U 
                                                         & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                            << 6U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                             << 6U))))))) 
                                                  | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                             << 6U))))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                             << 6U)))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U))))))) 
                                                   | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))))) 
                                                    | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))))) 
                                                     | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))))) 
                                                      | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U)))))))))))))
                            : ((0x40U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                 (0x3eU 
                                                  & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     << 1U))]
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                  (0x3eU 
                                                   & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                      << 1U))]
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                   (0x3eU 
                                                    & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                       << 1U))]
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                    (0x3eU 
                                                     & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                        << 1U))]
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (0x3eU 
                                                      & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                         << 1U))]))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? ((0x200U 
                                             & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? ((0x100U 
                                                 & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 0x1008064U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_rdata)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_rdata
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                          ? ((0x100U 
                                              & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                    (0x1fU 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))]
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                     (0x1fU 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))]
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                      (0x1fU 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))]
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                        (0x1fU 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))]
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0x40801104U
                                                         : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q))))))))
                                              : 0U)
                                          : ((0x100U 
                                              & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x80U 
                                               & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x40U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 0U))))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
        = ((0xffffdfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U]) 
           | (0x2000U & (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                          << 0xdU) | (0xffffe000U & 
                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata 
                                       << 0xbU)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
    } else if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                & (0U < (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
            = (3U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q) 
                     - (IData)(1U)));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                 & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_trans_ready))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
            }
        }
    } else if ((1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                       >> 6U) & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_trans_ready)))))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_trans_ready));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
            = ((2U > (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))
                : 0U);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound1 = 1U;
        if ((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
                = (((~ ((IData)(1U) << (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) 
                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int)) 
                   | (7U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound1) 
                            << (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))));
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid 
        = (((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
               >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid_q)
            ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid_q)
            : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_valid_1));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_en_gated)
            ? ((0x2000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])
                ? ((0x1000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])
                    ? ((~ vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[5U]) 
                       & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                           << 0xeU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                       >> 0x12U))) : 
                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[5U] 
                    | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                        << 0xeU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                    >> 0x12U)))) : 
               ((0x1000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])
                 ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[5U]
                 : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[5U]))
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[5U]);
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_en_gated) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int = 1U;
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xcU)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            }
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int = 0U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__lsu_en_gated 
        = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
            >> 0xdU) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__instr_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be 
        = ((0U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                         >> 0xbU))) ? ((0x4000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                        ? ((0x2000U 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                            ? 8U : 4U)
                                        : ((0x2000U 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                            ? 2U : 1U))
            : ((1U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                             >> 0xbU))) ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__split_q)
                                            ? 1U : 
                                           ((0x4000U 
                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? ((0x2000U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                 ? 8U
                                                 : 0xcU)
                                             : ((0x2000U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                 ? 6U
                                                 : 3U)))
                : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__split_q)
                    ? ((0x4000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                        ? ((0x2000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                            ? 7U : 3U) : ((0x2000U 
                                           & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                           ? 1U : 0U))
                    : ((0x4000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                        ? ((0x2000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                            ? 8U : 0xcU) : ((0x2000U 
                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? 0xeU
                                             : 0xfU)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_illegal 
        = (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
             >> 0xaU) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                         >> 0x10U)) & ((((0U != (3U 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                                    >> 0xeU))) 
                                         & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                            >> 0x10U)) 
                                        & (3U == (3U 
                                                  & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 0xaU)))) 
                                       | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__illegal_csr_read)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result 
        = (0x3ffffffffULL & (VL_MULS_QQQ(34,34,34, 
                                         (0x3ffffffffULL 
                                          & VL_EXTENDS_QI(34,32, 
                                                          ((0x400000U 
                                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U])
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                                            >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                                            : 
                                                           ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                                                             << 0xfU) 
                                                            | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                                                               >> 0x11U))))), 
                                         (0x3ffffffffULL 
                                          & VL_EXTENDS_QI(34,32, 
                                                          ((0x400000U 
                                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U])
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                                            >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                                            : 
                                                           ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                                                             << 0xfU) 
                                                            | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                                               >> 0x11U)))))) 
                             + VL_EXTENDS_QQ(34,33, vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if 
        = (((((((2U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                        [0U] >> 0x1cU)) | (6U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                  [0U] 
                                                  >> 0x1cU))) 
               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                  [0U] >> 2U)) & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                    [0U] >> 6U) & (3U 
                                                   == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))) 
                                  | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                      [0U] >> 3U) & 
                                     (0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))))) 
             & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                   >> 0x13U))) & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer))) 
           & ((0U == (0xfU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                              [0U] >> 7U))) ? (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                               == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])
               : ((2U == (0xfU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                  [0U] >> 7U))) ? (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                                   >= 
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                                   [0U])
                   : (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                      < vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                      [0U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
        = ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[3U])
            ? 0x27d4400000100ULL : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                         ? (- (0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                        >> 0x18U)))
                         : (0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                     >> 0x18U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed 
        = ((((((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_interruptible) 
                 & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible)) 
                & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing))) 
               & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb))) 
              & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb))) 
             & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q))) 
            & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
           & (2U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed 
        = ((((((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_interruptible) 
                 & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible)) 
                & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing))) 
               & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb))) 
              & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb))) 
             & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q) 
                   | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q)))) 
            & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
           & (2U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n 
        = (3U & (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                  & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready))
                  ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))
                  : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
        = ((0xffbfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U]) 
           | (0xc00000U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                             >> 8U) & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid)) 
                                       << 0x16U)) & 
                           ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__instr_valid) 
                            << 0x16U))));
    __Vfunc_csr_next_value__12__wdata = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__12__Vfuncout = (0xffffffc0U 
                                            & __Vfunc_csr_next_value__12__wdata);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_n 
        = __Vfunc_csr_next_value__12__Vfuncout;
    __Vfunc_csr_next_value__19__wdata = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__19__Vfuncout = __Vfunc_csr_next_value__19__wdata;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dscratch0_n 
        = __Vfunc_csr_next_value__19__Vfuncout;
    __Vfunc_csr_next_value__20__wdata = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__20__Vfuncout = __Vfunc_csr_next_value__20__wdata;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dscratch1_n 
        = __Vfunc_csr_next_value__20__Vfuncout;
    __Vfunc_csr_next_value__13__wdata = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__13__Vfuncout = __Vfunc_csr_next_value__13__wdata;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mscratch_n 
        = __Vfunc_csr_next_value__13__Vfuncout;
    __Vfunc_csr_next_value__26__wdata = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__26__Vfuncout = (0xffff0888U 
                                            & __Vfunc_csr_next_value__26__wdata);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mie_n 
        = __Vfunc_csr_next_value__26__Vfuncout;
    __Vfunc_csr_next_value__14__wdata = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__14__Vfuncout = (0xfffffffeU 
                                            & __Vfunc_csr_next_value__14__wdata);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_n 
        = __Vfunc_csr_next_value__14__Vfuncout;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_n 
                = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
                    << 0x17U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[2U] 
                                 >> 9U));
        }
    }
    __Vfunc_csr_next_value__15__wdata = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__15__Vfuncout = (0xfffffffeU 
                                            & __Vfunc_csr_next_value__15__wdata);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dpc_n 
        = __Vfunc_csr_next_value__15__Vfuncout;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dpc_n 
                = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
                    << 0x17U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[2U] 
                                 >> 9U));
        }
    }
    __Vfunc_csr_next_value__27__wdata = (0x800007ffU 
                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int);
    __Vfunc_csr_next_value__27__Vfuncout = (0x800007ffU 
                                            & __Vfunc_csr_next_value__27__wdata);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_n 
        = __Vfunc_csr_next_value__27__Vfuncout;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x7fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_n) 
                   | (0x80000000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[2U] 
                                     << 0x17U)));
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_n 
                = ((0xfffff800U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_n) 
                   | (0x7ffU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U] 
                                >> 9U)));
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_n 
                = (0xff00ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_n);
        }
    }
    __Vfunc_csr_next_value__16__wdata = (3U | ((0xf0000000U 
                                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                               | ((0x8000U 
                                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                  | ((0x800U 
                                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                     | ((0x400U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                        | ((0x1c0U 
                                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                                           | ((0x10U 
                                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                                              | (4U 
                                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int))))))));
    __Vfunc_csr_next_value__16__Vfuncout = (0x40000013U 
                                            | (0x8dc4U 
                                               & __Vfunc_csr_next_value__16__wdata));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_n 
        = __Vfunc_csr_next_value__16__Vfuncout;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xf0000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata) 
                         | ((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata) 
                            | ((0x1000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata) 
                               | ((0x800U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                  | ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                     | ((0x1c0U & (
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                                   >> 0xaU)) 
                                        | (0x14U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata))))))));
        }
    }
    __Vfunc_csr_next_value__21__wdata = (0x1800U | 
                                         (0x88U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int));
    __Vfunc_csr_next_value__21__Vfuncout = (0x1800U 
                                            | (0x88U 
                                               & __Vfunc_csr_next_value__21__wdata));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
        = __Vfunc_csr_next_value__21__Vfuncout;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
                = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
                = (0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n);
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xffffff7fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n) 
                   | (0x80U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                               << 4U)));
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x1800U | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n);
        }
    } else if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n) 
               | (8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                        >> 4U)));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x80U | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x1800U | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n);
    } else if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffdffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_n) 
               | (0xfffe0000U & (((3U == (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_rdata)) 
                                  << 0x11U) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q)));
    }
    __Vfunc_mtvec_mode_clint_resolve__25__next_value 
        = (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int);
    __Vfunc_mtvec_mode_clint_resolve__25__current_value 
        = (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    __Vfunc_mtvec_mode_clint_resolve__25__Vfuncout 
        = (((0U != (IData)(__Vfunc_mtvec_mode_clint_resolve__25__next_value)) 
            & (1U != (IData)(__Vfunc_mtvec_mode_clint_resolve__25__next_value)))
            ? (IData)(__Vfunc_mtvec_mode_clint_resolve__25__current_value)
            : (IData)(__Vfunc_mtvec_mode_clint_resolve__25__next_value));
    __Vfunc_csr_next_value__24__wdata = ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_mtvec_init_if)
                                            ? 0U : 
                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 7U)) 
                                          << 7U) | 
                                         ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                          | ((0x3cU 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                             | (3U 
                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_mtvec_init_if)
                                                    ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q
                                                    : (IData)(__Vfunc_mtvec_mode_clint_resolve__25__Vfuncout))))));
    __Vfunc_csr_next_value__24__Vfuncout = (0xffffff81U 
                                            & __Vfunc_csr_next_value__24__wdata);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mtvec_n 
        = __Vfunc_csr_next_value__24__Vfuncout;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n 
        = ((1U > vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int)
            ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mtval_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mtval_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tinfo_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tinfo_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dscratch1_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                    if ((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dscratch1_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dscratch0_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                    if ((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dscratch0_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mscratch_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mscratch_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                  >> 8U)))) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                if (
                                                    (2U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatush_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatush_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__misa_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__misa_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mip_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mip_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_we = 1U;
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
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcause_we = 1U;
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                    if ((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_we = 1U;
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
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dcsr_we = 1U;
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_we = 1U;
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
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_we = 1U;
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dpc_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                    if ((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dpc_we = 1U;
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
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__dpc_we = 1U;
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mtvec_we 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_mtvec_init_if;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mtvec_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x320U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = (0xdU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
           & (((((((((((((((((((((((((((((0x323U == 
                                          (0xfffU & 
                                           vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) 
                                         | (0x324U 
                                            == (0xfffU 
                                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                        | (0x325U == 
                                           (0xfffU 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                       | (0x326U == 
                                          (0xfffU & 
                                           vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                      | (0x327U == 
                                         (0xfffU & 
                                          vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                     | (0x328U == (0xfffU 
                                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                    | (0x329U == (0xfffU 
                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                   | (0x32aU == (0xfffU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                  | (0x32bU == (0xfffU 
                                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                 | (0x32cU == (0xfffU 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                                | (0x32dU == (0xfffU 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                               | (0x32eU == (0xfffU 
                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                              | (0x32fU == (0xfffU 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                             | (0x330U == (0xfffU & 
                                           vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                            | (0x331U == (0xfffU & 
                                          vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                           | (0x332U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                          | (0x333U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                         | (0x334U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                        | (0x335U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                       | (0x336U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                      | (0x337U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                     | (0x338U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                    | (0x339U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                   | (0x33aU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                  | (0x33bU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                 | (0x33cU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
                | (0x33dU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
               | (0x33eU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              | (0x33fU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mie_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mie_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_we = 1U;
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
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_we = 1U;
        }
    } else if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    } else if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tselect_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tselect_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U])) {
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_we = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U])) {
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_we = 1U;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb00U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffffdU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb01U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 1U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffffbU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb02U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 2U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb03U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 3U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffffefU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb04U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffffdfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb05U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 5U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffffbfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb06U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 6U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffff7fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb07U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 7U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffeffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb08U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 8U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffdffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb09U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 9U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffffbffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0aU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xaU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffff7ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0bU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xbU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffefffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0cU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xcU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffdfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0dU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xdU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffffbfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0eU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xeU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffff7fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb0fU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xfU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffeffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb10U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffdffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb11U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x11U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfffbffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb12U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x12U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfff7ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb13U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x13U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffefffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb14U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x14U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffdfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb15U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x15U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xffbfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb16U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x16U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xff7fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb17U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x17U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfeffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb18U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x18U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfdffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb19U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x19U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xfbffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1aU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1aU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xf7ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1bU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1bU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xefffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1cU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1cU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xdfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1dU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1dU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0xbfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1eU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1eU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((0x7fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int) 
               & (0xb1fU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1fU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be) 
                     & (0U == (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                               [0U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xdU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffffeU & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be) 
                                    & ((1U == (3U & 
                                               vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 1U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xbU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffffcU & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be) 
                                    & ((2U == (3U & 
                                               vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 2U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffff8U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be) 
                                    & ((3U == (3U & 
                                               vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 3U))));
    __Vtableidx6 = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb 
        = Vsoc_top_debug__ConstPool__TABLE_6b3161f8_0
        [__Vtableidx6];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb 
        = Vsoc_top_debug__ConstPool__TABLE_00ab2ffe_0
        [__Vtableidx6];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk1__DOT__b 
        = Vsoc_top_debug__ConstPool__TABLE_37c8e92b_0
        [__Vtableidx6];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk2__DOT__b 
        = Vsoc_top_debug__ConstPool__TABLE_2bb9808f_0
        [__Vtableidx6];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__xif_csr_error_ex 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__instr_valid) 
            & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                >> 7U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0U] 
                          >> 3U))) & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                       >> 0x10U) & 
                                      (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_illegal))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res 
        = (0x1ffffffffULL & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift)
                              ? (0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,32, vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))
                              : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__sys_en 
        = (1U & ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        >> 9U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__csr_en 
        = (1U & ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        >> 0x17U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
        = ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                          >> 8U))) ? ((1U & (IData)(
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 8U)))
                                       ? 0x27d4400000100ULL
                                       : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target 
        = ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                          >> 0x23U))) ? ((1U & (IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                        >> 0x22U)))
                                          ? (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                                               << 0xaU) 
                                              | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[3U] 
                                                 >> 0x16U)) 
                                             + (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                >> 0x1dU)))) 
                                                 << 0xdU) 
                                                | ((0x1000U 
                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                       >> 0x11U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                          << 6U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                             >> 0x12U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                               >> 5U)))))))
                                          : (((0x2000U 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp)
                                               ? ((
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                                                   << 0xeU) 
                                                  | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 0x12U))
                                               : ((0x2000U 
                                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp)
                                                   ? 
                                                  vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                                  [0U]
                                                   : 
                                                  vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                                  [0U])) 
                                             + vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__imm_i_type))
            : ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                              >> 0x22U))) ? (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                                               << 0xaU) 
                                              | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[3U] 
                                                 >> 0x16U)) 
                                             + (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                >> 0x1dU)))) 
                                                 << 0x14U) 
                                                | ((0xff000U 
                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                       << 2U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                          >> 7U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                            >> 0x12U))))))
                : ((0xffffffc0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   + (0x3fcU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                >> 8U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_en)
                                          ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                                              << 0xfU) 
                                             | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                                >> 0x11U))
                                          : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                              << 8U) 
                                             | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                >> 0x18U))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)) 
                << 0x20U) | (QData)((IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                             >> 0x20U))))
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x30U))))))
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                           >> 0x38U))))))
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                          >> 0x3cU))))))
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 2U) | (QData)((IData)((3U & (IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3eU))))))
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 1U) | (QData)((IData)((1U & (IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3fU))))))
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__irq_req_ctrl) 
                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause 
                            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__irq_id_ctrl;
                    }
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[2U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[3U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[4U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[5U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[6U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[7U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[8U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[9U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xaU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xbU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xcU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xdU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xeU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xfU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x10U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x11U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x12U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x13U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x14U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x15U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x16U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x17U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x18U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x19U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1aU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1bU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1cU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1dU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1eU];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1fU];
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WIII(1024,32,(0x3e0U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                             << 5U)), vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tselect_we) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk7__DOT__i = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_we) 
           & (0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_rdata;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_we) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = ((((0xfU == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_rdata 
                           >> 0x1cU)) | (2U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_rdata 
                                                >> 0x1cU))) 
                | (6U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_rdata 
                          >> 0x1cU))) ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int
                : (0x10008aeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_we) 
            & (0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    __Vfunc_mcontrol6_hit_resolve__28__next_value = 
        ((2U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
                >> 0x18U)) | (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 0x16U)));
    __Vfunc_mcontrol6_hit_resolve__28__current_value 
        = ((2U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                  [0U] >> 0x18U)) | (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 0x16U)));
    __Vfunc_mcontrol6_hit_resolve__28__Vfuncout = (
                                                   ((0U 
                                                     != (IData)(__Vfunc_mcontrol6_hit_resolve__28__next_value)) 
                                                    & (1U 
                                                       != (IData)(__Vfunc_mcontrol6_hit_resolve__28__next_value)))
                                                    ? (IData)(__Vfunc_mcontrol6_hit_resolve__28__current_value)
                                                    : (IData)(__Vfunc_mcontrol6_hit_resolve__28__next_value));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[0U] 
        = __Vfunc_mcontrol6_hit_resolve__28__Vfuncout;
    if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_we) 
         & (0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q))) {
        vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value 
            = (0xfU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 7U));
        vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__Vfuncout 
            = ((((0U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value)) 
                 & (2U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value))) 
                & (3U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value)))
                ? 0U : (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__next_value));
        vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__next_value 
            = (0xfU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 7U));
        vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__Vfuncout 
            = ((((0U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__next_value)) 
                 & (2U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__next_value))) 
                & (3U != (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__next_value)))
                ? 0U : (IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__next_value));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
            = ((2U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 0x1cU)) ? (0x28001000U | 
                                     (((IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__29__Vfuncout) 
                                       << 7U) | (0x47U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int)))
                : ((6U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x1cU)) ? (0x68001000U 
                                         | ((0x2000000U 
                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                [0U] 
                                                << 0x18U)) 
                                            | ((0x400000U 
                                                & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                   [0U] 
                                                   << 0x16U)) 
                                               | (((IData)(vlSelf->__Vfunc_mcontrol2_6_match_resolve__32__Vfuncout) 
                                                   << 7U) 
                                                  | (0x47U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int)))))
                    : ((5U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int 
                               >> 0x1cU)) ? ((0U != 
                                              (0xfefff751U 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_rdata))
                                              ? 0xf8000000U
                                              : (0x58000001U 
                                                 | (0x200U 
                                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int)))
                        : 0xf8000000U)));
    }
    if ((0x4000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U])) {
        if ((6U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] >> 0x1cU))) {
            if ((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U])) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0xfdffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0x400000U | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | (((~ vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
               & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
              & (0xb80U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffffdU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 1U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb81U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 1U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffffbU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 2U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb82U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 2U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 3U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb83U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 3U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffffefU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 4U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb84U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffffdfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 5U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb85U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 5U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffffbfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 6U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb86U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 6U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffff7fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 7U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb87U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 7U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffeffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 8U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb88U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 8U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffdffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 9U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb89U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 9U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffffbffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xaU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8aU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xaU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffff7ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xbU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8bU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xbU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffefffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xcU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8cU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xcU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffdfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xdU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8dU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xdU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffffbfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xeU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8eU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xeU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffff7fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0xfU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb8fU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0xfU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffeffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x10U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb90U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffdffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x11U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb91U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x11U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfffbffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x12U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb92U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x12U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfff7ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x13U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb93U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x13U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffefffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x14U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb94U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x14U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffdfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x15U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb95U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x15U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xffbfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x16U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb96U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x16U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xff7fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x17U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb97U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x17U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfeffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x18U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb98U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x18U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfdffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x19U)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb99U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x19U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xfbffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1aU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9aU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1aU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xf7ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1bU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9bU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1bU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xefffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1cU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9cU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1cU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xdfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1dU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9dU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1dU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0xbfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1eU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9eU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1eU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((0x7fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper) 
           | ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                    >> 0x1fU)) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_we_int)) 
               & (0xb9fU == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]))) 
              << 0x1fU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__csr_is_illegal 
        = ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_illegal) 
             & (~ ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                    >> 7U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0U] 
                              >> 3U)))) | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__xif_csr_error_ex)) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__instr_valid));
    vlSymsp->TOP__soc_top_debug__DOT__xif.commit = 
        ((0x1eU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0U] 
                   >> 3U)) | (1U & (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__xif_csr_error_ex) 
                                     | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                        >> 0xeU)) | 
                                    (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                       >> 7U) & (~ 
                                                 (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0U] 
                                                  >> 3U))) 
                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                        >> 0xaU)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__last_op_id 
        = (1U & ((~ (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__sys_en) 
                      & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                 >> 2U))) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                             >> 0x1eU))) 
                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[0U] 
                    >> 1U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__sys_en) 
            & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 2U))) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                   >> 0x1eU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__lsu_en 
        = (1U & ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0x14U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__alu_en 
        = (1U & ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0x36U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__illegal_insn 
        = (1U & ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 8U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n = 0U;
    if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                ? ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                    ? ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                        ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                        : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[1U] 
                            << 0x1dU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[0U] 
                                         >> 3U))) : 
                   ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                     ? (0x7cU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[5U] 
                                 >> 0xfU)) : ((0xffffff80U 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                              | (0x7cU 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[5U] 
                                                    >> 0xaU)))))
                : ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                    ? 0U : ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                             ? ((0xffffff80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                | (0x7cU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[5U] 
                                            >> 0x19U)))
                             : (0xffffff80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))));
    } else if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])) {
        if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])) {
            if ((1U & (~ vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U]))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n 
                    = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
                        << 0x17U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[2U] 
                                     >> 9U));
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n 
                = ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                    ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                        << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                                  >> 0x18U)) : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target);
        }
    } else if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])) {
        if ((1U & (~ vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U]))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n 
                = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q;
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n 
            = ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                ? ((0xfffffffcU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | ((2U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                             & ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                                    >> 5U)) << 1U))) 
                      | (1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q)))
                : 0U);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x20000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
        if ((0x10000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
            if ((0x8000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                if ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                    if ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                      >> 0x18U)))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                                = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                     >> 0x19U)))) {
                    if ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                            = (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                    }
                }
            } else if ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                    }
                } else {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                            ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                            : ((0xff000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U]) 
                               | ((0xff0000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                << 0x10U)) 
                                  | ((0xff00U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU]) 
                                     | (0xffU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x10U))))));
                }
            } else if ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                              >> 0x18U)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                        = (((- (IData)((0U != (0xffU 
                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                  >> 0x10U))))) 
                            << 0x18U) | ((0xff0000U 
                                          & ((- (IData)(
                                                        (0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                             >> 8U))))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & ((- (IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                              >> 0x18U))))))));
                }
            } else if ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                    = (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
            }
        } else if ((0x8000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                            ? (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                 << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)) 
                               & (~ ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                      << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                >> 0x18U))))
                            : (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                 << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)) 
                               | (~ ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                      << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                >> 0x18U)))));
                } else if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                     >> 0x18U)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                        = (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                             << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                       >> 0x18U)) ^ 
                           (~ ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                          >> 0x18U))));
                }
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                        ? 0U : ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                                 ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                 : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_result)));
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                = ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                    ? ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                        ? ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                            ? 0U : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                            ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                    : ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                        ? ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                            ? (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x1aU) : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                            ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                            : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_result))));
        }
    } else if ((0x10000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
        if ((0x8000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                          >> 0x1aU)))) {
                if ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                            = (1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                        | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))));
                    }
                }
            }
        } else if ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                          >> 0x19U)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                        ? (0xffffU & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                       << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                 >> 0x18U)))
                        : (((- (IData)((1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                              >> 7U)))) 
                            << 0x10U) | (0xffffU & 
                                         ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                           << 8U) | 
                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)))));
            }
        } else if ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                = ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                    ? (1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))))
                    : (((- (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                    >> 0x1fU))) << 8U) 
                       | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                          >> 0x18U)));
        }
    } else if ((0x8000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
        if ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                          >> 0x19U)))) {
                if ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                        = (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                }
            }
        } else if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                             >> 0x19U)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                          >> 0x18U)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
                    = (IData)((0x1ffffffffULL & (((1ULL 
                                                   | ((QData)((IData)(
                                                                      ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                                        << 8U) 
                                                                       | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                                          >> 0x18U)))) 
                                                      << 1U)) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0x8000000U 
                                                                      & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                                                                      ? 
                                                                     (~ 
                                                                      ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                                        << 8U) 
                                                                       | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                                          >> 0x18U)))
                                                                      : 
                                                                     ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                                       << 8U) 
                                                                      | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                                         >> 0x18U))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                                         >> 0x1bU)))))) 
                                                 >> 1U)));
            }
        }
    } else if ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
            = ((0x2000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                ? ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                    ? (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U)))
                    : (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U))))
                : ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                    ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                    : (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) ^ ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U)))));
    } else if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                         >> 0x19U)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result 
            = ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (IData)((0x1ffffffffULL & (((1ULL 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                                    << 8U) 
                                                                   | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                                      >> 0x18U)))) 
                                                  << 1U)) 
                                              + (((QData)((IData)(
                                                                  ((0x8000000U 
                                                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])
                                                                    ? 
                                                                   (~ 
                                                                    ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                                      << 8U) 
                                                                     | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                                        >> 0x18U)))
                                                                    : 
                                                                   ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                                     << 8U) 
                                                                    | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                                       >> 0x18U))))) 
                                                  << 1U) 
                                                 | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                                       >> 0x1bU)))))) 
                                             >> 1U))));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[5U] 
        = ((0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[5U]) 
           | (0xfffff000U & (((((0U == (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)) 
                                | (3U == (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)))
                                ? 0U : (0x1fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause))) 
                              << 0x1bU) | ((0x7fe0000U 
                                            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause) 
                                               << 0x11U)) 
                                           | (((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))
                                                ? 0xfU
                                                : 0U) 
                                              << 0xcU)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tselect_we) {
        if ((0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n)) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r 
                = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                [0U];
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_we) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tselect_we));
    if ((0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r 
            = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) 
               | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tselect_we));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
        [0U];
    if ((0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
            [0U];
    }
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tselect_we) {
        if ((0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n)) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r 
                = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                [0U];
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (1U & ((((~ vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
                      & (~ vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) 
                     & (~ vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcountinhibit_q)) 
                    & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_stopcount)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffffbU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (4U & ((((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                            >> 2U)) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                          >> 2U))) 
                       & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcountinhibit_q 
                             >> 2U))) & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_stopcount))) 
                     << 2U) & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events) 
                               << 1U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | ((((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                      >> 3U)) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                    >> 3U))) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                   >> 3U))) 
                & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_stopcount))) 
               & (0U != ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events) 
                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_rdata[3U]))) 
              << 3U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
        = ((0xffffefffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U]) 
           | (0x1000U & (((IData)(vlSymsp->TOP__soc_top_debug__DOT__xif.commit) 
                          | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q)) 
                         << 0xcU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__alu_en) 
            & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 0x34U))) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                      >> 0x1eU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_re_id 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__illegal_insn)
            ? 3U : (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                  >> 0x19U))));
    vlSymsp->TOP__soc_top_debug__DOT__xif.issue_valid 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__instr_valid) 
            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__illegal_insn) 
               | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__csr_en))) 
           & (~ (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q) 
                  | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)) 
                 | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                    >> 4U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_trans_addr 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_trans_addr 
                = ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                    ? (0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n)
                    : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q);
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_trans_addr 
            = ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])
                ? (0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q)));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_wdata_ex 
        = ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xbU])
            ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result
            : ((0x800000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U])
                ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)
                : ((0x80000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U])
                    ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                        ? (- vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                        : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                    : ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U])
                        ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_rdata_int
                        : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_result))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffffcULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (1ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (2ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (3ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffffcfULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x10ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x20ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x30ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffff3fULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x40ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x80ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0xc0ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
        = (IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U]))) 
                   >> 0x20U));
    if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = (IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = (IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                       >> 0x20U));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
        = (IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U]))) 
                   >> 0x20U));
    if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = (IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = (IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                       >> 0x20U));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[6U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
        = (IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_rdata[6U]))) 
                   >> 0x20U));
    if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = (IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = (IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))) 
                       >> 0x20U));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id 
        = ((((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
               & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                     >> 0x17U))) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                                       >> 0xcU))) | 
             (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                  >> 0x17U)) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                                   >> 0xaU)))) | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
                                                  & (~ 
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                                                      >> 0xaU)))) 
           & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)) 
           | ((((0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[3U] 
                          >> 0x13U)) == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                [0U]) & (0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                         [0U])) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_re_id)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)) 
           | ((((0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                          >> 0x12U)) == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                [0U]) & (0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                         [0U])) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_re_id)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)) 
           | (0xfffffffeU & (((((0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[3U] 
                                          >> 0x13U)) 
                                == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                [1U]) & (0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                         [1U])) << 1U) 
                             & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_re_id))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)) 
           | (0xfffffffeU & (((((0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                                          >> 0x12U)) 
                                == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                [1U]) & (0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                         [1U])) << 1U) 
                             & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_re_id))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__xif_id 
        = (0xfU & ((((IData)(vlSymsp->TOP__soc_top_debug__DOT__xif.issue_valid) 
                     | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                    | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))
                    ? ((IData)(1U) + ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[2U] 
                                       << 0x1dU) | 
                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[1U] 
                                       >> 3U))) : (
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[2U] 
                                                    << 0x1dU) 
                                                   | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[1U] 
                                                      >> 3U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__xif_waiting 
        = ((((IData)(vlSymsp->TOP__soc_top_debug__DOT__xif.issue_valid) 
             & (0U != (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__state))) 
            & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q))) 
           & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__core_trans 
        = (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
            << 6U) | (QData)((IData)((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp) 
                                       << 2U) | (1U 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                                    >> 0x14U))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
        = (0x1fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp);
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                = (0x20000U | (0xffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp));
        }
        if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                = (0x8000U | (0x33fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp));
        }
    }
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) {
        if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                = (0x10000U | (0xffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp));
        }
        if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                = (0x4000U | (0x33fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp));
        }
    }
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
                = (0x2000U | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp);
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__instr_valid) 
           & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__xif_waiting)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 9U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if ((((0xf0000000U <= (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__core_trans 
                                   >> 6U))) & (0xf0003fffU 
                                               >= (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__core_trans 
                                                           >> 6U)))) 
         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__core_trans))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__core_trans;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = ((0x3fffffffcfULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o) 
           | ((QData)((IData)((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U]))) 
              << 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                  >> 3U)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    vlSymsp->TOP__soc_top_debug__DOT__cpu_inst__DOT__m_c_obi_instr_if.req_payload 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o);
    __Vtableidx1 = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                     << 5U) | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err) 
                                << 4U) | (((1U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n)) 
                                           << 3U) | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__state_q))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__state_n 
        = Vsoc_top_debug__ConstPool__TABLE_0f26d9b8_0
        [__Vtableidx1];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status 
        = Vsoc_top_debug__ConstPool__TABLE_06cbfe99_0
        [__Vtableidx1];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vsoc_top_debug__ConstPool__TABLE_133910eb_0
        [__Vtableidx1];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vsoc_top_debug__ConstPool__TABLE_8e48073d_0
        [__Vtableidx1];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vsoc_top_debug__ConstPool__TABLE_d86bdde2_0
        [__Vtableidx1];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vsoc_top_debug__ConstPool__TABLE_9553c2b4_0
        [__Vtableidx1];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_trans_ready 
        = (1U & (((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)) 
                  & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core))) 
                 | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
    vlSymsp->TOP__soc_top_debug__DOT__cpu_inst__DOT__m_c_obi_instr_if.s_req 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) 
           | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
              & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
        = ((0x7fffffffcULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o) 
           | (IData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
            if (vlSelf->soc_top_debug__DOT__instr_gnt) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 0U;
            }
        }
    } else if (((IData)(vlSymsp->TOP__soc_top_debug__DOT__cpu_inst__DOT__m_c_obi_instr_if.s_req) 
                & (~ (IData)(vlSelf->soc_top_debug__DOT__instr_gnt)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
        = ((0x68U >= (0x7fU & ((IData)(0x23U) * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
            ? (0x7ffffffffULL & (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                  (((IData)(0x22U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x23U) 
                                                                      * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) 
                                    | ((QData)((IData)(
                                                       vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x23U) 
                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))))
            : 0ULL);
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
    } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
            if ((3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                      >> 3U))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U))));
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                    ? (3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U))))
                    : (3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U)))));
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
    } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
            if ((3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                      >> 3U))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U))));
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                    ? (3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U))))
                    : (3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U)))));
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0U;
    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                  >> 6U)))) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins 
                = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q)
                    ? ((3U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                             >> 3U))))
                        ? 1U : ((3U == (3U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                      >> 0x13U))))
                                 ? 1U : 2U)) : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                              >> 0x13U))))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                              >> 0x13U))))
                                                  ? 1U
                                                  : 2U)));
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
        = (((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
               >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            ? ((0x68U >= (0x7fU & ((IData)(3U) + ((IData)(0x23U) 
                                                  * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                ? (((0U == (0x1fU & ((IData)(3U) + 
                                     ((IData)(0x23U) 
                                      * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                     ? 0U : (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (((IData)(0x1fU) + (0x7fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(3U) 
                                                + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                   | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                      (3U & (((IData)(3U) + ((IData)(0x23U) 
                                             * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                             >> 5U))] >> (0x1fU & ((IData)(3U) 
                                                   + 
                                                   ((IData)(0x23U) 
                                                    * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                : 0U) : (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                 >> 3U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
        = ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])
            ? 0U : (7U & (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                           + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                          - ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                              ? 1U : 0U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
           & (~ (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                  | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                 | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                         >> 0x10U))) & (~ (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                            | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                                           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr;
    if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
    } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
        = ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
            ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                ? (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))
                : (2U | (0xfffffffcU & ((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))))
            : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)
                ? (2U | (0xfffffffcU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))
                : (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_valid 
        = ((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
               >> 0x10U)) & ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                              ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid) 
                                 & ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                      | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                                     | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))
                                     ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                     : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                                         ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                         : (((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                            | (((2U 
                                                 >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                   >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                               & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))))))
                              : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 0U;
    if (((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
         & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
            >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                       * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x23U) 
                                               * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                               ? 0U : (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x23U) 
                                             * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x23U) 
                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x23U) 
                                        * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x23U) 
                                          * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                    : 0U);
        } else if (((0U != ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))
                             ? (3U & (((0U == (0x1fU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))
                                        ? 0U : (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                (((IData)(1U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                                      | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                         (3U & (((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                             : 0U)) | (0U != ((0x68U 
                                               >= (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x23U) 
                                                             * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                     | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                        (3U 
                                                         & (((IData)(0x23U) 
                                                             * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                               : 0U)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
        }
    } else if (((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                   >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                       * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x23U) 
                                               * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                               ? 0U : (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x23U) 
                                             * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x23U) 
                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x23U) 
                                        * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x23U) 
                                          * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                    : 0U);
        } else if (((0U != ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                             ? (3U & (((0U == (0x1fU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                        ? 0U : (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                (((IData)(1U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                      | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                         (3U & (((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                             : 0U)) | (0U != (3U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o))))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
            = (3U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
        = (1U & (((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                  & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))
                  ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                      ? ((0x68U >= (0x7fU & ((IData)(2U) 
                                             + ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                         & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                            (3U & (((IData)(2U) + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                   >> 5U))] >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   ((IData)(0x23U) 
                                                    * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                      : (((0x68U >= (0x7fU & ((IData)(2U) 
                                              + ((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                          & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (3U & (((IData)(2U) + 
                                     ((IData)(0x23U) 
                                      * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                         | ((0x68U >= (0x7fU & ((IData)(2U) 
                                                + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                               (3U & (((IData)(2U) 
                                       + ((IData)(0x23U) 
                                          * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0x23U) 
                                                       * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))
                  : (((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                      & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                         >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                      ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                          ? ((0x68U >= (0x7fU & ((IData)(2U) 
                                                 + 
                                                 ((IData)(0x23U) 
                                                  * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(2U) 
                                        + ((IData)(0x23U) 
                                           * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(2U) 
                                          + ((IData)(0x23U) 
                                             * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                          : (((0x68U >= (0x7fU & ((IData)(2U) 
                                                  + 
                                                  ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                              & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                 (3U & (((IData)(2U) 
                                         + ((IData)(0x23U) 
                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(2U) 
                                           + ((IData)(0x23U) 
                                              * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                        >> 2U)))) : (IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                             >> 2U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_valid 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_valid) 
            & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0x10U))) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                    >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
        = (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
            << 3U) | (QData)((IData)(((4U & ((((2U 
                                                >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                               & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                  >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                               ? ((0x68U 
                                                   >= 
                                                   (0x7fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       ((IData)(0x23U) 
                                                        * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (3U 
                                                      & (((IData)(2U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                               : (IData)(
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                          >> 2U))) 
                                             << 2U)) 
                                      | (3U & (((2U 
                                                 >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                   >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                                ? (
                                                   (0x68U 
                                                    >= 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                      (((IData)(1U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                    | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                    : 0U)
                                                : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o)))))));
    if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0x10U)))) {
        if ((2U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                = (((QData)((IData)((((2U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                      & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                         >> (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))
                                      ? ((((0x68U >= 
                                            (0x7fU 
                                             & ((IData)(3U) 
                                                + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                            ? (0xffffU 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        ((IData)(0x23U) 
                                                         * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                    (((IData)(0xfU) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) 
                                                  | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (3U 
                                                      & (((IData)(3U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                            : 0U) << 0x10U) 
                                         | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U))
                                      : (((IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                   >> 3U)) 
                                          << 0x10U) 
                                         | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U))))) 
                    << 3U) | (QData)((IData)((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned) 
                                               << 2U) 
                                              | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned)))));
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((0U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x12U)))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x11U)))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x10U)))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x10U)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xfU)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xeU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xdU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 9U)))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x11U)))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0xffU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 8U))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((1U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 3U))))) {
            if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x12U)))) {
                if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x11U))))) {
                    if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x10U))))) {
                        if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xeU)))) {
                            if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xdU)))) {
                                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0xfU)))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 9U)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 8U)))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 6U)))) {
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U))))) {
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 6U)))) {
                                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                            } else if (
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 5U)))) {
                                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0xfU)))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x11U)))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    if ((0U == ((0x20U & ((IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0xfU)) 
                                          << 5U)) | 
                                (0x1fU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 5U)))))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((2U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 3U))))) {
            if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x12U)))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x11U)))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x10U)))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x10U)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                             >> 0xfU))))) {
                    if ((0U == (0x1fU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 5U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 0xaU))))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x11U)))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (IData)(
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                    >> 0xaU))))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_compressed 
        = ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)) 
           & (3U != (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 3U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_pushpop = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                }
                            }
                        } else if ((0U == (3U & (IData)(
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 7U))))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                            }
                        } else if ((2U == (3U & (IData)(
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 7U))))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU))))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((3U == (3U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 8U))))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_pushpop_reg_length__1__rlist4 = (0xfU & (IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 7U)));
    __Vfunc_pushpop_reg_length__1__Vfuncout = (((((
                                                   ((((0U 
                                                       == (IData)(__Vfunc_pushpop_reg_length__1__rlist4)) 
                                                      | (1U 
                                                         == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                     | (2U 
                                                        == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                    | (3U 
                                                       == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                   | (4U 
                                                      == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                  | (5U 
                                                     == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                 | (6U 
                                                    == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                | (7U 
                                                   == (IData)(__Vfunc_pushpop_reg_length__1__rlist4)))
                                                ? (
                                                   (0U 
                                                    == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                      ? 0U
                                                      : 
                                                     ((3U 
                                                       == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                        ? 0U
                                                        : 
                                                       ((5U 
                                                         == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                         ? 1U
                                                         : 
                                                        ((6U 
                                                          == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                          ? 2U
                                                          : 3U)))))))
                                                : (
                                                   ((((((((8U 
                                                           == (IData)(__Vfunc_pushpop_reg_length__1__rlist4)) 
                                                          | (9U 
                                                             == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                         | (0xaU 
                                                            == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                        | (0xbU 
                                                           == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                       | (0xcU 
                                                          == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                      | (0xdU 
                                                         == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                     | (0xeU 
                                                        == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))) 
                                                    | (0xfU 
                                                       == (IData)(__Vfunc_pushpop_reg_length__1__rlist4)))
                                                    ? 
                                                   ((8U 
                                                     == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                     ? 4U
                                                     : 
                                                    ((9U 
                                                      == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                      ? 5U
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                       ? 6U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                        ? 7U
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                         ? 8U
                                                         : 
                                                        ((0xdU 
                                                          == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                          ? 9U
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(__Vfunc_pushpop_reg_length__1__rlist4))
                                                           ? 0xaU
                                                           : 0xcU)))))))
                                                    : 0U));
    __Vfunc_get_stack_adj_base__0__rlist = (0xfU & (IData)(
                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 7U)));
    __Vfunc_get_stack_adj_base__0__Vfuncout = (((((4U 
                                                   == (IData)(__Vfunc_get_stack_adj_base__0__rlist)) 
                                                  | (5U 
                                                     == (IData)(__Vfunc_get_stack_adj_base__0__rlist))) 
                                                 | (6U 
                                                    == (IData)(__Vfunc_get_stack_adj_base__0__rlist))) 
                                                | (7U 
                                                   == (IData)(__Vfunc_get_stack_adj_base__0__rlist)))
                                                ? 0x10U
                                                : (
                                                   ((((8U 
                                                       == (IData)(__Vfunc_get_stack_adj_base__0__rlist)) 
                                                      | (9U 
                                                         == (IData)(__Vfunc_get_stack_adj_base__0__rlist))) 
                                                     | (0xaU 
                                                        == (IData)(__Vfunc_get_stack_adj_base__0__rlist))) 
                                                    | (0xbU 
                                                       == (IData)(__Vfunc_get_stack_adj_base__0__rlist)))
                                                    ? 0x20U
                                                    : 
                                                   ((((0xcU 
                                                       == (IData)(__Vfunc_get_stack_adj_base__0__rlist)) 
                                                      | (0xdU 
                                                         == (IData)(__Vfunc_get_stack_adj_base__0__rlist))) 
                                                     | (0xeU 
                                                        == (IData)(__Vfunc_get_stack_adj_base__0__rlist)))
                                                     ? 0x30U
                                                     : 
                                                    ((0xfU 
                                                      == (IData)(__Vfunc_get_stack_adj_base__0__rlist))
                                                      ? 0x40U
                                                      : 0U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)((((IData)(__Vfunc_get_stack_adj_base__0__Vfuncout) 
                                << 4U) | (IData)(__Vfunc_pushpop_reg_length__1__Vfuncout)))) 
              << 0x1dU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_decompressed 
            = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_decompressed) 
               | ((QData)((IData)(((0U == (3U & (IData)(
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 3U))))
                                    ? ((1U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x11U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))
                                                : (0x842023U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x19U)) 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | ((0xc00U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xdU)) 
                                                                      << 0xaU)) 
                                                                  | (0x200U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 9U)) 
                                                                        << 9U)))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xfU)))
                                                    ? 
                                                   (0x841023U 
                                                    | ((0x700000U 
                                                        & ((IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 5U)) 
                                                           << 0x14U)) 
                                                       | ((0x38000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xaU)) 
                                                              << 0xfU)) 
                                                          | (0x100U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 8U)) 
                                                                << 8U)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xeU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xdU)))
                                                      ? 
                                                     (0x841023U 
                                                      | ((0x700000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0x14U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | (0x100U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 8U)) 
                                                                  << 8U)))))
                                                      : 
                                                     (0x840023U 
                                                      | ((0x700000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0x14U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | ((0x100U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 8U)) 
                                                                   << 8U)) 
                                                               | (0x80U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 9U)) 
                                                                     << 7U)))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xdU)))
                                                      ? 
                                                     (0x41403U 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 8U)) 
                                                             << 0x15U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | ((0x4000U 
                                                                & ((~ (IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 9U))) 
                                                                   << 0xeU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U))))))
                                                      : 
                                                     (0x44403U 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 8U)) 
                                                             << 0x15U)) 
                                                         | ((0x100000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))))))
                                        : ((1U & (IData)(
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x11U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))
                                                : (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))
                                                : (0x10413U 
                                                   | ((0x3c000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xaU)) 
                                                          << 0x1aU)) 
                                                      | ((0x3000000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xeU)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 8U)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 9U)) 
                                                                   << 0x16U)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U))))))))))
                                    : ((1U == (3U & (IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 3U))))
                                        ? ((1U & (IData)(
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x11U)))
                                                ? (0x40063U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xfU))))) 
                                                       << 0x1cU) 
                                                      | ((0xc000000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 8U)) 
                                                             << 0x1aU)) 
                                                         | ((0x2000000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x19U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | ((0x1000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x10U)) 
                                                                      << 0xcU)) 
                                                                  | ((0xc00U 
                                                                      & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xdU)) 
                                                                         << 0xaU)) 
                                                                     | ((0x300U 
                                                                         & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 6U)) 
                                                                            << 8U)) 
                                                                        | (0x80U 
                                                                           & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU)) 
                                                                              << 7U))))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? 
                                                   (0x6fU 
                                                    | (((IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)) 
                                                        << 0x1fU) 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xbU)) 
                                                              << 0x1eU)) 
                                                          | ((0x30000000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0x1cU)) 
                                                             | ((0x8000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 9U)) 
                                                                    << 0x1bU)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x2000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 5U)) 
                                                                          << 0x19U)) 
                                                                      | ((0x1000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xeU)) 
                                                                             << 0x18U)) 
                                                                         | ((0xe00000U 
                                                                             & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 6U)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                                                << 0xcU)) 
                                                                               | (0x80U 
                                                                                & ((~ (IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x12U))) 
                                                                                << 7U))))))))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xeU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xdU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 9U)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 8U)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 7U)))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 6U)))
                                                           ? 
                                                          (0x847433U 
                                                           | ((0x700000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | ((0x38000U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 0xfU)) 
                                                                 | (0x380U 
                                                                    & ((IData)(
                                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                       << 7U)))))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)))
                                                            ? 
                                                           (0xfff44413U 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))
                                                            : 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U)))))))
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 6U)))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)))
                                                            ? 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U)))))
                                                            : 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U))))))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)))
                                                            ? 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U)))))
                                                            : 
                                                           (0xff47413U 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U)))))))
                                                         : 
                                                        (0x2840433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))
                                                        : 
                                                       (0x847433U 
                                                        | ((0x700000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 9U)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 8U)))
                                                         ? 
                                                        (0x847433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U)))))
                                                         : 
                                                        (0x846433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 8U)))
                                                         ? 
                                                        (0x844433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U)))))
                                                         : 
                                                        (0x40840433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))))
                                                      : 
                                                     (0x47413U 
                                                      | (((- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                          << 0x1aU) 
                                                         | ((0x2000000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xfU)) 
                                                                << 0x19U)) 
                                                            | ((0x1f00000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U))))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)))
                                                      ? 
                                                     (0x45413U 
                                                      | ((0x40000000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x1eU)) 
                                                         | ((0x1f00000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 5U))))
                                                       ? 
                                                      (0x45413U 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xdU)) 
                                                              << 0x1eU)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0x14U)) 
                                                             | ((0x38000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 0xfU)) 
                                                                | (0x380U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 7U))))))
                                                       : 
                                                      (0x45413U 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xdU)) 
                                                              << 0x1eU)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0x14U)) 
                                                             | ((0x38000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 0xfU)) 
                                                                | (0x380U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 7U)))))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x11U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 5U)) 
                                                      | (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 5U)))))
                                                     ? 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0xcU)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U)))))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xaU))))
                                                      ? 
                                                     (0x10113U 
                                                      | (((- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                          << 0x1dU) 
                                                         | ((0x18000000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 6U)) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 8U)) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 5U)) 
                                                                      << 0x19U)) 
                                                                  | (0x1000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 9U)) 
                                                                        << 0x18U)))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xaU))))
                                                       ? 
                                                      (0x37U 
                                                       | (((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                           << 0x11U) 
                                                          | ((0x1f000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0xcU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 7U)))))
                                                       : 
                                                      (0x37U 
                                                       | (((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                           << 0x11U) 
                                                          | ((0x1f000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0xcU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 7U))))))))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xaU))))
                                                     ? 
                                                    (0x13U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                         << 0x1aU) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    (0x13U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                         << 0x1aU) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? 
                                                   (0x6fU 
                                                    | (((IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)) 
                                                        << 0x1fU) 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xbU)) 
                                                              << 0x1eU)) 
                                                          | ((0x30000000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0x1cU)) 
                                                             | ((0x8000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 9U)) 
                                                                    << 0x1bU)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x2000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 5U)) 
                                                                          << 0x19U)) 
                                                                      | ((0x1000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xeU)) 
                                                                             << 0x18U)) 
                                                                         | ((0xe00000U 
                                                                             & ((IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 6U)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                                                << 0xcU)) 
                                                                               | (0x80U 
                                                                                & ((~ (IData)(
                                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x12U))) 
                                                                                << 7U))))))))))))
                                                    : 
                                                   (0x13U 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xfU))))) 
                                                        << 0x1aU) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xfU)) 
                                                              << 0x19U)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0x14U)) 
                                                             | ((0xf8000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 0xfU)) 
                                                                | (0xf80U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 7U))))))))))
                                        : ((2U == (3U 
                                                   & (IData)(
                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                              >> 3U))))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x12U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x11U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x10U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    (0x12023U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xaU)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | (0xe00U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xcU)) 
                                                                    << 9U)))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x10U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 5U))))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU))))
                                                        ? 0x100073U
                                                        : 
                                                       (0xe7U 
                                                        | (0xf8000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xaU)) 
                                                              << 0xfU))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0xf8000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U)))))
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0xf8000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U)))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 5U))))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U))))
                                                        : 
                                                       (0x67U 
                                                        | (0xf8000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xaU)) 
                                                              << 0xfU))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U))))
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U)))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x11U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x10U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U)))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x10U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)))
                                                      ? 
                                                     (0x1013U 
                                                      | ((0x1f00000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0x14U)) 
                                                         | ((0xf8000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | (0xf80U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 7U)))))
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 5U)))) 
                                                       | (0U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xaU)))))
                                                       ? 
                                                      (0x1013U 
                                                       | ((0x1f00000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)) 
                                                              << 0x14U)) 
                                                          | ((0xf8000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 0xfU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 7U)))))
                                                       : 
                                                      (0x1013U 
                                                       | ((0x1f00000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)) 
                                                              << 0x14U)) 
                                                          | ((0xf8000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 0xfU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 7U))))))))))
                                            : (IData)(
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 3U))))))) 
                  << 3U));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xdU))))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            }
                        } else if ((0U != (3U & (IData)(
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((2U == (3U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_tbljmp = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU))))) {
                    if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xeU))))) {
                        if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x3fU 
                                                   & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q)))))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_tbljmp = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s 
        = ((7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                          >> 0xaU))) != (7U & (IData)(
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 5U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffe001ffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)((0xfffU & ((IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                  >> 0x21U)) 
                                         + (0x30U & 
                                            ((IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 5U)) 
                                             << 4U)))))) 
              << 0x11U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffffffffe0ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | (IData)((IData)((0x1fU & (((0xfU & (IData)(
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                         >> 0x1dU))) 
                                        - (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                       - (IData)(1U))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__abort_op_if 
        = (1U & ((IData)((0ULL != (7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_decompressed))) 
                 | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (~ (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU))))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((3U != (3U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 8U))))) {
                                if ((1U == (3U & (IData)(
                                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 8U))))) {
                                    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s) {
                                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 4U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 3U;
                                }
                            }
                        } else if ((0U == (3U & (IData)(
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 7U))))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 1U;
                            }
                        } else if ((2U == (3U & (IData)(
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 7U))))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 2U;
                            }
                        }
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                    }
                } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xeU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xdU)))) {
                        if ((3U == (3U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 8U))))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 5U;
                        } else if ((1U == (3U & (IData)(
                                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 8U))))) {
                            if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 6U;
                            }
                        }
                    } else {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                    }
                } else if ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xdU)))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                } else if ((1U & (~ (IData)((0U != 
                                             (0x3fU 
                                              & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q)))))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 7U;
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr;
    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                        ? ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                            ? 0x8067U
                                            : 0x513U)
                                        : ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                            ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                                ? (0x10113U 
                                                   | ((IData)(
                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                               >> 0x11U)) 
                                                      << 0x14U))
                                                : (0x10113U 
                                                   | ((- (IData)(
                                                                 (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                  >> 0x11U))) 
                                                      << 0x14U)))
                                            : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                                ? (0x12083U 
                                                   | ((IData)(
                                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                               >> 5U)) 
                                                      << 0x14U))
                                                : (0x112023U 
                                                   | (((IData)(
                                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                >> 0xaU)) 
                                                       << 0x19U) 
                                                      | (0xf80U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                     >> 5U)) 
                                                            << 7U))))))))) 
                      << 3U));
        } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                vlSelf->__Vfunc_sn_to_regnum__3__snum 
                    = (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 5U)));
                vlSelf->__Vfunc_sn_to_regnum__3__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__3__snum))));
                vlSelf->__Vfunc_sn_to_regnum__2__snum 
                    = (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 5U)));
                vlSelf->__Vfunc_sn_to_regnum__2__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__2__snum))));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)(((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s)
                                            ? (0x58013U 
                                               | ((IData)(vlSelf->__Vfunc_sn_to_regnum__2__Vfuncout) 
                                                  << 7U))
                                            : (0x593U 
                                               | ((IData)(vlSelf->__Vfunc_sn_to_regnum__3__Vfuncout) 
                                                  << 0xfU))))) 
                          << 3U));
            } else {
                vlSelf->__Vfunc_sn_to_regnum__4__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__4__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum))));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0x12003U 
                                           | (((IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 5U)) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->__Vfunc_sn_to_regnum__4__Vfuncout) 
                                                 << 7U))))) 
                          << 3U));
            }
        } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->__Vfunc_sn_to_regnum__5__snum = 
                (0x1fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
            vlSelf->__Vfunc_sn_to_regnum__5__Vfuncout 
                = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum)) 
                    | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum)))
                    ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum) 
                                            >> 1U))) 
                              << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum))))
                    : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum) 
                                      >> 1U))) << 4U) 
                       | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum))));
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)((0x12023U | (
                                                   ((IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 0xaU)) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->__Vfunc_sn_to_regnum__5__Vfuncout) 
                                                       << 0x14U) 
                                                      | (0xf80U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                     >> 5U)) 
                                                            << 7U))))))) 
                      << 3U));
        } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load) {
            if ((1U == (0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                        >> 0x1dU))))) {
                vlSelf->__Vfunc_sn_to_regnum__6__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__6__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum))));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0x12003U 
                                           | (((IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 5U)) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->__Vfunc_sn_to_regnum__6__Vfuncout) 
                                                 << 7U))))) 
                          << 3U));
            } else if ((1U < (0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                              >> 0x1dU))))) {
                vlSelf->__Vfunc_sn_to_regnum__7__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__7__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum))));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0x12003U 
                                           | (((IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 5U)) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->__Vfunc_sn_to_regnum__7__Vfuncout) 
                                                 << 7U))))) 
                          << 3U));
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0x12083U 
                                           | ((IData)(
                                                      (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                       >> 5U)) 
                                              << 0x14U)))) 
                          << 3U));
            }
        } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store) {
            if ((1U == (0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                        >> 0x1dU))))) {
                vlSelf->__Vfunc_sn_to_regnum__8__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__8__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum))));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0xfe012e23U 
                                           | ((IData)(vlSelf->__Vfunc_sn_to_regnum__8__Vfuncout) 
                                              << 0x14U)))) 
                          << 3U));
            } else if ((1U < (0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                              >> 0x1dU))))) {
                vlSelf->__Vfunc_sn_to_regnum__9__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__9__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum))));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0xfe012e23U 
                                           | ((IData)(vlSelf->__Vfunc_sn_to_regnum__9__Vfuncout) 
                                              << 0x14U)))) 
                          << 3U));
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                    = (0x7f0897118ULL | (7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr));
            }
        } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s) {
            vlSelf->__Vfunc_sn_to_regnum__10__snum 
                = (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                 >> 0xaU)));
            vlSelf->__Vfunc_sn_to_regnum__10__Vfuncout 
                = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum)) 
                    | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum)))
                    ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum) 
                                            >> 1U))) 
                              << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum))))
                    : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum) 
                                      >> 1U))) << 4U) 
                       | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__10__snum))));
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)((0x50013U | ((IData)(vlSelf->__Vfunc_sn_to_regnum__10__Vfuncout) 
                                                   << 7U)))) 
                      << 3U));
        } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_tbljmp) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((0U == (7U & (IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xaU))))
                                        ? (0x6fU | 
                                           (0x1f000U 
                                            & ((IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 5U)) 
                                               << 0xcU)))
                                        : (0xefU | 
                                           (0xff000U 
                                            & ((IData)(
                                                       (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 5U)) 
                                               << 0xcU)))))) 
                      << 3U));
        } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a) {
            vlSelf->__Vfunc_sn_to_regnum__11__snum 
                = (7U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_instr 
                                 >> 0xaU)));
            vlSelf->__Vfunc_sn_to_regnum__11__Vfuncout 
                = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum)) 
                    | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum)))
                    ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum) 
                                            >> 1U))) 
                              << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum))))
                    : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum) 
                                      >> 1U))) << 4U) 
                       | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__11__snum))));
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)((0x513U | ((IData)(vlSelf->__Vfunc_sn_to_regnum__11__Vfuncout) 
                                                 << 0xfU)))) 
                      << 3U));
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1ffffffe001fULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)(((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                ? 0U : (0xfffU & ((4U 
                                                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 0U
                                                     : 
                                                    ((IData)(
                                                             (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                              >> 0x11U)) 
                                                     - 
                                                     (0x7cU 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                         << 2U)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 
                                                   ((IData)(
                                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 0x11U)) 
                                                    - 
                                                    (0x7cU 
                                                     & (((IData)(1U) 
                                                         + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                        << 2U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 
                                                    (- 
                                                     (((IData)(1U) 
                                                       + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                      << 2U))
                                                     : 0U))))))) 
              << 5U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q;
    if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
    } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
            = ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                ? ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                    ? 0U : 7U) : ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                   ? ((4U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                       ? 6U : ((3U 
                                                == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                ? 7U
                                                : 0U))
                                   : 5U));
    } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
        } else if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
                    == ((0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                         >> 0x1dU))) 
                        - (IData)(1U)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        }
    } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
             == ((0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                  >> 0x1dU))) - (IData)(1U)))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        }
    } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
            = ((1U == (0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                       >> 0x1dU))))
                ? 4U : ((1U < (0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                               >> 0x1dU))))
                         ? 2U : 5U));
    } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
            = ((1U == (0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                       >> 0x1dU))))
                ? 4U : ((1U < (0xfU & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                               >> 0x1dU))))
                         ? 1U : 5U));
    } else if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
    } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_tbljmp)))) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_valid 
        = (((((0U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr)) 
              | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
             & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_valid)) 
            & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0x15U))) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                    >> 0x10U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
                }
            } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((4U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                    if ((3U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_last 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__last_op_if 
        = (1U & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_valid)) 
                 | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__seq_last)));
}
