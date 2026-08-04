// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__30(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__30\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*31:0*/ __Vtemp_1;
    // Body
    if ((1U & (~ (IData)(vlSelfRef.dis_ready)))) {
        __Vtemp_1 = (0x0000003fU & (((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
                                      << 1U) | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
                                                >> 0x0000001fU)) 
                                    & (~ ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                           << 0x0000000eU) 
                                          | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                             >> 0x00000012U)))));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
            = ((0x7fffffffU & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U]) 
               | ((((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
                     << 1U) | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U] 
                               >> 0x0000001fU)) & (~ 
                                                   ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                                     << 0x0000000eU) 
                                                    | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                                       >> 0x00000012U)))) 
                  << 0x0000001fU));
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U] 
            = ((0xffffffe0U & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U]) 
               | (__Vtemp_1 >> 1U));
    }
    if ((0U != (0x0000003fU & (((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
                                 >> 2U)) & ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                             << 0x00000014U) 
                                            | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                               >> 0x0000000cU)))))) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next 
            = (1U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next));
    }
    if ((1U & (~ (IData)(vlSelfRef.dis_ready)))) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
            = ((0xffffff03U & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U]) 
               | (0x000000fcU & ((((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
                                    << 0x0000001eU) 
                                   | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U] 
                                      >> 2U)) & (~ 
                                                 ((vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                                   << 0x0000000eU) 
                                                  | (vlSelfRef.rename_test_top__DOT__brupdate[15U] 
                                                     >> 0x00000012U)))) 
                                 << 2U)));
    }
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[0U] 
        = (IData)(((0x00ffffffffffff00ULL & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                   | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[1U] 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
            << 0x00000018U) | (IData)((((0x00ffffffffffff00ULL 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                        | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))) 
                                       >> 0x00000020U)));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[2U] 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
            >> 8U) | ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                               >> 0x00000020U)) << 0x00000018U));
    vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_pick[3U] 
        = ((IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                    >> 0x00000020U)) >> 8U);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = (((
                                                   (0U 
                                                    != 
                                                    (0x00ffffffU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                >> 0x00000020U)))) 
                                                   << 5U) 
                                                  | (((IData)(
                                                              (0ULL 
                                                               != 
                                                               (0x00ff0000ffff0000ULL 
                                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                      << 4U) 
                                                     | ((IData)(
                                                                (0ULL 
                                                                 != 
                                                                 (0x0000ff00ff00ff00ULL 
                                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                        << 3U))) 
                                                 | (((IData)(
                                                             (0ULL 
                                                              != 
                                                              (0x00f0f0f0f0f0f0f0ULL 
                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                     << 2U) 
                                                    | ((2U 
                                                        & ((IData)(
                                                                   ((0ULL 
                                                                     != 
                                                                     (0x00cccccccccccc00ULL 
                                                                      & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                                                                    | (0U 
                                                                       != 
                                                                       (3U 
                                                                        & ((IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                                >> 6U)) 
                                                                           | (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                                                >> 2U))))))) 
                                                           << 1U)) 
                                                       | (IData)(
                                                                 (0ULL 
                                                                  != 
                                                                  (0x00aaaaaaaaaaaaaaULL 
                                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))));
}
