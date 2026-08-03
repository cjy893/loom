// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__4(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__4\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] 
        = vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U];
    vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U] 
        = vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[1U];
    vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U] 
        = vlSelfRef.__Vdly__bpd_full_test_top__DOT__ghist_inst__DOT__history_q[2U];
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0) {
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0] 
            = (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
               [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0] 
               | (3U & ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v0))));
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1) {
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1] 
            = ((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1))) 
               & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
               [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v1]);
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2) {
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2] 
            = ((~ ((CData)(1U) << (IData)(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2))) 
               & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
               [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v2]);
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entry_valid__v3) {
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[0U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[1U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[2U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[3U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[4U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[5U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[6U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[7U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[8U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[9U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[10U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[11U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[12U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[13U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[14U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[15U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[16U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[17U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[18U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[19U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[20U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[21U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[22U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[23U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[24U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[25U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[26U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[27U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[28U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[29U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[30U] = 0U;
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid[31U] = 0U;
    }
}
