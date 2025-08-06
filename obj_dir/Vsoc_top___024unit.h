// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP___024UNIT_H_
#define VERILATED_VSOC_TOP___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;


//----------

VL_MODULE(Vsoc_top___024unit) {
  public:

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top___024unit);  ///< Copying not allowed
  public:
    Vsoc_top___024unit(const char* name);
    ~Vsoc_top___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
