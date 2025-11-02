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
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                  >> 6U) & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                             >> 5U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                                       >> 4U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_we = 0U;
    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    } else if ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    } else if ((0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_mtvec_init_if 
        = ((0U == (0xfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])) 
           & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
              >> 6U));
}

extern const VlWide<8>/*255:0*/ Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vsoc_top_with_cache__ConstPool__TABLE_4dc3d725_0;

VL_INLINE_OPT void Vsoc_top_with_cache___024root___sequent__TOP__4(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*2:0*/ __Vdly__soc_top_with_cache__DOT__icache_refill_count;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v1;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v2;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v3;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v4;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v5;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v6;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v7;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v8;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__icache__v9;
    CData/*4:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v0;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__main_memory__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__main_memory__v0;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__dcache__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__dcache__v0;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__dcache__v1;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__dcache__v1;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__dcache__v2;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__dcache__v2;
    CData/*7:0*/ __Vdlyvval__soc_top_with_cache__DOT__dcache__v3;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__dcache__v3;
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
    CData/*1:0*/ __Vdly__soc_top_with_cache__DOT__vpu_state;
    CData/*7:0*/ __Vdly__soc_top_with_cache__DOT__pc_stall_count;
    CData/*3:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v1;
    CData/*4:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter;
    CData/*2:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v0;
    CData/*2:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row;
    CData/*2:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col;
    CData/*2:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v1;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v2;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v3;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v4;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v5;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v6;
    CData/*2:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64;
    CData/*2:0*/ __Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64;
    CData/*2:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65;
    CData/*2:0*/ __Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65;
    CData/*2:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66;
    CData/*2:0*/ __Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66;
    CData/*2:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67;
    CData/*2:0*/ __Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7;
    CData/*6:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q;
    CData/*0:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q;
    CData/*5:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39;
    CData/*0:0*/ __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40;
    CData/*3:0*/ __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter;
    SData/*9:0*/ __Vtableidx9;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v0;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v1;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v2;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v3;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v4;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v5;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v6;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v7;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v8;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__icache__v9;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v0;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__dcache__v0;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__dcache__v1;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__dcache__v2;
    SData/*8:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__dcache__v3;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v1;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v2;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v3;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v4;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v5;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v6;
    SData/*12:0*/ __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v7;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v0;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v0;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v1;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v1;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v2;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v2;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v3;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v3;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v4;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v4;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v5;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v5;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v6;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v6;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v7;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v7;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v8;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__icache__v9;
    IData/*17:0*/ __Vdlyvval__soc_top_with_cache__DOT__icache__v9;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__dcache__v0;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__dcache__v1;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__dcache__v2;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__dcache__v3;
    IData/*31:0*/ __Vdly__soc_top_with_cache__DOT__cycle_count;
    IData/*31:0*/ __Vdly__soc_top_with_cache__DOT__dcache_hits;
    IData/*31:0*/ __Vdly__soc_top_with_cache__DOT__icache_hits;
    IData/*31:0*/ __Vdly__soc_top_with_cache__DOT__icache_misses;
    IData/*31:0*/ __Vdly__soc_top_with_cache__DOT__dcache_misses;
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
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v8;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v9;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v19;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v20;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v30;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v31;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v41;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v42;
    IData/*31:0*/ __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43;
    QData/*37:0*/ __Vdly__soc_top_with_cache__DOT__vpu_result_reg;
    QData/*63:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64;
    QData/*63:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65;
    QData/*63:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66;
    QData/*63:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67;
    QData/*63:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3;
    QData/*63:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14;
    QData/*63:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25;
    QData/*63:0*/ __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36;
    // Body
    __Vdly__soc_top_with_cache__DOT__cycle_count = vlSelf->soc_top_with_cache__DOT__cycle_count;
    __Vdly__soc_top_with_cache__DOT__icache_misses 
        = vlSelf->soc_top_with_cache__DOT__icache_misses;
    __Vdly__soc_top_with_cache__DOT__icache_hits = vlSelf->soc_top_with_cache__DOT__icache_hits;
    __Vdly__soc_top_with_cache__DOT__dcache_misses 
        = vlSelf->soc_top_with_cache__DOT__dcache_misses;
    __Vdly__soc_top_with_cache__DOT__dcache_hits = vlSelf->soc_top_with_cache__DOT__dcache_hits;
    __Vdly__soc_top_with_cache__DOT__pc_stall_count 
        = vlSelf->soc_top_with_cache__DOT__pc_stall_count;
    __Vdly__soc_top_with_cache__DOT__vpu_state = vlSelf->soc_top_with_cache__DOT__vpu_state;
    __Vdly__soc_top_with_cache__DOT__vpu_result_reg 
        = vlSelf->soc_top_with_cache__DOT__vpu_result_reg;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q 
        = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q;
    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q 
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
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v2 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v3 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v4 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v5 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v6 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf__v1 = 0U;
    __Vdly__soc_top_with_cache__DOT__icache_refill_count 
        = vlSelf->soc_top_with_cache__DOT__icache_refill_count;
    __Vdlyvset__soc_top_with_cache__DOT__dcache__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__dcache__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__dcache__v2 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__dcache__v3 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v4 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v5 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v6 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v7 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v2 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__main_memory__v3 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v0 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v1 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v2 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v3 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v4 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v5 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v6 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v7 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v8 = 0U;
    __Vdlyvset__soc_top_with_cache__DOT__icache__v9 = 0U;
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__i = 8U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 8U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->soc_top_with_cache__DOT__dcache_refill_count = 0U;
    }
    __Vdly__soc_top_with_cache__DOT__cycle_count = 
        ((IData)(vlSelf->rst_ni) ? ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__cycle_count)
          : 0U);
    if (vlSelf->rst_ni) {
        if (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.s_req) {
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__icache_hit)))) {
                __Vdly__soc_top_with_cache__DOT__icache_misses 
                    = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__icache_misses);
            }
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__icache_misses = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.s_req) {
            if (vlSelf->soc_top_with_cache__DOT__icache_hit) {
                __Vdly__soc_top_with_cache__DOT__icache_hits 
                    = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__icache_hits);
            }
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__icache_hits = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
             & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                   >> 0xaU)))) {
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__dcache_hit)))) {
                __Vdly__soc_top_with_cache__DOT__dcache_misses 
                    = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__dcache_misses);
            }
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__dcache_misses = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
             & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                   >> 0xaU)))) {
            if (vlSelf->soc_top_with_cache__DOT__dcache_hit) {
                __Vdly__soc_top_with_cache__DOT__dcache_hits 
                    = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__dcache_hits);
            }
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__dcache_hits = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.s_req) {
            if ((((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                           >> 8U)) << 2U) == vlSelf->soc_top_with_cache__DOT__prev_pc)) {
                __Vdly__soc_top_with_cache__DOT__pc_stall_count 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__pc_stall_count)));
                if (VL_UNLIKELY((0x64U < (IData)(vlSelf->soc_top_with_cache__DOT__pc_stall_count)))) {
                    VL_WRITEF("\n=== SIMULATION COMPLETE ===\nTotal cycles: %0#\nInstructions executed: %0#\nFinal I-Cache Hit Rate: %.1f%%\nFinal D-Cache Hit Rate: %.1f%%\n===========================\n\n",
                              32,vlSelf->soc_top_with_cache__DOT__cycle_count,
                              32,vlSelf->soc_top_with_cache__DOT__instructions_executed,
                              64,((100.0 * VL_ITOR_D_I(32, vlSelf->soc_top_with_cache__DOT__icache_hits)) 
                                  / VL_ITOR_D_I(32, 
                                                ((IData)(1U) 
                                                 + 
                                                 (vlSelf->soc_top_with_cache__DOT__icache_hits 
                                                  + vlSelf->soc_top_with_cache__DOT__icache_misses)))),
                              64,((100.0 * VL_ITOR_D_I(32, vlSelf->soc_top_with_cache__DOT__dcache_hits)) 
                                  / VL_ITOR_D_I(32, 
                                                ((IData)(1U) 
                                                 + 
                                                 (vlSelf->soc_top_with_cache__DOT__dcache_hits 
                                                  + vlSelf->soc_top_with_cache__DOT__dcache_misses)))));
                    VL_FINISH_MT("sim/soc_top_with_cache.sv", 658, "");
                }
            } else {
                vlSelf->soc_top_with_cache__DOT__prev_pc 
                    = ((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                >> 8U)) << 2U);
                __Vdly__soc_top_with_cache__DOT__pc_stall_count = 0U;
            }
        }
        if (VL_UNLIKELY((0x186a0U < vlSelf->soc_top_with_cache__DOT__cycle_count))) {
            VL_WRITEF("Simulation timeout at cycle %0#\n",
                      32,vlSelf->soc_top_with_cache__DOT__cycle_count);
            VL_FINISH_MT("sim/soc_top_with_cache.sv", 669, "");
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__prev_pc = 0U;
        __Vdly__soc_top_with_cache__DOT__pc_stall_count = 0U;
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
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q;
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct3_q;
            if ((0x40U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
            } else if ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
            } else if ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
            } else if ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
                } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
                } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) {
                    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
                } else {
                    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 1U;
                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active = 1U;
                    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count = 0U;
                }
            } else {
                __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
            }
        } else if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q) {
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count)));
            if ((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q))) {
                if ((9U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
                    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active = 0U;
                }
            }
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q = 0U;
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
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v0 = 1U;
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row = 0U;
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col = 0U;
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k = 0U;
            if ((1U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[1U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v1 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v1 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[1U];
            }
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v1 = 1U;
            if ((2U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[2U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v2 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v2 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[2U];
            }
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v2 = 1U;
            if ((3U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[3U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v3 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v3 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[3U];
            }
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v3 = 1U;
            if ((4U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[4U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v4 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v4 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[4U];
            }
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v4 = 1U;
            if ((5U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[5U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v5 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v5 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[5U];
            }
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v5 = 1U;
            if ((6U < (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a[6U];
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v6 = 1U;
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_b__v6 
                    = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b[6U];
            }
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v6 = 1U;
        } else if ((5U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if ((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 
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
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 = 1U;
                __Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 
                    = (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                             << 1U));
                __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64 
                    = (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                             << 1U));
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65 
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
                __Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65 
                    = (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                            << 1U)));
                __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65 
                    = (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                             << 1U));
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66 
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
                __Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66 
                    = (7U & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                             << 1U));
                __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66 
                    = (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                            << 1U)));
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67 
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
                __Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67 
                    = (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                                            << 1U)));
                __Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67 
                    = (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                                            << 1U)));
            }
        } else if ((7U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k 
                = (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k) 
                    < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size) 
                       - (IData)(1U))) ? (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k)))
                    : 0U);
        } else if ((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))) {
            if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col) 
                 < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles) 
                    - (IData)(1U)))) {
                __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col)));
            } else {
                if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row) 
                     < ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles) 
                        - (IData)(1U)))) {
                    __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row)));
                }
                __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col = 0U;
            }
            __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k = 0U;
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col = 0U;
        __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k = 0U;
        __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7 = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear) {
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11 = 1U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                [0U][1U];
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12 = 0x61U;
            __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                [0U][1U];
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13 = 0x41U;
            if ((1U & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                 [0U][0U][0U])) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14 
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
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15 = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 = 0U;
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)))) {
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17 = 1U;
            }
        }
    } else {
        __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18 = 1U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18 = 0x61U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v19 = 0x41U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v20 = 1U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21 = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear) {
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22 = 1U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                [1U][0U];
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23 = 0x61U;
            __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                [1U][0U];
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24 = 0x41U;
            if ((1U & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                 [0U][0U][0U])) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25 
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
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26 = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 = 0U;
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)))) {
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28 = 1U;
            }
        }
    } else {
        __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29 = 1U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29 = 0x61U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v30 = 0x41U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v31 = 1U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32 = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear) {
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33 = 1U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                [1U][1U];
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34 = 0x61U;
            __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                [1U][1U];
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35 = 0x41U;
            if ((1U & (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                       [1U][0U][0U] & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                       [0U][1U][0U]))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36 
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
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37 = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 = 0U;
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)))) {
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39 = 1U;
            }
        }
    } else {
        __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40 = 1U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40 = 0x61U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v41 = 0x41U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v42 = 1U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43 = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear) {
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0 = 1U;
        } else if (((2U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                    | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))) {
            __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                [0U][0U];
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1 = 0x61U;
            __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2 
                = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                [0U][0U];
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2 = 0x41U;
            if (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid) 
                 & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid))) {
                __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3 
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
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4 = 0U;
            }
        }
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))) {
            __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 = 1U;
            __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 = 0U;
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate)))) {
                __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6 = 1U;
            }
        }
    } else {
        __Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7 = 1U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7 = 0x61U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v8 = 0x41U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v9 = 1U;
        __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10 = 0U;
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
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__state 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__instr_rvalid) {
            vlSelf->soc_top_with_cache__DOT__instructions_executed 
                = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__instructions_executed);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__instructions_executed = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__dcache_state))) {
            vlSelf->soc_top_with_cache__DOT__data_rvalid = 0U;
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans_valid) {
                if ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                    vlSelf->soc_top_with_cache__DOT__unnamedblk4__DOT__i = 4U;
                    vlSelf->soc_top_with_cache__DOT__data_gnt = 1U;
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v0 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                        >> 6U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v0 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v0 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v0 
                            = (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               >> 0x13U);
                    }
                    if (vlSelf->soc_top_with_cache__DOT__dcache_hit) {
                        if ((0U == (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                          >> 0x13U)))) {
                            vlSelf->soc_top_with_cache__DOT__unnamedblk5__DOT__i = 4U;
                            if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                                __Vdlyvval__soc_top_with_cache__DOT__dcache__v0 
                                    = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                >> 6U));
                                __Vdlyvset__soc_top_with_cache__DOT__dcache__v0 = 1U;
                                __Vdlyvlsb__soc_top_with_cache__DOT__dcache__v0 = 0U;
                                __Vdlyvdim0__soc_top_with_cache__DOT__dcache__v0 
                                    = (0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                 >> 0x16U));
                            }
                            if ((0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                                __Vdlyvval__soc_top_with_cache__DOT__dcache__v1 
                                    = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                >> 0xeU));
                                __Vdlyvset__soc_top_with_cache__DOT__dcache__v1 = 1U;
                                __Vdlyvlsb__soc_top_with_cache__DOT__dcache__v1 = 8U;
                                __Vdlyvdim0__soc_top_with_cache__DOT__dcache__v1 
                                    = (0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                 >> 0x16U));
                            }
                            if ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                                __Vdlyvval__soc_top_with_cache__DOT__dcache__v2 
                                    = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                >> 0x16U));
                                __Vdlyvset__soc_top_with_cache__DOT__dcache__v2 = 1U;
                                __Vdlyvlsb__soc_top_with_cache__DOT__dcache__v2 = 0x10U;
                                __Vdlyvdim0__soc_top_with_cache__DOT__dcache__v2 
                                    = (0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                 >> 0x16U));
                            }
                            if ((0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                                __Vdlyvval__soc_top_with_cache__DOT__dcache__v3 
                                    = (0xffU & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                 << 2U) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                   >> 0x1eU)));
                                __Vdlyvset__soc_top_with_cache__DOT__dcache__v3 = 1U;
                                __Vdlyvlsb__soc_top_with_cache__DOT__dcache__v3 = 0x18U;
                                __Vdlyvdim0__soc_top_with_cache__DOT__dcache__v3 
                                    = (0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                 >> 0x16U));
                            }
                        }
                    }
                    vlSelf->soc_top_with_cache__DOT__data_rvalid = 1U;
                    if ((0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v1 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                        >> 0xeU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v1 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v1 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v1 
                            = (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               >> 0x13U);
                    }
                    if ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v2 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                        >> 0x16U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v2 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v2 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v2 
                            = (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               >> 0x13U);
                    }
                    if ((0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v3 
                            = (0xffU & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                         << 2U) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                   >> 0x1eU)));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v3 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v3 = 0x18U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v3 
                            = (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               >> 0x13U);
                    }
                } else if (vlSelf->soc_top_with_cache__DOT__dcache_hit) {
                    vlSelf->soc_top_with_cache__DOT__data_gnt = 1U;
                    vlSelf->soc_top_with_cache__DOT__data_rvalid = 1U;
                    vlSelf->soc_top_with_cache__DOT__data_rdata 
                        = ((0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])
                            ? ((0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])
                                ? ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])
                                    ? vlSelf->soc_top_with_cache__DOT__dcache
                                   [(0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x16U))][7U]
                                    : vlSelf->soc_top_with_cache__DOT__dcache
                                   [(0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x16U))][6U])
                                : ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])
                                    ? vlSelf->soc_top_with_cache__DOT__dcache
                                   [(0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x16U))][5U]
                                    : vlSelf->soc_top_with_cache__DOT__dcache
                                   [(0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x16U))][4U]))
                            : ((0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])
                                ? ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])
                                    ? vlSelf->soc_top_with_cache__DOT__dcache
                                   [(0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x16U))][3U]
                                    : vlSelf->soc_top_with_cache__DOT__dcache
                                   [(0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x16U))][2U])
                                : ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U])
                                    ? vlSelf->soc_top_with_cache__DOT__dcache
                                   [(0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x16U))][1U]
                                    : vlSelf->soc_top_with_cache__DOT__dcache
                                   [(0x1ffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                               >> 0x16U))][0U])));
                } else {
                    vlSelf->soc_top_with_cache__DOT__data_gnt = 1U;
                    vlSelf->soc_top_with_cache__DOT__data_rvalid = 1U;
                    vlSelf->soc_top_with_cache__DOT__data_rdata 
                        = vlSelf->soc_top_with_cache__DOT__main_memory
                        [(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                          >> 0x13U)];
                }
            } else {
                vlSelf->soc_top_with_cache__DOT__data_gnt = 0U;
            }
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i = 0U;
        vlSelf->soc_top_with_cache__DOT__data_gnt = 0U;
        vlSelf->soc_top_with_cache__DOT__data_rvalid = 0U;
        vlSelf->soc_top_with_cache__DOT__data_rdata = 0U;
        while (VL_GTS_III(1,32,32, 0x200U, vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)) {
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][8U] 
                = (0x7ffffU & vlSelf->soc_top_with_cache__DOT__dcache
                   [(0x1ffU & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][8U]);
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][8U] 
                = (0xbffffU & vlSelf->soc_top_with_cache__DOT__dcache
                   [(0x1ffU & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][8U]);
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][8U] 
                = (0xc0000U & vlSelf->soc_top_with_cache__DOT__dcache
                   [(0x1ffU & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][8U]);
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][0U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][1U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][2U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][3U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][4U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][5U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][6U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
            vlSelf->soc_top_with_cache__DOT__dcache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i)][7U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
            vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i);
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__fetch_enable_q 
        = vlSelf->rst_ni;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_busy_q 
        = ((IData)(vlSelf->rst_ni) & ((((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid)) 
                                       | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                                          >> 8U)) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_busy)));
    vlSelf->soc_top_with_cache__DOT__pc_stall_count 
        = __Vdly__soc_top_with_cache__DOT__pc_stall_count;
    vlSelf->soc_top_with_cache__DOT__cycle_count = __Vdly__soc_top_with_cache__DOT__cycle_count;
    vlSelf->soc_top_with_cache__DOT__icache_hits = __Vdly__soc_top_with_cache__DOT__icache_hits;
    vlSelf->soc_top_with_cache__DOT__icache_misses 
        = __Vdly__soc_top_with_cache__DOT__icache_misses;
    vlSelf->soc_top_with_cache__DOT__dcache_hits = __Vdly__soc_top_with_cache__DOT__dcache_hits;
    vlSelf->soc_top_with_cache__DOT__dcache_misses 
        = __Vdly__soc_top_with_cache__DOT__dcache_misses;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col;
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k;
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v0) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][0U] = 0ULL;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v1) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][1U] = 0ULL;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v2) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][2U] = 0ULL;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v3) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][3U] = 0ULL;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v4) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][4U] = 0ULL;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v5) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[0U][5U] = 0ULL;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v6) {
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
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64][__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v64;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65][__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v65;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66][__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v66;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c[__Vdlyvdim0__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67][__Vdlyvdim1__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67] 
            = __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_c__v67;
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7) {
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
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7) {
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
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_a__v7) {
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
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v0, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0ULL);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1) {
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v1);
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v2);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v3);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4 
                         >> 5U)] | ((IData)(1U) << 
                                    (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v4)));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v5 
                         >> 5U)]);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v6, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0ULL);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7) {
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v7, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0U);
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v8, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0U);
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v9, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][0U], 0ULL);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v10 
                         >> 5U)]);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v11, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0ULL);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12) {
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v12);
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v13);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v14);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15 
                         >> 5U)] | ((IData)(1U) << 
                                    (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v15)));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v16 
                         >> 5U)]);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v17, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0ULL);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18) {
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v18, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0U);
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v19, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0U);
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v20, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [0U][1U], 0ULL);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[0U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [0U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v21 
                         >> 5U)]);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v22, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0ULL);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23) {
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v23);
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v24);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v25);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26 
                         >> 5U)] | ((IData)(1U) << 
                                    (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v26)));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v27 
                         >> 5U)]);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v28, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0ULL);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29) {
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v29, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0U);
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v30, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0U);
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v31, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][0U], 0ULL);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][0U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v32 
                         >> 5U)]);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v33, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0ULL);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34) {
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v34);
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v35);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], __Vdlyvval__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v36);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37 
                         >> 5U)] | ((IData)(1U) << 
                                    (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v37)));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v38 
                         >> 5U)]);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39) {
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v39, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0ULL);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40) {
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v40, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0U);
        VL_ASSIGNSEL_WIII(129,32,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v41, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0U);
        VL_ASSIGNSEL_WIIQ(129,64,__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v42, 
                          vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                          [1U][1U], 0ULL);
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe[1U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43 
                                                                                >> 5U)] 
            = ((~ ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43))) 
               & vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
               [1U][1U][(__Vdlyvlsb__soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe__v43 
                         >> 5U)]);
    }
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
    if (__Vdlyvset__soc_top_with_cache__DOT__dcache__v0) {
        VL_ASSIGNSEL_WIII(276,8,__Vdlyvlsb__soc_top_with_cache__DOT__dcache__v0, 
                          vlSelf->soc_top_with_cache__DOT__dcache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__dcache__v0], __Vdlyvval__soc_top_with_cache__DOT__dcache__v0);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__dcache__v1) {
        VL_ASSIGNSEL_WIII(276,8,__Vdlyvlsb__soc_top_with_cache__DOT__dcache__v1, 
                          vlSelf->soc_top_with_cache__DOT__dcache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__dcache__v1], __Vdlyvval__soc_top_with_cache__DOT__dcache__v1);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__dcache__v2) {
        VL_ASSIGNSEL_WIII(276,8,__Vdlyvlsb__soc_top_with_cache__DOT__dcache__v2, 
                          vlSelf->soc_top_with_cache__DOT__dcache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__dcache__v2], __Vdlyvval__soc_top_with_cache__DOT__dcache__v2);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__dcache__v3) {
        VL_ASSIGNSEL_WIII(276,8,__Vdlyvlsb__soc_top_with_cache__DOT__dcache__v3, 
                          vlSelf->soc_top_with_cache__DOT__dcache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__dcache__v3], __Vdlyvval__soc_top_with_cache__DOT__dcache__v3);
    }
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
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state 
            = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__next_state;
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state = 0U;
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
        if (vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue) {
            vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q 
                = (0x7fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                            >> 0xfU));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q = 0U;
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
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start = 0U;
    if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state)))) {
                vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start = 1U;
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
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__icache_state))) {
            vlSelf->soc_top_with_cache__DOT__instr_rvalid = 0U;
            if (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.s_req) {
                if (vlSelf->soc_top_with_cache__DOT__icache_hit) {
                    vlSelf->soc_top_with_cache__DOT__instr_gnt = 1U;
                    vlSelf->soc_top_with_cache__DOT__instr_rvalid = 1U;
                    vlSelf->soc_top_with_cache__DOT__instr_rdata 
                        = ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                          >> 0xaU)))
                            ? ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                              >> 9U)))
                                ? ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                  >> 8U)))
                                    ? vlSelf->soc_top_with_cache__DOT__icache
                                   [(0x1ffU & (IData)(
                                                      (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                       >> 0xbU)))][7U]
                                    : vlSelf->soc_top_with_cache__DOT__icache
                                   [(0x1ffU & (IData)(
                                                      (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                       >> 0xbU)))][6U])
                                : ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                  >> 8U)))
                                    ? vlSelf->soc_top_with_cache__DOT__icache
                                   [(0x1ffU & (IData)(
                                                      (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                       >> 0xbU)))][5U]
                                    : vlSelf->soc_top_with_cache__DOT__icache
                                   [(0x1ffU & (IData)(
                                                      (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                       >> 0xbU)))][4U]))
                            : ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                              >> 9U)))
                                ? ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                  >> 8U)))
                                    ? vlSelf->soc_top_with_cache__DOT__icache
                                   [(0x1ffU & (IData)(
                                                      (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                       >> 0xbU)))][3U]
                                    : vlSelf->soc_top_with_cache__DOT__icache
                                   [(0x1ffU & (IData)(
                                                      (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                       >> 0xbU)))][2U])
                                : ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                  >> 8U)))
                                    ? vlSelf->soc_top_with_cache__DOT__icache
                                   [(0x1ffU & (IData)(
                                                      (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                       >> 0xbU)))][1U]
                                    : vlSelf->soc_top_with_cache__DOT__icache
                                   [(0x1ffU & (IData)(
                                                      (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                       >> 0xbU)))][0U])));
                } else {
                    vlSelf->soc_top_with_cache__DOT__instr_gnt = 1U;
                    vlSelf->soc_top_with_cache__DOT__icache_refill_pending = 1U;
                    __Vdly__soc_top_with_cache__DOT__icache_refill_count = 0U;
                }
            } else {
                vlSelf->soc_top_with_cache__DOT__instr_gnt = 0U;
            }
        } else if ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__icache_state))) {
            vlSelf->soc_top_with_cache__DOT__icache_refill_addr 
                = (((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                             >> 0xbU)) << 5U) | ((IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count) 
                                                 << 2U));
            vlSelf->soc_top_with_cache__DOT__icache_mem_data 
                = vlSelf->soc_top_with_cache__DOT__main_memory
                [(0x1fffU & (vlSelf->soc_top_with_cache__DOT__icache_refill_addr 
                             >> 2U))];
            if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count))) {
                if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count))) {
                    if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count))) {
                        __Vdlyvval__soc_top_with_cache__DOT__icache__v0 
                            = vlSelf->soc_top_with_cache__DOT__icache_mem_data;
                        __Vdlyvset__soc_top_with_cache__DOT__icache__v0 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__icache__v0 = 0xe0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__icache__v0 
                            = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                 >> 0xbU)));
                    } else {
                        __Vdlyvval__soc_top_with_cache__DOT__icache__v1 
                            = vlSelf->soc_top_with_cache__DOT__icache_mem_data;
                        __Vdlyvset__soc_top_with_cache__DOT__icache__v1 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__icache__v1 = 0xc0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__icache__v1 
                            = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                 >> 0xbU)));
                    }
                } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count))) {
                    __Vdlyvval__soc_top_with_cache__DOT__icache__v2 
                        = vlSelf->soc_top_with_cache__DOT__icache_mem_data;
                    __Vdlyvset__soc_top_with_cache__DOT__icache__v2 = 1U;
                    __Vdlyvlsb__soc_top_with_cache__DOT__icache__v2 = 0xa0U;
                    __Vdlyvdim0__soc_top_with_cache__DOT__icache__v2 
                        = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                             >> 0xbU)));
                } else {
                    __Vdlyvval__soc_top_with_cache__DOT__icache__v3 
                        = vlSelf->soc_top_with_cache__DOT__icache_mem_data;
                    __Vdlyvset__soc_top_with_cache__DOT__icache__v3 = 1U;
                    __Vdlyvlsb__soc_top_with_cache__DOT__icache__v3 = 0x80U;
                    __Vdlyvdim0__soc_top_with_cache__DOT__icache__v3 
                        = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                             >> 0xbU)));
                }
            } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count))) {
                if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count))) {
                    __Vdlyvval__soc_top_with_cache__DOT__icache__v4 
                        = vlSelf->soc_top_with_cache__DOT__icache_mem_data;
                    __Vdlyvset__soc_top_with_cache__DOT__icache__v4 = 1U;
                    __Vdlyvlsb__soc_top_with_cache__DOT__icache__v4 = 0x60U;
                    __Vdlyvdim0__soc_top_with_cache__DOT__icache__v4 
                        = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                             >> 0xbU)));
                } else {
                    __Vdlyvval__soc_top_with_cache__DOT__icache__v5 
                        = vlSelf->soc_top_with_cache__DOT__icache_mem_data;
                    __Vdlyvset__soc_top_with_cache__DOT__icache__v5 = 1U;
                    __Vdlyvlsb__soc_top_with_cache__DOT__icache__v5 = 0x40U;
                    __Vdlyvdim0__soc_top_with_cache__DOT__icache__v5 
                        = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                             >> 0xbU)));
                }
            } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count))) {
                __Vdlyvval__soc_top_with_cache__DOT__icache__v6 
                    = vlSelf->soc_top_with_cache__DOT__icache_mem_data;
                __Vdlyvset__soc_top_with_cache__DOT__icache__v6 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__icache__v6 = 0x20U;
                __Vdlyvdim0__soc_top_with_cache__DOT__icache__v6 
                    = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                         >> 0xbU)));
            } else {
                __Vdlyvval__soc_top_with_cache__DOT__icache__v7 
                    = vlSelf->soc_top_with_cache__DOT__icache_mem_data;
                __Vdlyvset__soc_top_with_cache__DOT__icache__v7 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__icache__v7 = 0U;
                __Vdlyvdim0__soc_top_with_cache__DOT__icache__v7 
                    = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                         >> 0xbU)));
            }
            if ((7U == (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count))) {
                __Vdlyvset__soc_top_with_cache__DOT__icache__v8 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__icache__v8 = 0x112U;
                __Vdlyvdim0__soc_top_with_cache__DOT__icache__v8 
                    = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                         >> 0xbU)));
                vlSelf->soc_top_with_cache__DOT__icache_refill_pending = 0U;
                __Vdlyvval__soc_top_with_cache__DOT__icache__v9 
                    = (0x3ffffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                           >> 0x14U)));
                __Vdlyvset__soc_top_with_cache__DOT__icache__v9 = 1U;
                __Vdlyvlsb__soc_top_with_cache__DOT__icache__v9 = 0x100U;
                __Vdlyvdim0__soc_top_with_cache__DOT__icache__v9 
                    = (0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                         >> 0xbU)));
            } else {
                __Vdly__soc_top_with_cache__DOT__icache_refill_count 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__icache_refill_count)));
            }
        } else if ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__icache_state))) {
            vlSelf->soc_top_with_cache__DOT__instr_rvalid = 1U;
            vlSelf->soc_top_with_cache__DOT__instr_rdata 
                = ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                  >> 0xaU))) ? ((1U 
                                                 & (IData)(
                                                           (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                            >> 9U)))
                                                 ? 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                             >> 8U)))
                                                  ? 
                                                 vlSelf->soc_top_with_cache__DOT__icache
                                                 [(0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                              >> 0xbU)))][7U]
                                                  : 
                                                 vlSelf->soc_top_with_cache__DOT__icache
                                                 [(0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                              >> 0xbU)))][6U])
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                             >> 8U)))
                                                  ? 
                                                 vlSelf->soc_top_with_cache__DOT__icache
                                                 [(0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                              >> 0xbU)))][5U]
                                                  : 
                                                 vlSelf->soc_top_with_cache__DOT__icache
                                                 [(0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                              >> 0xbU)))][4U]))
                    : ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                      >> 9U))) ? ((1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                              >> 8U)))
                                                   ? 
                                                  vlSelf->soc_top_with_cache__DOT__icache
                                                  [
                                                  (0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                              >> 0xbU)))][3U]
                                                   : 
                                                  vlSelf->soc_top_with_cache__DOT__icache
                                                  [
                                                  (0x1ffU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                                              >> 0xbU)))][2U])
                        : ((1U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                          >> 8U))) ? 
                           vlSelf->soc_top_with_cache__DOT__icache
                           [(0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                               >> 0xbU)))][1U]
                            : vlSelf->soc_top_with_cache__DOT__icache
                           [(0x1ffU & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload 
                                               >> 0xbU)))][0U])));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i = 0U;
        vlSelf->soc_top_with_cache__DOT__icache_refill_pending = 0U;
        __Vdly__soc_top_with_cache__DOT__icache_refill_count = 0U;
        vlSelf->soc_top_with_cache__DOT__instr_gnt = 0U;
        vlSelf->soc_top_with_cache__DOT__instr_rvalid = 0U;
        vlSelf->soc_top_with_cache__DOT__instr_rdata = 0U;
        while (VL_GTS_III(1,32,32, 0x200U, vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)) {
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][8U] 
                = (0x3ffffU & vlSelf->soc_top_with_cache__DOT__icache
                   [(0x1ffU & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][8U]);
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][8U] 
                = (0x40000U & vlSelf->soc_top_with_cache__DOT__icache
                   [(0x1ffU & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][8U]);
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][0U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][1U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][2U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][3U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][4U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][5U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][6U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
            vlSelf->soc_top_with_cache__DOT__icache[(0x1ffU 
                                                     & vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i)][7U] 
                = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
            vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i);
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->soc_top_with_cache__DOT__dcache_state = 0U;
    }
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
    vlSelf->soc_top_with_cache__DOT__icache_refill_count 
        = __Vdly__soc_top_with_cache__DOT__icache_refill_count;
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v0) {
        VL_ASSIGNSEL_WIII(275,32,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v0, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v0], __Vdlyvval__soc_top_with_cache__DOT__icache__v0);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v1) {
        VL_ASSIGNSEL_WIII(275,32,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v1, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v1], __Vdlyvval__soc_top_with_cache__DOT__icache__v1);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v2) {
        VL_ASSIGNSEL_WIII(275,32,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v2, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v2], __Vdlyvval__soc_top_with_cache__DOT__icache__v2);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v3) {
        VL_ASSIGNSEL_WIII(275,32,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v3, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v3], __Vdlyvval__soc_top_with_cache__DOT__icache__v3);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v4) {
        VL_ASSIGNSEL_WIII(275,32,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v4, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v4], __Vdlyvval__soc_top_with_cache__DOT__icache__v4);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v5) {
        VL_ASSIGNSEL_WIII(275,32,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v5, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v5], __Vdlyvval__soc_top_with_cache__DOT__icache__v5);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v6) {
        VL_ASSIGNSEL_WIII(275,32,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v6, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v6], __Vdlyvval__soc_top_with_cache__DOT__icache__v6);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v7) {
        VL_ASSIGNSEL_WIII(275,32,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v7, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v7], __Vdlyvval__soc_top_with_cache__DOT__icache__v7);
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v8) {
        vlSelf->soc_top_with_cache__DOT__icache[__Vdlyvdim0__soc_top_with_cache__DOT__icache__v8][(__Vdlyvlsb__soc_top_with_cache__DOT__icache__v8 
                                                                                >> 5U)] 
            = (vlSelf->soc_top_with_cache__DOT__icache
               [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v8][
               (__Vdlyvlsb__soc_top_with_cache__DOT__icache__v8 
                >> 5U)] | ((IData)(1U) << (0x1fU & __Vdlyvlsb__soc_top_with_cache__DOT__icache__v8)));
    }
    if (__Vdlyvset__soc_top_with_cache__DOT__icache__v9) {
        VL_ASSIGNSEL_WIII(275,18,__Vdlyvlsb__soc_top_with_cache__DOT__icache__v9, 
                          vlSelf->soc_top_with_cache__DOT__icache
                          [__Vdlyvdim0__soc_top_with_cache__DOT__icache__v9], __Vdlyvval__soc_top_with_cache__DOT__icache__v9);
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
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__vpu_mem_ready = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid = 0U;
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu_state))) {
            if (((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                 | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)))) {
                vlSelf->soc_top_with_cache__DOT__vpu_mem_ready = 1U;
                if ((0x800U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                    vlSelf->soc_top_with_cache__DOT__unnamedblk6__DOT__i = 4U;
                    if ((0x10U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v4 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 2U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v4 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v4 = 0U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v4 
                            = (0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                          >> 0x10U));
                    }
                    if ((0x20U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v5 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0xaU));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v5 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v5 = 8U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v5 
                            = (0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                          >> 0x10U));
                    }
                    if ((0x40U & vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U])) {
                        __Vdlyvval__soc_top_with_cache__DOT__main_memory__v6 
                            = (0xffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[0U] 
                                        >> 0x12U));
                        __Vdlyvset__soc_top_with_cache__DOT__main_memory__v6 = 1U;
                        __Vdlyvlsb__soc_top_with_cache__DOT__main_memory__v6 = 0x10U;
                        __Vdlyvdim0__soc_top_with_cache__DOT__main_memory__v6 
                            = (0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                          >> 0x10U));
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
                            = (0x1fffU & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                          >> 0x10U));
                    }
                } else {
                    __Vdly__soc_top_with_cache__DOT__vpu_result_reg 
                        = ((0x3c00000003ULL & __Vdly__soc_top_with_cache__DOT__vpu_result_reg) 
                           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__main_memory
                                              [(0x1fffU 
                                                & (vlSelf->soc_top_with_cache__DOT__vpu_mem_req[1U] 
                                                   >> 0x10U))])) 
                              << 2U));
                }
                __Vdly__soc_top_with_cache__DOT__vpu_state = 1U;
                __Vdly__soc_top_with_cache__DOT__vpu_result_reg 
                    = ((0x3ffffffffULL & __Vdly__soc_top_with_cache__DOT__vpu_result_reg) 
                       | ((QData)((IData)((0xfU & (
                                                   vlSelf->soc_top_with_cache__DOT__vpu_mem_req[2U] 
                                                   >> 0xeU)))) 
                          << 0x22U));
                __Vdly__soc_top_with_cache__DOT__vpu_result_reg 
                    = (0x3ffffffffcULL & __Vdly__soc_top_with_cache__DOT__vpu_result_reg);
            }
        } else if ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu_state))) {
            vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid = 1U;
            vlSelf->soc_top_with_cache__DOT__vpu_mem_result 
                = vlSelf->soc_top_with_cache__DOT__vpu_result_reg;
            __Vdly__soc_top_with_cache__DOT__vpu_state = 0U;
        } else {
            __Vdly__soc_top_with_cache__DOT__vpu_state = 0U;
        }
    } else {
        __Vdly__soc_top_with_cache__DOT__vpu_state = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu_mem_ready = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid = 0U;
        vlSelf->soc_top_with_cache__DOT__vpu_mem_result = 0ULL;
        __Vdly__soc_top_with_cache__DOT__vpu_result_reg = 0ULL;
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
    vlSelf->soc_top_with_cache__DOT__icache_state = 
        ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__icache_next_state)
          : 0U);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
        = ((3ULL & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o) 
           | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__instr_rdata)) 
              << 3U));
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
    __Vtableidx9 = (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_start) 
                     << 9U) | (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid) 
                                << 8U) | (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid) 
                                           << 7U) | 
                                          (((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter) 
                                            << 3U) 
                                           | (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))));
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__next_state 
        = Vsoc_top_with_cache__ConstPool__TABLE_4dc3d725_0
        [__Vtableidx9];
    vlSelf->soc_top_with_cache__DOT__vpu_result_reg 
        = __Vdly__soc_top_with_cache__DOT__vpu_result_reg;
    vlSelf->soc_top_with_cache__DOT__vpu_state = __Vdly__soc_top_with_cache__DOT__vpu_state;
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
    vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state 
        = __Vdly__soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state;
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
}

VL_INLINE_OPT void Vsoc_top_with_cache___024root___combo__TOP__6(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___combo__TOP__6\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U] 
                   >> 9U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_busy_q)));
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__instr_rvalid) 
           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
}

VL_INLINE_OPT void Vsoc_top_with_cache___024root___sequent__TOP__7(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->__Vdly__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 0U;
    vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 0U;
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__1__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__2__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__3__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__4__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__5__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__6__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__7__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__8__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__9__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__10__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__11__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__12__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__13__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__14__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__15__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__16__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__17__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__18__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__19__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__20__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__21__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__22__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__23__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__24__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__25__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__26__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__27__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__28__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__29__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__30__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__31__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_id_q 
                = (0xfU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_req[2U] 
                           >> 0xeU));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_id_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n) 
               & 1U);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n) 
               & 1U);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n) 
               & 1U);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n;
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs = 1U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id) {
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id = 0U;
            }
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
    if (vlSelf->rst_ni) {
        if (((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q 
                = vlSymsp->TOP__soc_top_with_cache__DOT__cpu_core__DOT__m_c_obi_instr_if.req_payload;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q = 0xcULL;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_err_wb) 
                    >> 1U) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 1U;
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q 
                = (1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_err_wb));
        } else if (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                     >> 6U) & (0xcU == (0xfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n;
        } else if ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q = 0U;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q = 0U;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_res_q 
                = vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__xif_res_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q 
        = ((IData)(vlSelf->rst_ni) & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_valid) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_ready)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                             >> 0xfU))) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_reject)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q 
        = ((IData)(vlSelf->rst_ni) & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_valid) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_ready)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                             >> 0xfU))) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_accept)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q = 0U;
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 1U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q 
        = ((IData)(vlSelf->rst_ni) & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_valid) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_ready)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                             >> 0xeU))) 
                                      & ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.commit) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q 
        = ((IData)(vlSelf->rst_ni) & ((~ (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_valid) 
                                           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_ready)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                             >> 0xeU))) 
                                      & ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.commit_valid) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n)
            : 0U);
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__wb_valid) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                      >> 0xdU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_valid_1) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q = 0U;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((IData)(vlSelf->rst_ni) ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n
            : 0xdU);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__wb_valid) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                      >> 0xdU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_align_status_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_valid_1) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_align_status_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_align_status;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_align_status_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__wb_valid) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                      >> 0xdU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_valid_1) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_mpu_status;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xffbfU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x40U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xffbfU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xff7fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x80U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xff7fU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfeffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x100U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfeffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfdffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x200U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfdffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfbffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x400U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfbffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xf7ffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x800U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xf7ffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xefffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x1000U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xefffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xdfffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x2000U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xdfffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xbfffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x4000U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xbfffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0x7fffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x8000U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events 
            = (0x7fffU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__hpm_events));
    }
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q 
                = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                    >> 5U) & (0xdU == (0xfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])));
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ready))) {
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_last) {
                vlSelf->__Vdly__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
            } else if ((1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_tbljmp)) 
                              & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q))))) {
                vlSelf->__Vdly__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)));
            }
        } else if ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U])) {
            vlSelf->__Vdly__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
        }
    } else {
        vlSelf->__Vdly__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__wb_valid) 
                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                      >> 0xdU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_valid_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_valid_1) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_valid_q = 1U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_valid_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc = 0ULL;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mcause_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0x400U | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dcsr_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mie_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                      >> 0x10U)))) {
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound3 
                    = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n;
                if ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) {
                    VL_ASSIGNSEL_WIIQ(105,35,(0x7fU 
                                              & ((IData)(0x23U) 
                                                 * (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))), vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q, vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound3);
                }
            }
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[0U] = 0x18U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[3U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = 0U;
        } else if ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid) 
                     & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready)) 
                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = 0U;
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch1_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dscratch0_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_n;
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tselect_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffff0000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | ((IData)(vlSelf->rst_ni) ? (0xffffU & 
                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_n[3U])
               : 0U));
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U] = 0x400U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_we))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U];
        }
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 1U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U];
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 4U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U];
        }
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 5U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U];
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 6U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_n[6U];
        }
        if ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 7U)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_n[7U];
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                    >> 6U) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_ready))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_n;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q 
            = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid) 
                & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready)) 
               & 1U);
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q = 3U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n)
            : 0U);
    if (vlSelf->rst_ni) {
        if ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready)) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 1U;
        } else if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                    >> 6U) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_ready))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_addr;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                    >> 6U) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_trans_ready))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q = 3U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en) 
                    & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                          >> 0x13U))) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                         >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q = 0U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q 
            = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state) 
               & 1U);
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__last_q 
                = (1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__last_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n)
            : 0U);
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid_q = 1U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (1U | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mtvec_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__dpc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__cnt_q 
        = ((IData)(vlSelf->rst_ni) ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__next_cnt)
            : 0U);
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_we) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_sext_q 
                = (1U & ((~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)) 
                         & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U] 
                            >> 3U)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_sext_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)
                    ? 0U : (3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                  >> 0xdU)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_size_q 
                = ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)
                    ? 2U : (3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                  >> 0xbU)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_size_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_we_q)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q) 
                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex))
                    ? ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                        << 0x19U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                     >> 7U)) : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_ext);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x1000U | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x8000000U | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x20000000U | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                      [0U]));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffdU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffefU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffffbfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
}

extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_with_cache__ConstPool__TABLE_9ef0ae6f_0;

VL_INLINE_OPT void Vsoc_top_with_cache___024root___sequent__TOP__8(Vsoc_top_with_cache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_with_cache___024root___sequent__TOP__8\n"); );
    // Variables
    CData/*7:0*/ __Vtableidx3;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59;
    IData/*31:0*/ __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61;
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffff7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffefffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfffbffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xffbfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xf7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xefffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xdfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q) 
                   | (0x80000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
            = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q);
    }
    if (vlSelf->rst_ni) {
        if ((2U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x200U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x400U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x800U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x2000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x200000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x400000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x800000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x2000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U] >> 0x1fU)) {
            __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i
                [0U];
            vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 1U;
        }
    } else {
        vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 1U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id) {
            if ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_valid) 
                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_ready)) 
                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_id) 
                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_id)))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = 0U;
            }
        } else if (((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_valid) 
                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_ready)) 
                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U] 
                        >> 2U)) & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_id) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_id))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = 1U;
        }
        if ((0x8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_valid) 
               & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_ready)) 
              & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_ex)) 
             & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                   >> 0xeU)))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 1U;
        } else if ((1U & ((~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                              >> 0x12U)) & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                               >> 0x11U))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q 
        = ((IData)(vlSelf->rst_ni) & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                       >> 0x15U) & 
                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U] 
                                       >> 0x1eU)));
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb) {
            if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__wb_valid) 
                 & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] 
                     >> 2U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_wb)))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = 0U;
            }
            if ((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                   >> 0x15U) & (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__lsu_wpt_match)) 
                 & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_wb))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = 0U;
            }
        } else if ((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_stage_i__DOT__wb_valid) 
                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] 
                        >> 3U)) & (~ ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] 
                                       >> 2U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_wb))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = 1U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q 
        = vlSelf->__Vdly__soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0U] = 0U;
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xaU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xaU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xbU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xbU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xcU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xcU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xdU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xdU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xeU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xeU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xfU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x10U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x10U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x11U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x11U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x12U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x12U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x13U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x13U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x14U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x14U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x15U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x15U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x16U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x16U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x17U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x17U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x18U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x18U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x19U] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x19U] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1aU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1aU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1bU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1bU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1cU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1cU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1dU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1dU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1eU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1fU] 
            = __Vdlyvval__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61;
    }
    if (vlSelf->__Vdlyvset__soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1fU] = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q) 
           & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q 
           & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 
        = ((2U > (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
            ? (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            : 0U);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[2U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[3U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[4U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[5U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[6U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[7U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[8U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[9U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xaU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xbU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xcU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xdU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xeU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xfU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x10U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x11U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x12U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x13U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x14U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x15U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x16U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x17U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x18U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x19U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1aU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1bU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1cU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1dU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1eU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1fU] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU];
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[__Vilp] 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_q[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q)
            ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q
            : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = 0U;
    if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = 1U;
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 0U;
    if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 1U;
        } else if ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 1U;
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match = 0U;
    if ((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match 
                    = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q;
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_interruptible 
        = ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans_valid_q)) 
           & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__cnt_q)));
    if (vlSelf->rst_ni) {
        if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_we_q 
                = (1U & ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)
                          ? (vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_req[1U] 
                             >> 0xbU) : (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                         >> 4U)));
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__lsu_we_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_q[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_q[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable 
        = (1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id) 
                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id))));
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_valid) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                = (0x200000U | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]);
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                = ((0xfff3ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]) 
                   | (0xc0000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                  << 0xaU)));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] 
                = ((0xfffffff1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U]) 
                   | (0xfffffffeU & ((8U & (((0x2000U 
                                              & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U])
                                              ? ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q)) 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                                                    >> 2U))
                                              : (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                                                 >> 2U)) 
                                            << 3U)) 
                                     | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_ex) 
                                         << 2U) | (2U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                                                      << 1U))))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                = ((0x7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U]) 
                   | (0x800000U & (((~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__csr_is_illegal) 
                                        | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex))) 
                                    << 0x17U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                                 >> 1U))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U] 
                = ((0xbfffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U]) 
                   | (0x40000000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                     << 0x11U)));
            if ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U])) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                    = ((0x83ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U]) 
                       | (0x7c0000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                       >> 1U)));
                if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                              >> 0xdU)))) {
                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                        = ((0x3ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]) 
                           | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_wdata_ex 
                              << 0x12U));
                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                        = ((0xfc0000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U]) 
                           | (0xffffffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_wdata_ex 
                                           >> 0xeU)));
                }
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                = ((0xfffcffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]) 
                   | (0xffff0000U & ((0x20000U & ((
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                   >> 0xdU) 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xbU] 
                                                     << 0x11U))) 
                                     | (0x10000U & 
                                        ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                          >> 0xfU) 
                                         & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xbU] 
                                            << 0x10U))))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                = ((0xffff7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]) 
                   | (0x8000U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                   >> 0x10U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xbU] 
                                                << 0xfU)) 
                                 & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_cmp_result) 
                                    << 0xfU))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                = ((0xffffbfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]) 
                   | (0x4000U & (((~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_illegal) 
                                      | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__xif_csr_error_ex))) 
                                  << 0xeU) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                              >> 2U))));
            if ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U])) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[5U] 
                    = (IData)((((QData)((IData)((3U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                    >> 0xeU)))) 
                                << 0x2cU) | (((QData)((IData)(
                                                              (0xfffU 
                                                               & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                   << 8U) 
                                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                                     >> 0x18U))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                                 << 8U) 
                                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                   >> 0x18U)))))));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                    = ((0xffffc000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]) 
                       | (IData)(((((QData)((IData)(
                                                    (3U 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                        >> 0xeU)))) 
                                    << 0x2cU) | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                       << 8U) 
                                                                      | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                                         >> 0x18U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                                     << 8U) 
                                                                    | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                       >> 0x18U)))))) 
                                  >> 0x20U)));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U] 
                    = (0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U]);
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] 
                    = ((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U]) 
                       | (1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
                                >> 0x1aU)));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                = ((0x3fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]) 
                   | (0xffc00000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                     << 0xbU)));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[2U] 
                = (((0x3ff800U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U] 
                                  << 0xbU)) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                               >> 0x15U)) 
                   | (0xffc00000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U] 
                                     << 0xbU)));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U] 
                = ((0xc0000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U]) 
                   | (((0x3ff800U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                     << 0xbU)) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U] 
                                                  >> 0x15U)) 
                      | (0x3fc00000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                        << 0xbU))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                = ((0xfffdffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]) 
                   | (0x20000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                  << 0xfU)));
            if ((4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U])) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                    = ((0xfffe01ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]) 
                       | (0x1fe00U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                       << 0xfU) | (0x7e00U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                      >> 0x11U)))));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                = ((0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]) 
                   | (0x100000U & ((0x7f00000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                  >> 5U)) 
                                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__csr_is_illegal) 
                                      << 0x14U))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U] 
                = ((0x3fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U]) 
                   | (0xc0000000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                     << 5U)));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U] 
                = ((0xc0000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U]) 
                   | (0x3fffffffU & ((0x3fffffe0U & 
                                      (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                       << 5U)) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                                                  >> 0x1bU))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                = ((0xfffffeffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]) 
                   | (0x100U & (((~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[0U] 
                                     >> 0xcU)) << 8U) 
                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                   << 1U))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] 
                = ((0xfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U]) 
                   | ((IData)((0xfffffffffULL & (((QData)((IData)(
                                                                  vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U])) 
                                                    >> 3U)))) 
                      << 4U));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                = ((0xffffff00U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]) 
                   | (((IData)((0xfffffffffULL & (((QData)((IData)(
                                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U])) 
                                                   << 0x1dU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U])) 
                                                     >> 3U)))) 
                       >> 0x1cU) | ((IData)(((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U])) 
                                                    >> 3U))) 
                                             >> 0x20U)) 
                                    << 4U)));
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__wb_ready) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
            = (0xffdfffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
            = (0x3ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
            = (0xc0000000U | (0x3fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]));
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U] 
            = (0xc0000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
            = (0xffefffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
            = (0xfffc7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
            = (0xfffc01ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U] 
            = (0x3fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[3U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[4U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
            = (0xffff8000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
            = (0xfffffe00U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
            = (0xc0000U | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U]);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o 
        = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
            >> 0x1fU) ? 0x1fU : ((0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                  ? 0x1eU : ((0x20000000U 
                                              & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                              ? 0x1dU
                                              : ((0x10000000U 
                                                  & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                  ? 0x1cU
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x19U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x18U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x17U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x16U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x15U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x14U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x13U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x12U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x11U
                                                             : 
                                                            ((0x10000U 
                                                              & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x10U
                                                              : 
                                                             ((0x800U 
                                                               & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0xbU
                                                               : 
                                                              ((8U 
                                                                & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 3U
                                                                : 7U))))))))))))))))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__irq_req_ctrl 
        = ((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual) 
           & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
              >> 3U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[2U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[2U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[4U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[6U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[6U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[8U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[8U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xaU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xaU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xcU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xcU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xeU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0xeU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x10U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x10U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x12U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x12U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x14U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x14U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x16U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x16U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x18U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x18U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1aU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1aU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1cU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1cU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1eU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x1eU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x20U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x20U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x22U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x22U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x24U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x24U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x26U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x26U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x28U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x28U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2aU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2aU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2cU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2cU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2eU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x2eU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x30U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x30U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x32U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x32U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x34U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x34U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x36U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x36U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x38U])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x38U])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3aU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3aU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3cU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3cU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3eU])))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0x3eU])))) 
                   >> 0x20U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_q
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_q
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__irq_id_ctrl 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata1_rdata 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    if ((0U == vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata1_rdata 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
            [0U];
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata2_rdata 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
        [0U];
    if ((0U == vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__tdata2_rdata 
            = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
            [0U];
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
        = ((0xeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz) 
           | (0xff000000U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                               << 0xaU) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                           << 3U)) 
                             & ((0U != (3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                              >> 0xcU))) 
                                << 0x18U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
        = ((0xffff000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz) 
           | (0xfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U]));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                  >> 0x17U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                               >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                  >> 0x15U) & (((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                   >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                >> 0xbU)) 
                                 | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                    >> 0x19U)) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                                  >> 0x18U)) 
                               | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                   >> 0xeU) & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[0U]))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__jvt_wr_in_wb 
        = ((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
              >> 0xeU) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                          >> 0x15U)) & (((1U == (3U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                                    >> 0xcU))) 
                                         | (2U == (3U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                                      >> 0xcU)))) 
                                        | (3U == (3U 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                                     >> 0xcU))))) 
           & (0x17U == (0xfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U])));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb 
        = (1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                >> 0x10U)) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                              >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb 
        = (1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                >> 0xaU)) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb 
        = (1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                >> 9U)) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                           >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb 
        = (1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                >> 0xdU)) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb 
        = (1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                >> 0xfU)) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                  >> 8U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                            >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb 
        = (1U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                >> 0xcU)) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_waddr[0U] 
        = (0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                    >> 0x12U));
    if (vlSelf->rst_ni) {
        if ((1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__lsu_en_gated)) 
                   & (~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid))))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q = 0U;
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_split_ex;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__load_store_unit_i__DOT__split_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_valid) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                = ((0xfffff8ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]) 
                   | (0xffffff00U & (0x400U | (0x300U 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                  << 5U)))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                = ((0xfffffff8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U]) 
                   | ((4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U]) 
                      | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_id) 
                          << 1U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_id))));
            if ((3U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                      >> 0x2bU))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                    = ((0xffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U]) 
                       | (((0U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x2bU))))
                            ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x2bU))))
                                ? ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                    << 0xaU) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                >> 0x16U))
                                : ((2U == (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                         >> 0x2bU))))
                                    ? ((1U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x26U)))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                   >> 0xdU)))
                                    : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw))) 
                          << 0x18U));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                    = ((0xff000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU]) 
                       | (((0U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x2bU))))
                            ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x2bU))))
                                ? ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                    << 0xaU) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                >> 0x16U))
                                : ((2U == (3U & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                         >> 0x2bU))))
                                    ? ((1U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x26U)))
                                        ? 0U : (0x1fU 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                   >> 0xdU)))
                                    : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw))) 
                          >> 8U));
            }
            if ((2U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                      >> 0x29U))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                    = ((0xffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U]) 
                       | (((0U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x29U))))
                            ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x29U))))
                                ? ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                  >> 0x25U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x24U)))
                                        ? ((0x4000000U 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U])
                                            ? 2U : 4U)
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
                                        : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__imm_i_type))
                                : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw)) 
                          << 0x18U));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                    = ((0xff000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U]) 
                       | (((0U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x29U))))
                            ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x29U))))
                                ? ((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                  >> 0x25U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x24U)))
                                        ? ((0x4000000U 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U])
                                            ? 2U : 4U)
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
                                        : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__imm_i_type))
                                : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw)) 
                          >> 8U));
            }
            if ((2U != (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                      >> 0x27U))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                    = ((0xffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U]) 
                       | (((0U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x27U))))
                            ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x27U))))
                                ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                                : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw)) 
                          << 0x18U));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                    = ((0xff000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U]) 
                       | (((0U == (3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x27U))))
                            ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((1U == (3U & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                     >> 0x27U))))
                                ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                                : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw)) 
                          >> 8U));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xbU] 
                = (1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__alu_en));
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__alu_en) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                    = ((0x3fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU]) 
                       | ((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                   >> 0x34U)) << 0x1eU));
            }
            if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__alu_en) 
                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__div_en))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                    = ((0xc0ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU]) 
                       | (0x3f000000U & ((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                  >> 0x2dU)) 
                                         << 0x18U)));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                = ((0xfff7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__div_en) 
                      << 0x13U));
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__div_en) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                    = ((0xfff9ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U]) 
                       | (0x60000U & ((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                               >> 0x1bU)) 
                                      << 0x11U)));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                = ((0xff7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__mul_en) 
                      << 0x17U));
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__mul_en) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                    = ((0xff8fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U]) 
                       | (0x700000U & ((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                >> 0x1eU)) 
                                       << 0x14U)));
            }
            if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__mul_en) 
                 | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__div_en))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                    = ((0x1ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U]) 
                       | ((IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw)) 
                                    << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw)))) 
                          << 0x11U));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                    = (((IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw)) 
                                  << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw)))) 
                        >> 0xfU) | ((IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw))) 
                                             >> 0x20U)) 
                                    << 0x11U));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                    = ((0xfffe0000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U]) 
                       | ((IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_a_fw)) 
                                     << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__operand_b_fw))) 
                                   >> 0x20U)) >> 0xfU));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                = ((0xfffeffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__csr_en) 
                      << 0x10U));
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__csr_en) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                    = ((0xffff3fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U]) 
                       | (0xc000U & ((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                              >> 0x15U)) 
                                     << 0xeU)));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                = ((0xffffdfffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__lsu_en) 
                      << 0xdU));
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__lsu_en) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                    = ((0xffffe007U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U]) 
                       | (0xfffffff8U & ((0x1000U & 
                                          ((IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x13U)) 
                                           << 0xcU)) 
                                         | ((0xc00U 
                                             & ((IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                         >> 0x11U)) 
                                                << 0xaU)) 
                                            | (0x200U 
                                               & ((IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x10U)) 
                                                  << 9U))))));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                = ((0xfffffffbU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__sys_en) 
                      << 2U));
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__sys_en) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                    = ((0x3ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U]) 
                       | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                          << 0x1aU));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                    = ((0xfffffffcU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U]) 
                       | (3U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                >> 6U)));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                = ((0xfdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U]) 
                   | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__illegal_insn) 
                       & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_accept))) 
                      << 0x19U));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                = ((0xfeffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__rf_we) 
                      << 0x18U));
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__rf_we) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                    = ((0xff07ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U]) 
                       | (0xf80000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                       << 0xeU)));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U] 
                = ((0x7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U]) 
                   | (0xfff80000U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                      << 0x1dU) | (0x1ff80000U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                      >> 3U)))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                = ((0xfff80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U]) 
                   | (0x7ffffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                  >> 3U)));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                = ((0xffff07ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]) 
                   | (0xf800U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                 >> 0xbU)));
            if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U])) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                    = ((0x3ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]) 
                       | ((IData)((((QData)((IData)(
                                                    (0xffffU 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                        >> 6U)))) 
                                    << 1U) | (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                                 >> 0x1dU)))))) 
                          << 0x12U));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U] 
                    = ((0xfff80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U]) 
                       | (((IData)((((QData)((IData)(
                                                     (0xffffU 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                         >> 6U)))) 
                                     << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                                  >> 0x1dU)))))) 
                           >> 0xeU) | ((IData)(((((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                                      >> 6U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                                       >> 0x1dU))))) 
                                                >> 0x20U)) 
                                       << 0x12U)));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                    = ((0xfffcffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]) 
                       | (0x30000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                      >> 0xbU)));
            } else {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                    = ((0xffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]) 
                       | ((IData)((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U])) 
                                     << 5U) | ((QData)((IData)(
                                                               vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U])) 
                                               >> 0x1bU)))) 
                          << 0x10U));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U] 
                    = ((0xfff80000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U]) 
                       | (((IData)((0x7ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U])) 
                                        << 5U) | ((QData)((IData)(
                                                                  vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U])) 
                                                  >> 0x1bU)))) 
                           >> 0x10U) | ((IData)(((0x7ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U])) 
                                                      << 5U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U])) 
                                                        >> 0x1bU))) 
                                                 >> 0x20U)) 
                                        << 0x10U)));
            }
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                = ((0x1ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U]) 
                   | (0xfe000000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] 
                                     << 0x16U)));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                = ((0xfe000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U]) 
                   | (0x1ffffffU & ((0x1c00000U & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                                                   << 0x16U)) 
                                    | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] 
                                       >> 0xaU))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                = ((0xffffff7fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]) 
                   | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_accept) 
                       | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_reject)) 
                      << 7U));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                = ((0xfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U]) 
                   | ((IData)((((QData)((IData)(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                 & (IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o)))) 
                                << 0x22U) | (((QData)((IData)(
                                                              ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                               & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                                                  >> 2U)))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                                  & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                                                     >> 6U)))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] 
                                                                    << 0x1dU) 
                                                                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                                                                      >> 3U)))))))) 
                      << 4U));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                = ((0xffffff80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]) 
                   | (((IData)((((QData)((IData)(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                  & (IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o)))) 
                                 << 0x22U) | (((QData)((IData)(
                                                               ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                                & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                                                   >> 2U)))) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                                   & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                                                      >> 6U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] 
                                                                     << 0x1dU) 
                                                                    | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                                                                       >> 3U)))))))) 
                       >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                               ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                                & (IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o)))) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                                   & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                                                      >> 2U)))) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                                                      & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                                                         >> 6U)))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                                                                          >> 3U))))))) 
                                             >> 0x20U)) 
                                    << 4U)));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
                = ((0xfffffff7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__xif_insn_accept) 
                      << 3U));
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_ready) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
            = (0xfffffbffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
            = (0x3ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] = 0x13000000U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xbU] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
            = (7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
            = (0x300U | (0xfffffc00U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]));
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
            = (0x180000U | (0x7ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U]));
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
            = (0xfc000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U]);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U] 
            = (0xfffffff8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0U]);
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[1U] 
                  >> 0x15U) & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[6U] 
                                >> 0xeU) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed 
        = ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb)) 
           & (2U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
            & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q)) 
           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__waddr_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_waddr
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed 
        = (((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__lsu_interruptible) 
                & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing))) 
               & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb))) 
              & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb))) 
             & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q))) 
            & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
           & (2U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__waddr_i
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem 
        = ((3U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                         >> 0x11U))) | (2U == (3U & 
                                               (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                                >> 0x11U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
        = ((0xdffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz) 
           | (0x2000000U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                             << 9U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                       << 0xfU))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[3U] 
                  >> 0x18U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out 
        = (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
             == vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q) 
            | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
                > vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q) 
               ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))) 
           & ((0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q) 
              | (~ (IData)((0U != ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                    << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                >> 0x11U)))))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd 
        = (((0x1fU >= ((0x22U == (0x3fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                           >> 0x18U)))
                        ? 1U : ((0x24U == (0x3fU & 
                                           (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                            >> 0x18U)))
                                 ? 2U : 3U))) ? (((
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                   << 8U) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                     >> 0x18U)) 
                                                 << 
                                                 ((0x22U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                       >> 0x18U)))
                                                   ? 1U
                                                   : 
                                                  ((0x24U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                        >> 0x18U)))
                                                    ? 2U
                                                    : 3U)))
             : 0U) + ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                       << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                 >> 0x18U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xffffffc0U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                    >> 0x18U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
             << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                       >> 0x18U)) == ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                       << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                 >> 0x18U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr 
        = ((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                   >> 0x10U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                                >> 0xaU))) ? (0xfffU 
                                              & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U)))
            : 0U);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = 0U;
    if ((0x20000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU])) {
        if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                      >> 0x1cU)))) {
            if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x1bU)))) {
                if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x19U)))) {
                    if ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                          >> 0x18U));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                         >> 0x1cU)))) {
        if ((0x8000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x19U)))) {
                    if ((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = (- (IData)((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                >> 0x17U))));
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al 
        = ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al) 
           | (0xffffU & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                          << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                      >> 0x11U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl 
        = ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl) 
           | (0xffffU & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                          << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                      >> 0x11U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah 
        = ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah) 
           | (0xffffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                         >> 1U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh 
        = ((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh) 
           | (0xffffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                         >> 1U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah 
        = ((0xffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah) 
           | (0x10000U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                           >> 4U) & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U])));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh 
        = ((0xffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh) 
           | (0x10000U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                           >> 5U) & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U])));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__mul_en 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                  >> 0x17U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = VL_GTS_IQQ(1,33,33, (((QData)((IData)((1U 
                                                 & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                     >> 0x17U) 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                       >> 0x1bU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                              << 8U) 
                                                             | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                                >> 0x18U))))), 
                     (((QData)((IData)((1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U) 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x1bU))))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                     << 8U) 
                                                    | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                                                       >> 0x18U))))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                  >> 0x13U) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp 
        = ((0x3fe3fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_byp) 
           | (0x100U & (((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                          << 6U) & ((0x1f00U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                >> 0x13U)) 
                                    | (0x3f00U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[4U] 
                                                  >> 0x12U)))) 
                        & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                           >> 2U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed 
        = ((1U == (3U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                         >> 0x11U))) | (3U == (3U & 
                                               (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U] 
                                                >> 0x11U))));
    if (vlSelf->rst_ni) {
        if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_valid) 
             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                = (0x40000000U | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U]);
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                = ((0xf83fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U]) 
                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_meta_n) 
                      << 0x16U));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                = ((0xffffffc7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U]) 
                   | (0xfffffff8U & ((((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid)) 
                                       & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__illegal_c_insn)) 
                                      << 5U) | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp) 
                                                << 3U))));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                = ((7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U]) 
                   | ((IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if)) 
                                << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__xif_id)))) 
                      << 3U));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] 
                = (((IData)((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if)) 
                              << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__xif_id)))) 
                    >> 0x1dU) | ((IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__xif_id))) 
                                          >> 0x20U)) 
                                 << 3U));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                = ((0xfffffff8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U]) 
                   | ((IData)(((((QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__xif_id))) 
                               >> 0x20U)) >> 0x1dU));
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U] 
                = ((0xfffffff8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U]) 
                   | ((4U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid)
                               ? ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
                                  & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm))
                               : (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q))) 
                             << 2U)) | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__last_op_if) 
                                         << 1U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__abort_op_if))));
            if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)))) {
                if ((1U & ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
                           | (IData)((0ULL != (7ULL 
                                               & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed)))))) {
                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                        = ((0x3fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U]) 
                           | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                              << 0x16U));
                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                        = ((0xffc00000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U]) 
                           | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                              >> 0xaU));
                }
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                    = ((0xfbffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U]) 
                       | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_compressed) 
                          << 0x1aU));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                    = ((0xff3fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U]) 
                       | (0xffc00000U & (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_tbljmp) 
                                          << 0x17U) 
                                         | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_pushpop) 
                                            << 0x16U))));
                if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_compressed) {
                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] 
                        = ((0xffc0003fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U]) 
                           | (0x3fffc0U & ((IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                    >> 3U)) 
                                           << 6U)));
                }
            }
            if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U] 
                    = ((7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U]) 
                       | ((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed 
                                   >> 3U)) << 3U));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                    = ((0xfffffff8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U]) 
                       | ((IData)((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed 
                                   >> 3U)) >> 0x1dU));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                    = ((0xc7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U]) 
                       | (0x38000000U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed) 
                                         << 0x1bU)));
            } else {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                    = ((0x7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U]) 
                       | ((IData)(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid)
                                    ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_instr
                                    : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed)) 
                          << 0x1bU));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                    = ((0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U]) 
                       | (0x7fffffffU & (((IData)(((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid)
                                                    ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_instr
                                                    : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed)) 
                                          >> 5U) | 
                                         ((IData)((
                                                   ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_valid)
                                                     ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__seq_instr
                                                     : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_decompressed) 
                                                   >> 0x20U)) 
                                          << 0x1bU))));
            }
        } else if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ready) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                = (0x3fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U]);
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[0U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[2U] = 0U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U] = 0x18U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] = 0xc0000000U;
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 0U;
    if ((0x800U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                                } else if ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                                } else if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                                } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                                } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                        } else if ((8U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                        } else if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                        } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                        } else if ((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_counter_read = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
        = (0x3ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz);
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                  >> 0xbU)))) {
        if ((0x400U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
                                                        = 
                                                        (0x4000000U 
                                                         | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz);
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
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz 
        = ((0xf000fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__csr_hz) 
           | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__cs_registers_i__DOT__csr_raddr) 
              << 0xcU));
    __Vtableidx3 = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                     << 7U) | ((0x7eU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                         >> 0x17U)) 
                               | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_cmp_result 
        = Vsoc_top_with_cache__ConstPool__TABLE_9ef0ae6f_0
        [__Vtableidx3];
    if (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                          >> 0x18U));
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                          >> 0x18U));
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                          >> 0x18U));
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[8U] 
                          >> 0x18U));
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg 
        = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
            >> 0x10U) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 1U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
        } else if ((2U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
        } else if ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
        }
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex 
        = (((((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
               >> 0x1fU) & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xbU]) 
             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[1U] 
                >> 0xaU)) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q))) 
           & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_cmp_result));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
        = ((0x20000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[7U])
            ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                ? (1U | ((~ ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                              << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                          >> 0x11U))) 
                         << 1U)) : ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                                     << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                                                 >> 0x11U)))
            : ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[6U] 
                << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[5U] 
                            >> 0x11U)));
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q 
                = ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                    >> 5U) & (1U == (0xfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])));
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q 
                = (1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U] 
                         >> 4U));
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q = 0U;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[6U])) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                = (0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__branch_addr_n);
        } else if (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_valid) 
                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__if_ready))) {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q = 0U;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__mret_ptr_in_id 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                  >> 0x1eU) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                               >> 0x18U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id 
        = (1U & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                  >> 0x1eU) & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                               >> 0x19U)));
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
        = ((0x1ffU & vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U]) 
           | ((IData)((((QData)((IData)(((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                          << 2U) | 
                                         (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                          >> 0x1eU)))) 
                        << 6U) | (QData)((IData)((0x30U 
                                                  | (0xfU 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                                                        >> 3U))))))) 
              << 9U));
    vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
        = (0x7fffU & (((IData)((((QData)((IData)(((
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                   << 2U) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                     >> 0x1eU)))) 
                                 << 6U) | (QData)((IData)(
                                                          (0x30U 
                                                           | (0xfU 
                                                              & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                                                                 >> 3U))))))) 
                       >> 0x17U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                                 << 2U) 
                                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                                   >> 0x1eU)))) 
                                               << 6U) 
                                              | (QData)((IData)(
                                                                (0x30U 
                                                                 | (0xfU 
                                                                    & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[1U] 
                                                                       >> 3U)))))) 
                                             >> 0x20U)) 
                                    << 9U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
        = (0x7ffffffffffeffULL & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
    if ((0x33U == (0x7fU & ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                             << 2U) | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                       >> 0x1eU))))) {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
            = (0x7000000ULL | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
            = (0x1d0000000000ULL | (0x7fe07fffffffffULL 
                                    & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
        if (((((((((8U == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                      >> 0x14U)) | 
                           (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                  >> 0xaU)))) | (9U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                      >> 0x14U)) 
                                                  | (7U 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                        >> 0xaU))))) 
                  | (0xaU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                         >> 0x14U)) 
                              | (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                       >> 0xaU))))) 
                 | (0xbU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                        >> 0x14U)) 
                             | (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                      >> 0xaU))))) 
                | (0xcU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                       >> 0x14U)) | 
                            (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                   >> 0xaU))))) | (0xdU 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                        >> 0x14U)) 
                                                    | (7U 
                                                       & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                          >> 0xaU))))) 
              | (0xeU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                     >> 0x14U)) | (7U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                      >> 0xaU))))) 
             | (0xfU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                    >> 0x14U)) | (7U 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                     >> 0xaU)))))) {
            if ((8U == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                   >> 0x14U)) | (7U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                                    >> 0xaU))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000ULL | (0x7ffffcffffffffULL 
                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((9U == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                          >> 0x14U)) 
                               | (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                        >> 0xaU))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x3c0000000ULL | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
            } else if ((0xaU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x340000000ULL | (0x7ffffc3fffffffULL 
                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xbU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x300000000ULL | (0x7ffffc3fffffffULL 
                                         & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xcU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x28000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xdU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x20000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xeU == ((0x3f8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x38000000ULL | vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else {
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x30000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            }
        } else {
            vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
        }
    } else {
        vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
    }
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                              >> 0x1dU)))) << 0xcU) 
           | (0xfffU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                        >> 0x12U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o[0U] 
        = (0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                    >> 0xdU));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o[1U] 
        = (0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[5U] 
                    >> 0x12U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xfffffff8U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((4U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                     >> 0x1bU)) | ((2U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                          >> 0x1dU)) 
                                   | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                      >> 0x1fU))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xffffffc7U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x20U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                        >> 0x15U)) | ((0x10U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               >> 0x19U)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xfffffe3fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x100U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                         >> 0xfU)) | ((0x80U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                  >> 0x13U)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xfffff1ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x800U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                         >> 9U)) | ((0x400U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 >> 0xdU)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xffff8fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x4000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                          >> 3U)) | ((0x2000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                   >> 7U)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xfffc7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x20000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                           << 3U)) | ((0x10000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                          >> 1U)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xffe3ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x100000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                         << 5U)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xff1fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x800000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               << 0xbU)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xf8ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x4000000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 << 0x11U)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xc7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x20000000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                  << 0x17U)))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0x3fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
               << 0x1fU) | (0x40000000U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                           << 0x1dU))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[1U] 
        = ((0xffffffdfU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[1U]) 
           | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
              << 5U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U] 
        = ((0xfff8ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[4U]) 
           | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q) 
              << 0x10U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U] 
        = ((0xffffe3ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U]) 
           | (0xfffffc00U & ((0x1000U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                         << 0xcU)) 
                             | ((0x800U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                           << 0xaU)) 
                                | (0x400U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                             << 8U))))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U] 
        = ((0xfffffdffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ctrl_fsm[3U]) 
           | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
               | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug)) 
              << 9U));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
        = ((0x20U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[3U])
            ? 0x27d4400000100ULL : vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o
        [1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__id_stage_i__rf_raddr_o
        [1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
        = ((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_en)
            ? vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__div_clz_data_rev
            : ((0x28U == (0x3fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                   >> 0x18U))) ? ((
                                                   vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                   << 8U) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                     >> 0x18U))
                : VL_STREAML_FAST_III(32,32,32,((vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[0xaU] 
                                                 << 8U) 
                                                | (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__id_ex_pipe[9U] 
                                                   >> 0x18U)), 0)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_meta_n = 0U;
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_meta_n 
        = ((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_meta_n)) 
           | ((0x10U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                        >> 0x16U)) | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                       << 3U) | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q) 
                                                  << 2U) 
                                                 | (2U 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                                                       >> 0x16U))))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x1eU & (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (1U & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_id_pipe[4U] 
                    >> 0x16U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer 
        = (((IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
            | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__controller_i__rf_raddr_id_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__controller_i__rf_raddr_id_i[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id
        [1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__raddr_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__raddr_i[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_raddr_id
        [1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xffe007ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0xfffff800U & ((((4U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 2U : 3U) << 0x10U) 
                             | (((1U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0U : 1U) << 0xbU))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0x801fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0xffe00000U & ((((0x40U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 6U : 7U) << 0x1aU) 
                             | (((0x10U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 4U : 5U) << 0x15U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0x7fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (((0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                ? 8U : 9U) << 0x1fU));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xfffffe00U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0x7fffffffU & ((0x7ffffff0U & (((0x400U 
                                               & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                               ? 0xaU
                                               : 0xbU) 
                                             << 4U)) 
                             | (((0x100U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 8U : 9U) >> 1U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xfff801ffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0xfffffe00U & ((((0x4000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 0xeU : 0xfU) << 0xeU) 
                             | (((0x1000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0xcU : 0xdU) << 9U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xe007ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0xfff80000U & ((((0x40000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 0x12U : 0x13U) << 0x18U) 
                             | (((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0x10U : 0x11U) 
                                << 0x13U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0x1fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (((0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                ? 0x14U : 0x15U) << 0x1dU));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xffffff80U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0x1fffffffU & ((0x1ffffffcU & (((0x400000U 
                                               & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                               ? 0x16U
                                               : 0x17U) 
                                             << 2U)) 
                             | (((0x100000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0x14U : 0x15U) 
                                >> 3U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xfffe007fU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0xffffff80U & ((((0x4000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 0x1aU : 0x1bU) << 0xcU) 
                             | (((0x1000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0x18U : 0x19U) 
                                << 7U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf801ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0xfffe0000U & ((((0x40000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 0x1eU : 0x1fU) << 0x16U) 
                             | (((0x10000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0x1cU : 0x1dU) 
                                << 0x11U))));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffe7fffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xcU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x10U) | ((IData)((0U != (3U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0xfU)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfff9ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x12U) | ((IData)((0U != (0x30U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x11U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffe7ffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x14U) | ((IData)((0U != (0x300U 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x13U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xff9fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x16U) | ((IData)((0U != (0x3000U 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x15U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfe7fffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x18U) | ((IData)((0U != (0x30000U 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x17U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xf9ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x1aU) | ((IData)((0U != (0x300000U 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x19U)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xe7ffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x1cU) | ((IData)((0U != (0x3000000U 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x1bU)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0x9fffffffU & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000000U & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x1eU) | ((IData)((0U != (0x30000000U 
                                            & vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x1dU)));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__controller_i__rf_raddr_id_i
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__controller_i__rf_raddr_id_i
        [1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__raddr_i
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__register_file_wrapper_i__raddr_i
        [1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match 
        = (((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__ex_wb_pipe[7U] 
                      >> 0x12U)) == vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
            [0U]) & (0U != vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                     [0U]));
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i
        [0U]];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i
        [1U]];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__register_file_wrapper_i__rdata_o[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__register_file_wrapper_i__rdata_o[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o
        [1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_rdata_id[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__register_file_wrapper_i__rdata_o
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_rdata_id[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellout__register_file_wrapper_i__rdata_o
        [1U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__id_stage_i__rf_rdata_i[0U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_rdata_id
        [0U];
    vlSelf->soc_top_with_cache__DOT__cpu_core__DOT____Vcellinp__id_stage_i__rf_rdata_i[1U] 
        = vlSelf->soc_top_with_cache__DOT__cpu_core__DOT__rf_rdata_id
        [1U];
}
