// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__27(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__27\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((~ vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                 & vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31 = (((
                                                   (((0U 
                                                      != 
                                                      (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                  >> 0x00000030U)))) 
                                                     << 3U) 
                                                    | ((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                    >> 0x00000028U)))) 
                                                       << 2U)) 
                                                   | (((0U 
                                                        != 
                                                        (0x000000ffU 
                                                         & (IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                    >> 0x00000020U)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                     >> 0x00000018U)))))) 
                                                  << 3U) 
                                                 | (((0U 
                                                      != 
                                                      (0x000000ffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                  >> 0x00000010U)))) 
                                                     << 2U) 
                                                    | (((0U 
                                                         != 
                                                         (0x000000ffU 
                                                          & (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                     >> 8U)))) 
                                                        << 1U) 
                                                       | (0U 
                                                          != 
                                                          (0x000000ffU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35 = (0x0000003fU 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000001fU 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41))) 
                                                        & ((0x0000001fU 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)) 
                                                           == 
                                                           (0x0000001fU 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                               >> 5U)))))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                          >> 5U)))
                                                      ? 0U
                                                      : vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q
                                                     [
                                                     (0x0000001fU 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                         >> 5U))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 = (0x0000003fU 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                     & ((0U 
                                                         != 
                                                         (0x0000001fU 
                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41))) 
                                                        & ((0x0000001fU 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)) 
                                                           == 
                                                           (0x0000001fU 
                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27)))
                                                      ? 0U
                                                      : vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q
                                                     [
                                                     (0x0000001fU 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27))])));
}
