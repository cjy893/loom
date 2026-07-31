// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_comb__TOP__1(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_comb__TOP__1\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_vec 
        = (((((((0x0003fffeU & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                 >> 0x0000000eU) & 
                                (((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                   >> 2U) == (0x3fffffffU 
                                              & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[32U] 
                                                  << 0x0000000eU) 
                                                 | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[31U] 
                                                    >> 0x00000012U)))) 
                                 << 1U))) | (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                              >> 0x0000000eU) 
                                             & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                 >> 2U) 
                                                == 
                                                (0x3fffffffU 
                                                 & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[30U] 
                                                     << 0x0000000fU) 
                                                    | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[29U] 
                                                       >> 0x00000011U)))))) 
               << 6U) | (((0x000ffffeU & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                           >> 0x0000000cU) 
                                          & (((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                               >> 2U) 
                                              == (0x3fffffffU 
                                                  & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[28U] 
                                                      << 0x00000010U) 
                                                     | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[27U] 
                                                        >> 0x00000010U)))) 
                                             << 1U))) 
                          | (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                              >> 0x0000000cU) & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                  >> 2U) 
                                                 == 
                                                 (0x3fffffffU 
                                                  & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[26U] 
                                                      << 0x00000011U) 
                                                     | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[25U] 
                                                        >> 0x0000000fU)))))) 
                         << 4U)) | ((((0x003ffffeU 
                                       & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                           >> 0x0000000aU) 
                                          & (((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                               >> 2U) 
                                              == (0x3fffffffU 
                                                  & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[24U] 
                                                      << 0x00000012U) 
                                                     | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[23U] 
                                                        >> 0x0000000eU)))) 
                                             << 1U))) 
                                      | (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                          >> 0x0000000aU) 
                                         & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                             >> 2U) 
                                            == (0x3fffffffU 
                                                & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[22U] 
                                                    << 0x00000013U) 
                                                   | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[21U] 
                                                      >> 0x0000000dU)))))) 
                                     << 2U) | ((0x00fffffeU 
                                                & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                                    >> 8U) 
                                                   & (((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                        >> 2U) 
                                                       == 
                                                       (0x3fffffffU 
                                                        & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[20U] 
                                                            << 0x00000014U) 
                                                           | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[19U] 
                                                              >> 0x0000000cU)))) 
                                                      << 1U))) 
                                               | (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                                   >> 8U) 
                                                  & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                      >> 2U) 
                                                     == 
                                                     (0x3fffffffU 
                                                      & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[18U] 
                                                          << 0x00000015U) 
                                                         | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[17U] 
                                                            >> 0x0000000bU)))))))) 
            << 8U) | (((((0x03fffffeU & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                          >> 6U) & 
                                         (((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                            >> 2U) 
                                           == (0x3fffffffU 
                                               & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[16U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[15U] 
                                                     >> 0x0000000aU)))) 
                                          << 1U))) 
                         | (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                             >> 6U) & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                        >> 2U) == (0x3fffffffU 
                                                   & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[14U] 
                                                       << 0x00000017U) 
                                                      | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[13U] 
                                                         >> 9U)))))) 
                        << 6U) | (((0x0ffffffeU & (
                                                   ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                                    >> 4U) 
                                                   & (((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                        >> 2U) 
                                                       == 
                                                       (0x3fffffffU 
                                                        & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[12U] 
                                                            << 0x00000018U) 
                                                           | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[11U] 
                                                              >> 8U)))) 
                                                      << 1U))) 
                                   | (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                       >> 4U) & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                  >> 2U) 
                                                 == 
                                                 (0x3fffffffU 
                                                  & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[10U] 
                                                      << 0x00000019U) 
                                                     | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[9U] 
                                                        >> 7U)))))) 
                                  << 4U)) | ((((0x3ffffffeU 
                                                & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                                    >> 2U) 
                                                   & (((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                        >> 2U) 
                                                       == 
                                                       (0x3fffffffU 
                                                        & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[8U] 
                                                            << 0x0000001aU) 
                                                           | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[7U] 
                                                              >> 6U)))) 
                                                      << 1U))) 
                                               | (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                                   >> 2U) 
                                                  & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                      >> 2U) 
                                                     == 
                                                     (0x3fffffffU 
                                                      & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[6U] 
                                                          << 0x0000001bU) 
                                                         | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[5U] 
                                                            >> 5U)))))) 
                                              << 2U) 
                                             | ((0xfffffffeU 
                                                 & ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                                    & (((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                         >> 2U) 
                                                        == 
                                                        (0x3fffffffU 
                                                         & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[4U] 
                                                             << 0x0000001cU) 
                                                            | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[3U] 
                                                               >> 4U)))) 
                                                       << 1U))) 
                                                | ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                                                   & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_pc 
                                                       >> 2U) 
                                                      == 
                                                      (0x3fffffffU 
                                                       & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[2U] 
                                                           << 0x0000001dU) 
                                                          | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries[1U] 
                                                             >> 3U)))))))));
}
