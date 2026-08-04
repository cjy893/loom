// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__7(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__7\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready 
        = ((0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready)) 
           | ((IData)((((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                          >> 2U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                       >> 2U))) & (~ 
                                                   (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                                    >> 0x0000001aU))) 
                       & (0x08000000U == (0x08400000U 
                                          & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U])))) 
              << 2U));
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
}
