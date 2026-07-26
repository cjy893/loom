// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsr_file_test_top.h for the primary calling header

#ifndef VERILATED_VCSR_FILE_TEST_TOP___024ROOT_H_
#define VERILATED_VCSR_FILE_TEST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vcsr_file_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsr_file_test_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(csr_req_valid,0,0);
        VL_OUT8(csr_req_ready,0,0);
        VL_IN8(csr_req_rob_idx,5,0);
        VL_IN8(csr_cmd,1,0);
        VL_OUT8(csr_resp_valid,0,0);
        VL_IN8(csr_resp_ready,0,0);
        VL_OUT8(csr_resp_rob_idx,5,0);
        VL_IN8(csr_commit_valid,0,0);
        VL_IN8(csr_commit_rob_idx,5,0);
        VL_IN8(csr_flush_pending,0,0);
        VL_IN8(xcpt_valid,0,0);
        VL_IN8(xcpt_code,5,0);
        VL_IN8(ertn_valid,0,0);
        VL_IN8(hw_irq,7,0);
        VL_IN8(ipi_irq,0,0);
        VL_OUT8(interrupt_pending,0,0);
        VL_OUT8(current_plv,1,0);
        VL_OUT8(current_ie,0,0);
        CData/*0:0*/ csr_file_test_top__DOT__dut__DOT__timer_irq_q;
        CData/*0:0*/ csr_file_test_top__DOT__dut__DOT__timer_armed_q;
        CData/*0:0*/ csr_file_test_top__DOT__dut__DOT__pending_q;
        CData/*5:0*/ csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q;
        CData/*1:0*/ csr_file_test_top__DOT__dut__DOT__pending_cmd_q;
        CData/*0:0*/ csr_file_test_top__DOT__dut__DOT__resp_valid_q;
        CData/*0:0*/ csr_file_test_top__DOT__dut__DOT__commit_match;
        CData/*0:0*/ __VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v0;
        CData/*0:0*/ __VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v1;
        CData/*0:0*/ __VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v2;
        CData/*0:0*/ __VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v3;
        CData/*0:0*/ __VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v4;
        CData/*0:0*/ __VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v5;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__csr_req_valid__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__csr_req_rob_idx__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__csr_cmd__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__csr_resp_ready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__csr_commit_valid__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__csr_commit_rob_idx__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__csr_flush_pending__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__xcpt_valid__0;
        CData/*5:0*/ __Vtrigprevexpr___TOP__xcpt_code__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ertn_valid__0;
        CData/*7:0*/ __Vtrigprevexpr___TOP__hw_irq__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ipi_irq__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN16(csr_req_addr,13,0);
        VL_IN16(xcpt_esubcode,8,0);
        VL_OUT16(interrupt_pending_bits,12,0);
        SData/*13:0*/ csr_file_test_top__DOT__dut__DOT__pending_addr_q;
        SData/*13:0*/ __Vtrigprevexpr___TOP__csr_req_addr__0;
        SData/*8:0*/ __Vtrigprevexpr___TOP__xcpt_esubcode__0;
        VL_IN(csr_wdata,31,0);
        VL_IN(csr_wmask,31,0);
        VL_OUT(csr_rdata,31,0);
    };
    struct {
        VL_IN(xcpt_pc,31,0);
        VL_IN(xcpt_badvaddr,31,0);
        VL_OUT(xcpt_target,31,0);
        VL_OUT(ertn_target,31,0);
        VL_OUT(crmd_value,31,0);
        VL_OUT(asid_value,31,0);
        VL_OUT(dmw0_value,31,0);
        VL_OUT(dmw1_value,31,0);
        VL_OUT(era_value,31,0);
        VL_OUT(eentry_value,31,0);
        VL_OUT(tlbrentry_value,31,0);
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_32__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_31__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_30__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_29__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_28__merge_write;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_27__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_26__merge_write;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_25__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_24__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_23__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_22__merge_write;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_21__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_20__merge_write;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_19__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_18__merge_write;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_17__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_16__merge_write;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_15__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_14__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_13__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_12__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_11__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_10__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_9__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_8__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_7__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_6__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_5__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_4__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_3__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_2__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_1__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT____VlemCall_0__write_mask;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__crmd_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__prmd_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__euen_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__ecfg_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__estat_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__era_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__badv_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__eentry_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__tlbidx_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__tlbehi_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__tlbelo0_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__tlbelo1_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__asid_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__pgdl_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__pgdh_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__tid_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__tcfg_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__tval_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__llbctl_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__tlbrentry_q;
    };
    struct {
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__dmw0_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__dmw1_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__pending_wdata_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__pending_wmask_q;
        IData/*31:0*/ csr_file_test_top__DOT__dut__DOT__resp_data_q;
        IData/*31:0*/ __Vdly__csr_file_test_top__DOT__dut__DOT__tval_q;
        IData/*31:0*/ __Vdly__csr_file_test_top__DOT__dut__DOT__tcfg_q;
        IData/*31:0*/ __Vdly__csr_file_test_top__DOT__dut__DOT__estat_q;
        IData/*31:0*/ __Vdly__csr_file_test_top__DOT__dut__DOT__prmd_q;
        IData/*31:0*/ __Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q;
        IData/*31:0*/ __VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v0;
        IData/*31:0*/ __VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v1;
        IData/*31:0*/ __VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v2;
        IData/*31:0*/ __VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v3;
        IData/*31:0*/ __Vtrigprevexpr___TOP__csr_wdata__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__csr_wmask__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__xcpt_pc__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__xcpt_badvaddr__0;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ csr_file_test_top__DOT__dut__DOT__stable_counter_q;
        QData/*63:0*/ __Vdly__csr_file_test_top__DOT__dut__DOT__stable_counter_q;
        VlUnpacked<IData/*31:0*/, 4> csr_file_test_top__DOT__dut__DOT__save_q;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vcsr_file_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsr_file_test_top___024root(Vcsr_file_test_top__Syms* symsp, const char* namep);
    ~Vcsr_file_test_top___024root();
    VL_UNCOPYABLE(Vcsr_file_test_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
