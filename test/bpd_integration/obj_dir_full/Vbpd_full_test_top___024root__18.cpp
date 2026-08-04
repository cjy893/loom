// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__10(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__10\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0) {
        VL_ASSIGNSEL_WI(120, 25, vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0, vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                        [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0], vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0);
        VL_ASSIGNSEL_WI(120, 32, vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1, vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                        [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1], vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1);
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2][(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2))) 
                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2]
                [(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2 
                  >> 5U)]) | ((IData)(vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2) 
                              << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2)));
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3][(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3))) 
                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3]
                [(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3 
                  >> 5U)]) | ((IData)(vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3) 
                              << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3)));
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4][(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4))) 
                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4]
                [(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4 
                  >> 5U)]) | ((IData)(vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4) 
                              << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4)));
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5) {
        VL_ASSIGNSEL_WI(120, 32, vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5, vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                        [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5], vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5);
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6][(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6))) 
                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6]
                [(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6 
                  >> 5U)]) | ((IData)(vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6) 
                              << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6)));
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7][(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7))) 
                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7]
                [(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7 
                  >> 5U)]) | ((IData)(vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7) 
                              << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7)));
        vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8][(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8 
                                                                                >> 5U)] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8))) 
                & vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                [vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8]
                [(vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8 
                  >> 5U)]) | ((IData)(vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8) 
                              << (0x0000001fU & vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8)));
    }
    if (vlSelfRef.__VdlySet__bpd_full_test_top__DOT__bim_inst__DOT__ram__DOT__mem__v0) {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__ram__DOT__mem[vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__bim_inst__DOT__ram__DOT__mem__v0] 
            = vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__bim_inst__DOT__ram__DOT__mem__v0;
    }
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__s1_set 
        = ((0x000003e0U & (((IData)(4U) + vlSelfRef.f0_pc) 
                           << 3U)) | (0x0000001fU & 
                                      (vlSelfRef.f0_pc 
                                       >> 2U)));
}
