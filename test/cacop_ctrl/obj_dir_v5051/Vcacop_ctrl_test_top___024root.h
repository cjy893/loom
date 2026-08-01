// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcacop_ctrl_test_top.h for the primary calling header

#ifndef VERILATED_VCACOP_CTRL_TEST_TOP___024ROOT_H_
#define VERILATED_VCACOP_CTRL_TEST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vcacop_ctrl_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcacop_ctrl_test_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(req_valid,0,0);
        VL_OUT8(req_ready,0,0);
        VL_IN8(req_rob_idx,5,0);
        VL_IN8(req_code,4,0);
        VL_IN8(req_xcpt_valid,0,0);
        VL_IN8(req_xcpt_code,5,0);
        VL_OUT8(resp_valid,0,0);
        VL_IN8(resp_ready,0,0);
        VL_OUT8(resp_rob_idx,5,0);
        VL_OUT8(resp_xcpt_valid,0,0);
        VL_OUT8(resp_xcpt_code,5,0);
        VL_IN8(flush_pending,0,0);
        VL_OUT8(icache_maint_valid,0,0);
        VL_IN8(icache_maint_ready,0,0);
        VL_OUT8(icache_maint_mode,1,0);
        VL_IN8(icache_maint_done,0,0);
        VL_OUT8(dcache_maint_valid,0,0);
        VL_IN8(dcache_maint_ready,0,0);
        VL_OUT8(dcache_maint_op,1,0);
        VL_OUT8(dcache_maint_mode,1,0);
        VL_IN8(dcache_maint_done,0,0);
        CData/*2:0*/ cacop_ctrl_test_top__DOT__dut__DOT__state_q;
        CData/*5:0*/ cacop_ctrl_test_top__DOT__dut__DOT__rob_idx_q;
        CData/*4:0*/ cacop_ctrl_test_top__DOT__dut__DOT__code_q;
        CData/*0:0*/ cacop_ctrl_test_top__DOT__dut__DOT__xcpt_valid_q;
        CData/*5:0*/ cacop_ctrl_test_top__DOT__dut__DOT__xcpt_code_q;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__req_valid__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__req_rob_idx__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__req_code__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__req_xcpt_valid__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__req_xcpt_code__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__resp_ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__flush_pending__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__icache_maint_ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__icache_maint_done__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dcache_maint_ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dcache_maint_done__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(req_vaddr,31,0);
        VL_IN(req_paddr,31,0);
        VL_IN(req_badvaddr,31,0);
        VL_OUT(resp_badvaddr,31,0);
        VL_OUT(icache_maint_vaddr,31,0);
        VL_OUT(icache_maint_paddr,31,0);
        VL_OUT(dcache_maint_vaddr,31,0);
        VL_OUT(dcache_maint_paddr,31,0);
        IData/*31:0*/ cacop_ctrl_test_top__DOT__dut__DOT__vaddr_q;
        IData/*31:0*/ cacop_ctrl_test_top__DOT__dut__DOT__paddr_q;
        IData/*31:0*/ cacop_ctrl_test_top__DOT__dut__DOT__badvaddr_q;
        IData/*31:0*/ __Vtrigprevexpr___TOP__req_vaddr__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__req_paddr__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__req_badvaddr__0;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vcacop_ctrl_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcacop_ctrl_test_top___024root(Vcacop_ctrl_test_top__Syms* symsp, const char* namep);
    ~Vcacop_ctrl_test_top___024root();
    VL_UNCOPYABLE(Vcacop_ctrl_test_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
