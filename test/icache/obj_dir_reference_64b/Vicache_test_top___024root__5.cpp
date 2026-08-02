// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vicache_test_top.h for the primary calling header

#include "Vicache_test_top__pch.h"

void Vicache_test_top___024root___nba_sequent__TOP__2(Vicache_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vicache_test_top___024root___nba_sequent__TOP__2\n"); );
    Vicache_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v9) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v9][vlSelfRef.__VdlyDim0__icache_test_top__DOT__dut__DOT__valid_array__v9] = 0U;
    }
    if (vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v10) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v10][0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__valid_array__v11) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[vlSelfRef.__VdlyDim1__icache_test_top__DOT__dut__DOT__valid_array__v11][1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__icache_test_top__DOT__dut__DOT__replace_way_q__v1) {
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[0U][0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[0U][1U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[1U][0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[1U][1U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[2U][0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[2U][1U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[3U][0U] = 0U;
        vlSelfRef.icache_test_top__DOT__dut__DOT__valid_array[3U][1U] = 0U;
    }
    vlSelfRef.maint_done = vlSelfRef.icache_test_top__DOT__dut__DOT__maint_done_q;
    vlSelfRef.resp_insts[0U] = vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[0U];
    vlSelfRef.resp_insts[1U] = vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[1U];
    vlSelfRef.resp_insts[2U] = vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[2U];
    vlSelfRef.resp_insts[3U] = vlSelfRef.icache_test_top__DOT__dut__DOT__resp_insts_q[3U];
    vlSelfRef.mem_req_len = (0x0000000fU & (3U | (- (IData)((IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__req_cacheable_q)))));
    vlSelfRef.resp_valid = (4U == (IData)(vlSelfRef.icache_test_top__DOT__dut__DOT__state_q));
}
