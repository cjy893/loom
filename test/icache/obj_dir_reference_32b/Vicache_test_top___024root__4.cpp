// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

void Vicache_test_top___024root___nba_sequent__TOP__1(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___nba_sequent__TOP__1\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__data_array__v0) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__data_array[vlSelfRef.__VdlyDim2__icache_test_top__DOT__dut__DOT__data_array__v0][vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__data_array__v0][vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__data_array__v0] 
            = vlSelfRef.__VdlyVal__icache_test_top__DOT__dut__DOT__data_array__v0;
    }
    vlSelfRef.icache_test_top__DOT__dut__DOT__state_q 
        = vlSelfRef.__Vdly__icache_test_top__DOT__dut__DOT__state_q;
    if (vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__tag_array__v0) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__tag_array[vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__tag_array__v0][vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__tag_array__v0] 
            = vlSelfRef.__VdlyVal__icache_test_top__DOT__dut__DOT__tag_array__v0;
        vlSelfRef.icache_test_top__DOT__dut__DOT__replace_way_q[vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__replace_way_q__v0] 
            = vlSelfRef.__VdlyVal__icache_test_top__DOT__dut__DOT__replace_way_q__v0;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v0][vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__valid_array__v0] = 1U;
    }
    if (vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__replace_way_q__v1) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__replace_way_q[0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__replace_way_q[1U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__replace_way_q[2U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__replace_way_q[3U] = 0U;
    }
    if (vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v1) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[0U][0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[0U][1U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[1U][0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[1U][1U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[2U][0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[2U][1U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[3U][0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[3U][1U] = 0U;
    }
}
