// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vboom_core.h for the primary calling header

#ifndef VERILATED_VBOOM_CORE_DECODE_H_
#define VERILATED_VBOOM_CORE_DECODE_H_  // guard

#include "verilated.h"


class Vboom_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vboom_core_decode final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ status_prv;
    CData/*3:0*/ __PVT__instr_type;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_25;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_70;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_101;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_103;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_156;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_157;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_158;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_159;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_160;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_162;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_163;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_164;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_165;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_170;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_171;
    SData/*14:0*/ __VdfgRegularize_h6e95ff9d_0_39;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_55;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_161;
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_168;
    IData/*31:0*/ inst;
    VlWide<10>/*312:0*/ __VdfgRegularize_h6e95ff9d_0_13;
    VlWide<10>/*312:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    IData/*29:0*/ __VdfgRegularize_h6e95ff9d_0_32;
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_33;
    VlWide<12>/*376:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    VlWide<12>/*376:0*/ uop;
    QData/*35:0*/ __VdfgRegularize_h6e95ff9d_0_28;

    // INTERNAL VARIABLES
    Vboom_core__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vboom_core_decode();
    ~Vboom_core_decode();
    void ctor(Vboom_core__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vboom_core_decode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
