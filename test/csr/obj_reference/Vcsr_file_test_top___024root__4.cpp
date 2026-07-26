// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

void Vcsr_file_test_top___024root___nba_sequent__TOP__2(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___nba_sequent__TOP__2\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.csr_file_test_top__DOT__dut__DOT__stable_counter_q 
        = vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__stable_counter_q;
    vlSelfRef.csr_file_test_top__DOT__dut__DOT__tval_q 
        = vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tval_q;
    vlSelfRef.csr_file_test_top__DOT__dut__DOT__tcfg_q 
        = vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__tcfg_q;
    vlSelfRef.csr_file_test_top__DOT__dut__DOT__prmd_q 
        = vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__prmd_q;
    if (vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v0) {
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[3U] 
            = vlSelfRef.__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v0;
    }
    if (vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v1) {
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[2U] 
            = vlSelfRef.__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v1;
    }
    if (vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v2) {
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[1U] 
            = vlSelfRef.__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v2;
    }
}

void Vcsr_file_test_top___024root___nba_sequent__TOP__3(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___nba_sequent__TOP__3\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v3) {
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[0U] 
            = vlSelfRef.__VdlyVal__csr_file_test_top__DOT__dut__DOT__save_q__v3;
    }
    if (vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v4) {
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__csr_file_test_top__DOT__dut__DOT__save_q__v5) {
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[1U] = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[2U] = 0U;
        vlSelfRef.csr_file_test_top__DOT__dut__DOT__save_q[3U] = 0U;
    }
    vlSelfRef.csr_file_test_top__DOT__dut__DOT__estat_q 
        = vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__estat_q;
    vlSelfRef.csr_file_test_top__DOT__dut__DOT__crmd_q 
        = vlSelfRef.__Vdly__csr_file_test_top__DOT__dut__DOT__crmd_q;
    vlSelfRef.csr_resp_valid = vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_valid_q;
    vlSelfRef.csr_resp_rob_idx = vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q;
    vlSelfRef.csr_file_test_top__DOT__dut__DOT__commit_match 
        = ((IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_q) 
           & ((IData)(vlSelfRef.csr_commit_valid) & 
              ((IData)(vlSelfRef.csr_commit_rob_idx) 
               == (IData)(vlSelfRef.csr_file_test_top__DOT__dut__DOT__pending_rob_idx_q))));
    vlSelfRef.csr_rdata = vlSelfRef.csr_file_test_top__DOT__dut__DOT__resp_data_q;
    vlSelfRef.dmw1_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw1_q;
    vlSelfRef.dmw0_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__dmw0_q;
    vlSelfRef.asid_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__asid_q;
    vlSelfRef.ertn_target = vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q;
    vlSelfRef.era_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__era_q;
    vlSelfRef.tlbrentry_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q;
    vlSelfRef.eentry_value = vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q;
    vlSelfRef.xcpt_target = (((IData)(vlSelfRef.xcpt_valid) 
                              & (0x3fU == (IData)(vlSelfRef.xcpt_code)))
                              ? vlSelfRef.csr_file_test_top__DOT__dut__DOT__tlbrentry_q
                              : vlSelfRef.csr_file_test_top__DOT__dut__DOT__eentry_q);
}
