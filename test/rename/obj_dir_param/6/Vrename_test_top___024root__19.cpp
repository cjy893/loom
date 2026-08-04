// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ico_comb__TOP__22(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__22\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_21 = (0x0000003fffffffffULL 
                                                 & ((2U 
                                                     & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26))) 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)))) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(
                                                                       ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36) 
                                                                          << 0x0000001aU) 
                                                                         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_35) 
                                                                            << 0x00000014U)) 
                                                                        | ((0x000ffc00U 
                                                                            & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[17U] 
                                                                                << 0x00000011U) 
                                                                               | (0x0001fc00U 
                                                                                & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000fU)))) 
                                                                           | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x30000000U 
                                                                                & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[13U])) 
                                                                                & ((~ 
                                                                                ((IData)(vlSelfRef.wakeup_valid) 
                                                                                & ((IData)(vlSelfRef.wakeup_pdst) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39))))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39))))))))) 
                                                                               << 9U) 
                                                                              | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x0c000000U 
                                                                                & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[13U])) 
                                                                                & ((~ 
                                                                                ((IData)(vlSelfRef.wakeup_valid) 
                                                                                & ((IData)(vlSelfRef.wakeup_pdst) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                                >> 6U))))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                                >> 6U))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                                >> 6U))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                                >> 6U))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                                >> 6U))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                                >> 6U))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                                >> 6U)))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                                >> 6U))))))))) 
                                                                                << 8U) 
                                                                                | ((0x000000c0U 
                                                                                & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[16U] 
                                                                                >> 0x0000000fU)) 
                                                                                | (0x0000003fU 
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
                                                                                >> 0x0000000aU)))))
                                                                                 ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)
                                                                                 : 
                                                                                ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27) 
                                                                                >> 0x0000000aU))])))))))))))
                                                     : 
                                                    (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[17U])) 
                                                      << 0x00000031U) 
                                                     | (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[17U])) 
                                                         << 0x00000011U) 
                                                        | ((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[16U])) 
                                                           >> 0x0000000fU)))));
}
