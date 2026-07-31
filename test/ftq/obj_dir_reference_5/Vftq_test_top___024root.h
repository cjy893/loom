// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vftq_test_top.h for the primary calling header

#ifndef VERILATED_VFTQ_TEST_TOP___024ROOT_H_
#define VERILATED_VFTQ_TEST_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vftq_test_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vftq_test_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(enq_valid,0,0);
        VL_OUT8(enq_ready,0,0);
        VL_IN8(enq_br_mask,3,0);
        VL_IN8(enq_cfi_valid,0,0);
        VL_IN8(enq_cfi_idx,1,0);
        VL_IN8(enq_cfi_type,2,0);
        VL_IN8(enq_cfi_is_call,0,0);
        VL_IN8(enq_cfi_is_ret,0,0);
        VL_IN8(enq_cfi_npc_plus4,0,0);
        VL_IN8(enq_cfi_taken,0,0);
        VL_IN8(enq_ras_idx,4,0);
        VL_IN8(enq_start_bank,0,0);
        VL_OUT8(enq_idx,2,0);
        VL_IN8(commit_valid,0,0);
        VL_IN8(commit_ftq_idx,2,0);
        VL_IN8(redirect_valid,0,0);
        VL_IN8(redirect_ftq_idx,2,0);
        VL_IN8(brupdate_b2_mispredict,0,0);
        VL_IN8(brupdate_b2_ftq_idx,2,0);
        VL_IN8(brupdate_b2_taken,0,0);
        VL_IN8(brupdate_b2_br_mask,3,0);
        VL_IN8(brupdate_b2_cfi_is_br,0,0);
        VL_IN8(brupdate_b2_cfi_is_call,0,0);
        VL_IN8(brupdate_b2_cfi_is_ret,0,0);
        VL_OUT8(bpd_update_valid,0,0);
        VL_OUT8(bpd_update_is_mispredict_update,0,0);
        VL_OUT8(bpd_update_is_repair_update,0,0);
        VL_OUT8(bpd_update_br_mask,3,0);
        VL_OUT8(bpd_update_cfi_valid,0,0);
        VL_OUT8(bpd_update_cfi_idx,1,0);
        VL_OUT8(bpd_update_cfi_taken,0,0);
        VL_OUT8(bpd_update_cfi_mispredicted,0,0);
        VL_OUT8(bpd_update_cfi_is_br,0,0);
        VL_OUT8(bpd_update_cfi_is_b_bl,0,0);
        VL_OUT8(bpd_update_cfi_is_jirl,0,0);
        VL_OUT8(ghist_restore_valid,0,0);
        VL_OUT8(ras_repair_valid,0,0);
        VL_OUT8(ras_repair_idx,4,0);
        VL_IN8(query_valid,0,0);
        VL_IN8(query_idx,2,0);
        VL_OUT8(query_resp_valid,0,0);
        VL_OUT8(query_br_mask,3,0);
        VL_OUT8(query_cfi_valid,0,0);
        VL_OUT8(query_cfi_idx,1,0);
        VL_OUT8(query_cfi_type,2,0);
        VL_OUT8(query_cfi_is_call,0,0);
        VL_OUT8(query_cfi_is_ret,0,0);
        VL_OUT8(query_cfi_npc_plus4,0,0);
        VL_OUT8(query_cfi_taken,0,0);
        VL_OUT8(query_ras_idx,4,0);
        VL_OUT8(query_start_bank,0,0);
        CData/*0:0*/ ftq_test_top__DOT__dut__DOT____VlemCall_6__entry_needs_update;
        CData/*2:0*/ ftq_test_top__DOT__dut__DOT____VlemCall_5__wrap_inc;
        CData/*0:0*/ ftq_test_top__DOT__dut__DOT____VlemCall_4__entry_needs_update;
        CData/*1:0*/ ftq_test_top__DOT__dut__DOT____VlemCall_3__mask_to_idx;
        CData/*2:0*/ ftq_test_top__DOT__dut__DOT____VlemCall_2__wrap_inc;
        CData/*4:0*/ ftq_test_top__DOT__dut__DOT____VlemCall_1__make_kill_mask;
        CData/*4:0*/ ftq_test_top__DOT__dut__DOT__entry_valid_q;
        CData/*2:0*/ ftq_test_top__DOT__dut__DOT__enq_ptr_q;
        CData/*2:0*/ ftq_test_top__DOT__dut__DOT__commit_ptr_q;
        CData/*2:0*/ ftq_test_top__DOT__dut__DOT__commit_end_q;
        CData/*2:0*/ ftq_test_top__DOT__dut__DOT__repair_ptr_q;
    };
    struct {
        CData/*2:0*/ ftq_test_top__DOT__dut__DOT__repair_end_q;
        CData/*0:0*/ ftq_test_top__DOT__dut__DOT__commit_busy_q;
        CData/*0:0*/ ftq_test_top__DOT__dut__DOT__repair_busy_q;
        CData/*0:0*/ ftq_test_top__DOT__dut__DOT__bpd_update_valid_q;
        CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_0;
        CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_4;
        CData/*0:0*/ __Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q;
        CData/*4:0*/ __Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q;
        CData/*0:0*/ __Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q;
        CData/*2:0*/ __Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q;
        CData/*2:0*/ __Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q;
        CData/*2:0*/ __Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q;
        CData/*2:0*/ __Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q;
        CData/*2:0*/ __VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0;
        CData/*0:0*/ __VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v0;
        CData/*2:0*/ __VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v1;
        CData/*0:0*/ __VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v1;
        CData/*1:0*/ __VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v2;
        CData/*2:0*/ __VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v2;
        CData/*0:0*/ __VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v2;
        CData/*0:0*/ __VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v3;
        CData/*2:0*/ __VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v3;
        CData/*0:0*/ __VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v3;
        CData/*2:0*/ __VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v4;
        CData/*0:0*/ __VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v4;
        CData/*0:0*/ __VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v5;
        CData/*2:0*/ __VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v5;
        CData/*0:0*/ __VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v5;
        CData/*0:0*/ __VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v6;
        CData/*2:0*/ __VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v6;
        CData/*0:0*/ __VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v6;
        CData/*2:0*/ __VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v7;
        CData/*0:0*/ __VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v7;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__enq_valid__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__enq_br_mask__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__enq_cfi_valid__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__enq_cfi_idx__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__enq_cfi_type__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__enq_cfi_is_call__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__enq_cfi_is_ret__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__enq_cfi_npc_plus4__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__enq_cfi_taken__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__enq_ras_idx__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__enq_start_bank__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__commit_valid__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__commit_ftq_idx__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__redirect_valid__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__redirect_ftq_idx__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__brupdate_b2_mispredict__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__brupdate_b2_ftq_idx__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__brupdate_b2_taken__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__brupdate_b2_br_mask__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__brupdate_b2_cfi_is_br__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__brupdate_b2_cfi_is_call__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__brupdate_b2_cfi_is_ret__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__query_valid__0;
        CData/*2:0*/ __Vtrigprevexpr___TOP__query_idx__0;
    };
    struct {
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(enq_pc,31,0);
        VL_IN(enq_next_pc,31,0);
        VL_IN(enq_ras_top,31,0);
        VL_INW(enq_meta,239,0,8);
        VL_IN(brupdate_b2_target,31,0);
        VL_OUT(bpd_update_pc,31,0);
        VL_OUT(bpd_update_target,31,0);
        VL_OUTW(bpd_update_meta,239,0,8);
        VL_OUT(ras_repair_addr,31,0);
        VL_OUT(query_pc,31,0);
        VL_OUT(query_ras_top,31,0);
        IData/*31:0*/ __VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v0;
        VlWide<14>/*428:0*/ __VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7;
        IData/*31:0*/ __Vtrigprevexpr___TOP__enq_pc__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__enq_next_pc__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__enq_ras_top__0;
        VlWide<8>/*239:0*/ __Vtrigprevexpr___TOP__enq_meta__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__brupdate_b2_target__0;
        IData/*31:0*/ __VactIterCount;
        VL_INW(enq_ghist,71,0,3);
        VL_OUTW(bpd_update_ghist,71,0,3);
        VL_OUTW(ghist_restore,71,0,3);
        VL_OUTW(query_ghist,71,0,3);
        VlWide<15>/*457:0*/ ftq_test_top__DOT__dut__DOT__bpd_update_q;
        VlWide<3>/*71:0*/ __Vtrigprevexpr___TOP__enq_ghist__0;
        VlUnpacked<VlWide<14>/*428:0*/, 5> ftq_test_top__DOT__dut__DOT__entries_q;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vftq_test_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vftq_test_top___024root(Vftq_test_top__Syms* symsp, const char* namep);
    ~Vftq_test_top___024root();
    VL_UNCOPYABLE(Vftq_test_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
