// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

void Vftq_test_top___024root___ico_comb__TOP__2(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___ico_comb__TOP__2\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d = 0U;
    if (VL_LTES_III(32, 0U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
            = ((0x0eU & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
               | (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                           ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                           : 0U)][11U] >> 9U)));
    }
    if (VL_LTES_III(32, 1U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
            = ((0x0dU & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
               | (2U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                           ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                           : 0U)][11U] >> 9U)));
    }
    if (VL_LTES_III(32, 2U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
            = ((0x0bU & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
               | (4U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                           ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                           : 0U)][11U] >> 9U)));
    }
    if (VL_LTES_III(32, 3U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
            = ((7U & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
               | (8U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                           ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                           : 0U)][11U] >> 9U)));
    }
    if (vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_br_d) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
            = ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d) 
               | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))));
    }
}
