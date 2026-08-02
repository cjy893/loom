// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode_test_top.h for the primary calling header

#ifndef VERILATED_VDECODE_TEST_TOP___024ROOT_H_
#define VERILATED_VDECODE_TEST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vdecode_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecode_test_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(status_prv,1,0);
        VL_OUT8(iq_type,3,0);
        VL_OUT8(ldst,5,0);
        VL_OUT8(lsrc1,5,0);
        VL_OUT8(lsrc2,5,0);
        VL_OUT8(dst_rtype,1,0);
        VL_OUT8(lsrc1_rtype,1,0);
        VL_OUT8(lsrc2_rtype,1,0);
        VL_OUT8(op1_sel,1,0);
        VL_OUT8(op2_sel,2,0);
        VL_OUT8(fcn_op,3,0);
        VL_OUT8(imm_sel,2,0);
        VL_OUT8(br_type,3,0);
        VL_OUT8(allocate_brtag,0,0);
        VL_OUT8(is_br,0,0);
        VL_OUT8(is_b_bl,0,0);
        VL_OUT8(is_jirl,0,0);
        VL_OUT8(uses_ldq,0,0);
        VL_OUT8(uses_stq,0,0);
        VL_OUT8(mem_cmd,4,0);
        VL_OUT8(mem_size,1,0);
        VL_OUT8(mem_signed,0,0);
        VL_OUT8(is_unique,0,0);
        VL_OUT8(is_rdcnt,0,0);
        VL_OUT8(is_ertn,0,0);
        VL_OUT8(flush_on_commit,0,0);
        VL_OUT8(csr_cmd,2,0);
        VL_OUT8(tlb_cmd,2,0);
        VL_OUT8(exception,0,0);
        VL_OUT8(exc_adef,0,0);
        CData/*3:0*/ decode_test_top__DOT__dut__DOT__instr_type;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*1:0*/ __Vtrigprevexpr___TOP__status_prv__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        VL_OUT16(fu_code,9,0);
        SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        VL_IN(inst,31,0);
        VL_IN(pc,31,0);
        VL_OUT(imm_packed,25,0);
        VL_OUT(exc_cause,31,0);
        VlWide<10>/*316:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        VlWide<9>/*265:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        VlWide<10>/*316:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        VlWide<8>/*224:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        VlWide<5>/*135:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        VlWide<8>/*248:0*/ __VdfgRegularize_h6e95ff9d_0_8;
        VlWide<6>/*163:0*/ __VdfgRegularize_h6e95ff9d_0_10;
        IData/*25:0*/ __VdfgRegularize_h6e95ff9d_0_11;
        IData/*19:0*/ __VdfgRegularize_h6e95ff9d_0_12;
        VlWide<5>/*147:0*/ __VdfgRegularize_h6e95ff9d_0_13;
        VlWide<6>/*186:0*/ __VdfgRegularize_h6e95ff9d_0_14;
        VlWide<9>/*264:0*/ __VdfgRegularize_h6e95ff9d_0_15;
        VlWide<8>/*248:0*/ __VdfgRegularize_h6e95ff9d_0_16;
        VlWide<9>/*261:0*/ __VdfgRegularize_h6e95ff9d_0_17;
        VlWide<3>/*86:0*/ __VdfgRegularize_h6e95ff9d_0_18;
        VlWide<7>/*195:0*/ __VdfgRegularize_h6e95ff9d_0_23;
        VlWide<7>/*193:0*/ __VdfgRegularize_h6e95ff9d_0_24;
        VlWide<6>/*183:0*/ __VdfgRegularize_h6e95ff9d_0_27;
        VlWide<7>/*222:0*/ __VdfgRegularize_h6e95ff9d_0_28;
        IData/*31:0*/ __Vtrigprevexpr___TOP__inst__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__pc__0;
        QData/*42:0*/ __VdfgRegularize_h6e95ff9d_0_20;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
    };

    // INTERNAL VARIABLES
    Vdecode_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdecode_test_top___024root(Vdecode_test_top__Syms* symsp, const char* namep);
    ~Vdecode_test_top___024root();
    VL_UNCOPYABLE(Vdecode_test_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
