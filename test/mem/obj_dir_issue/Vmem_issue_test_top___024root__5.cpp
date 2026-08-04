// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__6(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__6\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | (1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready) 
                    | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed 
        = ((0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
                                       << 0x0000001eU) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
                                         >> 2U)) & 
                                     ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         >> 0x0000000cU))))) 
              << 1U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready 
        = ((0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready)) 
           | ((IData)((((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                          >> 1U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                       >> 1U))) & (~ 
                                                   (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                                    >> 0x00000018U))) 
                       & (0x00800000U == (0x00900000U 
                                          & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U])))) 
              << 1U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready 
        = ((0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready)) 
           | ((IData)((((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                          >> 1U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                       >> 1U))) & (~ 
                                                   (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                                                    >> 0x00000017U))) 
                       & (0x01000000U == (0x01080000U 
                                          & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U])))) 
              << 1U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | (2U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready) 
                    | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed 
        = ((0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)) 
           | ((0U != (0x0000003fU & (((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
                                       << 0x0000001bU) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
                                         >> 5U)) & 
                                     ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         >> 0x0000000cU))))) 
              << 2U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready 
        = ((0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready)) 
           | ((IData)((((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                          >> 2U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                       >> 2U))) & (~ 
                                                   (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                                    >> 0x0000001bU))) 
                       & (0x04000000U == (0x04800000U 
                                          & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U])))) 
              << 2U));
}
