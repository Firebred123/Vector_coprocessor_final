// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top_debug.h for the primary calling header

#include "Vsoc_top_debug___024unit.h"
#include "Vsoc_top_debug__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsoc_top_debug___024unit___ctor_var_reset(Vsoc_top_debug___024unit* vlSelf);

Vsoc_top_debug___024unit::Vsoc_top_debug___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top_debug___024unit___ctor_var_reset(this);
}

void Vsoc_top_debug___024unit::__Vconfigure(Vsoc_top_debug__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top_debug___024unit::~Vsoc_top_debug___024unit() {
}

void Vsoc_top_debug___024unit___ctor_var_reset(Vsoc_top_debug___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_debug__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_debug___024unit___ctor_var_reset\n"); );
}
