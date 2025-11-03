// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top_with_cache.h for the primary calling header

#include "Vsoc_top_with_cache___024root.h"
#include "Vsoc_top_with_cache__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vsoc_top_with_cache___024root___combo__TOP__2(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                  >> 6U) & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                             >> 5U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                                       >> 4U))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_we = 0U;
    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    } else if ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    } else if ((0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_mtvec_init_if 
        = ((0U == (0xfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) 
           & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
              >> 6U));
}

extern const VlWide<8>/*255:0*/ Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0;

VL_INLINE_OPT void Vsoc_top_with_cache___024root___sequent__TOP__4(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v0;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v0;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v1;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v1;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v1;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v2;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v2;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v2;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v3;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v3;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v3;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v4;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v4;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v4;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v5;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v5;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v5;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v6;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v6;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v6;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v7;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v7;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v7;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v8;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v8;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v8;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v9;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v9;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v9;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v10;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v10;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v10;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v11;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v11;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v11;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v12;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v12;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v12;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v13;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v13;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v13;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v14;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v14;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v14;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v15;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v15;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v15;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v16;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v16;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v16;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v17;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v17;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v17;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v18;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v18;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v18;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v19;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v19;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v19;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v20;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v20;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v20;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v21;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v21;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v21;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v22;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v22;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v22;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v23;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v23;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v23;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v24;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v24;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v24;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v25;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v25;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v25;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v26;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v26;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v26;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v27;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v27;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v27;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v28;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v28;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v28;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v29;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v29;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v29;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v30;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v30;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v30;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v31;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v31;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v31;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v32;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v32;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v32;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v33;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v33;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v33;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v34;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v34;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v34;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v35;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v35;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v35;
    CData/*7:0*/ __Vdly__soc_top_with_cache__DOT__pc_stuck_counter;
    CData/*3:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v1;
    CData/*4:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter;
    CData/*2:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6;
    CData/*3:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v0;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v1;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v2;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v3;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v4;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v5;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v6;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v7;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v8;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v9;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v10;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v11;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v12;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v13;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v14;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v15;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v16;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v17;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v18;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v19;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v20;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v21;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v22;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v23;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v24;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v25;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v26;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v27;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v28;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v29;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v30;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v31;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v32;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v33;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v34;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v35;
    IData/*31:0*/ __Vdly__soc_top_with_cache__DOT__cycle_count;
    IData/*31:0*/ __Vdly__soc_top_with_cache__DOT__instructions_executed;
    VlWide<8>/*255:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0;
    IData/*31:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr;
    VlWide<8>/*255:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v0;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v1;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v2;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v3;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v4;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v5;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v6;
    // Body
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter;
    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col;
    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row;
    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k;
    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count;
    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q;
    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[0U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[0U];
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[1U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[1U];
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[2U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[2U];
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[3U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[3U];
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[4U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[4U];
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[5U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[5U];
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[6U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[6U];
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[7U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[7U];
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v0 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v1 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v2 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v3 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v4 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v5 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v6 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v32 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v33 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v34 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v35 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v2 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v3 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v4 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v5 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v6 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v7 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v8 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v9 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v10 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v11 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v12 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v13 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v14 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v15 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v16 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v17 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v18 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v19 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v20 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v21 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v22 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v23 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v24 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v25 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v26 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v27 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v28 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v29 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v30 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v31 = 0U;
    __Vdly__soc_top_with_cache__DOT__pc_stuck_counter 
        = vlSelf->soc_top_with_cache__DOT__pc_stuck_counter;
    __Vdly__soc_top_with_cache__DOT__instructions_executed 
        = vlSelf->soc_top_with_cache__DOT__instructions_executed;
    __Vdly__soc_top_with_cache__DOT__cycle_count = vlSelf->soc_top_with_cache__DOT__cycle_count;
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__i = 8U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 8U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans_valid) {
            if ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                if ((0x2000U > ((0x3fffe000U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                                << 0xdU)) 
                                | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                   >> 0x13U)))) {
                    vlSelf->soc_top_with_cache__DOT__unnamedblk4__DOT__i = 4U;
                }
            }
        }
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_q 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_op;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_q 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
             | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_col1_delay 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col1;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_col1_delay = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
             | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_row1_delay 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row1;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_row1_delay = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_start))) {
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter = 0U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter)));
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__data_rvalid = 
        ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__data_gnt));
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q 
                = (0x1fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                            >> 0x16U));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q 
                = (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                   >> 0x1bU);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q)))) {
            vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct3_q;
            if ((0x40U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
            } else if ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
            } else if ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
            } else if ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
                } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
                } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
                } else {
                    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 1U;
                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active = 1U;
                    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count = 0U;
                }
            } else {
                vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
            }
        } else if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q) {
            vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count)));
            if ((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))) {
                if ((9U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
        vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count = 0U;
        vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk11__DOT__i = 8U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j = 8U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk12__DOT__i = 8U;
            if ((0U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v0 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[0U];
            }
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v0 = 1U;
            vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row = 0U;
            vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col = 0U;
            vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k = 0U;
            if ((1U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v1 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[1U];
            }
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v1 = 1U;
            if ((2U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v2 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[2U];
            }
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v2 = 1U;
            if ((3U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v3 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[3U];
            }
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v3 = 1U;
            if ((4U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v4 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[4U];
            }
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v4 = 1U;
            if ((5U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v5 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[5U];
            }
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v5 = 1U;
            if ((6U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v6 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[6U];
            }
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v6 = 1U;
        } else if ((5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
                vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 
                    = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                       [(7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                               << 1U))][(7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                               << 1U))] 
                       + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                           [0U][0U][2U])) 
                           << 0x3fU) | (((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                         [0U]
                                                         [0U][1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                           [0U]
                                                           [0U][0U])) 
                                           >> 1U))));
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 = 1U;
                vlSelf->__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 
                    = (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                             << 1U));
                vlSelf->__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 
                    = (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                             << 1U));
                vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65 
                    = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                       [(7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                               << 1U))][(7U & ((IData)(1U) 
                                               + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                                  << 1U)))] 
                       + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                           [0U][1U][2U])) 
                           << 0x3fU) | (((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                         [0U]
                                                         [1U][1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                           [0U]
                                                           [1U][0U])) 
                                           >> 1U))));
                vlSelf->__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65 
                    = (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                            << 1U)));
                vlSelf->__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65 
                    = (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                             << 1U));
                vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66 
                    = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                       [(7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                              << 1U)))]
                       [(7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                               << 1U))] + (((QData)((IData)(
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
                                                 >> 1U))));
                vlSelf->__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66 
                    = (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                             << 1U));
                vlSelf->__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66 
                    = (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                            << 1U)));
                vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67 
                    = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                       [(7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                              << 1U)))]
                       [(7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                              << 1U)))] 
                       + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                           [1U][1U][2U])) 
                           << 0x3fU) | (((QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                         [1U]
                                                         [1U][1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                           [1U]
                                                           [1U][0U])) 
                                           >> 1U))));
                vlSelf->__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67 
                    = (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                            << 1U)));
                vlSelf->__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67 
                    = (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                            << 1U)));
            }
        } else if ((7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k 
                = (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k) 
                    < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                       - (IData)(1U))) ? (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k)))
                    : 0U);
        } else if ((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                 < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles) 
                    - (IData)(1U)))) {
                vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col)));
            } else {
                if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                     < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles) 
                        - (IData)(1U)))) {
                    vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row)));
                }
                vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col = 0U;
            }
            vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k = 0U;
        }
    } else {
        vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row = 0U;
        vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col = 0U;
        vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k = 0U;
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7 = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear) {
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11 = 1U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                [0U][1U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12 = 0x61U;
            vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                [0U][1U];
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13 = 0x41U;
            if ((1U & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                 [0U][0U][0U])) {
                vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14 
                    = (((~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)) 
                        & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter)))
                        ? ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                           [0U][1U])) 
                           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                             [0U][1U])))
                        : ((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                             [0U][1U][2U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                           [0U]
                                                           [1U][1U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                             [0U]
                                                             [1U][0U])) 
                                             >> 1U))) 
                           + ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                              [0U][1U])) 
                              * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                                [0U]
                                                [1U])))));
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15 = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 = 0U;
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)))) {
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17 = 1U;
            }
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18 = 1U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18 = 0x61U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v19 = 0x41U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v20 = 1U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21 = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear) {
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22 = 1U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                [1U][0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23 = 0x61U;
            vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                [1U][0U];
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24 = 0x41U;
            if ((1U & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                 [0U][0U][0U])) {
                vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25 
                    = (((~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)) 
                        & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter)))
                        ? ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                           [1U][0U])) 
                           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                             [1U][0U])))
                        : ((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                             [1U][0U][2U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                           [1U]
                                                           [0U][1U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                             [1U]
                                                             [0U][0U])) 
                                             >> 1U))) 
                           + ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                              [1U][0U])) 
                              * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                                [1U]
                                                [0U])))));
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26 = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 = 0U;
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)))) {
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28 = 1U;
            }
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29 = 1U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29 = 0x61U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v30 = 0x41U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v31 = 1U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32 = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear) {
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33 = 1U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                [1U][1U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34 = 0x61U;
            vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                [1U][1U];
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35 = 0x41U;
            if ((1U & (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                       [1U][0U][0U] & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                       [0U][1U][0U]))) {
                vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36 
                    = (((~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)) 
                        & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter)))
                        ? ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                           [1U][1U])) 
                           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                             [1U][1U])))
                        : ((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                             [1U][1U][2U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                           [1U]
                                                           [1U][1U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                             [1U]
                                                             [1U][0U])) 
                                             >> 1U))) 
                           + ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                              [1U][1U])) 
                              * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                                [1U]
                                                [1U])))));
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37 = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 = 0U;
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)))) {
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39 = 1U;
            }
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40 = 1U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40 = 0x61U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v41 = 0x41U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v42 = 1U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43 = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear) {
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0 = 1U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                [0U][0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1 = 0x61U;
            vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                [0U][0U];
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2 = 0x41U;
            if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid) 
                 & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid))) {
                vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3 
                    = (((~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)) 
                        & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter)))
                        ? ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                           [0U][0U])) 
                           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                             [0U][0U])))
                        : ((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                             [0U][0U][2U])) 
                             << 0x3fU) | (((QData)((IData)(
                                                           vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                           [0U]
                                                           [0U][1U])) 
                                           << 0x1fU) 
                                          | ((QData)((IData)(
                                                             vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                             [0U]
                                                             [0U][0U])) 
                                             >> 1U))) 
                           + ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                              [0U][0U])) 
                              * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                                [0U]
                                                [0U])))));
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4 = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 = 1U;
            vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 = 0U;
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)))) {
                vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6 = 1U;
                vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6 = 1U;
            }
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7 = 1U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7 = 0x61U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v8 = 0x41U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v9 = 1U;
        vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10 = 0U;
    }
    if (vlSelf->rst_ni) {
        if (VL_UNLIKELY(((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_we) 
                         & (0U != (0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)))))) {
            VL_WRITEF("VRF Write: v%0# = 0x%08x (first element)\n",
                      5,(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)),
                      32,((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))
                           ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[0U]
                           : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[0U]));
            if ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[0U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[0U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[1U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[1U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[2U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[2U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[3U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[3U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[4U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[4U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[5U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[5U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[6U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[6U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[7U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[7U];
            } else {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[0U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[0U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[1U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[1U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[2U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[2U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[3U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[3U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[4U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[4U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[5U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[5U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[6U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[6U];
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[7U] 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[7U];
            }
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0 = 1U;
            __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0 
                = (0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__unnamedblk2__DOT__i = 0x10U;
        __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v1 = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans_valid) {
            if ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                if ((0x2000U > ((0x3fffe000U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                                << 0xdU)) 
                                | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                   >> 0x13U)))) {
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v32 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                        >> 6U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v32 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v32 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v32 
                            = (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               >> 0x13U);
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v33 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                        >> 0xeU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v33 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v33 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v33 
                            = (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               >> 0x13U);
                    }
                    if ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v34 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                        >> 0x16U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v34 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v34 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v34 
                            = (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               >> 0x13U);
                    }
                    if ((0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v35 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                         << 2U) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                   >> 0x1eU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v35 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v35 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v35 
                            = (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               >> 0x13U);
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__state 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans_valid) {
            vlSelf->soc_top_with_cache__DOT__data_rdata 
                = ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U])
                    ? 0U : ((0x2000U > ((0x3fffe000U 
                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                            << 0xdU)) 
                                        | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                           >> 0x13U)))
                             ? vlSelf->soc_top_with_cache__DOT__main_memory
                            [(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                              >> 0x13U)] : 0U));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__data_rdata = 0U;
    }
    if (vlSelf->rst_ni) {
        __Vdly__soc_top_with_cache__DOT__cycle_count 
            = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__cycle_count);
        if (VL_UNLIKELY((0x14U > vlSelf->soc_top_with_cache__DOT__cycle_count))) {
            VL_WRITEF("Cycle %10#: PC=0x%08x, instr_req=%b, instr_gnt=%b, instr_rvalid=%b, instr=0x%08x\n",
                      32,vlSelf->soc_top_with_cache__DOT__cycle_count,
                      32,((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                   >> 8U)) << 2U),1,
                      (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.s_req),
                      1,vlSelf->soc_top_with_cache__DOT__instr_gnt,
                      1,(IData)(vlSelf->soc_top_with_cache__DOT__instr_rvalid),
                      32,vlSelf->soc_top_with_cache__DOT__instr_rdata);
        }
        if (vlSelf->soc_top_with_cache__DOT__instr_rvalid) {
            __Vdly__soc_top_with_cache__DOT__instructions_executed 
                = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__instructions_executed);
        }
        if (VL_UNLIKELY((1U == vlSelf->soc_top_with_cache__DOT__main_memory
                         [0x400U]))) {
            VL_WRITEF("\n=== PROGRAM COMPLETED SUCCESSFULLY ===\nTotal cycles: %0#\nInstructions executed: %0#\n===========================\n\n",
                      32,vlSelf->soc_top_with_cache__DOT__cycle_count,
                      32,vlSelf->soc_top_with_cache__DOT__instructions_executed);
            VL_FINISH_MT("sim/soc_top_with_cache.sv", 303, "");
        }
        if (vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.s_req) {
            if ((((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                           >> 8U)) << 2U) == vlSelf->soc_top_with_cache__DOT__prev_pc)) {
                __Vdly__soc_top_with_cache__DOT__pc_stuck_counter 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__pc_stuck_counter)));
                if (VL_UNLIKELY((0x64U < (IData)(vlSelf->soc_top_with_cache__DOT__pc_stuck_counter)))) {
                    VL_WRITEF("\n=== INFINITE LOOP DETECTED ===\nStuck at PC: 0x%08x\nTotal cycles: %0#\nInstructions executed: %0#\nMemory[0x1000]: 0x%08x\n===========================\n\n",
                              32,((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                           >> 8U)) 
                                  << 2U),32,vlSelf->soc_top_with_cache__DOT__cycle_count,
                              32,vlSelf->soc_top_with_cache__DOT__instructions_executed,
                              32,vlSelf->soc_top_with_cache__DOT__main_memory
                              [0x400U]);
                    VL_FINISH_MT("sim/soc_top_with_cache.sv", 317, "");
                }
            } else {
                vlSelf->soc_top_with_cache__DOT__prev_pc 
                    = ((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                >> 8U)) << 2U);
                __Vdly__soc_top_with_cache__DOT__pc_stuck_counter = 0U;
            }
        }
        if (VL_UNLIKELY((0x186a0U < vlSelf->soc_top_with_cache__DOT__cycle_count))) {
            VL_WRITEF("Simulation timeout at cycle %0#\nChecking memory[0x1000]: 0x%08x\nPC: 0x%08x\n",
                      32,vlSelf->soc_top_with_cache__DOT__cycle_count,
                      32,vlSelf->soc_top_with_cache__DOT__main_memory
                      [0x400U],32,((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                            >> 8U)) 
                                   << 2U));
            VL_FINISH_MT("sim/soc_top_with_cache.sv", 330, "");
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__cycle_count = 0U;
        __Vdly__soc_top_with_cache__DOT__instructions_executed = 0U;
        vlSelf->soc_top_with_cache__DOT__prev_pc = 0U;
        __Vdly__soc_top_with_cache__DOT__pc_stuck_counter = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__fetch_enable_q 
        = vlSelf->rst_ni;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__core_busy_q 
        = ((IData)(vlSelf->rst_ni) & ((((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid)) 
                                       | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                                          >> 8U)) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_busy)));
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v0;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][1U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v1;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v2;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][1U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v3;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v4;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][1U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v5;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v6;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[0U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[1U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[2U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[3U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[4U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[4U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[4U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[4U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[4U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[4U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[4U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[4U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[5U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[5U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[5U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[5U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[5U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[5U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[5U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[5U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[6U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[6U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[6U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[6U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[6U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[6U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[6U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[6U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[7U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[7U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[7U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[7U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[7U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[7U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[7U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b[7U][7U] = 0U;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][1U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][1U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][1U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[0U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[1U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[2U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[3U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[4U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[4U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[4U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[4U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[4U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[4U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[4U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[4U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[5U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[5U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[5U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[5U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[5U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[5U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[5U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[5U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[6U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[6U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[6U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[6U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[6U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[6U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[6U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[6U][7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[7U][0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[7U][1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[7U][2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[7U][3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[7U][4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[7U][5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[7U][6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a[7U][7U] = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter;
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0][0U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0][1U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0][2U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0][3U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0][4U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0][5U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0][6U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0][7U] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0[7U];
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v1) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9U][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9U][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9U][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9U][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9U][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9U][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9U][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9U][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xaU][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xaU][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xaU][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xaU][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xaU][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xaU][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xaU][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xaU][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xbU][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xbU][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xbU][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xbU][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xbU][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xbU][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xbU][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xbU][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xcU][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xcU][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xcU][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xcU][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xcU][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xcU][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xcU][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xcU][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xdU][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xdU][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xdU][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xdU][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xdU][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xdU][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xdU][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xdU][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xeU][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xeU][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xeU][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xeU][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xeU][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xeU][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xeU][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xeU][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xfU][0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xfU][1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xfU][2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xfU][3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xfU][4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xfU][5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xfU][6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0xfU][7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
    }
    vlSelf->soc_top_with_cache__DOT__cycle_count = __Vdly__soc_top_with_cache__DOT__cycle_count;
    vlSelf->soc_top_with_cache__DOT__instructions_executed 
        = __Vdly__soc_top_with_cache__DOT__instructions_executed;
    vlSelf->soc_top_with_cache__DOT__pc_stuck_counter 
        = __Vdly__soc_top_with_cache__DOT__pc_stuck_counter;
    vlSelf->soc_top_with_cache__DOT__data_gnt = ((IData)(vlSelf->rst_ni) 
                                                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans_valid));
    if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_size = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles = 1U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size = 2U;
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_size 
            = ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q))
                ? 1U : ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q))
                         ? 2U : 0U));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles 
            = ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q))
                ? 2U : ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q))
                         ? 4U : 1U));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size 
            = ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q))
                ? 4U : ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q))
                         ? 0U : 2U));
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct3_q 
                = (7U & vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U]);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct3_q = 0U;
    }
    if ((0U == (0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q)))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[0U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))][0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[1U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))][1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[2U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))][2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[3U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))][3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[4U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))][4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[5U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))][5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[6U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))][6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[7U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))][7U];
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q 
                = (0x1fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                            >> 3U));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load) 
              | (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store)) 
             & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)))) {
            if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load) {
                VL_WRITEF("VLSU: Starting load from addr 0x%08x\n",
                          32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__scalar_val_q);
            } else {
                VL_WRITEF("VLSU: Starting store to addr 0x%08x\n  Store data[0]=0x%08x, [1]=0x%08x, [2]=0x%08x, [3]=0x%08x\n",
                          32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__scalar_val_q,
                          32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U],
                          32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U],
                          32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U],
                          32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U]);
            }
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter = 0U;
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__scalar_val_q;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__is_load 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load;
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[0U] 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U];
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[1U] 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U];
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[2U] 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U];
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[3U] 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U];
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[4U] 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U];
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[5U] 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U];
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[6U] 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U];
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[7U] 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[7U];
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[0U] = 0U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[1U] = 0U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[2U] = 0U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[3U] = 0U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[4U] = 0U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[5U] = 0U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[6U] = 0U;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[7U] = 0U;
        }
        if (VL_UNLIKELY((((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                          & (IData)(vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid)) 
                         & ((0xfU & (IData)((vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                                             >> 0x22U))) 
                            == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q))))) {
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr 
                = ((IData)(4U) + vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr);
            VL_ASSIGNSEL_WIII(256,32,(0xffU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                               << 5U)), vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg, (IData)(
                                                                                (vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                                                                                >> 2U)));
            VL_WRITEF("VLSU: Received data 0x%08x for word %0#\n",
                      32,(IData)((vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                                  >> 2U)),5,vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter);
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter)));
        }
        if (VL_UNLIKELY(((3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                         & (IData)(vlSelf->soc_top_with_cache__DOT__vpu_mem_ready)))) {
            VL_WRITEF("VLSU: Storing word %0#: 0x%08x to addr 0x%08x\n",
                      5,vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter,
                      32,(((0U == (0x1fU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                            << 5U)))
                            ? 0U : (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[
                                    (((IData)(0x1fU) 
                                      + (0xffU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                                  << 5U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                                     << 5U))))) 
                          | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[
                             (7U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter))] 
                             >> (0x1fU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                          << 5U)))),
                      32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr);
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter)));
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr 
                = ((IData)(4U) + vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr);
        }
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state;
    } else {
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__is_load = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[0U] = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[1U] = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[2U] = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[3U] = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[4U] = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[5U] = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[6U] = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg[7U] = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_we = 0U;
    if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
        if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state)))) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_we = 1U;
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_result_valid_o = 0U;
    if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
        if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
            if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
                vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_result_valid_o = 1U;
            }
        }
    }
    if (vlSelf->rst_ni) {
        if (vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.s_req) {
            vlSelf->soc_top_with_cache__DOT__instr_rdata 
                = ((0x2000U > (0x3fffffffU & (IData)(
                                                     (vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                                      >> 8U))))
                    ? vlSelf->soc_top_with_cache__DOT__main_memory
                   [(0x1fffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                        >> 8U)))] : 0U);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__instr_rdata = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__instr_rvalid = 
        ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__instr_gnt));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[0U] 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[1U] 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[2U] 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[3U] 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[4U] 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[5U] 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[6U] 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[7U] 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state)))) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_q;
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store = 0U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state)))) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q;
            }
        }
    }
    if ((0U == (0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                         ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                         : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q))))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                       ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                       : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))][0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                       ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                       : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))][1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                       ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                       : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))][2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                       ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                       : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))][3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                       ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                       : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))][4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                       ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                       : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))][5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                       ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                       : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))][6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[7U] 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
            [(0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                       ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                       : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))][7U];
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__scalar_val_q 
                = ((vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[1U] 
                    << 0x17U) | (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[0U] 
                                 >> 9U));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__scalar_val_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q 
                = (0xfU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                           >> 9U));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
              | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state))) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__vpu_mem_ready))) {
            vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid = 1U;
            vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                = ((0x3ffffffffULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                   | ((QData)((IData)((0xfU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                               >> 0xeU)))) 
                      << 0x22U));
            vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                = (0x3ffffffffdULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
            if ((0x800U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                if ((0x2000U > ((0x3fff0000U & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                << 0x10U)) 
                                | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                   >> 0x10U)))) {
                    vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i = 0x20U;
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v0 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v0 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v0 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v0 
                            = (0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                          >> 0x10U));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v1 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v1 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v1 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v1 
                            = (0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                          >> 0x10U));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v2 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v2 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v2 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v2 
                            = (0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                          >> 0x10U));
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v3 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                         << 6U) | (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                                   >> 0x1aU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v3 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v3 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v3 
                            = (0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                          >> 0x10U));
                    }
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v4 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v4 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v4 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v4 
                            = (0x1fffU & ((IData)(1U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v5 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v5 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v5 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v5 
                            = (0x1fffU & ((IData)(1U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v6 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v6 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v6 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v6 
                            = (0x1fffU & ((IData)(1U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v7 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                         << 6U) | (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                                   >> 0x1aU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v7 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v7 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v7 
                            = (0x1fffU & ((IData)(1U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v8 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v8 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v8 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v8 
                            = (0x1fffU & ((IData)(2U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v9 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v9 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v9 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v9 
                            = (0x1fffU & ((IData)(2U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v10 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v10 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v10 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v10 
                            = (0x1fffU & ((IData)(2U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v11 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                         << 6U) | (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                                   >> 0x1aU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v11 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v11 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v11 
                            = (0x1fffU & ((IData)(2U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v12 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v12 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v12 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v12 
                            = (0x1fffU & ((IData)(3U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v13 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v13 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v13 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v13 
                            = (0x1fffU & ((IData)(3U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v14 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v14 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v14 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v14 
                            = (0x1fffU & ((IData)(3U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v15 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                         << 6U) | (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                                   >> 0x1aU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v15 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v15 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v15 
                            = (0x1fffU & ((IData)(3U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v16 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v16 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v16 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v16 
                            = (0x1fffU & ((IData)(4U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v17 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v17 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v17 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v17 
                            = (0x1fffU & ((IData)(4U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v18 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v18 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v18 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v18 
                            = (0x1fffU & ((IData)(4U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v19 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                         << 6U) | (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                                   >> 0x1aU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v19 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v19 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v19 
                            = (0x1fffU & ((IData)(4U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v20 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v20 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v20 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v20 
                            = (0x1fffU & ((IData)(5U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v21 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v21 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v21 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v21 
                            = (0x1fffU & ((IData)(5U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v22 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v22 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v22 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v22 
                            = (0x1fffU & ((IData)(5U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v23 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                         << 6U) | (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                                   >> 0x1aU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v23 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v23 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v23 
                            = (0x1fffU & ((IData)(5U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v24 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v24 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v24 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v24 
                            = (0x1fffU & ((IData)(6U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v25 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v25 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v25 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v25 
                            = (0x1fffU & ((IData)(6U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v26 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v26 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v26 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v26 
                            = (0x1fffU & ((IData)(6U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v27 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                         << 6U) | (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                                   >> 0x1aU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v27 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v27 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v27 
                            = (0x1fffU & ((IData)(6U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v28 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v28 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v28 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v28 
                            = (0x1fffU & ((IData)(7U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v29 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v29 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v29 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v29 
                            = (0x1fffU & ((IData)(7U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v30 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v30 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v30 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v30 
                            = (0x1fffU & ((IData)(7U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v31 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                         << 6U) | (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                                   >> 0x1aU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v31 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v31 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v31 
                            = (0x1fffU & ((IData)(7U) 
                                          + ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                              << 0x10U) 
                                             | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                >> 0x10U))));
                    }
                }
                vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                    = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
            } else {
                vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i = 8U;
                if ((0x2000U > ((0x3fff0000U & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                << 0x10U)) 
                                | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                   >> 0x10U)))) {
                    vlSelf->soc_top_with_cache__DOT____Vlvbound1 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                     >> 0x10U))];
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = ((0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT____Vlvbound1)) 
                              << 2U));
                } else {
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
                }
                if ((0x2000U > ((IData)(1U) + ((0x3fff0000U 
                                                & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                   << 0x10U)) 
                                               | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                  >> 0x10U))))) {
                    vlSelf->soc_top_with_cache__DOT____Vlvbound1 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(0x1fffU & ((IData)(1U) + 
                                     ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       << 0x10U) | 
                                      (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       >> 0x10U))))];
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = ((0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT____Vlvbound1)) 
                              << 2U));
                } else {
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
                }
                if ((0x2000U > ((IData)(2U) + ((0x3fff0000U 
                                                & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                   << 0x10U)) 
                                               | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                  >> 0x10U))))) {
                    vlSelf->soc_top_with_cache__DOT____Vlvbound1 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(0x1fffU & ((IData)(2U) + 
                                     ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       << 0x10U) | 
                                      (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       >> 0x10U))))];
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = ((0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT____Vlvbound1)) 
                              << 2U));
                } else {
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
                }
                if ((0x2000U > ((IData)(3U) + ((0x3fff0000U 
                                                & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                   << 0x10U)) 
                                               | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                  >> 0x10U))))) {
                    vlSelf->soc_top_with_cache__DOT____Vlvbound1 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(0x1fffU & ((IData)(3U) + 
                                     ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       << 0x10U) | 
                                      (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       >> 0x10U))))];
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = ((0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT____Vlvbound1)) 
                              << 2U));
                } else {
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
                }
                if ((0x2000U > ((IData)(4U) + ((0x3fff0000U 
                                                & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                   << 0x10U)) 
                                               | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                  >> 0x10U))))) {
                    vlSelf->soc_top_with_cache__DOT____Vlvbound1 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(0x1fffU & ((IData)(4U) + 
                                     ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       << 0x10U) | 
                                      (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       >> 0x10U))))];
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = ((0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT____Vlvbound1)) 
                              << 2U));
                } else {
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
                }
                if ((0x2000U > ((IData)(5U) + ((0x3fff0000U 
                                                & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                   << 0x10U)) 
                                               | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                  >> 0x10U))))) {
                    vlSelf->soc_top_with_cache__DOT____Vlvbound1 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(0x1fffU & ((IData)(5U) + 
                                     ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       << 0x10U) | 
                                      (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       >> 0x10U))))];
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = ((0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT____Vlvbound1)) 
                              << 2U));
                } else {
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
                }
                if ((0x2000U > ((IData)(6U) + ((0x3fff0000U 
                                                & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                   << 0x10U)) 
                                               | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                  >> 0x10U))))) {
                    vlSelf->soc_top_with_cache__DOT____Vlvbound1 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(0x1fffU & ((IData)(6U) + 
                                     ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       << 0x10U) | 
                                      (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       >> 0x10U))))];
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = ((0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT____Vlvbound1)) 
                              << 2U));
                } else {
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
                }
                if ((0x2000U > ((IData)(7U) + ((0x3fff0000U 
                                                & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                   << 0x10U)) 
                                               | (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                  >> 0x10U))))) {
                    vlSelf->soc_top_with_cache__DOT____Vlvbound1 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(0x1fffU & ((IData)(7U) + 
                                     ((vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       << 0x10U) | 
                                      (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                       >> 0x10U))))];
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = ((0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT____Vlvbound1)) 
                              << 2U));
                } else {
                    vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                        = (0x3c00000003ULL & vlSelf->soc_top_with_cache__DOT__vpu_mem_result);
                }
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu_mem_result = 0ULL;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
        = ((3ULL & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o) 
           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__instr_rdata)) 
              << 3U));
    vlSelf->soc_top_with_cache__DOT__instr_gnt = ((IData)(vlSelf->rst_ni) 
                                                  & (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.s_req));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[0U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
           + vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[1U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
           + vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[2U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
           + vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[3U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
           + vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[4U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
           + vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[5U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
           + vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[6U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
           + vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[7U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem 
           + vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[0U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
           - vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[1U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
           - vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[2U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
           - vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[3U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
           - vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[4U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
           - vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[5U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
           - vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[6U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
           - vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[7U] 
        = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem 
           - vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[0U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[1U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[2U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[3U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[4U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[5U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[6U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[7U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[0U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[0U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[1U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[1U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[2U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[2U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[3U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[3U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[4U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[4U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[5U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[5U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[6U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[6U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[7U];
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod 
        = ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem)) 
           * (QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem)));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[7U] 
        = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod);
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state;
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v0) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v0))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v0) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v0))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v1) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v1))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v1) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v1))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v2) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v2))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v2) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v2))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v3) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v3))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v3) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v3))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v4) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v4))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v4) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v4))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v5) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v5] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v5))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v5) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v5))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v6) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v6))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v6) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v6))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v7) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v7] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v7))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v7]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v7) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v7))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v8) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v8] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v8))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v8]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v8) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v8))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v9) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v9] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v9))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v9]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v9) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v9))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v10) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v10] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v10))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v10]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v10) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v10))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v11) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v11] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v11))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v11]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v11) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v11))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v12) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v12] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v12))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v12]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v12) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v12))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v13) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v13] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v13))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v13]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v13) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v13))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v14) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v14] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v14))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v14]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v14) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v14))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v15) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v15] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v15))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v15]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v15) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v15))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v16) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v16] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v16))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v16]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v16) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v16))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v17) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v17] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v17))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v17]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v17) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v17))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v18) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v18] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v18))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v18]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v18) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v18))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v19) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v19] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v19))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v19]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v19) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v19))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v20) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v20] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v20))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v20]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v20) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v20))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v21) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v21] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v21))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v21]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v21) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v21))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v22) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v22] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v22))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v22]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v22) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v22))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v23) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v23] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v23))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v23]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v23) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v23))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v24) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v24] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v24))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v24]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v24) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v24))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v25) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v25] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v25))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v25]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v25) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v25))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v26) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v26] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v26))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v26]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v26) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v26))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v27) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v27] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v27))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v27]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v27) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v27))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v28) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v28] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v28))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v28]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v28) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v28))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v29) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v29] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v29))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v29]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v29) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v29))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v30) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v30] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v30))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v30]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v30) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v30))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v31) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v31] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v31))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v31]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v31) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v31))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v32) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v32] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v32))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v32]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v32) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v32))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v33) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v33] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v33))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v33]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v33) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v33))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v34) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v34] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v34))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v34]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v34) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v34))));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__main_memory__v35) {
        vlSelf->soc_top_with_cache__DOT__main_memory[__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v35] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v35))) 
                & vlSelf->soc_top_with_cache__DOT__main_memory
                [__Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v35]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__soc_top_with_cache__DOT__main_memory__v35) 
                                   << (IData)(__Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v35))));
    }
    vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
        = ((0x7ffU & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U]) 
           | ((IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q)) 
                        << 0x23U) | (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr)) 
                                      << 3U) | (QData)((IData)(
                                                               (4U 
                                                                | (3U 
                                                                   == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)))))))) 
              << 0xbU));
    vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
        = (0x3ffffU & (((IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr)) 
                                                << 3U) 
                                               | (QData)((IData)(
                                                                 (4U 
                                                                  | (3U 
                                                                     == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)))))))) 
                        >> 0x15U) | ((IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q)) 
                                                << 0x23U) 
                                               | (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr)) 
                                                   << 3U) 
                                                  | (QData)((IData)(
                                                                    (4U 
                                                                     | (3U 
                                                                        == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state))))))) 
                                              >> 0x20U)) 
                                     << 0xbU)));
    vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
        = (0xf0U | vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U]);
    if ((3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state))) {
        vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
            = ((3U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U]) 
               | ((((0U == (0x1fU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                     << 5U))) ? 0U : 
                    (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[
                     (((IData)(0x1fU) + (0xffU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                                  << 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                            << 5U))))) 
                   | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[
                      (7U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter))] 
                      >> (0x1fU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                   << 5U)))) << 2U));
        vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
            = ((0xfffffffcU & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U]) 
               | ((((0U == (0x1fU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                     << 5U))) ? 0U : 
                    (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[
                     (((IData)(0x1fU) + (0xffU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                                  << 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                            << 5U))))) 
                   | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q[
                      (7U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter))] 
                      >> (0x1fU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter) 
                                   << 5U)))) >> 0x1eU));
    }
    vlSelf->soc_top_with_cache__DOT__vpu_mem_ready 
        = vlSelf->rst_ni;
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
}

VL_INLINE_OPT void Vsoc_top_with_cache___024root___sequent__TOP__5(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___sequent__TOP__5\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start) 
                     & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q))))) {
        VL_WRITEF("EXEC: Starting %s operation at cycle %0#\n",
                  56,((3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))
                       ? 0x564d4143ULL : ((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))
                                           ? 0x4d41544d554cULL
                                           : ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))
                                               ? 0x56414444ULL
                                               : ((5U 
                                                   == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))
                                                   ? 0x56535542ULL
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))
                                                    ? 0x564d554cULL
                                                    : 0x554e4b4e4f574eULL))))),
                  6,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count));
    }
    if (VL_UNLIKELY((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        VL_WRITEF("EXEC: Feeding k=%0# for tile[%0#,%0#]\n  A[%0#][%0#]=%0#, A[%0#][%0#]=%0#\n  B[%0#][%0#]=%0#, B[%0#][%0#]=%0#\n  Accumulate: %b\n",
                  3,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k,
                  3,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row),
                  3,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col,
                  32,((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                      << 1U),3,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k),
                  32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row0,
                  32,((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                     << 1U)),3,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k),
                  32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row1,
                  3,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k),
                  32,((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                      << 1U),32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col0,
                  3,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k),
                  32,((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                     << 1U)),32,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col1,
                  1,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate));
    }
    if (VL_UNLIKELY(((5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
                     & (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))))) {
        VL_WRITEF("EXEC: Tile [%0#,%0#], k=%0# computed:\n  [%0#, %0#]\n  [%0#, %0#]\n",
                  3,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row,
                  3,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col),
                  3,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k,
                  32,((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                       [0U][0U][1U] << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                 [0U]
                                                 [0U][0U] 
                                                 >> 1U)),
                  32,((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                       [0U][1U][1U] << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                 [0U]
                                                 [1U][0U] 
                                                 >> 1U)),
                  32,((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                       [1U][0U][1U] << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                 [1U]
                                                 [0U][0U] 
                                                 >> 1U)),
                  32,((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                       [1U][1U][1U] << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                 [1U]
                                                 [1U][0U] 
                                                 >> 1U)));
    }
    if (VL_UNLIKELY(((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q)) 
                     & (9U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))))) {
        VL_WRITEF("EXEC: Matrix multiply complete after %0# cycles\n  Result matrix (first 2x2):\n  [%0#, %0#]\n  [%0#, %0#]\n",
                  6,vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count,
                  32,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                             [0U][0U]),32,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                                                  [0U]
                                                  [1U]),
                  32,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                             [1U][0U]),32,(IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                                                  [1U]
                                                  [1U]));
    }
}

VL_INLINE_OPT void Vsoc_top_with_cache___024root___combo__TOP__7(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___combo__TOP__7\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
                   >> 9U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__core_busy_q)));
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__instr_rvalid) 
           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
}

extern const VlUnpacked<CData/*2:0*/, 1024> Vsoc_top_with_cache__ConstPool__TABLE_4dc3d725_0;

VL_INLINE_OPT void Vsoc_top_with_cache___024root___sequent__TOP__8(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___sequent__TOP__8\n"); );
    // Variables
    SData/*9:0*/ __Vtableidx8;
    // Body
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count 
        = vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q 
        = vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q;
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v0) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][0U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v1) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][1U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v2) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][2U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v3) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][3U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v4) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][4U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v5) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][5U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v6) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][7U] = 0ULL;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[vlSelf->__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64][vlSelf->__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64] 
            = vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[vlSelf->__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65][vlSelf->__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65] 
            = vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[vlSelf->__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66][vlSelf->__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66] 
            = vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[vlSelf->__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67][vlSelf->__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67] 
            = vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[1U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[2U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[3U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[4U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[5U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[6U][7U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][0U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][1U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][2U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][3U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][4U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][5U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][6U] = 0ULL;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[7U][7U] = 0ULL;
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q 
        = vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start = 0U;
    if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state)))) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start = 1U;
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row 
        = vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col 
        = vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col;
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0ULL);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1) {
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1);
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4 
                         >> 5U)] | ((IData)(1U) << 
                                    (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4)));
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 
                         >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0ULL);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7) {
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0U);
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v8, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0U);
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v9, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0ULL);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10 
                         >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0ULL);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12) {
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12);
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15 
                         >> 5U)] | ((IData)(1U) << 
                                    (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15)));
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 
                         >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0ULL);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18) {
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0U);
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v19, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0U);
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v20, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0ULL);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21 
                         >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0ULL);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23) {
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23);
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26 
                         >> 5U)] | ((IData)(1U) << 
                                    (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26)));
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 
                         >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0ULL);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29) {
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0U);
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v30, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0U);
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v31, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0ULL);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][0U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32 
                         >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0ULL);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34) {
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34);
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], vlSelf->__Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37 
                         >> 5U)] | ((IData)(1U) << 
                                    (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37)));
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 
                         >> 5U)]);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39) {
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0ULL);
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40) {
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0U);
        VL_ASSIGNSEL_WIII(129,32,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v41, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0U);
        VL_ASSIGNSEL_WIIQ(129,64,vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v42, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0ULL);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][1U][(vlSelf->__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43 
                         >> 5U)]);
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k 
        = vlSelf->__Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k;
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__next_state;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state;
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q 
                = (0x7fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                            >> 0xfU));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear = 1U;
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate 
                                = (0U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k));
                        }
                    }
                }
            }
        }
    }
    if (((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q)) 
         & (9U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk14__DOT__idx = 8U;
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col1 = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col1 
                                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b
                                [vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k]
                                [(7U & ((IData)(1U) 
                                        + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                           << 1U)))];
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row1 = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row1 
                                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a
                                [(7U & ((IData)(1U) 
                                        + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                           << 1U)))]
                                [vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k];
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state = 2U;
        } else if ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state = 3U;
        } else if ((3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state = 4U;
        } else if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state = 5U;
        } else if ((5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state = 7U;
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state 
                = ((7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))
                    ? (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k) 
                        < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                           - (IData)(1U))) ? 4U : 6U)
                    : 8U);
        }
    } else if ((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state 
            = ((((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                 == ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles) 
                     - (IData)(1U))) & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                        == ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles) 
                                            - (IData)(1U))))
                ? 9U : 2U);
    } else if ((9U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col0 = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col0 
                                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b
                                [vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k]
                                [(7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                        << 1U))];
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row0 = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row0 
                                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a
                                [(7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                        << 1U))][vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k];
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_start = 0U;
    if (((((((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)) 
               | (1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
              | (2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
             | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
            | (4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
           | (5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
          | (7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) 
         | (6U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                if ((2U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    if ((3U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                        if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_start = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[0U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[1U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[2U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[3U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[4U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[5U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[6U] = 0U;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[7U] = 0U;
    if (((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q)) 
         & (9U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state)))) {
        if ((0U < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                   << 1U))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[0U] 
                = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                          [0U][0U]);
        }
        if ((1U < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                   << 1U))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[1U] 
                = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                          [0U][1U]);
        }
        if ((2U < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                   << 1U))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[2U] 
                = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                          [1U][0U]);
        }
        if ((3U < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                   << 1U))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[3U] 
                = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                          [1U][1U]);
        }
        if ((4U < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                   << 1U))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[4U] 
                = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                          [2U][0U]);
        }
        if ((5U < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                   << 1U))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[5U] 
                = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                          [2U][1U]);
        }
        if ((6U < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                   << 1U))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[6U] 
                = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                          [3U][0U]);
        }
        if ((7U < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                   << 1U))) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[7U] 
                = (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c
                          [3U][1U]);
        }
    } else if ((0x40U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[0U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[1U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[2U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[3U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[4U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[5U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[6U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[7U] 
            = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[0U] 
            = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U]
                : ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U]
                    : ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                        ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U]
                        : ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                            ? ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[0U])
                                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[0U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[0U]))
                            : ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[0U]
                                    : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U])
                                : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U])))));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[1U] 
            = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U]
                : ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U]
                    : ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                        ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U]
                        : ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                            ? ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[1U])
                                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[1U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[1U]))
                            : ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[1U]
                                    : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U])
                                : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U])))));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[2U] 
            = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U]
                : ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U]
                    : ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                        ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U]
                        : ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                            ? ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[2U])
                                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[2U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[2U]))
                            : ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[2U]
                                    : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U])
                                : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U])))));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[3U] 
            = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U]
                : ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U]
                    : ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                        ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U]
                        : ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                            ? ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[3U])
                                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[3U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[3U]))
                            : ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[3U]
                                    : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U])
                                : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U])))));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[4U] 
            = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U]
                : ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U]
                    : ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                        ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U]
                        : ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                            ? ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[4U])
                                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[4U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[4U]))
                            : ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[4U]
                                    : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U])
                                : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U])))));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[5U] 
            = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U]
                : ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U]
                    : ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                        ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U]
                        : ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                            ? ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[5U])
                                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[5U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[5U]))
                            : ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[5U]
                                    : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U])
                                : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U])))));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[6U] 
            = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U]
                : ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U]
                    : ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                        ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U]
                        : ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                            ? ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[6U])
                                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[6U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[6U]))
                            : ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[6U]
                                    : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U])
                                : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U])))));
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result[7U] 
            = ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U]
                : ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U]
                    : ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                        ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U]
                        : ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                            ? ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result[7U])
                                : ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result[7U]
                                    : vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result[7U]))
                            : ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                ? ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))
                                    ? vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result[7U]
                                    : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U])
                                : Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U])))));
    }
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire[0U][0U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire[0U][1U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_col1_delay;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire[1U][0U] 
        = ((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][0U][3U] << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                      [0U][0U][2U] 
                                      >> 1U));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire[1U][1U] 
        = ((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][1U][3U] << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                      [0U][1U][2U] 
                                      >> 1U));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire[0U][0U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row0;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire[0U][1U] 
        = ((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][0U][4U] << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                      [0U][0U][3U] 
                                      >> 1U));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire[1U][0U] 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_row1_delay;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire[1U][1U] 
        = ((vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][0U][4U] << 0x1fU) | (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                      [1U][0U][3U] 
                                      >> 1U));
    __Vtableidx8 = (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_start) 
                     << 9U) | (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid) 
                                << 8U) | (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid) 
                                           << 7U) | 
                                          (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter) 
                                            << 3U) 
                                           | (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__next_state 
        = Vsoc_top_with_cache__ConstPool__TABLE_4dc3d725_0
        [__Vtableidx8];
}

VL_INLINE_OPT void Vsoc_top_with_cache___024root___sequent__TOP__9(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___sequent__TOP__9\n"); );
    // Body
    vlSelf->__Vdly__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q 
        = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__1__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__2__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__3__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__4__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__5__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__6__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__7__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__8__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__9__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__10__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__11__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__12__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__13__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__14__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__15__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__16__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__17__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__18__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__19__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__20__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__21__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__22__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__23__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__24__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__25__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__26__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__27__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__28__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__29__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__30__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__31__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_id_q 
                = (0xfU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_req[2U] 
                           >> 0xeU));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_id_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n) 
               & 1U);
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n) 
               & 1U);
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n) 
               & 1U);
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n;
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs = 1U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id) {
            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id = 0U;
            }
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
    if (vlSelf->rst_ni) {
        if (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q 
                = vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q = 0xcULL;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_err_wb) 
                    >> 1U) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 1U;
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q 
                = (1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_err_wb));
        } else if (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                     >> 6U) & (0xcU == (0xfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_valid) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n;
        } else if ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q = 0U;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q = 0U;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_res_q 
                = vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_res_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q 
        = ((IData)(vlSelf->rst_ni) & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_valid) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                             >> 0xfU))) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_insn_reject)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q 
        = ((IData)(vlSelf->rst_ni) & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_valid) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                             >> 0xfU))) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_insn_accept)));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q = 0U;
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 1U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q 
        = ((IData)(vlSelf->rst_ni) & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_valid) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                             >> 0xeU))) 
                                      & ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.commit) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q 
        = ((IData)(vlSelf->rst_ni) & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_valid) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                             >> 0xeU))) 
                                      & ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.commit_valid) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q))));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n)
            : 0U);
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q = 0U;
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((IData)(vlSelf->rst_ni) ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n
            : 0xdU);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc = 0ULL;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                      >> 0xdU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_valid_1) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                      >> 0xdU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_valid_1) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                      >> 0xdU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_valid_1) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0x400U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xffbfU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x40U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xffbfU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xff7fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x80U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xff7fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfeffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x100U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfeffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfdffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x200U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfdffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfbffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x400U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfbffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xf7ffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x800U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xf7ffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xefffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x1000U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xefffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xdfffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x2000U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xdfffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xbfffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x4000U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0xbfffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
                = ((0x7fffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x8000U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events 
            = (0x7fffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q 
                = ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    >> 5U) & (0xdU == (0xfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])));
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__if_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_valid) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready))) {
            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_last) {
                vlSelf->__Vdly__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
            } else if ((1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_tbljmp)) 
                              & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))))) {
                vlSelf->__Vdly__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)));
            }
        } else if ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])) {
            vlSelf->__Vdly__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
        }
    } else {
        vlSelf->__Vdly__soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                      >> 0xdU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_valid_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_valid_1) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_valid_q = 1U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_valid_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                      >> 0x10U)))) {
            if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
                vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound3 
                    = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n;
                if ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) {
                    VL_ASSIGNSEL_WIIQ(105,35,(0x7fU 
                                              & ((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))), vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q, vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound3);
                }
            }
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[0U] = 0x18U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[3U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = 0U;
        } else if ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid) 
                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__if_ready)) 
                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = 0U;
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__if_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffff0000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | ((IData)(vlSelf->rst_ni) ? (0xffffU & 
                                         vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[3U])
               : 0U));
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q 
        = ((IData)(vlSelf->rst_ni) ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n
            : 0U);
    if (vlSelf->rst_ni) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[0U];
        }
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 1U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[1U];
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 4U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[4U];
        }
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 5U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[5U];
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 6U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[6U];
        }
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 7U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n[7U];
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__state_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__state_n)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U] 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U] = 0x400U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U] = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt;
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    >> 6U) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_n)
            : 0U);
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q 
            = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid) 
                & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__if_ready)) 
               & 1U);
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q = 3U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q 
            = vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n;
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready)) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 1U;
        } else if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    >> 6U) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_addr;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                    >> 6U) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready))))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q 
                = vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q = 3U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state));
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__last_q 
                = (1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_split_ex)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__last_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n)
            : 0U);
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid_q = 1U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (1U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__next_cnt)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_sext_q 
                = (1U & ((~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)) 
                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U] 
                            >> 3U)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_sext_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)
                    ? 0U : (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U] 
                                  >> 0xdU)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q 
                = ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)
                    ? 2U : (3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U] 
                                  >> 0xbU)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_we_q)))) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_q 
                = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__split_q) 
                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_split_ex))
                    ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                        << 0x19U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                     >> 7U)) : vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_ext);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x1000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x8000000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x20000000U | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
}
