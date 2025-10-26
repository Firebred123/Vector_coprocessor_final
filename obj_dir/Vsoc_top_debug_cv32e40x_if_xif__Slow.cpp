// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top_debug.h for the primary calling header

#include "Vsoc_top_debug_cv32e40x_if_xif.h"
#include "Vsoc_top_debug__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsoc_top_debug_cv32e40x_if_xif___ctor_var_reset(Vsoc_top_debug_cv32e40x_if_xif* vlSelf);

Vsoc_top_debug_cv32e40x_if_xif::Vsoc_top_debug_cv32e40x_if_xif(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top_debug_cv32e40x_if_xif___ctor_var_reset(this);
}

void Vsoc_top_debug_cv32e40x_if_xif::__Vconfigure(Vsoc_top_debug__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top_debug_cv32e40x_if_xif::~Vsoc_top_debug_cv32e40x_if_xif() {
}

void Vsoc_top_debug_cv32e40x_if_xif___ctor_var_reset(Vsoc_top_debug_cv32e40x_if_xif* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_debug__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsoc_top_debug_cv32e40x_if_xif___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__compressed_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__compressed_resp = VL_RAND_RESET_Q(33);
    vlSelf->issue_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(111, vlSelf->issue_req);
    vlSelf->commit_valid = VL_RAND_RESET_I(1);
    vlSelf->commit = VL_RAND_RESET_I(5);
    vlSelf->mem_ready = VL_RAND_RESET_I(1);
    vlSelf->mem_resp = VL_RAND_RESET_I(8);
    vlSelf->mem_result_valid = VL_RAND_RESET_I(1);
    vlSelf->mem_result = VL_RAND_RESET_Q(38);
}
