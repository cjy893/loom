// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__20(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__20\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
            << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38 = (1U 
                                                 & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))))) 
                                                    >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = (((QData)((IData)(
                                                                  (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2) 
                                                                    << 0x00000010U) 
                                                                   | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3) 
                                                                       << 8U) 
                                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))))) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                                      << 0x00000018U) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                                        << 0x00000010U)) 
                                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33 = (((
                                                   (0U 
                                                    != 
                                                    (0x00ffffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 
                                                                >> 0x00000020U)))) 
                                                   << 5U) 
                                                  | (((IData)(
                                                              ((0U 
                                                                != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
                                                               | (0ULL 
                                                                  != 
                                                                  (0x00000000ffff0000ULL 
                                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)))) 
                                                      << 4U) 
                                                     | (((0U 
                                                          != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)) 
                                                         | ((0U 
                                                             != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                                            | (0U 
                                                               != (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
                                                        << 3U))) 
                                                 | (((IData)(
                                                             (((((((0U 
                                                                    != 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                                                                   | (0U 
                                                                      != 
                                                                      (0xf0U 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xf0U 
                                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xf0U 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
                                                                | (0U 
                                                                   != 
                                                                   (0xf0U 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))) 
                                                               | (0U 
                                                                  != 
                                                                  (0xf0U 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
                                                              | (0U 
                                                                 != 
                                                                 (0xf0U 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))))) 
                                                     << 2U) 
                                                    | ((((((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38) 
                                                               | (0U 
                                                                  != 
                                                                  (0xc4U 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))) 
                                                              | (0U 
                                                                 != 
                                                                 (0xc4U 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))) 
                                                             | (0U 
                                                                != 
                                                                (0xc4U 
                                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))) 
                                                            | (0U 
                                                               != 
                                                               (0xc4U 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
                                                           | (0U 
                                                              != 
                                                              (0xc4U 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))) 
                                                          | (0U 
                                                             != 
                                                             (0xc4U 
                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
                                                         | (0U 
                                                            != 
                                                            (3U 
                                                             & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                                 >> 2U) 
                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6) 
                                                                   >> 6U))))) 
                                                        << 1U) 
                                                       | (1U 
                                                          & ((((((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38) 
                                                                   | (0U 
                                                                      != 
                                                                      (0xa2U 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)))) 
                                                                  | (0U 
                                                                     != 
                                                                     (0xa2U 
                                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)))) 
                                                                 | (0U 
                                                                    != 
                                                                    (0xa2U 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)))) 
                                                                | (0U 
                                                                   != 
                                                                   (0xa2U 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))) 
                                                               | (0U 
                                                                  != 
                                                                  (0xa2U 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))) 
                                                              | (0U 
                                                                 != 
                                                                 (0xa2U 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)))) 
                                                             | (0U 
                                                                != 
                                                                (0xaaU 
                                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))))))));
}
