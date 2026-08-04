// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__8(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__8\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | (4U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready) 
                    | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                                       << 0x00000018U) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                                         >> 8U)) & 
                                     ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         >> 0x0000000cU))))) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready)) 
           | ((IData)((((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                          >> 3U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                       >> 3U))) & (~ 
                                                   (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                                    >> 0x0000001eU))) 
                       & (0x20000000U == (0x24000000U 
                                          & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U])))) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready)) 
           | ((IData)((((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                          >> 3U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                       >> 3U))) & (~ 
                                                   (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                                    >> 0x0000001dU))) 
                       & (0x40000000U == (0x42000000U 
                                          & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U])))) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | (8U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready) 
                    | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready 
        = ((0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready)) 
           | (1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready) 
                    & (~ (0U != ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_q) 
                                 & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)))))));
}
