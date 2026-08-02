// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

VL_ATTR_COLD void Vftq_test_top___024root___stl_sequent__TOP__1(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___stl_sequent__TOP__1\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_pc_lob_d 
        = ((0x37U & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_pc_lob_d)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelfRef.brupdate_b2_pc_lob)) 
                    ^ (0x000007f8U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                      [vlSelfRef.brupdate_b2_ftq_idx][9U] 
                                      >> 0x00000015U)))));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d 
        = (3U & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_pc_lob_d) 
                 >> 2U));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_br_d 
        = (1U == (IData)(vlSelfRef.brupdate_b2_cfi_type));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_b_bl_d 
        = (2U == (IData)(vlSelfRef.brupdate_b2_cfi_type));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_jirl_d 
        = (3U == (IData)(vlSelfRef.brupdate_b2_cfi_type));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_call_d 
        = ((((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
              [vlSelfRef.brupdate_b2_ftq_idx][11U] 
              >> 8U) & ((3U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                               [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                               >> 6U)) == (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) 
            & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
               [vlSelfRef.brupdate_b2_ftq_idx][11U] 
               >> 2U)) & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_b_bl_d) 
                          | (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_jirl_d)));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_ret_d 
        = ((((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
              [vlSelfRef.brupdate_b2_ftq_idx][11U] 
              >> 8U) & ((3U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                               [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                               >> 6U)) == (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) 
            & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
               [vlSelfRef.brupdate_b2_ftq_idx][11U] 
               >> 1U)) & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_jirl_d));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d = 0U;
    if (VL_LTES_III(32, 0U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
            = ((0x0eU & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
               | (1U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                        >> 9U)));
    }
    if (VL_LTES_III(32, 1U, (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d 
            = ((0x0dU & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_br_mask_d)) 
               | (2U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                        [vlSelfRef.brupdate_b2_ftq_idx][11U] 
                        >> 9U)));
    }
}
