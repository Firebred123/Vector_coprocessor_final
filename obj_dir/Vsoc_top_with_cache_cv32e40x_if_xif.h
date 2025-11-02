// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top_with_cache.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_WITH_CACHE_CV32E40X_IF_XIF_H_
#define VERILATED_VSOC_TOP_WITH_CACHE_CV32E40X_IF_XIF_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_top_with_cache__Syms;
class Vsoc_top_with_cache_VerilatedVcd;


//----------

VL_MODULE(Vsoc_top_with_cache_cv32e40x_if_xif) {
  public:

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__compressed_ready;
    CData/*0:0*/ issue_valid;
    CData/*0:0*/ commit_valid;
    CData/*4:0*/ commit;
    CData/*0:0*/ mem_valid;
    CData/*7:0*/ mem_resp;
    QData/*32:0*/ __PVT__compressed_resp;
    VlWide<4>/*110:0*/ issue_req;
    VlWide<3>/*81:0*/ mem_req;
    QData/*37:0*/ mem_result;

    // INTERNAL VARIABLES
    Vsoc_top_with_cache__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top_with_cache_cv32e40x_if_xif);  ///< Copying not allowed
  public:
    Vsoc_top_with_cache_cv32e40x_if_xif(const char* name);
    ~Vsoc_top_with_cache_cv32e40x_if_xif();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top_with_cache__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
