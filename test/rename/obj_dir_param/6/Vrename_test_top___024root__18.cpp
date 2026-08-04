// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___ico_comb__TOP__20(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__20\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask = 0ULL;
    if ((0x00000100U & vlSelfRef.rename_test_top__DOT__brupdate[2U])) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask 
            = ((5U >= (7U & (vlSelfRef.rename_test_top__DOT__brupdate[10U] 
                             >> 5U))) ? vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q
               [(7U & (vlSelfRef.rename_test_top__DOT__brupdate[10U] 
                       >> 5U))] : 0ULL);
    }
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec_next 
        = (((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
             & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all)) 
            | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__commit_free_mask) 
           | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask);
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec_next 
        = (0x00fffffffffffffeULL & vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec_next);
}

void Vrename_test_top___024root___ico_comb__TOP__21(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__21\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = (0x0000003fffffffffULL 
                                                 & ((1U 
                                                     & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33) 
                                                                       & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25)))))) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(
                                                                       ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_34) 
                                                                          << 0x0000001aU) 
                                                                         | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                                            << 0x00000014U)) 
                                                                        | ((0x000ffc00U 
                                                                            & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[3U] 
                                                                               >> 0x0000000cU)) 
                                                                           | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x06000000U 
                                                                                & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[0U])) 
                                                                                & (((~ 
                                                                                ((IData)(vlSelfRef.wakeup_valid) 
                                                                                & ((IData)(vlSelfRef.wakeup_pdst) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)))))) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))))))) 
                                                                               << 9U) 
                                                                              | (((IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x01800000U 
                                                                                & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[0U])) 
                                                                                & ((~ 
                                                                                ((IData)(vlSelfRef.wakeup_valid) 
                                                                                & ((IData)(vlSelfRef.wakeup_pdst) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))))) 
                                                                                & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))) 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))))) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                                & ((0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))) 
                                                                                & ((0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_44)) 
                                                                                == 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))))) 
                                                                                | (((0x37U 
                                                                                >= 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))) 
                                                                                && (1U 
                                                                                & (IData)(
                                                                                (vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U))))))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))))))))) 
                                                                                << 8U) 
                                                                                | ((0x000000c0U 
                                                                                & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                                                                                >> 0x0000000aU)))
                                                                                 ? 0U
                                                                                 : vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_q
                                                                                [
                                                                                (0x0000001fU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 
                                                                                >> 0x0000000aU))])))))))))
                                                     : 
                                                    (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[4U])) 
                                                      << 0x00000034U) 
                                                     | (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[4U])) 
                                                         << 0x00000014U) 
                                                        | ((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[3U])) 
                                                           >> 0x0000000cU)))));
}
