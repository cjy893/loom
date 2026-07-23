// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vboom_core.h for the primary calling header

#ifndef VERILATED_VBOOM_CORE_ISSUE_SLOT_H_
#define VERILATED_VBOOM_CORE_ISSUE_SLOT_H_  // guard

#include "verilated.h"


class Vboom_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vboom_core_issue_slot final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ clk;
    CData/*0:0*/ rst_n;
    CData/*0:0*/ valid;
    CData/*0:0*/ request;
    CData/*0:0*/ in_valid;
    CData/*0:0*/ in_ready;
    CData/*5:0*/ wakeup_valid;
    QData/*35:0*/ wakeup_pdst;
    CData/*0:0*/ grant;
    CData/*0:0*/ kill;
    CData/*0:0*/ clear;
    CData/*0:0*/ __PVT__slot_valid;
    CData/*0:0*/ __PVT__killed;
    VlWide<12>/*376:0*/ iss_uop;
    VlWide<12>/*376:0*/ in_uop;
    VlWide<15>/*457:0*/ brupdate;
    VlWide<12>/*376:0*/ __PVT__slot_uop;

    // INTERNAL VARIABLES
    Vboom_core__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vboom_core_issue_slot();
    ~Vboom_core_issue_slot();
    void ctor(Vboom_core__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vboom_core_issue_slot);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
