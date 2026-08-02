// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

VL_ATTR_COLD void Vftq_test_top___024root___ctor_var_reset_1(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___ctor_var_reset_1\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v0 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v0 = 0;
    vlSelf->__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v1 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v1 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v1 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v2 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v2 = 0;
    vlSelf->__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v3 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v3 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v3 = 0;
    vlSelf->__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v4 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v4 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v4 = 0;
    vlSelf->__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v5 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v5 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v5 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v6 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v6 = 0;
    vlSelf->__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v7 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v7 = 0;
    vlSelf->__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v8 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v8 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v8 = 0;
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v9 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v9 = 0;
    VL_ZERO_RESET_W(429, vlSelf->__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10);
    vlSelf->__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10 = 0;
    vlSelf->__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v10 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_pc__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_next_pc__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_br_mask__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_cfi_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_cfi_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_cfi_type__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_cfi_is_call__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_cfi_is_ret__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_cfi_npc_plus4__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_cfi_taken__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_ras_top__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_ras_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__enq_start_bank__0 = 0;
    VL_ZERO_RESET_W(72, vlSelf->__Vtrigprevexpr___TOP__enq_ghist__0);
    VL_ZERO_RESET_W(240, vlSelf->__Vtrigprevexpr___TOP__enq_meta__0);
    vlSelf->__Vtrigprevexpr___TOP__commit_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__commit_ftq_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__redirect_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__redirect_ftq_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__brupdate_b2_mispredict__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__brupdate_b2_ftq_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__brupdate_b2_taken__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__brupdate_b2_target__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__brupdate_b2_pc_lob__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__brupdate_b2_cfi_type__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__query_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__query_idx__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__exec_query_valid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__exec_query_idx__0 = 0;
    VL_ZERO_RESET_W(96, vlSelf->__Vtrigprevexpr___TOP__exec_query_pc__0);
    vlSelf->__Vtrigprevexpr___TOP__flush_valid__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
