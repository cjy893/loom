// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmem_issue_test_top.h for the primary calling header

#ifndef VERILATED_VMEM_ISSUE_TEST_TOP___024ROOT_H_
#define VERILATED_VMEM_ISSUE_TEST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vmem_issue_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmem_issue_test_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(dis_valid,0,0);
        VL_OUT8(dis_ready,0,0);
        VL_IN8(dis_rob_idx,5,0);
        VL_IN8(dis_psrc1,5,0);
        VL_IN8(dis_psrc2,5,0);
        VL_IN8(dis_psrc1_busy,0,0);
        VL_IN8(dis_psrc2_busy,0,0);
        VL_IN8(dis_use_agen,0,0);
        VL_IN8(dis_use_dgen,0,0);
        VL_IN8(wakeup_valid_0,0,0);
        VL_IN8(wakeup_pdst_0,5,0);
        VL_IN8(wakeup_valid_1,0,0);
        VL_IN8(wakeup_pdst_1,5,0);
        VL_IN8(resolve_mask,3,0);
        VL_IN8(mispredict_mask,3,0);
        VL_IN8(br_mispredict,0,0);
        VL_IN8(flush_pipeline,0,0);
        VL_OUT8(iss_valid,0,0);
        VL_OUT8(iss_rob_idx,5,0);
        VL_OUT8(iss_use_agen,0,0);
        VL_OUT8(iss_use_dgen,0,0);
        VL_OUT8(agen_valid,0,0);
        VL_OUT8(agen_rob_idx,5,0);
        VL_OUT8(dgen_valid,0,0);
        VL_OUT8(dgen_rob_idx,5,0);
        CData/*0:0*/ mem_issue_test_top__DOT__dis_ready_vec;
        CData/*0:0*/ mem_issue_test_top__DOT__iss_valid_vec;
        CData/*1:0*/ mem_issue_test_top__DOT__wakeup_valid;
        SData/*11:0*/ mem_issue_test_top__DOT__wakeup_pdst;
        CData/*0:0*/ mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed;
        CData/*0:0*/ mem_issue_test_top__DOT__mem_dut__DOT__rrd_valid;
        CData/*0:0*/ mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed;
        CData/*0:0*/ mem_issue_test_top__DOT__mem_dut__DOT__exe_valid;
        CData/*0:0*/ mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid;
        CData/*3:0*/ mem_issue_test_top__DOT__issue_dut__DOT__slot_valid;
        CData/*3:0*/ mem_issue_test_top__DOT__issue_dut__DOT__slot_killed;
        CData/*3:0*/ mem_issue_test_top__DOT__issue_dut__DOT__slot_ready;
        CData/*3:0*/ mem_issue_test_top__DOT__issue_dut__DOT__slot_grant;
        CData/*1:0*/ mem_issue_test_top__DOT__issue_dut__DOT__dis_slot;
        CData/*3:0*/ mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available;
        CData/*0:0*/ mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dis_valid__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__dis_rob_idx__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__dis_psrc1__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__dis_psrc2__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dis_psrc1_busy__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dis_psrc2_busy__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dis_use_agen__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__dis_use_dgen__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__wakeup_valid_0__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__wakeup_pdst_0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__wakeup_valid_1__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__wakeup_pdst_1__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__resolve_mask__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__mispredict_mask__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__br_mispredict__0;
    };
    struct {
        CData/*0:0*/ __Vtrigprevexpr___TOP__flush_pipeline__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(src1_data,31,0);
        VL_IN(src2_data,31,0);
        VL_IN(imm_data,31,0);
        VL_OUT(agen_addr,31,0);
        VL_OUT(dgen_data,31,0);
        IData/*31:0*/ mem_issue_test_top__DOT__mem_dut__DOT__rrd_src1;
        IData/*31:0*/ mem_issue_test_top__DOT__mem_dut__DOT__rrd_src2;
        IData/*31:0*/ mem_issue_test_top__DOT__mem_dut__DOT__rrd_imm;
        IData/*31:0*/ mem_issue_test_top__DOT__mem_dut__DOT__exe_src1;
        IData/*31:0*/ mem_issue_test_top__DOT__mem_dut__DOT__exe_src2;
        IData/*31:0*/ mem_issue_test_top__DOT__mem_dut__DOT__exe_imm;
        IData/*31:0*/ __Vtrigprevexpr___TOP__src1_data__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__src2_data__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__imm_data__0;
        IData/*31:0*/ __VactIterCount;
        VlWide<16>/*496:0*/ mem_issue_test_top__DOT__brupdate;
        VlWide<13>/*415:0*/ mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop;
        VlWide<13>/*415:0*/ mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop;
        VlWide<13>/*415:0*/ mem_issue_test_top__DOT__mem_dut__DOT__exe_uop;
        VlWide<52>/*1663:0*/ mem_issue_test_top__DOT__issue_dut__DOT__slot_uop;
        VlWide<13>/*415:0*/ mem_issue_test_top__DOT__issue_dut__DOT__dis_uop_updated;
        VlWide<52>/*1663:0*/ __Vdly__mem_issue_test_top__DOT__issue_dut__DOT__slot_uop;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vmem_issue_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vmem_issue_test_top___024root(Vmem_issue_test_top__Syms* symsp, const char* namep);
    ~Vmem_issue_test_top___024root();
    VL_UNCOPYABLE(Vmem_issue_test_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
