// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top_with_cache.h for the primary calling header

#include "Vsoc_top_with_cache___024root.h"
#include "Vsoc_top_with_cache__Syms.h"

#include "verilated_dpi.h"

extern const VlUnpacked<CData/*1:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_5078abe8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_df53dd33_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_4e2d0d20_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_93a67eec_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_9cf96f61_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_f1f802d5_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_3491683c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_1e6388d2_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vsoc_top_with_cache__ConstPool__TABLE_0f26d9b8_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vsoc_top_with_cache__ConstPool__TABLE_06cbfe99_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top_with_cache__ConstPool__TABLE_133910eb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top_with_cache__ConstPool__TABLE_8e48073d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top_with_cache__ConstPool__TABLE_d86bdde2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top_with_cache__ConstPool__TABLE_9553c2b4_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vsoc_top_with_cache__ConstPool__TABLE_5bfb044c_0;

void Vsoc_top_with_cache___024root___settle__TOP__6(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___settle__TOP__6\n"); );
    // Variables
    CData/*3:0*/ __Vfunc_get_stack_adj_base__0__rlist;
    CData/*3:0*/ __Vfunc_pushpop_reg_length__1__Vfuncout;
    CData/*3:0*/ __Vfunc_pushpop_reg_length__1__rlist4;
    CData/*1:0*/ __Vfunc_mtvec_mode_clint_resolve__25__Vfuncout;
    CData/*1:0*/ __Vfunc_mtvec_mode_clint_resolve__25__current_value;
    CData/*1:0*/ __Vfunc_mtvec_mode_clint_resolve__25__next_value;
    CData/*5:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx3;
    CData/*5:0*/ __Vtableidx7;
    SData/*11:0*/ __Vfunc_get_stack_adj_base__0__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__16__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__16__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__21__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__21__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__24__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__24__wdata;
    CData/*31:0*/ __Vtemp128;
    CData/*31:0*/ __Vtemp134;
    SData/*31:0*/ __Vtemp161;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q 
           & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al;
    if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah;
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al;
    }
    if ((1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al;
    } else if ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl;
    if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))
                ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh
                : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl);
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh;
    }
    if ((1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl;
    } else if ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
        = ((0xfffffff0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((8U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                     >> 2U)) | (7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (IData)((0U != (6U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x18U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 1U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x60U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 2U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x180U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 3U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x600U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 4U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x1800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 5U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x6000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 6U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x18000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 7U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x60000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 8U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x180000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 9U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x600000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xaU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x1800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xbU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x6000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xcU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x18000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xdU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | ((IData)((0U != (0x60000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
              << 0xeU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xffffffe0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x1fU & ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                        ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                            << 0x1bU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 5U)) : 
                       ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                         << 0x16U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                      >> 0xaU)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfffffc1fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x3e0U & (((8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                          ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                              << 0x11U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                           >> 0xfU))
                          : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                              << 0xcU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                          >> 0x14U))) 
                        << 5U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xffff83ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x7c00U & (((0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                               << 7U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 0x19U))
                           : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                               << 2U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                         >> 0x1eU))) 
                         << 0xaU)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfff07fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0xf8000U & (((0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                << 0x1dU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 3U))
                            : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                << 0x18U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 8U))) 
                          << 0xfU)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xfe0fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x1f00000U & (((0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                              ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                  << 0x13U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                               >> 0xdU))
                              : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                  << 0xeU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                              >> 0x12U))) 
                            << 0x14U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0xc1ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (0x3e000000U & (((0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                               ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                   << 9U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 0x17U))
                               : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                   << 4U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                             >> 0x1cU))) 
                             << 0x19U)));
    __Vtemp128 = (0x1fU & ((0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                             >> 1U))
                            : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                << 0x1aU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                             >> 6U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = ((0x3fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]) 
           | (((0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                    << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                 >> 1U)) : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                             << 0x1aU) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                               >> 6U))) 
              << 0x1eU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffffff8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (__Vtemp128 >> 2U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xffffff07U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf8U & (((0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                         ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                             << 0x15U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0xbU))
                         : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                             << 0x10U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0x10U))) 
                       << 3U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xffffe0ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x1f00U & (((0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                           ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                               << 0xbU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                           >> 0x15U))
                           : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                               << 6U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                         >> 0x1aU))) 
                         << 8U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffc1fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x3e000U & (((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                << 1U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                          >> 0x1fU))
                            : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                << 0x1cU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                             >> 4U))) 
                          << 0xdU)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xff83ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0x7c0000U & (((0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                             ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                 << 0x17U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 9U))
                             : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                 << 0x12U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 0xeU))) 
                           << 0x12U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xf07fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (0xf800000U & (((0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                              ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                  << 0xdU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                              >> 0x13U))
                              : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                  << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                            >> 0x18U))) 
                            << 0x17U)));
    __Vtemp134 = (0x1fU & ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                << 3U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                          >> 0x1dU))
                            : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                << 0x1eU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                             >> 2U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = ((0xfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U]) 
           | (((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                    << 3U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                              >> 0x1dU)) : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                             << 0x1eU) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                               >> 2U))) 
              << 0x1cU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (__Vtemp134 >> 4U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xffffffc1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x3eU & (((0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                         ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                             << 0x19U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                          >> 7U)) : 
                        ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                          << 0x14U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                       >> 0xcU))) << 1U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xfffff83fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0x7c0U & (((0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                          ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                              << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                          >> 0x11U))
                          : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                              << 0xaU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                          >> 0x16U))) 
                        << 6U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[2U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[3U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[4U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[5U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[6U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[7U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[8U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[9U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xaU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xbU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xcU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xdU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xeU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xfU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x10U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x11U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x12U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x13U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x14U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x15U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x16U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x17U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x18U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x19U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1aU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1bU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1cU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1dU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1eU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1fU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU];
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[__Vilp] 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vfunc_mtvec_mode_clint_resolve__25__next_value 
        = (3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int);
    __Vfunc_mtvec_mode_clint_resolve__25__current_value 
        = (3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    __Vfunc_mtvec_mode_clint_resolve__25__Vfuncout 
        = (((0U != (IData)(__Vfunc_mtvec_mode_clint_resolve__25__next_value)) 
            & (1U != (IData)(__Vfunc_mtvec_mode_clint_resolve__25__next_value)))
            ? (IData)(__Vfunc_mtvec_mode_clint_resolve__25__current_value)
            : (IData)(__Vfunc_mtvec_mode_clint_resolve__25__next_value));
    __Vfunc_csr_next_value__24__wdata = ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_mtvec_init_if)
                                            ? 0U : 
                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 7U)) 
                                          << 7U) | 
                                         ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                          | ((0x3cU 
                                              & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                             | (3U 
                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_mtvec_init_if)
                                                    ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q
                                                    : (IData)(__Vfunc_mtvec_mode_clint_resolve__25__Vfuncout))))));
    __Vfunc_csr_next_value__24__Vfuncout = (0xffffff81U 
                                            & __Vfunc_csr_next_value__24__wdata);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n 
        = __Vfunc_csr_next_value__24__Vfuncout;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = ((0x3fff3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp) 
           | ((8U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                     >> 1U)) | (4U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                        >> 6U) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                  >> 5U)) 
                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                         >> 0x13U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_id 
        = (1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                    >> 3U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__mul_en 
        = (1U & ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                        >> 0x21U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__div_en 
        = (1U & ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                        >> 0x1dU))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__sys_en 
        = (1U & ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        >> 9U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__csr_en 
        = (1U & ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        >> 0x17U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__lsu_en 
        = (1U & ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0x14U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__alu_en 
        = (1U & ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0x36U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__illegal_insn 
        = (1U & ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 8U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target 
        = ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                          >> 0x23U))) ? ((1U & (IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                        >> 0x22U)))
                                          ? (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                               << 0xaU) 
                                              | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[3U] 
                                                 >> 0x16U)) 
                                             + (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                                >> 0x1dU)))) 
                                                 << 0xdU) 
                                                | ((0x1000U 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                       >> 0x11U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                          << 6U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                             >> 0x12U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                               >> 5U)))))))
                                          : (((0x2000U 
                                               & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp)
                                               ? ((
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
                                                   << 0xeU) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                                     >> 0x12U))
                                               : ((0x2000U 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp)
                                                   ? 
                                                  vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                                  [0U]
                                                   : 
                                                  vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                                  [0U])) 
                                             + vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__imm_i_type))
            : ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                              >> 0x22U))) ? (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                               << 0xaU) 
                                              | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[3U] 
                                                 >> 0x16U)) 
                                             + (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                                >> 0x1dU)))) 
                                                 << 0x14U) 
                                                | ((0xff000U 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                       << 2U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                          >> 7U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                            >> 0x12U))))))
                : ((0xffffffc0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   + (0x3fcU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                >> 8U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o 
        = ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
            >> 0x1fU) ? 0x1fU : ((0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                  ? 0x1eU : ((0x20000000U 
                                              & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                              ? 0x1dU
                                              : ((0x10000000U 
                                                  & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                  ? 0x1cU
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x19U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x18U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x17U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x16U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x15U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x14U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x13U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x12U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x11U
                                                             : 
                                                            ((0x10000U 
                                                              & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x10U
                                                              : 
                                                             ((0x800U 
                                                               & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0xbU
                                                               : 
                                                              ((8U 
                                                                & vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 3U
                                                                : 7U))))))))))))))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl 
        = ((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual) 
           & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
              >> 3U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result 
        = (0x3ffffffffULL & (VL_MULS_QQQ(34,34,34, 
                                         (0x3ffffffffULL 
                                          & VL_EXTENDS_QI(34,32, 
                                                          ((0x400000U 
                                                            & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                                            >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                                            : 
                                                           ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                                             << 0xfU) 
                                                            | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                                               >> 0x11U))))), 
                                         (0x3ffffffffULL 
                                          & VL_EXTENDS_QI(34,32, 
                                                          ((0x400000U 
                                                            & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                                            >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                                            : 
                                                           ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                                             << 0xfU) 
                                                            | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                               >> 0x11U)))))) 
                             + VL_EXTENDS_QQ(34,33, vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
    } else if ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_n 
            = (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                     >> 0xbU));
    } else if ((0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_n 
            = (3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible 
        = (1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                    | (IData)((4U == (0x804U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_stopcount 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                  >> 0xaU) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                              >> 0x13U)));
    __Vfunc_csr_next_value__16__wdata = (3U | ((0xf0000000U 
                                                & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                               | ((0x8000U 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                  | ((0x800U 
                                                      & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                     | ((0x400U 
                                                         & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                        | ((0x1c0U 
                                                            & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                                           | ((0x10U 
                                                               & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                                              | (4U 
                                                                 & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int))))))));
    __Vfunc_csr_next_value__16__Vfuncout = (0x40000013U 
                                            | (0x8dc4U 
                                               & __Vfunc_csr_next_value__16__wdata));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n 
        = __Vfunc_csr_next_value__16__Vfuncout;
    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        if ((0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U])) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xf0000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata) 
                         | ((0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata) 
                            | ((0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata) 
                               | ((0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                  | ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata) 
                                     | ((0x1c0U & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                                   >> 0xaU)) 
                                        | (0x14U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata))))))));
        }
    }
    __Vfunc_csr_next_value__21__wdata = (0x1800U | 
                                         (0x88U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int));
    __Vfunc_csr_next_value__21__Vfuncout = (0x1800U 
                                            | (0x88U 
                                               & __Vfunc_csr_next_value__21__wdata));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
        = __Vfunc_csr_next_value__21__Vfuncout;
    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
                = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n);
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n) 
                   | (0x80U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                               << 4U)));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x1800U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n);
        }
    } else if ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n) 
               | (8U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                        >> 4U)));
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x80U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x1800U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n);
    } else if ((0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n) 
               | (0xfffe0000U & (((3U == (3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata)) 
                                  << 0x11U) & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q)));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
        = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U]) 
           | (0x2000U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                          << 0xdU) | (0xffffe000U & 
                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                                       << 0xbU)))));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
            | ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                    >> 0xfU)) & (3U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                              >> 0x12U)))) 
               & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))) 
           | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                         ? (- (0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                        >> 0x18U)))
                         : (0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                     >> 0x18U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[1U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[2U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[3U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[4U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[5U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[6U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[7U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[8U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[9U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xaU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xbU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xcU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xdU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xeU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xfU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x10U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x11U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x12U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x13U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x14U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x15U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x16U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x17U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x18U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x19U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1aU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1bU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1cU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1dU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1eU];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1fU];
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WIII(1024,32,(0x3e0U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                             << 5U)), vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[2U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[2U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[6U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[6U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[8U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[8U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xaU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xaU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xcU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xcU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xeU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xeU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x10U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x10U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x12U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x12U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x14U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x14U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x16U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x16U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x18U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x18U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1aU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1aU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1cU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1cU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1eU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1eU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x20U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x20U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x22U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x22U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x24U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x24U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x26U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x26U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x28U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x28U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2aU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2aU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2cU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2cU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2eU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2eU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x30U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x30U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x32U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x32U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x34U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x34U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x36U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x36U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x38U])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x38U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3aU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3aU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3cU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3cU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3eU])))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3eU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
            ? ((0x400U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((0x40U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((8U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                  ? 0U : ((0x80U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                           ? ((0x40U 
                                               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))))) 
                                                    | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))))) 
                                                     | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))))) 
                                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))) 
                                                        | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))) 
                                                        | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U)))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U)))))
                                                          ? 0U
                                                          : 
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U))))))) 
                                                        | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                (0x7c0U 
                                                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                    << 6U))) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               (0x7c0U 
                                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                   << 6U)))))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                   (0x3eU 
                                                    & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                       << 1U))]
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                    (0x3eU 
                                                     & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                        << 1U))]
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (0x3eU 
                                                      & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                         << 1U))]
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3eU 
                                                        & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                           << 1U))]
                                                        : 
                                                       vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3eU 
                                                        & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                           << 1U))])
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3eU 
                                                        & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                           << 1U))]))))))))))
                : ((0x200U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x40U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        (0x7c0U 
                                                         & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                            << 6U)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                             << 6U))))))) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                             << 6U))))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (0x7c0U 
                                                          & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                             << 6U)))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U))))))) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U))))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (0x7c0U 
                                                           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                              << 6U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))))) 
                                                    | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U))))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (0x7c0U 
                                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                               << 6U)))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))))) 
                                                     | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            (0x7c0U 
                                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                << 6U)))))
                                                        ? 0U
                                                        : 
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U))))))) 
                                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              (0x7c0U 
                                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                  << 6U))) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             (0x7c0U 
                                                              & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                                 << 6U)))))))))))))
                            : ((0x40U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                 (0x3eU 
                                                  & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     << 1U))]
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                  (0x3eU 
                                                   & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                      << 1U))]
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                   (0x3eU 
                                                    & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                       << 1U))]
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                    (0x3eU 
                                                     & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                        << 1U))]
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[
                                                     (0x3eU 
                                                      & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                                         << 1U))]))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? ((0x200U 
                                             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? ((0x100U 
                                                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 0x1008064U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tdata2_rdata)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tdata1_rdata
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                          ? ((0x100U 
                                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                    (0x1fU 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))]
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                     (0x1fU 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))]
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                      (0x1fU 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))]
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[
                                                        (0x1fU 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))]
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0x40801104U
                                                         : vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q))))))))
                                              : 0U)
                                          : ((0x100U 
                                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x80U 
                                               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x40U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 0U))))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__last_op_id 
        = (1U & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__sys_en) 
                      & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                 >> 2U))) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                             >> 0x1eU))) 
                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                    >> 1U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__sys_en) 
            & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 2U))) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                   >> 0x1eU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__alu_en) 
            & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                       >> 0x34U))) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                      >> 0x1eU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_re_id 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__illegal_insn)
            ? 3U : (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                  >> 0x19U))));
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__instr_valid) 
            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__illegal_insn) 
               | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__csr_en))) 
           & (~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q) 
                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)) 
                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                    >> 4U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n = 0U;
    if ((8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                ? ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                    ? ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                        ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                        : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[1U] 
                            << 0x1dU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                                         >> 3U))) : 
                   ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                     ? (0x7cU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                 >> 0xfU)) : ((0xffffff80U 
                                               & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                              | (0x7cU 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                                    >> 0xaU)))))
                : ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                    ? 0U : ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                             ? ((0xffffff80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                | (0x7cU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                            >> 0x19U)))
                             : (0xffffff80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))));
    } else if ((4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
        if ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
            if ((1U & (~ vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n 
                    = ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
                        << 0x17U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[2U] 
                                     >> 9U));
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n 
                = ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                    ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                        << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                  >> 0x18U)) : vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target);
        }
    } else if ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
        if ((1U & (~ vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U]))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n 
            = ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                ? ((0xfffffffcU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | ((2U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                             & ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                                    >> 5U)) << 1U))) 
                      | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q)))
                : 0U);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_id_ctrl 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res 
        = (0x1ffffffffULL & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift)
                              ? (0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,32, vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))
                              : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed 
        = ((((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_interruptible) 
                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible)) 
                & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing))) 
               & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb))) 
              & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb))) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q))) 
            & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
           & (2U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed 
        = ((((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_interruptible) 
                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible)) 
                & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing))) 
               & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb))) 
              & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb))) 
             & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q) 
                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q)))) 
            & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
           & (2U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (1U & ((((~ vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
                      & (~ vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) 
                     & (~ vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_q)) 
                    & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_stopcount)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | (4U & ((((((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                            >> 2U)) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                          >> 2U))) 
                       & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_q 
                             >> 2U))) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_stopcount))) 
                     << 2U) & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events) 
                               << 1U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment) 
           | ((((((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                      >> 3U)) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                    >> 3U))) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                   >> 3U))) 
                & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_stopcount))) 
               & (0U != ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events) 
                         & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[3U]))) 
              << 3U));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en)
                                          ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                              << 0xfU) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                >> 0x11U))
                                          : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                              << 8U) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                >> 0x18U))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)) 
                << 0x20U) | (QData)((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                             >> 0x20U))))
            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x30U))))))
            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                           >> 0x38U))))))
            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                          >> 0x3cU))))))
            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 2U) | (QData)((IData)((3U & (IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3eU))))))
            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 1U) | (QData)((IData)((1U & (IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3fU))))))
            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id 
        = ((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
               & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                     >> 0x17U))) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                       >> 0xcU))) | 
             (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
               & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                  >> 0x17U)) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                   >> 0xaU)))) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
                                                  & (~ 
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                                      >> 0xaU)))) 
           & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)) 
           | ((((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                          >> 0x13U)) == vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                [0U]) & (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                         [0U])) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_re_id)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)) 
           | ((((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
                          >> 0x12U)) == vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                [0U]) & (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                         [0U])) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_re_id)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match)) 
           | (0xfffffffeU & (((((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                                          >> 0x13U)) 
                                == vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                [1U]) & (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                         [1U])) << 1U) 
                             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_re_id))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match)) 
           | (0xfffffffeU & (((((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
                                          >> 0x12U)) 
                                == vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                [1U]) & (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                         [1U])) << 1U) 
                             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_re_id))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__xif_id 
        = (0xfU & ((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                     | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))
                    ? ((IData)(1U) + ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[2U] 
                                       << 0x1dU) | 
                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[1U] 
                                       >> 3U))) : (
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[2U] 
                                                    << 0x1dU) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[1U] 
                                                      >> 3U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_waiting 
        = ((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
             & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) 
            & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q))) 
           & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue 
        = ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state)) 
           & (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_addr 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q;
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_addr 
                = ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                    ? (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n)
                    : vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_addr 
            = ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])
                ? (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q)));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed))))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed))))) {
                    if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl) 
                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed))) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause 
                            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_id_ctrl;
                    }
                }
            }
        }
    }
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffffcULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (1ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (2ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (3ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffffcfULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x10ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x20ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x30ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffff3fULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x40ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x80ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0xc0ULL | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U]))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
        = (IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U]))) 
                   >> 0x20U));
    if ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = (IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = (IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                       >> 0x20U));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U]))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
        = (IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U]))) 
                   >> 0x20U));
    if ((4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = (IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = (IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                       >> 0x20U));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[6U]))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
        = (IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[6U]))) 
                   >> 0x20U));
    if ((8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = (IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))));
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = (IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))) 
                       >> 0x20U));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
        if ((0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
            if ((0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                    if ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                      >> 0x18U)))) {
                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                     >> 0x19U)))) {
                    if ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                            = (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                    }
                }
            } else if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                    }
                } else {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                            ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                            : ((0xff000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U]) 
                               | ((0xff0000U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                << 0x10U)) 
                                  | ((0xff00U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU]) 
                                     | (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x10U))))));
                }
            } else if ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                              >> 0x18U)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                        = (((- (IData)((0U != (0xffU 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                  >> 0x10U))))) 
                            << 0x18U) | ((0xff0000U 
                                          & ((- (IData)(
                                                        (0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                             >> 8U))))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & ((- (IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                              >> 0x18U))))))));
                }
            } else if ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                    = (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
            }
        } else if ((0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                            ? (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                 << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)) 
                               & (~ ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                      << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                >> 0x18U))))
                            : (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                 << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)) 
                               | (~ ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                      << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                >> 0x18U)))));
                } else if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                     >> 0x18U)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                        = (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                             << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                       >> 0x18U)) ^ 
                           (~ ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                          >> 0x18U))));
                }
            } else {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                        ? 0U : ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                                 ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                 : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_result)));
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                = ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                    ? ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                        ? ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                            ? 0U : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                            ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                    : ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                        ? ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                            ? (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x1aU) : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                            ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                            : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_result))));
        }
    } else if ((0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
        if ((0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                          >> 0x1aU)))) {
                if ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                    if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                            = (1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))));
                    }
                }
            }
        } else if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                          >> 0x19U)))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                        ? (0xffffU & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                       << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                 >> 0x18U)))
                        : (((- (IData)((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                              >> 7U)))) 
                            << 0x10U) | (0xffffU & 
                                         ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                           << 8U) | 
                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)))));
            }
        } else if ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                = ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                    ? (1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))))
                    : (((- (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                    >> 0x1fU))) << 8U) 
                       | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                          >> 0x18U)));
        }
    } else if ((0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
        if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                          >> 0x19U)))) {
                if ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                        = (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                }
            }
        } else if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                             >> 0x19U)))) {
            if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                          >> 0x18U)))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
                    = (IData)((0x1ffffffffULL & (((1ULL 
                                                   | ((QData)((IData)(
                                                                      ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                        << 8U) 
                                                                       | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                          >> 0x18U)))) 
                                                      << 1U)) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0x8000000U 
                                                                      & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                                                                      ? 
                                                                     (~ 
                                                                      ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                        << 8U) 
                                                                       | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                                          >> 0x18U)))
                                                                      : 
                                                                     ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                       << 8U) 
                                                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                                         >> 0x18U))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                         >> 0x1bU)))))) 
                                                 >> 1U)));
            }
        }
    } else if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
            = ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                ? ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                    ? (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U)))
                    : (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U))))
                : ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                    ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                    : (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) ^ ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U)))));
    } else if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                         >> 0x19U)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result 
            = ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (IData)((0x1ffffffffULL & (((1ULL 
                                               | ((QData)((IData)(
                                                                  ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                    << 8U) 
                                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                      >> 0x18U)))) 
                                                  << 1U)) 
                                              + (((QData)((IData)(
                                                                  ((0x8000000U 
                                                                    & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                                                                    ? 
                                                                   (~ 
                                                                    ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                      << 8U) 
                                                                     | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                                        >> 0x18U)))
                                                                    : 
                                                                   ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                     << 8U) 
                                                                    | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                                       >> 0x18U))))) 
                                                  << 1U) 
                                                 | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                       >> 0x1bU)))))) 
                                             >> 1U))));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
        = (0x1fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                = (0x20000U | (0xffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp));
        }
        if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                = (0x8000U | (0x33fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp));
        }
    }
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                = (0x10000U | (0xffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp));
        }
        if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                = (0x4000U | (0x33fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp));
        }
    }
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                = (0x2000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp);
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match;
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans 
        = (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
            << 6U) | (QData)((IData)((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp) 
                                       << 2U) | (1U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                                    >> 0x14U))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
        = ((0xfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U]) 
           | (0xfffff000U & (((((0U == (3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)) 
                                | (3U == (3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)))
                                ? 0U : (0x1fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause))) 
                              << 0x1bU) | ((0x7fe0000U 
                                            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause) 
                                               << 0x11U)) 
                                           | (((1U 
                                                == 
                                                (3U 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))
                                                ? 0xfU
                                                : 0U) 
                                              << 0xcU)))));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_ex 
        = ((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xbU])
            ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result
            : ((0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])
                ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)
                : ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])
                    ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                        ? (- vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                        : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                    : ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U])
                        ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_rdata_int
                        : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result))));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 9U;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if ((((0xf0000000U <= (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans 
                                   >> 6U))) & (0xf0003fffU 
                                               >= (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans 
                                                           >> 6U)))) 
         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_we[0U] 
        = (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
               >> 0x17U) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_exception))) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__xif_waiting))) 
            & (~ (IData)((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match)))) 
           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__instr_valid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o 
        = ((0x3fffffffcfULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o) 
           | ((QData)((IData)((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U]))) 
              << 4U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                  >> 3U)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step 
        = (1U & (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                  & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                     >> 2U)) & ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid) 
                                  & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[0U] 
                                      >> 2U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_wb))) 
                                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                    >> 0xbU)) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                                                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed)))));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__we_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_we
        [0U];
    vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q
            : vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o);
    __Vtableidx1 = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                     << 5U) | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err) 
                                << 4U) | (((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n)) 
                                           << 3U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__state_q))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__state_n 
        = Vsoc_top_with_cache__ConstPool__TABLE_0f26d9b8_0
        [__Vtableidx1];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status 
        = Vsoc_top_with_cache__ConstPool__TABLE_06cbfe99_0
        [__Vtableidx1];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vsoc_top_with_cache__ConstPool__TABLE_133910eb_0
        [__Vtableidx1];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vsoc_top_with_cache__ConstPool__TABLE_8e48073d_0
        [__Vtableidx1];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vsoc_top_with_cache__ConstPool__TABLE_d86bdde2_0
        [__Vtableidx1];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vsoc_top_with_cache__ConstPool__TABLE_9553c2b4_0
        [__Vtableidx1];
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__we_i
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready 
        = (1U & (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)) 
                  & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core))) 
                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
    vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.s_req 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) 
           | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
              & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
        = ((0x7fffffffcULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o) 
           | (IData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)));
    vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) 
            << 8U) | ((((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_op) 
                        | (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op)) 
                       << 7U) | (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op) 
                                  | (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op)) 
                                 << 2U)));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q;
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
            if (vlSelf->soc_top_with_cache__DOT__instr_gnt) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 0U;
            }
        }
    } else if (((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.s_req) 
                & (~ (IData)(vlSelf->soc_top_with_cache__DOT__instr_gnt)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 1U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
        = ((0x68U >= (0x7fU & ((IData)(0x23U) * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
            ? (0x7ffffffffULL & (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                  (((IData)(0x22U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x23U) 
                                                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) 
                                    | ((QData)((IData)(
                                                       vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x23U) 
                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))))
            : 0ULL);
    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
    } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
            if ((3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                      >> 3U))))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U))));
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                    ? (3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U))))
                    : (3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U)))));
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
    } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
            if ((3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                      >> 3U))))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U))));
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                    ? (3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U))))
                    : (3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                            >> 0x13U)))));
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0U;
    if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                  >> 6U)))) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins 
                = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q)
                    ? ((3U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                             >> 3U))))
                        ? 1U : ((3U == (3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                      >> 0x13U))))
                                 ? 1U : 2U)) : ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                              >> 0x13U))))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                              >> 0x13U))))
                                                  ? 1U
                                                  : 2U)));
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
        = (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
            & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
               >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            ? ((0x68U >= (0x7fU & ((IData)(3U) + ((IData)(0x23U) 
                                                  * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                ? (((0U == (0x1fU & ((IData)(3U) + 
                                     ((IData)(0x23U) 
                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                     ? 0U : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (((IData)(0x1fU) + (0x7fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(3U) 
                                                + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                      (3U & (((IData)(3U) + ((IData)(0x23U) 
                                             * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                             >> 5U))] >> (0x1fU & ((IData)(3U) 
                                                   + 
                                                   ((IData)(0x23U) 
                                                    * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                : 0U) : (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                 >> 3U)));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
        = ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])
            ? 0U : (7U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                           + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                          - ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                              ? 1U : 0U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed 
        = ((3U != (3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
           & (~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed 
        = ((3U != (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                         >> 0x10U))) & (~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                            | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                                           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr;
    if ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
    } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
        = ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
            ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                ? (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))
                : (2U | (0xfffffffcU & ((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))))
            : ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)
                ? (2U | (0xfffffffcU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))
                : (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid 
        = ((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
               >> 0x10U)) & ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                              ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid) 
                                 & ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                                     | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))
                                     ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                     : ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                                         ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                         : (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                            | (((2U 
                                                 >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                   >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))))))
                              : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 0U;
    if (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
         & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
            >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                       * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x23U) 
                                               * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                               ? 0U : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x23U) 
                                             * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x23U) 
                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x23U) 
                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x23U) 
                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                    : 0U);
        } else if (((0U != ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))
                             ? (3U & (((0U == (0x1fU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))
                                        ? 0U : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                (((IData)(1U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                         (3U & (((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                             : 0U)) | (0U != ((0x68U 
                                               >= (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                               ? (3U 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (((IData)(1U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x23U) 
                                                             * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                     | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                        (3U 
                                                         & (((IData)(0x23U) 
                                                             * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                               : 0U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
        }
    } else if (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                   >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                       * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x23U) 
                                               * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                               ? 0U : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x23U) 
                                             * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x23U) 
                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x23U) 
                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x23U) 
                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                    : 0U);
        } else if (((0U != ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                             ? (3U & (((0U == (0x1fU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                        ? 0U : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                (((IData)(1U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                         (3U & (((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                >> 5U))] 
                                         >> (0x1fU 
                                             & ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                             : 0U)) | (0U != (3U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
            = (3U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
        = (1U & (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                  & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))
                  ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                      ? ((0x68U >= (0x7fU & ((IData)(2U) 
                                             + ((IData)(0x23U) 
                                                * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                            (3U & (((IData)(2U) + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                   >> 5U))] >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   ((IData)(0x23U) 
                                                    * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                      : (((0x68U >= (0x7fU & ((IData)(2U) 
                                              + ((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (3U & (((IData)(2U) + 
                                     ((IData)(0x23U) 
                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                    >> 5U))] >> (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                         | ((0x68U >= (0x7fU & ((IData)(2U) 
                                                + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                            & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                               (3U & (((IData)(2U) 
                                       + ((IData)(0x23U) 
                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0x23U) 
                                                       * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))
                  : (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                      & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                         >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                      ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                          ? ((0x68U >= (0x7fU & ((IData)(2U) 
                                                 + 
                                                 ((IData)(0x23U) 
                                                  * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                             & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(2U) 
                                        + ((IData)(0x23U) 
                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(2U) 
                                          + ((IData)(0x23U) 
                                             * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                          : (((0x68U >= (0x7fU & ((IData)(2U) 
                                                  + 
                                                  ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                              & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                 (3U & (((IData)(2U) 
                                         + ((IData)(0x23U) 
                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                        >> 5U))] >> 
                                 (0x1fU & ((IData)(2U) 
                                           + ((IData)(0x23U) 
                                              * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                             | (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                        >> 2U)))) : (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                             >> 2U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_valid 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid) 
            & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0x10U))) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                    >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
        = (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
            << 3U) | (QData)((IData)(((4U & ((((2U 
                                                >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                               & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                  >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                               ? ((0x68U 
                                                   >= 
                                                   (0x7fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       ((IData)(0x23U) 
                                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (3U 
                                                      & (((IData)(2U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(2U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                               : (IData)(
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                          >> 2U))) 
                                             << 2U)) 
                                      | (3U & (((2U 
                                                 >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                   >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                                ? (
                                                   (0x68U 
                                                    >= 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                      (((IData)(1U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                    | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                    : 0U)
                                                : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o)))))));
    if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0x10U)))) {
        if ((2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                = (((QData)((IData)((((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                      & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                         >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))
                                      ? ((((0x68U >= 
                                            (0x7fU 
                                             & ((IData)(3U) 
                                                + ((IData)(0x23U) 
                                                   * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                            ? (0xffffU 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        ((IData)(0x23U) 
                                                         * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                                    ? 0U
                                                    : 
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                    (((IData)(0xfU) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (3U 
                                                      & (((IData)(3U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                            : 0U) << 0x10U) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U))
                                      : (((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                   >> 3U)) 
                                          << 0x10U) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U))))) 
                    << 3U) | (QData)((IData)((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned) 
                                               << 2U) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned)))));
        }
    }
    __Vtemp161 = ((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
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
           | (__Vtemp161 << 0x19U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
        = ((0xffffffe0U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U]) 
           | (__Vtemp161 >> 7U));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((0U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x12U)))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x11U)))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x10U)))) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x10U)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xfU)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xeU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xdU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 9U)))) {
                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x11U)))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U)))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0xffU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 8U))))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((1U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 3U))))) {
            if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x12U)))) {
                if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x11U))))) {
                    if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x10U))))) {
                        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xeU)))) {
                            if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xdU)))) {
                                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0xfU)))) {
                                    if ((1U & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 9U)))) {
                                        if ((1U & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 8U)))) {
                                            if ((1U 
                                                 & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 7U)))) {
                                                if (
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 6U)))) {
                                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                } else if (
                                                           (1U 
                                                            & (~ (IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U))))) {
                                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                                }
                                            } else if (
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 6U)))) {
                                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                            } else if (
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 5U)))) {
                                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0xfU)))) {
                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x11U)))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    if ((0U == ((0x20U & ((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                   >> 0xfU)) 
                                          << 5U)) | 
                                (0x1fU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 5U)))))) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((2U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                         >> 3U))))) {
            if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x12U)))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x11U)))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0x10U)))) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0x10U)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                             >> 0xfU))))) {
                    if ((0U == (0x1fU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 5U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 0xaU))))) {
                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
            } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x11U)))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                    >> 0xaU))))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U)))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU)))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_compressed 
        = ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)) 
           & (3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 3U)))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_pushpop = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                                }
                            }
                        } else if ((0U == (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 7U))))) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                            }
                        } else if ((2U == (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 7U))))) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_pushpop = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU))))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((3U == (3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 8U))))) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    __Vfunc_pushpop_reg_length__1__rlist4 = (0xfU & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
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
                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffffffULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)((((IData)(__Vfunc_get_stack_adj_base__0__Vfuncout) 
                                << 4U) | (IData)(__Vfunc_pushpop_reg_length__1__Vfuncout)))) 
              << 0x1dU));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_decompressed 
            = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_decompressed) 
               | ((QData)((IData)(((0U == (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 3U))))
                                    ? ((1U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x12U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x11U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))
                                                : (0x842023U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x2000000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 0x19U)) 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | ((0xc00U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xdU)) 
                                                                      << 0xaU)) 
                                                                  | (0x200U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 9U)) 
                                                                        << 9U)))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xfU)))
                                                    ? 
                                                   (0x841023U 
                                                    | ((0x700000U 
                                                        & ((IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 5U)) 
                                                           << 0x14U)) 
                                                       | ((0x38000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xaU)) 
                                                              << 0xfU)) 
                                                          | (0x100U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 8U)) 
                                                                << 8U)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xeU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xdU)))
                                                      ? 
                                                     (0x841023U 
                                                      | ((0x700000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0x14U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | (0x100U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 8U)) 
                                                                  << 8U)))))
                                                      : 
                                                     (0x840023U 
                                                      | ((0x700000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0x14U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | ((0x100U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 8U)) 
                                                                   << 8U)) 
                                                               | (0x80U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 9U)) 
                                                                     << 7U)))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xdU)))
                                                      ? 
                                                     (0x41403U 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 8U)) 
                                                             << 0x15U)) 
                                                         | ((0x38000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | ((0x4000U 
                                                                & ((~ (IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 9U))) 
                                                                   << 0xeU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U))))))
                                                      : 
                                                     (0x44403U 
                                                      | ((0x200000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 8U)) 
                                                             << 0x15U)) 
                                                         | ((0x100000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))))))
                                        : ((1U & (IData)(
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x11U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))
                                                : (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x10U)))
                                                ? (0x42403U 
                                                   | ((0x4000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 8U)) 
                                                          << 0x1aU)) 
                                                      | ((0x3800000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x17U)) 
                                                         | ((0x400000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 9U)) 
                                                                << 0x16U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U)))))))
                                                : (0x10413U 
                                                   | ((0x3c000000U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xaU)) 
                                                          << 0x1aU)) 
                                                      | ((0x3000000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xeU)) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 8U)) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 9U)) 
                                                                   << 0x16U)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 5U)) 
                                                                     << 7U))))))))))
                                    : ((1U == (3U & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 3U))))
                                        ? ((1U & (IData)(
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 0x12U)))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x11U)))
                                                ? (0x40063U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xfU))))) 
                                                       << 0x1cU) 
                                                      | ((0xc000000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 8U)) 
                                                             << 0x1aU)) 
                                                         | ((0x2000000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x19U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | ((0x1000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0x10U)) 
                                                                      << 0xcU)) 
                                                                  | ((0xc00U 
                                                                      & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xdU)) 
                                                                         << 0xaU)) 
                                                                     | ((0x300U 
                                                                         & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 6U)) 
                                                                            << 8U)) 
                                                                        | (0x80U 
                                                                           & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU)) 
                                                                              << 7U))))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? 
                                                   (0x6fU 
                                                    | (((IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)) 
                                                        << 0x1fU) 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xbU)) 
                                                              << 0x1eU)) 
                                                          | ((0x30000000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0x1cU)) 
                                                             | ((0x8000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 9U)) 
                                                                    << 0x1bU)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x2000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 5U)) 
                                                                          << 0x19U)) 
                                                                      | ((0x1000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xeU)) 
                                                                             << 0x18U)) 
                                                                         | ((0xe00000U 
                                                                             & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 6U)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                                                << 0xcU)) 
                                                                               | (0x80U 
                                                                                & ((~ (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x12U))) 
                                                                                << 7U))))))))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xeU)))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xdU)))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xfU)))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 9U)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 8U)))
                                                         ? 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 7U)))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 6U)))
                                                           ? 
                                                          (0x847433U 
                                                           | ((0x700000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | ((0x38000U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 0xfU)) 
                                                                 | (0x380U 
                                                                    & ((IData)(
                                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                       << 7U)))))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)))
                                                            ? 
                                                           (0xfff44413U 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))
                                                            : 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U)))))))
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 6U)))
                                                           ? 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)))
                                                            ? 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U)))))
                                                            : 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U))))))
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)))
                                                            ? 
                                                           (0x847433U 
                                                            | ((0x700000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U)))))
                                                            : 
                                                           (0xff47413U 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U)))))))
                                                         : 
                                                        (0x2840433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))
                                                        : 
                                                       (0x847433U 
                                                        | ((0x700000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0x380U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 9U)))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 8U)))
                                                         ? 
                                                        (0x847433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U)))))
                                                         : 
                                                        (0x846433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 8U)))
                                                         ? 
                                                        (0x844433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U)))))
                                                         : 
                                                        (0x40840433U 
                                                         | ((0x700000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))))
                                                      : 
                                                     (0x47413U 
                                                      | (((- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                          << 0x1aU) 
                                                         | ((0x2000000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xfU)) 
                                                                << 0x19U)) 
                                                            | ((0x1f00000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 5U)) 
                                                                   << 0x14U)) 
                                                               | ((0x38000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 0xfU)) 
                                                                  | (0x380U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                        << 7U))))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)))
                                                      ? 
                                                     (0x45413U 
                                                      | ((0x40000000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xdU)) 
                                                             << 0x1eU)) 
                                                         | ((0x1f00000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x14U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 0xfU)) 
                                                               | (0x380U 
                                                                  & ((IData)(
                                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xaU)) 
                                                                     << 7U))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 5U))))
                                                       ? 
                                                      (0x45413U 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xdU)) 
                                                              << 0x1eU)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0x14U)) 
                                                             | ((0x38000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 0xfU)) 
                                                                | (0x380U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 7U))))))
                                                       : 
                                                      (0x45413U 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xdU)) 
                                                              << 0x1eU)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0x14U)) 
                                                             | ((0x38000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 0xfU)) 
                                                                | (0x380U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 7U)))))))))))
                                            : ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x11U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     ((0x20U 
                                                       & ((IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 5U)) 
                                                      | (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 5U)))))
                                                     ? 
                                                    (0x37U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                         << 0x11U) 
                                                        | ((0x1f000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0xcU)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U)))))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xaU))))
                                                      ? 
                                                     (0x10113U 
                                                      | (((- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                          << 0x1dU) 
                                                         | ((0x18000000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 6U)) 
                                                                << 0x1bU)) 
                                                            | ((0x4000000U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 8U)) 
                                                                   << 0x1aU)) 
                                                               | ((0x2000000U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 5U)) 
                                                                      << 0x19U)) 
                                                                  | (0x1000000U 
                                                                     & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 9U)) 
                                                                        << 0x18U)))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xaU))))
                                                       ? 
                                                      (0x37U 
                                                       | (((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                           << 0x11U) 
                                                          | ((0x1f000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0xcU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 7U)))))
                                                       : 
                                                      (0x37U 
                                                       | (((- (IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                           << 0x11U) 
                                                          | ((0x1f000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0xcU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 7U))))))))
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xaU))))
                                                     ? 
                                                    (0x13U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                         << 0x1aU) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    (0x13U 
                                                     | (((- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                         << 0x1aU) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x10U)))
                                                    ? 
                                                   (0x6fU 
                                                    | (((IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)) 
                                                        << 0x1fU) 
                                                       | ((0x40000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xbU)) 
                                                              << 0x1eU)) 
                                                          | ((0x30000000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xcU)) 
                                                                 << 0x1cU)) 
                                                             | ((0x8000000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 9U)) 
                                                                    << 0x1bU)) 
                                                                | ((0x4000000U 
                                                                    & ((IData)(
                                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xaU)) 
                                                                       << 0x1aU)) 
                                                                   | ((0x2000000U 
                                                                       & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 5U)) 
                                                                          << 0x19U)) 
                                                                      | ((0x1000000U 
                                                                          & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xeU)) 
                                                                             << 0x18U)) 
                                                                         | ((0xe00000U 
                                                                             & ((IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 6U)) 
                                                                                << 0x15U)) 
                                                                            | ((0x1ff000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0xfU))))) 
                                                                                << 0xcU)) 
                                                                               | (0x80U 
                                                                                & ((~ (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                                >> 0x12U))) 
                                                                                << 7U))))))))))))
                                                    : 
                                                   (0x13U 
                                                    | (((- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xfU))))) 
                                                        << 0x1aU) 
                                                       | ((0x2000000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xfU)) 
                                                              << 0x19U)) 
                                                          | ((0x1f00000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 5U)) 
                                                                 << 0x14U)) 
                                                             | ((0xf8000U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 0xfU)) 
                                                                | (0xf80U 
                                                                   & ((IData)(
                                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                               >> 0xaU)) 
                                                                      << 7U))))))))))
                                        : ((2U == (3U 
                                                   & (IData)(
                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                              >> 3U))))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0x12U)))
                                                ? (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x11U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x10U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    (0x12023U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xaU)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1f00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 5U)) 
                                                                  << 0x14U)) 
                                                              | (0xe00U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xcU)) 
                                                                    << 9U)))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x10U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)))
                                                      ? 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 5U))))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU))))
                                                        ? 0x100073U
                                                        : 
                                                       (0xe7U 
                                                        | (0xf8000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xaU)) 
                                                              << 0xfU))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0xf8000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U)))))
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | ((0xf8000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 0xfU)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U)))))))
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 5U))))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U))))
                                                        : 
                                                       (0x67U 
                                                        | (0xf8000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xaU)) 
                                                              << 0xfU))))
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU))))
                                                        ? 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U))))
                                                        : 
                                                       (0x33U 
                                                        | ((0x1f00000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 5U)) 
                                                               << 0x14U)) 
                                                           | (0xf80U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U)))))))))
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0x11U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x10U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U)))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0x10U)))
                                                     ? 
                                                    (0x12003U 
                                                     | ((0xc000000U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x1aU)) 
                                                        | ((0x2000000U 
                                                            & ((IData)(
                                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xfU)) 
                                                               << 0x19U)) 
                                                           | ((0x1c00000U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 7U)) 
                                                                  << 0x16U)) 
                                                              | (0xf80U 
                                                                 & ((IData)(
                                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                             >> 0xaU)) 
                                                                    << 7U))))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xfU)))
                                                      ? 
                                                     (0x1013U 
                                                      | ((0x1f00000U 
                                                          & ((IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0x14U)) 
                                                         | ((0xf8000U 
                                                             & ((IData)(
                                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 0xfU)) 
                                                            | (0xf80U 
                                                               & ((IData)(
                                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 0xaU)) 
                                                                  << 7U)))))
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 5U)))) 
                                                       | (0U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xaU)))))
                                                       ? 
                                                      (0x1013U 
                                                       | ((0x1f00000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)) 
                                                              << 0x14U)) 
                                                          | ((0xf8000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 0xfU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 7U)))))
                                                       : 
                                                      (0x1013U 
                                                       | ((0x1f00000U 
                                                           & ((IData)(
                                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 5U)) 
                                                              << 0x14U)) 
                                                          | ((0xf8000U 
                                                              & ((IData)(
                                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 0xfU)) 
                                                             | (0xf80U 
                                                                & ((IData)(
                                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xaU)) 
                                                                   << 7U))))))))))
                                            : (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 3U))))))) 
                  << 3U));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xdU))))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            }
                        } else if ((0U != (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((2U == (3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_tbljmp = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU))))) {
                    if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xeU))))) {
                        if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xdU))))) {
                            if ((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x3fU 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q)))))) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_tbljmp = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s 
        = ((7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                          >> 0xaU))) != (7U & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 5U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffe001ffffULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)((0xfffU & ((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                  >> 0x21U)) 
                                         + (0x30U & 
                                            ((IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 5U)) 
                                             << 4U)))))) 
              << 0x11U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffffffffe0ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | (IData)((IData)((0x1fU & (((0xfU & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                         >> 0x1dU))) 
                                        - (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                       - (IData)(1U))))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_if 
        = (1U & ((IData)((0ULL != (7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_decompressed))) 
                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (~ (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU))))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((3U != (3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 8U))))) {
                                if ((1U == (3U & (IData)(
                                                         (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                          >> 8U))))) {
                                    if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s) {
                                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
    if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer)))) {
        if ((2U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 3U))))) {
            if ((5U == (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xfU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((0U == (3U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 4U;
                                }
                            } else if ((2U == (3U & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xbU))))) {
                                if ((3U < (0xfU & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 7U))))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 3U;
                                }
                            }
                        } else if ((0U == (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 7U))))) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 1U;
                            }
                        } else if ((2U == (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xbU))))) {
                            if ((3U < (0xfU & (IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                       >> 7U))))) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 2U;
                            }
                        }
                    } else {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                    }
                } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xeU)))) {
                    if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xdU)))) {
                        if ((3U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 8U))))) {
                            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 5U;
                        } else if ((1U == (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 8U))))) {
                            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s) {
                                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 6U;
                            }
                        }
                    } else {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                    }
                } else if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xdU)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 0U;
                } else if ((1U & (~ (IData)((0U != 
                                             (0x3fU 
                                              & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q)))))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr = 7U;
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                        ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                            ? 0x8067U
                                            : 0x513U)
                                        : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                            ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                                ? (0x10113U 
                                                   | ((IData)(
                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                               >> 0x11U)) 
                                                      << 0x14U))
                                                : (0x10113U 
                                                   | ((- (IData)(
                                                                 (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                  >> 0x11U))) 
                                                      << 0x14U)))
                                            : ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                                ? (0x12083U 
                                                   | ((IData)(
                                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                               >> 5U)) 
                                                      << 0x14U))
                                                : (0x112023U 
                                                   | (((IData)(
                                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                >> 0xaU)) 
                                                       << 0x19U) 
                                                      | (0xf80U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                     >> 5U)) 
                                                            << 7U))))))))) 
                      << 3U));
        } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                vlSelf->__Vfunc_sn_to_regnum__3__snum 
                    = (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
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
                    = (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
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
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s)
                                            ? (0x58013U 
                                               | ((IData)(vlSelf->__Vfunc_sn_to_regnum__2__Vfuncout) 
                                                  << 7U))
                                            : (0x593U 
                                               | ((IData)(vlSelf->__Vfunc_sn_to_regnum__3__Vfuncout) 
                                                  << 0xfU))))) 
                          << 3U));
            } else {
                vlSelf->__Vfunc_sn_to_regnum__4__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__4__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__4__snum))));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0x12003U 
                                           | (((IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 5U)) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->__Vfunc_sn_to_regnum__4__Vfuncout) 
                                                 << 7U))))) 
                          << 3U));
            }
        } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->__Vfunc_sn_to_regnum__5__snum = 
                (0x1fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
            vlSelf->__Vfunc_sn_to_regnum__5__Vfuncout 
                = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum)) 
                    | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum)))
                    ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum) 
                                            >> 1U))) 
                              << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum))))
                    : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum) 
                                      >> 1U))) << 4U) 
                       | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__5__snum))));
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)((0x12023U | (
                                                   ((IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 0xaU)) 
                                                    << 0x19U) 
                                                   | (((IData)(vlSelf->__Vfunc_sn_to_regnum__5__Vfuncout) 
                                                       << 0x14U) 
                                                      | (0xf80U 
                                                         & ((IData)(
                                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                     >> 5U)) 
                                                            << 7U))))))) 
                      << 3U));
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load) {
            if ((1U == (0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                        >> 0x1dU))))) {
                vlSelf->__Vfunc_sn_to_regnum__6__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__6__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__6__snum))));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0x12003U 
                                           | (((IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 5U)) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->__Vfunc_sn_to_regnum__6__Vfuncout) 
                                                 << 7U))))) 
                          << 3U));
            } else if ((1U < (0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                              >> 0x1dU))))) {
                vlSelf->__Vfunc_sn_to_regnum__7__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__7__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__7__snum))));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0x12003U 
                                           | (((IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 5U)) 
                                               << 0x14U) 
                                              | ((IData)(vlSelf->__Vfunc_sn_to_regnum__7__Vfuncout) 
                                                 << 7U))))) 
                          << 3U));
            } else {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0x12083U 
                                           | ((IData)(
                                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                       >> 5U)) 
                                              << 0x14U)))) 
                          << 3U));
            }
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store) {
            if ((1U == (0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                        >> 0x1dU))))) {
                vlSelf->__Vfunc_sn_to_regnum__8__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__8__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__8__snum))));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0xfe012e23U 
                                           | ((IData)(vlSelf->__Vfunc_sn_to_regnum__8__Vfuncout) 
                                              << 0x14U)))) 
                          << 3U));
            } else if ((1U < (0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                              >> 0x1dU))))) {
                vlSelf->__Vfunc_sn_to_regnum__9__snum 
                    = (0x1fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                vlSelf->__Vfunc_sn_to_regnum__9__Vfuncout 
                    = (((0U == (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum)) 
                        | (1U == (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum)))
                        ? (8U | (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum) 
                                                >> 1U))) 
                                  << 4U) | (7U & (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum))))
                        : (((0U != (7U & ((IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum) 
                                          >> 1U))) 
                            << 4U) | (0xfU & (IData)(vlSelf->__Vfunc_sn_to_regnum__9__snum))));
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                    = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                       | ((QData)((IData)((0xfe012e23U 
                                           | ((IData)(vlSelf->__Vfunc_sn_to_regnum__9__Vfuncout) 
                                              << 0x14U)))) 
                          << 3U));
            } else {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                    = (0x7f0897118ULL | (7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr));
            }
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s) {
            vlSelf->__Vfunc_sn_to_regnum__10__snum 
                = (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
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
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)((0x50013U | ((IData)(vlSelf->__Vfunc_sn_to_regnum__10__Vfuncout) 
                                                   << 7U)))) 
                      << 3U));
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_tbljmp) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((0U == (7U & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xaU))))
                                        ? (0x6fU | 
                                           (0x1f000U 
                                            & ((IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 5U)) 
                                               << 0xcU)))
                                        : (0xefU | 
                                           (0xff000U 
                                            & ((IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                        >> 5U)) 
                                               << 0xcU)))))) 
                      << 3U));
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a) {
            vlSelf->__Vfunc_sn_to_regnum__11__snum 
                = (7U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
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
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)((0x513U | ((IData)(vlSelf->__Vfunc_sn_to_regnum__11__Vfuncout) 
                                                 << 0xfU)))) 
                      << 3U));
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1ffffffe001fULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)(((8U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                ? 0U : (0xfffU & ((4U 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 0U
                                                     : 
                                                    ((IData)(
                                                             (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                              >> 0x11U)) 
                                                     - 
                                                     (0x7cU 
                                                      & (((IData)(1U) 
                                                          + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                         << 2U)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 
                                                   ((IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 0x11U)) 
                                                    - 
                                                    (0x7cU 
                                                     & (((IData)(1U) 
                                                         + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                        << 2U)))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 
                                                    (- 
                                                     (((IData)(1U) 
                                                       + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                                      << 2U))
                                                     : 0U))))))) 
              << 5U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q;
    if ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
    } else if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
            = ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                    ? 0U : 7U) : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))
                                   ? ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                       ? 6U : ((3U 
                                                == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                ? 7U
                                                : 0U))
                                   : 5U));
    } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
                    == ((0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                         >> 0x1dU))) 
                        - (IData)(1U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        }
    } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
             == ((0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                  >> 0x1dU))) - (IData)(1U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        }
    } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
            = ((1U == (0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                       >> 0x1dU))))
                ? 4U : ((1U < (0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                               >> 0x1dU))))
                         ? 2U : 5U));
    } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
            = ((1U == (0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                       >> 0x1dU))))
                ? 4U : ((1U < (0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                               >> 0x1dU))))
                         ? 1U : 5U));
    } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
    } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_tbljmp)))) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_valid 
        = (((((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr)) 
              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid)) 
            & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                  >> 0x15U))) & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                    >> 0x10U)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
                }
            } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                if ((4U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
            }
        }
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_last 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q) 
           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm));
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
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__last_op_if 
        = (1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_valid)) 
                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_last)));
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
    __Vtableidx7 = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns) 
                     << 4U) | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                                << 3U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns 
        = Vsoc_top_with_cache__ConstPool__TABLE_5bfb044c_0
        [__Vtableidx7];
}
