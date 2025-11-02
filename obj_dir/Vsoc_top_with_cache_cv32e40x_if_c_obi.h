// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top_with_cache.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_WITH_CACHE_CV32E40X_IF_C_OBI_H_
#define VERILATED_VSOC_TOP_WITH_CACHE_CV32E40X_IF_C_OBI_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_top_with_cache__Syms;
class Vsoc_top_with_cache_VerilatedVcd;


//----------

VL_MODULE(Vsoc_top_with_cache_cv32e40x_if_c_obi) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ s_req;
    QData/*37:0*/ req_payload;

    // INTERNAL VARIABLES
    Vsoc_top_with_cache__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top_with_cache_cv32e40x_if_c_obi);  ///< Copying not allowed
  public:
    Vsoc_top_with_cache_cv32e40x_if_c_obi(const char* name);
    ~Vsoc_top_with_cache_cv32e40x_if_c_obi();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top_with_cache__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
