// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top_cv32e40x_if_c_obi.h"
#include "Vsoc_top__Syms.h"

//==========


void Vsoc_top_cv32e40x_if_c_obi___ctor_var_reset(Vsoc_top_cv32e40x_if_c_obi* vlSelf);

Vsoc_top_cv32e40x_if_c_obi::Vsoc_top_cv32e40x_if_c_obi(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top_cv32e40x_if_c_obi___ctor_var_reset(this);
}

void Vsoc_top_cv32e40x_if_c_obi::__Vconfigure(Vsoc_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top_cv32e40x_if_c_obi::~Vsoc_top_cv32e40x_if_c_obi() {
}

void Vsoc_top_cv32e40x_if_c_obi___ctor_var_reset(Vsoc_top_cv32e40x_if_c_obi* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vsoc_top_cv32e40x_if_c_obi___ctor_var_reset\n"); );
    // Body
    vlSelf->s_req = VL_RAND_RESET_I(1);
    vlSelf->req_payload = VL_RAND_RESET_Q(38);
}
