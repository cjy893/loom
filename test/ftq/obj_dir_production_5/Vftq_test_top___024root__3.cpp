// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

void Vftq_test_top___024root___ico_comb__TOP__1(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___ico_comb__TOP__1\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ ftq_test_top__DOT__dut__DOT__resolved_pc_lob_d;
    ftq_test_top__DOT__dut__DOT__resolved_pc_lob_d = 0;
    // Body
    ftq_test_top__DOT__dut__DOT__resolved_pc_lob_d 
        = (0x0000003fU & ((IData)(vlSelfRef.brupdate_b2_pc_lob) 
                          - ((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                              [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                                 ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                                 : 0U)][12U] << 0x00000013U) 
                             | (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                                   ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                                   : 0U)][12U] >> 0x0000000dU))));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d 
        = (3U & ((IData)(ftq_test_top__DOT__dut__DOT__resolved_pc_lob_d) 
                 >> 2U));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_br_d 
        = (1U == (IData)(vlSelfRef.brupdate_b2_cfi_type));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_b_bl_d 
        = (2U == (IData)(vlSelfRef.brupdate_b2_cfi_type));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_jirl_d 
        = (3U == (IData)(vlSelfRef.brupdate_b2_cfi_type));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_call_d 
        = ((((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
              [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                 ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                 : 0U)][11U] >> 8U) & ((3U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [((4U 
                                                 >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                                                 ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                                                 : 0U)][11U] 
                                              >> 6U)) 
                                       == (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) 
            & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
               [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                  ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                  : 0U)][11U] >> 2U)) & ((IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_b_bl_d) 
                                         | (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_jirl_d)));
    vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_ret_d 
        = ((((vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
              [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                 ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                 : 0U)][11U] >> 8U) & ((3U & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                                              [((4U 
                                                 >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                                                 ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                                                 : 0U)][11U] 
                                              >> 6U)) 
                                       == (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_idx_d))) 
            & (vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
               [((4U >= (IData)(vlSelfRef.brupdate_b2_ftq_idx))
                  ? (IData)(vlSelfRef.brupdate_b2_ftq_idx)
                  : 0U)][11U] >> 1U)) & (IData)(vlSelfRef.ftq_test_top__DOT__dut__DOT__resolved_cfi_is_jirl_d));
}
