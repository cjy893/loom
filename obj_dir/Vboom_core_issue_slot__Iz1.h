// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vboom_core.h for the primary calling header

#ifndef VERILATED_VBOOM_CORE_ISSUE_SLOT__IZ1_H_
#define VERILATED_VBOOM_CORE_ISSUE_SLOT__IZ1_H_  // guard

#include "verilated.h"


class Vboom_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vboom_core_issue_slot__Iz1 final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
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
        CData/*0:0*/ __PVT__agen_ready;
        CData/*0:0*/ __PVT__dgen_ready;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_157;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_160;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_163;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_166;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_169;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_172;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_175;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_178;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_181;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_184;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_187;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_190;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_193;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_196;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_199;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_202;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_203;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_204;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_205;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_206;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_207;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_208;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_209;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_210;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_211;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_212;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_213;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_214;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_215;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_216;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_217;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_218;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_102;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_103;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_104;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_105;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_106;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_107;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_108;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_109;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_110;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_111;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_112;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_113;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_114;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_115;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_116;
        VlWide<5>/*133:0*/ __VdfgRegularize_h6e95ff9d_0_117;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_155;
    };
    struct {
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_156;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_158;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_159;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_161;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_162;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_164;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_165;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_167;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_168;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_170;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_171;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_173;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_174;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_176;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_177;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_179;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_180;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_182;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_183;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_185;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_186;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_188;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_189;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_191;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_192;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_194;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_195;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_197;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_198;
        VlWide<8>/*242:0*/ __VdfgRegularize_h6e95ff9d_0_200;
        VlWide<6>/*188:0*/ __VdfgRegularize_h6e95ff9d_0_201;
        VlWide<12>/*376:0*/ iss_uop;
        VlWide<12>/*376:0*/ in_uop;
        VlWide<15>/*457:0*/ brupdate;
        VlWide<12>/*376:0*/ __PVT__slot_uop;
        VlWide<12>/*376:0*/ __PVT__next_uop;
    };

    // INTERNAL VARIABLES
    Vboom_core__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vboom_core_issue_slot__Iz1();
    ~Vboom_core_issue_slot__Iz1();
    void ctor(Vboom_core__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vboom_core_issue_slot__Iz1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
