// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__20(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__20\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 = (0x000000ffU 
                                                & ((IData)(
                                                           (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                            >> 0x00000030U)) 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                   >> 0x00000030U)))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                                                       >> 6U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (0x000000ffU 
                                                & ((IData)(
                                                           (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                            >> 0x00000028U)) 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                   >> 0x00000028U)))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                                                       >> 5U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = (0x000000ffU 
                                                & ((IData)(
                                                           (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                            >> 0x00000018U)) 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                   >> 0x00000018U)))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                                                       >> 3U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (0x000000ffU 
                                                & ((IData)(
                                                           (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                            >> 8U)) 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                   >> 8U)))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                                                       >> 1U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (0x000000ffU 
                                                & ((IData)(
                                                           (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                            >> 0x00000020U)) 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                   >> 0x00000020U)))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                                                       >> 4U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (0x000000ffU 
                                                & ((IData)(
                                                           (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                            >> 0x00000010U)) 
                                                   & (((IData)(1U) 
                                                       + 
                                                       (~ (IData)(
                                                                  (vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                                                                   >> 0x00000010U)))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10) 
                                                                       >> 2U)))))));
}
