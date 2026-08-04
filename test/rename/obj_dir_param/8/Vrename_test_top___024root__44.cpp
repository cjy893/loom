// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__23(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__23\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __VdfgRegularize_h6e95ff9d_0_11;
    __VdfgRegularize_h6e95ff9d_0_11 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_11 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31) 
                                       & ((IData)(1U) 
                                          + (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = (0x00000fffU 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                                                     ? 
                                                    (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35) 
                                                      << 6U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36))
                                                     : (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                >> 0x00000012U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = (((QData)((IData)(
                                                                  ((0x00ff0000U 
                                                                    & (((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000030U)) 
                                                                        & (((IData)(1U) 
                                                                            + 
                                                                            (~ (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000030U)))) 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                >> 6U)))))) 
                                                                       << 0x00000010U)) 
                                                                   | ((0x0000ff00U 
                                                                       & (((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000028U)) 
                                                                           & (((IData)(1U) 
                                                                               + 
                                                                               (~ (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000028U)))) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                >> 5U)))))) 
                                                                          << 8U)) 
                                                                      | (0x000000ffU 
                                                                         & ((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000020U)) 
                                                                            & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000020U)))) 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                >> 4U))))))))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((0x0000ff00U 
                                                                       & (((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000018U)) 
                                                                           & (((IData)(1U) 
                                                                               + 
                                                                               (~ (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000018U)))) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                >> 3U)))))) 
                                                                          << 8U)) 
                                                                      | (0x000000ffU 
                                                                         & ((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000010U)) 
                                                                            & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 0x00000010U)))) 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                >> 2U)))))))) 
                                                                     << 0x00000010U) 
                                                                    | ((0x0000ff00U 
                                                                        & (((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 8U)) 
                                                                            & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                >> 8U)))) 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(__VdfgRegularize_h6e95ff9d_0_11) 
                                                                                >> 1U)))))) 
                                                                           << 8U)) 
                                                                       | (0x000000ffU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                                                                             & (((IData)(1U) 
                                                                                + 
                                                                                (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))) 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(__VdfgRegularize_h6e95ff9d_0_11))))))))))));
}
