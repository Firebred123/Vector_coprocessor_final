// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top_debug.h for the primary calling header

#include "Vsoc_top_debug___024root.h"
#include "Vsoc_top_debug__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsoc_top_debug___024root___ctor_var_reset(Vsoc_top_debug___024root* vlSelf);

Vsoc_top_debug___024root::Vsoc_top_debug___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top_debug___024root___ctor_var_reset(this);
}

void Vsoc_top_debug___024root::__Vconfigure(Vsoc_top_debug__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top_debug___024root::~Vsoc_top_debug___024root() {
}

extern const VlWide<8>/*255:0*/ Vsoc_top_debug__ConstPool__CONST_9e67c271_0;

void Vsoc_top_debug___024root___initial__TOP__1(Vsoc_top_debug___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_debug__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_debug___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<4>/*127:0*/ __Vtemp17;
    // Body
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__PMA_CFG[0U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__PMA_CFG[0U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__PMA_CFG[0U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__PMA_CFG[1U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__PMA_CFG[1U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__PMA_CFG[1U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__PMA_CFG[0U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__PMA_CFG[0U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__PMA_CFG[0U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__PMA_CFG[1U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__PMA_CFG[1U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__PMA_CFG[1U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__PMA_CFG[0U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__PMA_CFG[0U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__PMA_CFG[0U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__PMA_CFG[1U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__PMA_CFG[1U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__PMA_CFG[1U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[0U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[0U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[0U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[1U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[1U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[1U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__PMA_CFG[0U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__PMA_CFG[0U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__PMA_CFG[0U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__PMA_CFG[1U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__PMA_CFG[1U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__PMA_CFG[1U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__PMA_CFG[0U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__PMA_CFG[0U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__PMA_CFG[0U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__PMA_CFG[1U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__PMA_CFG[1U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__PMA_CFG[1U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[0U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[0U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[0U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[1U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[1U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__PMA_CFG[1U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__PMA_CFG[0U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__PMA_CFG[0U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__PMA_CFG[0U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__PMA_CFG[1U][0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__PMA_CFG[1U][1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__PMA_CFG[1U][2U] = 0U;
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[1U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[1U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[1U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[1U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[1U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[1U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[1U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[1U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[2U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[2U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[2U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[2U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[2U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[2U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[2U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[2U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[3U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[3U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[3U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[3U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[3U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[3U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[3U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[3U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[4U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[4U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[4U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[4U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[4U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[4U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[4U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[4U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[5U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[5U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[5U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[5U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[5U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[5U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[5U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[5U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[6U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[6U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[6U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[6U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[6U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[6U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[6U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[6U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[7U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[7U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[7U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[7U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[7U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[7U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[7U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[7U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[8U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[8U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[8U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[8U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[8U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[8U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[8U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[8U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[9U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[9U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[9U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[9U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[9U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[9U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[9U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[9U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xaU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xaU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xaU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xaU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xaU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xaU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xaU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xaU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xbU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xbU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xbU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xbU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xbU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xbU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xbU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xbU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xcU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xcU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xcU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xcU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xcU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xcU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xcU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xcU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xdU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xdU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xdU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xdU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xdU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xdU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xdU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xdU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xeU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xeU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xeU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xeU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xeU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xeU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xeU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xeU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xfU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xfU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xfU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xfU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xfU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xfU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xfU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0xfU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x10U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x10U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x10U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x10U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x10U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x10U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x10U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x10U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x11U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x11U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x11U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x11U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x11U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x11U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x11U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x11U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x12U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x12U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x12U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x12U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x12U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x12U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x12U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x12U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x13U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x13U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x13U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x13U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x13U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x13U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x13U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x13U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x14U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x14U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x14U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x14U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x14U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x14U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x14U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x14U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x15U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x15U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x15U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x15U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x15U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x15U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x15U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x15U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x16U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x16U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x16U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x16U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x16U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x16U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x16U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x16U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x17U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x17U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x17U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x17U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x17U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x17U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x17U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x17U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x18U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x18U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x18U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x18U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x18U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x18U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x18U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x18U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x19U][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x19U][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x19U][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x19U][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x19U][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x19U][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x19U][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x19U][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1aU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1aU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1aU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1aU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1aU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1aU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1aU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1aU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1bU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1bU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1bU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1bU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1bU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1bU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1bU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1bU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1cU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1cU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1cU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1cU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1cU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1cU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1cU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1cU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1dU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1dU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1dU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1dU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1dU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1dU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1dU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1dU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1eU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1eU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1eU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1eU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1eU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1eU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1eU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1eU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1fU][0U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1fU][1U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1fU][2U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1fU][3U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1fU][4U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1fU][5U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1fU][6U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf[0x1fU][7U] 
        = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    __Vtemp17[0U] = 0x2e686578U;
    __Vtemp17[1U] = 0x6f726473U;
    __Vtemp17[2U] = 0x72795f77U;
    __Vtemp17[3U] = 0x6d656d6fU;
    VL_READMEM_N(true, 32, 8192, 0, VL_CVT_PACK_STR_NW(4, __Vtemp17)
                 ,  &(vlSelf->soc_top_debug__DOT__main_memory)
                 , 0, ~0ULL);
    VL_WRITEF("=== Debug SoC (No Caches) ===\nMain Memory: 32KB\nFirst instructions in memory:\n  [0x00000000]: 0x%08x\n  [0x00000004]: 0x%08x\n  [0x00000008]: 0x%08x\n  [0x0000000c]: 0x%08x\n  [0x00000010]: 0x%08x\n  [0x00000014]: 0x%08x\n  [0x00000018]: 0x%08x\n  [0x0000001c]: 0x%08x\n",
              32,vlSelf->soc_top_debug__DOT__main_memory
              [0U],32,vlSelf->soc_top_debug__DOT__main_memory
              [1U],32,vlSelf->soc_top_debug__DOT__main_memory
              [2U],32,vlSelf->soc_top_debug__DOT__main_memory
              [3U],32,vlSelf->soc_top_debug__DOT__main_memory
              [4U],32,vlSelf->soc_top_debug__DOT__main_memory
              [5U],32,vlSelf->soc_top_debug__DOT__main_memory
              [6U],32,vlSelf->soc_top_debug__DOT__main_memory
              [7U]);
    vlSelf->soc_top_debug__DOT__unnamedblk3__DOT__i = 8U;
    VL_WRITEF("Data at VLSU addresses:\n  [0x100]: 0x%08x\n  [0x104]: 0x%08x\n  [0x120]: 0x%08x\n  [0x124]: 0x%08x\n",
              32,vlSelf->soc_top_debug__DOT__main_memory
              [0x40U],32,vlSelf->soc_top_debug__DOT__main_memory
              [0x41U],32,vlSelf->soc_top_debug__DOT__main_memory
              [0x48U],32,vlSelf->soc_top_debug__DOT__main_memory
              [0x49U]);
}

extern const VlWide<29>/*927:0*/ Vsoc_top_debug__ConstPool__CONST_9fecadc7_0;
extern const VlWide<56>/*1791:0*/ Vsoc_top_debug__ConstPool__CONST_d3450429_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_9ef0ae6f_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_5078abe8_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_df53dd33_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_4e2d0d20_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_93a67eec_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_9cf96f61_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_f1f802d5_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_3491683c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_1e6388d2_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vsoc_top_debug__ConstPool__TABLE_6b3161f8_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vsoc_top_debug__ConstPool__TABLE_00ab2ffe_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vsoc_top_debug__ConstPool__TABLE_37c8e92b_0;
extern const VlUnpacked<IData/*31:0*/, 16> Vsoc_top_debug__ConstPool__TABLE_2bb9808f_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_410f47a9_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_6d3c1c50_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_1707cc16_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_ef83ff6b_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_39edf477_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_52407f0f_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_ef39bc8c_0;
extern const VlUnpacked<CData/*1:0*/, 256> Vsoc_top_debug__ConstPool__TABLE_387dc6c4_0;

void Vsoc_top_debug___024root___settle__TOP__3(Vsoc_top_debug___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_debug__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top_debug___024root___settle__TOP__3\n"); );
    // Variables
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__Vfuncout;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__current_value;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__next_value;
    CData/*7:0*/ __Vtableidx2;
    CData/*7:0*/ __Vtableidx3;
    CData/*7:0*/ __Vtableidx4;
    CData/*7:0*/ __Vtableidx5;
    CData/*3:0*/ __Vtableidx6;
    IData/*31:0*/ __Vfunc_csr_next_value__12__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__12__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__13__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__13__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__14__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__14__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__15__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__15__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__19__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__19__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__20__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__20__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__26__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__26__wdata;
    IData/*31:0*/ __Vfunc_csr_next_value__27__Vfuncout;
    IData/*31:0*/ __Vfunc_csr_next_value__27__wdata;
    CData/*31:0*/ __Vtemp32;
    CData/*31:0*/ __Vtemp37;
    CData/*31:0*/ __Vtemp48;
    CData/*31:0*/ __Vtemp53;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                  >> 6U) & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                             >> 5U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
                                       >> 4U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__priv_lvl_we = 0U;
    if ((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    } else if ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    } else if ((0x80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_mtvec_init_if 
        = ((0U == (0xfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U])) 
           & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[6U] 
              >> 6U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = (0xfffffffdU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = (0xfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_write_increment);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
        = (0x800007ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
        = (0xfffffff8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
        = (0xffffff8fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
        = (0x1800U | (0xffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = (0xfffffff8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = (0xffffff8fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = (0xfffff8ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
        = (0xffff0fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al 
        = (0xffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl 
        = (0xffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = (3U | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = (0x10U | (0xffffffc7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = (0xfffffdffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = (0xffff8fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
        = (0x40000000U | (0xffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = (0x7fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0U] 
              << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[1U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[1U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[2U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[2U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[3U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[3U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[4U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[4U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[5U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[5U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[6U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[6U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[7U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[7U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[8U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[8U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[9U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[9U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xaU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xaU] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xbU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xbU] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xcU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xcU] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xdU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xdU] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xeU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xeU] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xfU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0xfU] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x10U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x10U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x11U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x11U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x12U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x12U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x13U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x13U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x14U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x14U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x15U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x15U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x16U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x16U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x17U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x17U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x18U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x18U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x19U] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x19U] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x1aU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x1aU] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x1bU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU] 
        = ((Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x1bU] 
            >> 0x10U) | (Vsoc_top_debug__ConstPool__CONST_9fecadc7_0[0x1cU] 
                         << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x37U)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_q[(__Vilp 
                                                                                + (IData)(8U))] 
            = Vsoc_top_debug__ConstPool__CONST_d3450429_0[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
        = (0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q 
        = (0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
        = (0xffffff81U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
        = (0xffffffc0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
        = (0x3fffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
        = ((3ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o) 
           | ((QData)((IData)(vlSelf->soc_top_debug__DOT__instr_rdata)) 
              << 3U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__instr_rvalid) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    if ((1U & (~ (IData)(vlSelf->clk_i)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
                   >> 9U) | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__sleep_unit_i__DOT__core_busy_q)));
    }
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_done 
        = ((4U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__state)) 
           | ((3U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__state)) 
              & (0U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__next_state))));
    vlSymsp->TOP__soc_top_debug__DOT__xif.issue_req[0U] 
        = (0x7fU | vlSymsp->TOP__soc_top_debug__DOT__xif.issue_req[0U]);
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_result_o = 0ULL;
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_result_o 
        = ((0xffffffffffffffULL & vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_result_o) 
           | ((QData)((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__id_q)) 
              << 0x38U));
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_result_o 
        = ((0xf0000000003ffffULL & vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_result_o) 
           | ((QData)((IData)((((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q) 
                                << 1U) | (2U != (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__funct7_q))))) 
              << 0x12U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[2U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[3U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffff3ULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[8U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[9U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffcffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0xaU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0xbU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffff3ffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0xcU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0xdU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffcfffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0xeU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0xfU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffff3fffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x10U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x11U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffcffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x12U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x13U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffff3ffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x14U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x15U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffcfffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x16U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x17U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffff3fffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x18U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x19U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffcffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x1aU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x1bU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffff3ffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x1cU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x1dU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffcfffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x1eU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x1fU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffff3fffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x20U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x21U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffcffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x22U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x23U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffff3ffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x24U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x25U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffcfffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x26U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x27U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffff3fffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x28U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x29U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffcffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x2aU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x2bU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffff3ffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x2cU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x2dU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffcfffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x2eU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x2fU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffff3fffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x30U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x31U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffcffffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x32U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x33U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfff3ffffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x34U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x35U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffcfffffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x36U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x37U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xff3fffffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x38U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x39U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfcffffffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x3aU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x3bU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xf3ffffffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x3cU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x3dU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xcfffffffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x3eU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_n[0x3fU] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0x3fffffffffffffffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__mhpmcounter_we);
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = 0U;
    if ((0U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = 1U;
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 0U;
    if ((0U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 1U;
        } else if ((2U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 1U;
        }
    }
    vlSymsp->TOP__soc_top_debug__DOT__xif.mem_result_valid 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__last_q) 
            & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid)) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__xif_res_q));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_resp_valid 
        = (((5U >= (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                         << 1U)))) 
            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
               >> (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                        << 1U))))) ? 
           ((5U >= (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                         << 1U)))) 
            & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
               >> (7U & ((IData)(1U) + ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                        << 1U))))) : (IData)(vlSelf->soc_top_debug__DOT__data_rvalid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable 
        = (1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id) 
                    | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q) 
           & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_interruptible 
        = ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid_q)) 
           & (0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q)
            ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 
        = ((2U > (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
            ? (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            : 0U);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match = 0U;
    if ((0U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match 
                    = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q;
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_resp 
        = (((QData)((IData)(vlSelf->soc_top_debug__DOT__data_rdata)) 
            << 3U) | (QData)((IData)((1U | (((5U >= 
                                              (7U & 
                                               ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                << 1U))) 
                                             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                                >> 
                                                (7U 
                                                 & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                    << 1U)))) 
                                            << 2U)))));
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_q[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_q[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q;
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[0U] = 0U;
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] = 0U;
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[2U] = 0U;
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
        = ((0x7ffU & vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U]) 
           | ((IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__id_q)) 
                        << 0x23U) | (((QData)((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__current_addr)) 
                                      << 3U) | (QData)((IData)(
                                                               (4U 
                                                                | (3U 
                                                                   == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__state)))))))) 
              << 0xbU));
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[2U] 
        = (0x3ffffU & (((IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__id_q)) 
                                  << 0x23U) | (((QData)((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__current_addr)) 
                                                << 3U) 
                                               | (QData)((IData)(
                                                                 (4U 
                                                                  | (3U 
                                                                     == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__state)))))))) 
                        >> 0x15U) | ((IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__id_q)) 
                                                << 0x23U) 
                                               | (((QData)((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__current_addr)) 
                                                   << 3U) 
                                                  | (QData)((IData)(
                                                                    (4U 
                                                                     | (3U 
                                                                        == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__state))))))) 
                                              >> 0x20U)) 
                                     << 0xbU)));
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
        = (0xf0U | vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U]);
    if ((3U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__state))) {
        vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[0U] 
            = ((3U & vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[0U]) 
               | ((((0U == (0x1fU & ((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter) 
                                     << 5U))) ? 0U : 
                    (vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__store_data_q[
                     (((IData)(0x1fU) + (0xffU & ((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter) 
                                                  << 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter) 
                                            << 5U))))) 
                   | (vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__store_data_q[
                      (7U & (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter))] 
                      >> (0x1fU & ((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter) 
                                   << 5U)))) << 2U));
        vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
            = ((0xfffffffcU & vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U]) 
               | ((((0U == (0x1fU & ((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter) 
                                     << 5U))) ? 0U : 
                    (vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__store_data_q[
                     (((IData)(0x1fU) + (0xffU & ((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter) 
                                                  << 5U))) 
                      >> 5U)] << ((IData)(0x20U) - 
                                  (0x1fU & ((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter) 
                                            << 5U))))) 
                   | (vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__store_data_q[
                      (7U & (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter))] 
                      >> (0x1fU & ((IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__word_counter) 
                                   << 5U)))) >> 0x1eU));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz 
        = ((0xeffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz) 
           | (0xff000000U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                               << 0xaU) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                           << 3U)) 
                             & ((0U != (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                              >> 0xcU))) 
                                << 0x18U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz 
        = ((0xffff000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz) 
           | (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U]));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                  >> 0x17U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                               >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                  >> 0x15U) & (((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                   >> 0x11U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                                >> 0xbU)) 
                                 | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                    >> 0x19U)) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                                  >> 0x18U)) 
                               | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                   >> 0xeU) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[0U]))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__jvt_wr_in_wb 
        = ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
              >> 0xeU) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                          >> 0x15U)) & (((1U == (3U 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                    >> 0xcU))) 
                                         | (2U == (3U 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                      >> 0xcU)))) 
                                        | (3U == (3U 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                                     >> 0xcU))))) 
           & (0x17U == (0xfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U])));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                >> 0x10U)) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                              >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                >> 0xaU)) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                >> 9U)) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                           >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                >> 0xdU)) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                >> 0xfU)) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_valid_1 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
            & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                >> 0x1eU) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                             >> 0x15U))) & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__xif_res_q)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                  >> 8U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                            >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                   >> 0x11U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                >> 0xcU)) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_waddr[0U] 
        = (0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                    >> 0x12U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__instr_valid 
        = (1U & ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                    >> 0x15U) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                    >> 0xdU))) & (~ 
                                                  (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                   >> 0x12U))) 
                 & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                       >> 0x11U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__xif_waiting 
        = (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
             >> 0x15U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                          >> 8U)) & (6U != (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__state)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_en_gated 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                  >> 0xeU) & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                >> 0x15U) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                >> 0xdU))) 
                              & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                    >> 0x12U)))));
    vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o 
        = ((1U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__state)) 
           | (3U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vlsu_inst__DOT__state)));
    vlSymsp->TOP__soc_top_debug__DOT__xif.commit_valid 
        = (1U & ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                       >> 0x13U)) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                     >> 0xeU)) & ((
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                                   >> 7U) 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                                     >> 0xaU))) 
                 & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem 
        = ((3U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                         >> 0x11U))) | (2U == (3U & 
                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                                                >> 0x11U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz 
        = ((0xdffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz) 
           | (0x2000000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                             << 9U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                       << 0xfU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[3U] 
                  >> 0x18U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out 
        = (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
             == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q) 
            | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
                > vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q) 
               ^ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))) 
           & ((0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q) 
              | (~ (IData)((0U != ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                                    << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                                >> 0x11U)))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd 
        = (((0x1fU >= ((0x22U == (0x3fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                           >> 0x18U)))
                        ? 1U : ((0x24U == (0x3fU & 
                                           (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                            >> 0x18U)))
                                 ? 2U : 3U))) ? (((
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                   << 8U) 
                                                  | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                     >> 0x18U)) 
                                                 << 
                                                 ((0x22U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                       >> 0x18U)))
                                                   ? 1U
                                                   : 
                                                  ((0x24U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                        >> 0x18U)))
                                                    ? 2U
                                                    : 3U)))
             : 0U) + ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                       << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                 >> 0x18U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = ((0xffffffc0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U]) 
           | (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                    >> 0x18U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
             << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                       >> 0x18U)) == ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                       << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                 >> 0x18U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr 
        = ((1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                   >> 0x10U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                >> 0xaU))) ? (0xfffU 
                                              & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U)))
            : 0U);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = 0U;
    if ((0x20000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                      >> 0x1cU)))) {
            if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                          >> 0x1bU)))) {
                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                              >> 0x19U)))) {
                    if ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                          >> 0x18U));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                         >> 0x1cU)))) {
        if ((0x8000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                              >> 0x19U)))) {
                    if ((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU])) {
                        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = (- (IData)((1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                >> 0x17U))));
                    }
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al 
        = ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al) 
           | (0xffffU & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                          << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                                      >> 0x11U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl 
        = ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl) 
           | (0xffffU & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                          << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                      >> 0x11U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah 
        = ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah) 
           | (0xffffU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                         >> 1U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh 
        = ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh) 
           | (0xffffU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                         >> 1U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah 
        = ((0xffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah) 
           | (0x10000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                           >> 4U) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U])));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh 
        = ((0xffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh) 
           | (0x10000U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                           >> 5U) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U])));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_en 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                  >> 0x17U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = VL_GTS_IQQ(1,33,33, (((QData)((IData)((1U 
                                                 & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                     >> 0x17U) 
                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                       >> 0x1bU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                              << 8U) 
                                                             | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                                >> 0x18U))))), 
                     (((QData)((IData)((1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                               >> 0x17U) 
                                              & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x1bU))))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                     << 8U) 
                                                    | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                                                       >> 0x18U))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_en 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                  >> 0x13U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp 
        = ((0x3fe3fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_byp) 
           | (0x100U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                          << 6U) & ((0x1f00U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[4U] 
                                                >> 0x13U)) 
                                    | (0x3f00U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[4U] 
                                                  >> 0x12U)))) 
                        & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                           >> 2U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed 
        = ((1U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                         >> 0x11U))) | (3U == (3U & 
                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                                                >> 0x11U))));
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 1U;
    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
        } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
        } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
        }
    }
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__mret_ptr_in_id 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                  >> 0x1eU) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                               >> 0x18U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                  >> 0x1eU) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                               >> 0x19U)));
    vlSymsp->TOP__soc_top_debug__DOT__xif.issue_req[2U] 
        = ((0x1ffU & vlSymsp->TOP__soc_top_debug__DOT__xif.issue_req[2U]) 
           | ((IData)((((QData)((IData)(((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          << 2U) | 
                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                                          >> 0x1eU)))) 
                        << 6U) | (QData)((IData)((0x30U 
                                                  | (0xfU 
                                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[1U] 
                                                        >> 3U))))))) 
              << 9U));
    vlSymsp->TOP__soc_top_debug__DOT__xif.issue_req[3U] 
        = (0x7fffU & (((IData)((((QData)((IData)(((
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                   << 2U) 
                                                  | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                                                     >> 0x1eU)))) 
                                 << 6U) | (QData)((IData)(
                                                          (0x30U 
                                                           | (0xfU 
                                                              & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[1U] 
                                                                 >> 3U))))))) 
                       >> 0x17U) | ((IData)(((((QData)((IData)(
                                                               ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                                 << 2U) 
                                                                | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                                                                   >> 0x1eU)))) 
                                               << 6U) 
                                              | (QData)((IData)(
                                                                (0x30U 
                                                                 | (0xfU 
                                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[1U] 
                                                                       >> 3U)))))) 
                                             >> 0x20U)) 
                                    << 9U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__instr_valid 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                   >> 0x1eU) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                   >> 0xfU))) & (~ 
                                                 (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                                  >> 0x14U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
        = (0x7ffffffffffeffULL & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
    if ((0x33U == (0x7fU & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                             << 2U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                                       >> 0x1eU))))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
            = (0x7000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
            = (0x1d0000000000ULL | (0x7fe07fffffffffULL 
                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
        if (((((((((8U == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                      >> 0x14U)) | 
                           (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                  >> 0xaU)))) | (9U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                      >> 0x14U)) 
                                                  | (7U 
                                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                        >> 0xaU))))) 
                  | (0xaU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                         >> 0x14U)) 
                              | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                       >> 0xaU))))) 
                 | (0xbU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                        >> 0x14U)) 
                             | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                      >> 0xaU))))) 
                | (0xcU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                       >> 0x14U)) | 
                            (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                   >> 0xaU))))) | (0xdU 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                        >> 0x14U)) 
                                                    | (7U 
                                                       & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                          >> 0xaU))))) 
              | (0xeU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                     >> 0x14U)) | (7U 
                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                      >> 0xaU))))) 
             | (0xfU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                    >> 0x14U)) | (7U 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                     >> 0xaU)))))) {
            if ((8U == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                   >> 0x14U)) | (7U 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                                    >> 0xaU))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000ULL | (0x7ffffcffffffffULL 
                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((9U == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          >> 0x14U)) 
                               | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                        >> 0xaU))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x3c0000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
            } else if ((0xaU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x340000000ULL | (0x7ffffc3fffffffULL 
                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xbU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x300000000ULL | (0x7ffffc3fffffffULL 
                                         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xcU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x28000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xdU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x20000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xeU == ((0x3f8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x38000000ULL | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x30000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
        }
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                              >> 0x1dU)))) << 0xcU) 
           | (0xfffU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                        >> 0x12U)));
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__id_stage_i__rf_raddr_o[0U] 
        = (0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                    >> 0xdU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__id_stage_i__rf_raddr_o[1U] 
        = (0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[5U] 
                    >> 0x12U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U] 
        = ((0xffffffdfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[1U]) 
           | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
              << 5U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
        = ((0xfff8ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U]) 
           | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q) 
              << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
        = ((0xffffe3ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U]) 
           | (0xfffffc00U & ((0x1000U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                         << 0xcU)) 
                             | ((0x800U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                           << 0xaU)) 
                                | (0x400U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                             << 8U))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_meta_n = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_meta_n 
        = ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_meta_n)) 
           | ((0x10U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                        >> 0x16U)) | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                       << 3U) | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q) 
                                                  << 2U) 
                                                 | (2U 
                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                                                       >> 0x16U))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x1eU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (1U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[4U] 
                    >> 0x16U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
            | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q)) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q));
    if ((0U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q))) {
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[0U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[1U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[2U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[3U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[4U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[5U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[6U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[7U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    } else {
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[0U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q][0U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[1U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q][1U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[2U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q][2U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[3U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q][3U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[4U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q][4U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[5U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q][5U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[6U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q][6U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[7U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs1_q][7U];
    }
    if ((0U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q))) {
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[0U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[1U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[2U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[3U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[4U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[5U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[6U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[7U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    } else {
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[0U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q][0U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[1U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q][1U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[2U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q][2U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[3U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q][3U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[4U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q][4U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[5U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q][5U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[6U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q][6U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[7U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rs2_q][7U];
    }
    if ((0U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q))) {
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[0U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[0U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[1U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[1U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[2U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[2U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[3U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[3U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[4U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[4U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[5U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[5U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[6U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[6U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[7U] 
            = Vsoc_top_debug__ConstPool__CONST_9e67c271_0[7U];
    } else {
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[0U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q][0U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[1U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q][1U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[2U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q][2U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[3U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q][3U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[4U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q][4U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[5U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q][5U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[6U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q][6U];
        vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[7U] 
            = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_inst__DOT__vrf
            [vlSelf->soc_top_debug__DOT__vpu_inst__DOT__rd_q][7U];
    }
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q;
    if ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
                = (3U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)));
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated 
        = ((0U >= (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__clk 
        = ((IData)(vlSelf->clk_i) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events 
        = ((0xffc0U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events)) 
           | (0x3fU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__hpm_events_raw)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U] 
        = ((0xfffffdffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U]) 
           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
               | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug)) 
              << 9U));
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_q
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_q
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                  >> 0x15U) & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                >> 0xeU) | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid_q)
            ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid_q)
            : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_valid_1));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed 
        = ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb)) 
           & (2U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
            & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q)) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__waddr_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_waddr
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_ready 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0xdU) | (((((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q)) 
                                 | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid)) 
                                & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__xif_waiting))) 
                               & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                     >> 0x12U))) & 
                              (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                  >> 0x11U)))));
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
    __Vtemp32 = (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
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
           | (__Vtemp32 >> 2U));
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
    __Vtemp37 = (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
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
           | (__Vtemp37 >> 4U));
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
    __Vtemp48 = (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
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
           | (__Vtemp48 >> 2U));
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
    __Vtemp53 = (0x3fU & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
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
           | (__Vtemp53 >> 4U));
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 0U;
    if ((0x800U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                                } else if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                                } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                                } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                                } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                        } else if ((8U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                        } else if ((4U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                        } else if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                        } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr)))) {
                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_counter_read = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz 
        = (0x3ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz);
    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                  >> 0xbU)))) {
        if ((0x400U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz 
                                                        = 
                                                        (0x4000000U 
                                                         | vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz);
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz 
        = ((0xf000fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_hz) 
           | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__csr_raddr) 
              << 0xcU));
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
    __Vtableidx2 = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                     << 7U) | ((0x7eU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                         >> 0x17U)) 
                               | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_cmp_result 
        = Vsoc_top_debug__ConstPool__TABLE_9ef0ae6f_0
        [__Vtableidx2];
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                          >> 0x18U));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                          >> 0x18U));
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                          >> 0x18U));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                << 8U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[8U] 
                          >> 0x18U));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg 
        = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
            >> 0x10U) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
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
    if ((0x20U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_id_pipe[3U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = 0x27d4400000100ULL;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x27d4400000100ULL;
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__id_stage_i__rf_raddr_o
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__id_stage_i__rf_raddr_o
        [1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_raddr_id[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__id_stage_i__rf_raddr_o
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_raddr_id[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__id_stage_i__rf_raddr_o
        [1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[0U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val 
        = ((vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
            * vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val) 
           + vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val);
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__mac_result_q[0U] 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val;
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[1U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val 
        = ((vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
            * vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val) 
           + vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val);
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__mac_result_q[1U] 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val;
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[2U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val 
        = ((vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
            * vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val) 
           + vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val);
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__mac_result_q[2U] 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val;
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[3U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val 
        = ((vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
            * vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val) 
           + vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val);
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__mac_result_q[3U] 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val;
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[4U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val 
        = ((vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
            * vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val) 
           + vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val);
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__mac_result_q[4U] 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val;
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[5U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val 
        = ((vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
            * vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val) 
           + vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val);
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__mac_result_q[5U] 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val;
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[6U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val 
        = ((vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
            * vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val) 
           + vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val);
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__mac_result_q[6U] 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val;
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata1[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata2[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vrf_rdata3[7U];
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val 
        = ((vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_val 
            * vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_val) 
           + vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__c_val);
    vlSelf->soc_top_debug__DOT__vpu_inst__DOT__mac_result_q[7U] 
        = vlSelf->soc_top_debug__DOT__vpu_inst__DOT__vmac_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__res_val;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n 
        = (3U & (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                  & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready))
                  ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))
                  : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 0U;
    if ((0x4000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U])) {
        if ((6U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] >> 0x1cU))) {
            if ((0x8000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[3U])) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 1U;
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_rdata 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    if ((0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata1_rdata 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
            [0U];
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_rdata 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
        [0U];
    if ((0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__tdata2_rdata 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
            [0U];
    }
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__wb_valid 
        = ((((~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                 >> 0x1eU)) & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__xif_waiting))) 
            | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                >> 0x1eU) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid))) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__instr_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
        = ((0xffbfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U]) 
           | (0xc00000U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                             >> 8U) & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid)) 
                                       << 0x16U)) & 
                           ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__instr_valid) 
                            << 0x16U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed 
        = (((((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_interruptible) 
                & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing))) 
               & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb))) 
              & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb))) 
             & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q))) 
            & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q))) 
           & (2U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__waddr_i
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state;
    if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_ready) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
            }
        } else {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 2U;
    } else if ((0x400000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 1U;
    }
    if ((0x4000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_ready = 0U;
    if ((2U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_ready) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                      >> 0x16U)))) {
            if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_ready) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    }
    if ((1U & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_ready = 1U;
    } else if ((0x80000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_ready = 0U;
    }
    __Vtableidx3 = ((0x80U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                              >> 0xcU)) | ((0x40U & 
                                            (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                             >> 8U)) 
                                           | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_en) 
                                               << 5U) 
                                              | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out) 
                                                  << 4U) 
                                                 | ((8U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_ready) 
                                                        << 2U) 
                                                       | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state)))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state 
        = Vsoc_top_debug__ConstPool__TABLE_5078abe8_0
        [__Vtableidx3];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_valid 
        = Vsoc_top_debug__ConstPool__TABLE_df53dd33_0
        [__Vtableidx3];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_ready 
        = Vsoc_top_debug__ConstPool__TABLE_4e2d0d20_0
        [__Vtableidx3];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en 
        = Vsoc_top_debug__ConstPool__TABLE_93a67eec_0
        [__Vtableidx3];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt 
        = Vsoc_top_debug__ConstPool__TABLE_9cf96f61_0
        [__Vtableidx3];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en 
        = Vsoc_top_debug__ConstPool__TABLE_f1f802d5_0
        [__Vtableidx3];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en 
        = Vsoc_top_debug__ConstPool__TABLE_3491683c_0
        [__Vtableidx3];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en 
        = Vsoc_top_debug__ConstPool__TABLE_1e6388d2_0
        [__Vtableidx3];
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex 
        = (((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
               >> 0x1fU) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xbU]) 
             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                >> 0xaU)) & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q))) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_cmp_result));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
        = ((0x20000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U])
            ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                ? (1U | ((~ ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                              << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                          >> 0x11U))) 
                         << 1U)) : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                                     << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                                 >> 0x11U)))
            : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                            >> 0x11U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = 0U;
    if ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__lsu_en_gated) 
          & (~ (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o))) 
         & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U != (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                          >> 0xbU)))) {
            if ((1U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xbU)))) {
                if ((0x2000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = 1U;
                }
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_split_ex = 0U;
    if ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__lsu_en_gated) 
          & (~ (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o))) 
         & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                          >> 0xbU)))) {
            if ((0U != (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xdU)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_split_ex = 1U;
            }
        } else if ((1U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                 >> 0xbU)))) {
            if ((3U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xdU)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_split_ex = 1U;
            }
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__lsu_en_gated) 
            | (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o)) 
           & (2U > (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q)));
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
    if (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
            = ((0x1ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
               | (0xfffe0000U & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                 << 3U)));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
            = (0x1ffffU & ((0x1fff8U & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[2U] 
                                        << 3U)) | (
                                                   vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                   >> 0x1dU)));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
            = ((0x3fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
               | ((IData)((((QData)((IData)((1U & (
                                                   vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                   >> 0xbU)))) 
                            << 0x24U) | (((QData)((IData)(
                                                          (0xfU 
                                                           & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                              >> 4U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                             << 0x1eU) 
                                                            | (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[0U] 
                                                               >> 2U))))))) 
                  << 6U));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
            = ((0xfffff800U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
               | (((IData)((((QData)((IData)((1U & 
                                              (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                               >> 0xbU)))) 
                             << 0x24U) | (((QData)((IData)(
                                                           (0xfU 
                                                            & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                               >> 4U)))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                              << 0x1eU) 
                                                             | (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[0U] 
                                                                >> 2U))))))) 
                   >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                               >> 0xbU)))) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              (0xfU 
                                                               & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                                  >> 4U)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                                                 << 0x1eU) 
                                                                | (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[0U] 
                                                                   >> 2U)))))) 
                                         >> 0x20U)) 
                                << 6U)));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
            = (0xfffe07ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U]);
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
            = (2U | ((0xffffffc0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
                     | (0xcU & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                                >> 0xaU))));
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
            = ((0x1ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
               | (((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                    ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[2U] 
                        << 0x13U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                     >> 0xdU)) : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__split_q)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + 
                                                   (0xfffffffcU 
                                                    & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[2U] 
                                                        << 0x13U) 
                                                       | (0x7fffcU 
                                                          & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                             >> 0xdU)))))
                                                   : 
                                                  ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[2U] 
                                                    << 0x13U) 
                                                   | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                      >> 0xdU)))) 
                  << 0x11U));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
            = (((0x400U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                 ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[2U] 
                     << 0x13U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                  >> 0xdU)) : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__split_q)
                                                ? ((IData)(4U) 
                                                   + 
                                                   (0xfffffffcU 
                                                    & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[2U] 
                                                        << 0x13U) 
                                                       | (0x7fffcU 
                                                          & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                             >> 0xdU)))))
                                                : (
                                                   (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[2U] 
                                                    << 0x13U) 
                                                   | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                      >> 0xdU)))) 
               >> 0xfU);
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
            = ((0x3fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
               | ((IData)((((QData)((IData)((0x3fU 
                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                >> 5U)))) 
                            << 0x25U) | (((QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                              >> 4U)))) 
                                          << 0x24U) 
                                         | (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((0x4000U 
                                                                & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                ? 
                                                               ((0x2000U 
                                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                 ? 
                                                                ((0xff000000U 
                                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                     << 0x15U)) 
                                                                 | (0xffffffU 
                                                                    & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                        << 0x15U) 
                                                                       | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          >> 0xbU))))
                                                                 : 
                                                                ((0xffff0000U 
                                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                     << 0xdU)) 
                                                                 | (0xffffU 
                                                                    & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                        << 0xdU) 
                                                                       | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          >> 0x13U)))))
                                                                : 
                                                               ((0x2000U 
                                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                 ? 
                                                                ((0xffffff00U 
                                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                     << 5U)) 
                                                                 | (0xffU 
                                                                    & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                        << 5U) 
                                                                       | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          >> 0x1bU))))
                                                                 : 
                                                                ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                  << 0x1dU) 
                                                                 | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                    >> 3U)))))))))) 
                  << 6U));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
            = ((0xfffe0000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
               | (((IData)((((QData)((IData)((0x3fU 
                                              & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                 >> 5U)))) 
                             << 0x25U) | (((QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                               >> 4U)))) 
                                           << 0x24U) 
                                          | (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be)) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((0x4000U 
                                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                 ? 
                                                                ((0x2000U 
                                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                  ? 
                                                                 ((0xff000000U 
                                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                      << 0x15U)) 
                                                                  | (0xffffffU 
                                                                     & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                         << 0x15U) 
                                                                        | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                           >> 0xbU))))
                                                                  : 
                                                                 ((0xffff0000U 
                                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                      << 0xdU)) 
                                                                  | (0xffffU 
                                                                     & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                         << 0xdU) 
                                                                        | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                           >> 0x13U)))))
                                                                 : 
                                                                ((0x2000U 
                                                                  & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                  ? 
                                                                 ((0xffffff00U 
                                                                   & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                      << 5U)) 
                                                                  | (0xffU 
                                                                     & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                         << 5U) 
                                                                        | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                           >> 0x1bU))))
                                                                  : 
                                                                 ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                     >> 3U)))))))))) 
                   >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                           (0x3fU 
                                                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                               >> 5U)))) 
                                           << 0x25U) 
                                          | (((QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                  >> 4U)))) 
                                              << 0x24U) 
                                             | (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__be)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0x4000U 
                                                                    & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                    ? 
                                                                   ((0x2000U 
                                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                     ? 
                                                                    ((0xff000000U 
                                                                      & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                         << 0x15U)) 
                                                                     | (0xffffffU 
                                                                        & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                            << 0x15U) 
                                                                           | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              >> 0xbU))))
                                                                     : 
                                                                    ((0xffff0000U 
                                                                      & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                         << 0xdU)) 
                                                                     | (0xffffU 
                                                                        & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                            << 0xdU) 
                                                                           | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              >> 0x13U)))))
                                                                    : 
                                                                   ((0x2000U 
                                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                                                                     ? 
                                                                    ((0xffffff00U 
                                                                      & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                         << 5U)) 
                                                                     | (0xffU 
                                                                        & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                            << 5U) 
                                                                           | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                              >> 0x1bU))))
                                                                     : 
                                                                    ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                      << 0x1dU) 
                                                                     | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                        >> 3U))))))))) 
                                         >> 0x20U)) 
                                << 6U)));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
            = (2U | ((0xfffffff0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
                     | ((0xcU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U] 
                                 << 1U)) | (1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[0U]))));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
            = (0xffffffcfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U]);
    }
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
        = ((1U & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                          >> 8U))) ? ((1U & (IData)(
                                                    (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 8U)))
                                       ? 0x27d4400000100ULL
                                       : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__controller_i__rf_raddr_id_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_raddr_id
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__controller_i__rf_raddr_id_i[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_raddr_id
        [1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__raddr_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_raddr_id
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__raddr_i[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_raddr_id
        [1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb 
        = (((((5U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                      [0U] >> 0x1cU)) & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 9U) 
                                          & (3U == 
                                             (3U & 
                                              (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                               >> 0x12U)))) 
                                         | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                             [0U] >> 6U) 
                                            & (0U == 
                                               (3U 
                                                & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                                   >> 0x12U)))))) 
             & (0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
                [0U])) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                             >> 0x13U))) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__wb_valid));
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d = 0U;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = ((((0U != ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                          << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                      >> 0x11U))) | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
                & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed)) 
               & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                   >> 0x10U) ^ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = 0U;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[6U] 
                            >> 0x11U));
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d 
            = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                ? ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                    << 1U) | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q;
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__xif_csr_error_ex 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__instr_valid) 
            & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                >> 7U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0U] 
                          >> 3U))) & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                       >> 0x10U) & 
                                      (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__csr_illegal))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xfffffff8U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((4U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                     >> 0x1bU)) | ((2U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                          >> 0x1dU)) 
                                   | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                      >> 0x1fU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xffffffc7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x20U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                        >> 0x15U)) | ((0x10U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               >> 0x19U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xfffffe3fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x100U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                         >> 0xfU)) | ((0x80U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                  >> 0x13U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xfffff1ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x800U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                         >> 9U)) | ((0x400U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 >> 0xdU)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xffff8fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x4000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                          >> 3U)) | ((0x2000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                   >> 7U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xfffc7fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x20000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                           << 3U)) | ((0x10000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                          >> 1U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xffe3ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x100000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                         << 5U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xff1fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x800000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               << 0xbU)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xf8ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x4000000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 << 0x11U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0xc7ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((0x20000000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                  << 0x17U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((0x3fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev) 
           | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
               << 0x1fU) | (0x40000000U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                           << 0x1dU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__last_op_ex 
        = (1U & ((0x2000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U])
                  ? ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_split_ex)) 
                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0U] 
                        >> 1U)) : (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0U] 
                                   >> 1U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__misaligned_access 
        = ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__split_q) 
             | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_split_ex)) 
            | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword)) 
           | ((IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o) 
              & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                 >> 3U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_valid 
        = ((((((((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xbU] 
                    | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                       >> 0x10U)) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                                     >> 2U)) | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                                                 >> 0x17U) 
                                                & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_valid))) 
                 | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                     >> 0x13U) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_valid))) 
                | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[5U] 
                    >> 0xdU) & ((((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q))
                                   ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid) 
                                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                                   : ((1U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q)) 
                                      | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid) 
                                         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans_ready)))) 
                                 & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__lsu_en_gated)) 
                                & (~ (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o))))) 
               | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                  >> 7U)) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                             >> 0xeU)) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                          >> 0xdU)) 
            | (((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[4U] 
                   >> 0x19U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                >> 0x12U)) | (0U != 
                                              (3U & 
                                               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                                >> 0x10U)))) 
                | (0U != ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[4U] 
                           << 7U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[3U] 
                                     >> 0x19U)))) & 
               (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                >> 0xaU))) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__instr_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__done_0 
        = (((~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__lsu_en_gated) 
                | (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o))) 
            | ((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q))
                ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid) 
                   & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                : ((1U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q)) 
                   | ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid) 
                      & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans_ready))))) 
           & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_ready) 
              | ((IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o) 
                 & ((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q)) 
                    | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid) 
                  & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                  ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid)
                      ? (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid)
                      ? ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 9U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if ((((0xf0000000U <= ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                            << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                        >> 0x11U))) 
          & (0xf0003fffU >= ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                              << 0xfU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x11U)))) 
         & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex 
        = ((((((2U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                       [0U] >> 0x1cU)) | (6U == (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                 [0U] 
                                                 >> 0x1cU))) 
              & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                   [0U] >> 6U) & (3U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                               >> 8U)))) 
                 | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                     [0U] >> 3U) & (0U == (3U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                                                 >> 8U)))))) 
             & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__lsu_en_gated) 
                & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                               >> 0xaU))) | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                              [0U] 
                                              >> 1U) 
                                             & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                >> 0xaU))))) 
            & ((0U == (0xfU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                               [0U] >> 7U))) ? (((0x3fffffffU 
                                                  & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                      << 0xdU) 
                                                     | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                        >> 0x13U))) 
                                                 == 
                                                 (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                                  [0U] 
                                                  >> 2U)) 
                                                & (0U 
                                                   != 
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
                                                   [0U]))
                : ((2U == (0xfU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                   [0U] >> 7U))) ? 
                   (((0xfffffffcU & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                      << 0xfU) | (0x7ffcU 
                                                  & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                     >> 0x11U)))) 
                     | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb)) 
                    >= vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                    [0U]) : (((0xfffffffcU & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                               << 0xfU) 
                                              | (0x7ffcU 
                                                 & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                    >> 0x11U)))) 
                              | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb)) 
                             < vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                             [0U])))) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[4U] 
                                            >> 0x13U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__controller_i__rf_raddr_id_i
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__controller_i__rf_raddr_id_i
        [1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__raddr_i
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__raddr_i
        [1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
            ? (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) 
                & (~ ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
                      & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[7U] 
                          >> 0x10U) ^ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))))
                ? (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   + vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                : (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   - vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
            : vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q);
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
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_en)
            ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_clz_data_rev
            : ((0x28U == (0x3fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                   >> 0x18U))) ? ((
                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                   << 8U) 
                                                  | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                     >> 0x18U))
                : VL_STREAML_FAST_III(32,32,32,((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[0xaU] 
                                                 << 8U) 
                                                | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[9U] 
                                                   >> 0x18U)), 0)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__done_0) 
           & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__lsu_en_gated) 
              | (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o)));
    vlSymsp->TOP__soc_top_debug__DOT__xif.mem_ready 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__done_0) 
           & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_split_ex)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_ready 
        = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                  >> 0xeU) | ((((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_ready) 
                                  & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__mul_ready)) 
                                 & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__div_ready)) 
                                & (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__done_0) 
                                    & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_split_ex))) 
                                   & (~ (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o)))) 
                               & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_ready)) 
                              & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
                                    >> 0x13U)))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[2U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
        = ((0xffffffcfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U]) 
           | (0xfffffff0U & ((0x20U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                       << 4U)) | (0x10U 
                                                  & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                                       << 2U) 
                                                      & ((~ 
                                                          (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                           >> 0x10U)) 
                                                         << 4U)) 
                                                     & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                        >> 6U))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U])) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    if ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__misaligned_access) 
          | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__split_q) 
              | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_split_ex)) 
             | ((IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o) 
                & (vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_req_o[1U] 
                   >> 2U)))) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                   >> 3U)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    if ((1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__id_ex_pipe[1U] 
                >> 0xbU) & (~ (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                               >> 3U))))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q;
    if ((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex) 
             & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n 
                = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex;
        }
    } else if ((1U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((2U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n = 0U;
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q;
    if ((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex) 
             & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid))) {
            if ((1U & (~ (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o)))) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n 
                    = ((1U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__next_cnt))
                        ? 2U : 1U);
            }
        }
    } else if ((1U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__next_cnt))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = 2U;
        }
    } else if ((2U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = 0U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = 0U;
    if ((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex) 
             & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = 1U;
        }
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 0U;
    if ((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex) 
             & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        }
    } else if ((1U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
    } else if ((2U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match 
        = (((0x1fU & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                      >> 0x12U)) == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
            [0U]) & (0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                     [0U]));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i
        [0U]];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i
        [1U]];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U] 
        = ((0xffffefffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ctrl_fsm[0U]) 
           | (0x1000U & (((IData)(vlSymsp->TOP__soc_top_debug__DOT__xif.commit) 
                          | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q)) 
                         << 0xcU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0xffe007ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0xfffff800U & ((((4U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 2U : 3U) << 0x10U) 
                             | (((1U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0U : 1U) << 0xbU))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0x801fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (0xffe00000U & ((((0x40U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 6U : 7U) << 0x1aU) 
                             | (((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 4U : 5U) << 0x15U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((0x7fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U]) 
           | (((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                ? 8U : 9U) << 0x1fU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xfffffe00U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0x7fffffffU & ((0x7ffffff0U & (((0x400U 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                               ? 0xaU
                                               : 0xbU) 
                                             << 4U)) 
                             | (((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 8U : 9U) >> 1U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xfff801ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0xfffffe00U & ((((0x4000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 0xeU : 0xfU) << 0xeU) 
                             | (((0x1000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0xcU : 0xdU) << 9U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0xe007ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (0xfff80000U & ((((0x40000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 0x12U : 0x13U) << 0x18U) 
                             | (((0x10000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0x10U : 0x11U) 
                                << 0x13U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((0x1fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U]) 
           | (((0x100000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                ? 0x14U : 0x15U) << 0x1dU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xffffff80U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0x1fffffffU & ((0x1ffffffcU & (((0x400000U 
                                               & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                               ? 0x16U
                                               : 0x17U) 
                                             << 2U)) 
                             | (((0x100000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0x14U : 0x15U) 
                                >> 3U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xfffe007fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0xffffff80U & ((((0x4000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 0x1aU : 0x1bU) << 0xcU) 
                             | (((0x1000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0x18U : 0x19U) 
                                << 7U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf801ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | (0xfffe0000U & ((((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                ? 0x1eU : 0x1fU) << 0x16U) 
                             | (((0x10000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                  ? 0x1cU : 0x1dU) 
                                << 0x11U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfffe7fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xcU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x10U) | ((IData)((0U != (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0xfU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfff9ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x12U) | ((IData)((0U != (0x30U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x11U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xffe7ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x14U) | ((IData)((0U != (0x300U 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x13U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xff9fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x16U) | ((IData)((0U != (0x3000U 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x15U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xfe7fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x18U) | ((IData)((0U != (0x30000U 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x17U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xf9ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc00000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x1aU) | ((IData)((0U != (0x300000U 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x19U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0xe7ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x1cU) | ((IData)((0U != (0x3000000U 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x1bU)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0x9fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | (((IData)((0U != (0xc0000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
               << 0x1eU) | ((IData)((0U != (0x30000000U 
                                            & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                            << 0x1dU)));
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U];
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U];
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U];
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_ready 
            = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 4U) & (IData)(vlSelf->soc_top_debug__DOT__data_gnt)));
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U];
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U];
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[2U];
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_ready 
            = (1U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 4U) | (IData)(vlSelf->soc_top_debug__DOT__data_gnt)));
    }
    vlSymsp->TOP__soc_top_debug__DOT__xif.mem_resp 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err) 
            << 7U) | ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err)
                         ? ((0x10U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans[1U])
                             ? 7U : 5U) : 0U) << 1U) 
                      | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_trans_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid) 
           & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__register_file_wrapper_i__rdata_o[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__register_file_wrapper_i__rdata_o[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o
        [1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_trans_ready 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (2U > (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    __Vtableidx4 = ((0x80U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                              >> 3U)) | ((0x40U & (
                                                   (~ (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o)) 
                                                   << 6U)) 
                                         | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_trans_valid) 
                                             << 5U) 
                                            | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err) 
                                                << 4U) 
                                               | (((1U 
                                                    == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__next_cnt)) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n 
        = Vsoc_top_debug__ConstPool__TABLE_410f47a9_0
        [__Vtableidx4];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status 
        = Vsoc_top_debug__ConstPool__TABLE_6d3c1c50_0
        [__Vtableidx4];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vsoc_top_debug__ConstPool__TABLE_1707cc16_0
        [__Vtableidx4];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vsoc_top_debug__ConstPool__TABLE_ef83ff6b_0
        [__Vtableidx4];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vsoc_top_debug__ConstPool__TABLE_39edf477_0
        [__Vtableidx4];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vsoc_top_debug__ConstPool__TABLE_52407f0f_0
        [__Vtableidx4];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_rdata_id[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__register_file_wrapper_i__rdata_o
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_rdata_id[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellout__register_file_wrapper_i__rdata_o
        [1U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__alcheck_trans_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_trans_valid) 
           & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__id_stage_i__rf_rdata_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_rdata_id
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__id_stage_i__rf_rdata_i[1U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_rdata_id
        [1U];
    __Vtableidx5 = ((0x80U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                              >> 3U)) | ((0x40U & (
                                                   (~ (IData)(vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_mem_valid_o)) 
                                                   << 6U)) 
                                         | (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__alcheck_trans_valid) 
                                             << 5U) 
                                            | ((0xffff0U 
                                                & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__misaligned_access) 
                                                      << 4U))) 
                                               | (((1U 
                                                    == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__next_cnt)) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_q))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_n 
        = Vsoc_top_debug__ConstPool__TABLE_ef39bc8c_0
        [__Vtableidx5];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core 
        = Vsoc_top_debug__ConstPool__TABLE_1707cc16_0
        [__Vtableidx5];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus 
        = Vsoc_top_debug__ConstPool__TABLE_ef83ff6b_0
        [__Vtableidx5];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid 
        = Vsoc_top_debug__ConstPool__TABLE_39edf477_0
        [__Vtableidx5];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready 
        = Vsoc_top_debug__ConstPool__TABLE_52407f0f_0
        [__Vtableidx5];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status 
        = Vsoc_top_debug__ConstPool__TABLE_387dc6c4_0
        [__Vtableidx5];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp_valid 
        = ((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_resp_valid) 
             | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid)) 
            | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid)) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_trans_ready 
        = (((((((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core))) 
               | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready)) 
              & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core))) 
             | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready)) 
            & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core))) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_trans_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__alcheck_trans_valid) 
           & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[0U] 
        = (IData)((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[1U] 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_resp) 
            << 4U) | (IData)(((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status)) 
                              >> 0x20U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[2U] 
        = (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_resp) 
            >> 0x1cU) | ((IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_resp 
                                  >> 0x20U)) << 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q;
    if (((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_trans_ready) 
         & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_trans_valid))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt)));
    }
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_resp_valid) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt) 
                     - (IData)(1U)));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_busy 
        = ((((0U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
             | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_trans_valid)) 
            | (0U < (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__cnt_q))) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__trans_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__filter_trans_valid) 
           & (2U > (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U] 
        = ((0xfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U]) 
           | ((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                          vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[2U])) 
                                          << 0x1cU) 
                                         | ((QData)((IData)(
                                                            vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[1U])) 
                                            >> 4U)))) 
              << 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U] 
        = (0x7fU & (((IData)((0x7ffffffffULL & (((QData)((IData)(
                                                                 vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[2U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[1U])) 
                                                   >> 4U)))) 
                     >> 0x1cU) | ((IData)(((0x7ffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[1U])) 
                                                  >> 4U))) 
                                           >> 0x20U)) 
                                  << 4U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[0U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                    << 0x22U) | (QData)((IData)((3U 
                                                 & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[0U])))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U] 
        = ((0xfffffff0U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U]) 
           | (IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                        << 0x22U) | (QData)((IData)(
                                                    (3U 
                                                     & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o[0U])))) 
                      >> 0x20U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
            if (vlSelf->soc_top_debug__DOT__data_gnt) {
                vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state 
                    = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                        >> 4U) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_valid));
            }
        }
    } else if ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                  >> 4U) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_valid)) 
                & (~ (IData)(vlSelf->soc_top_debug__DOT__data_gnt)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = 0U;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
            if (vlSelf->soc_top_debug__DOT__data_gnt) {
                if (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                      >> 4U) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_valid))) {
                    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = 1U;
                }
            }
        }
    } else if ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                  >> 4U) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_valid)) 
                & (~ (IData)(vlSelf->soc_top_debug__DOT__data_gnt)))) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = 1U;
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__bus_trans_valid 
        = ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
           | (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[0U] 
        = (IData)((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match)) 
                    << 2U) | (QData)((IData)((3U & 
                                              vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[0U])))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U])) 
                                           >> 2U)))) 
            << 2U) | (IData)(((((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match)) 
                                << 2U) | (QData)((IData)(
                                                         (3U 
                                                          & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[0U])))) 
                              >> 0x20U)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
        = (((IData)((0x1fffffffffULL & (((QData)((IData)(
                                                         vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U])) 
                                         << 0x1eU) 
                                        | ((QData)((IData)(
                                                           vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U])) 
                                           >> 2U)))) 
            >> 0x1eU) | ((IData)(((0x1fffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[2U])) 
                                       << 0x1eU) | 
                                      ((QData)((IData)(
                                                       vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o[1U])) 
                                       >> 2U))) >> 0x20U)) 
                         << 2U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((3U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | (0x3cU & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                           << 2U)));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((0x30U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | ((8U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                         >> 1U)) | (4U & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                          >> 8U))));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q;
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt)));
    }
    if (vlSelf->soc_top_debug__DOT__data_rvalid) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt) 
                     - (IData)(1U)));
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__lsu_err_wb 
        = ((2U & (((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__xif_res_q)) 
                   << 1U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                             >> 4U))) | (1U & ((~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__xif_res_q)) 
                                               & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                  >> 6U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_aligned 
        = ((0x3fU >= ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_offset_q) 
                      << 3U)) ? (((((2U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                    & (0U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                   | ((1U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                      & (3U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_offset_q))))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                         << 0x19U) 
                                                        | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                           >> 7U)))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_q)))
                                   : (((QData)((IData)(
                                                       ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                         << 0x19U) 
                                                        | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                           >> 7U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                                     << 0x19U) 
                                                                    | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                                       >> 7U)))))) 
                                 >> ((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_offset_q) 
                                     << 3U)) : 0ULL);
    if (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_valid_q) {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_wpt_match 
            = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_wpt_match_q;
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_mpu_status 
            = (3U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_mpu_status_q));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_align_status 
            = (3U & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_align_status_q));
    } else {
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_wpt_match 
            = ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                << 0x1eU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[0U] 
                             >> 2U));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_mpu_status 
            = (3U & ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                      << 0x1eU) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                   >> 2U)));
        vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_align_status 
            = (3U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[0U]);
    }
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_ext 
        = ((0U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__lsu_size_q))
            ? (((- (IData)(((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                            & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_aligned 
                                       >> 7U))))) << 8U) 
               | (0xffU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_aligned)))
            : ((1U == (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__lsu_size_q))
                ? (((- (IData)(((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                                & (IData)((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_aligned 
                                           >> 0xfU))))) 
                    << 0x10U) | (0xffffU & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_aligned)))
                : (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_aligned)));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb 
        = (((0U != ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                     << 2U) | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[3U] 
                               >> 0x1eU))) | (0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_wpt_match)) 
           & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
              >> 0x15U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_exception 
        = ((0U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_mpu_status)) 
           | (0U != (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_align_status)));
    vlSymsp->TOP__soc_top_debug__DOT__xif.mem_result 
        = (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__xif_id_q)) 
            << 0x22U) | (((QData)((IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_ext)) 
                          << 2U) | (QData)((IData)(
                                                   (2U 
                                                    & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                       >> 4U))))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_wdata_wb 
        = ((0x40000000U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U])
            ? vlSelf->soc_top_debug__DOT__cpu_inst__DOT__load_store_unit_i__DOT__rdata_ext
            : ((0x100U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U])
                ? (IData)((vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_result_o 
                           >> 0x18U)) : ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                                          << 0xeU) 
                                         | (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[6U] 
                                            >> 0x12U))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__abort_op_wb 
        = (1U & (((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[0U] 
                   >> 1U) | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                              >> 0x1eU) & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_exception))) 
                 | ((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[4U] 
                     >> 0x1eU) & (0U != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_wpt_match))));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_we[0U] 
        = ((((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[7U] 
                >> 0x17U) & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_exception))) 
              & (~ (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__xif_waiting))) 
             & (~ ((((vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                      >> 0x15U) & (vlSelf->soc_top_debug__DOT__cpu_inst__DOT__ex_wb_pipe[1U] 
                                   >> 8U)) & (6U == (IData)(vlSelf->soc_top_debug__DOT__vpu_inst__DOT__state))) 
                   & (IData)((vlSelf->soc_top_debug__DOT____Vcellout__vpu_inst__xif_result_o 
                              >> 8U))))) & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__lsu_wpt_match)))) 
           & (IData)(vlSelf->soc_top_debug__DOT__cpu_inst__DOT__wb_stage_i__DOT__instr_valid));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_wdata[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_wdata_wb;
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__we_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_we
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__wdata_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT__rf_wdata
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__we_i
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i[0U] 
        = vlSelf->soc_top_debug__DOT__cpu_inst__DOT____Vcellinp__register_file_wrapper_i__wdata_i
        [0U];
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                      [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                     [0U]));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 1U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 2U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 3U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 4U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 5U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 6U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 7U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 8U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 9U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xaU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xbU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xcU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xdU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xeU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0xfU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x10U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x11U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x12U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x13U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x14U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x15U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x16U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x17U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x18U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x19U));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1aU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1bU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1cU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1dU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1eU));
    vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i
                       [0U]) & vlSelf->soc_top_debug__DOT__cpu_inst__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i
                      [0U]) << 0x1fU));
}
