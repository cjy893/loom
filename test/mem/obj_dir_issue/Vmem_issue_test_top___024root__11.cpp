// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__14(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__14\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (((~ ((IData)(1U) << (0x0000000cU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n)) 
               | (0x0000ffffU & ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor)) 
                                 << (0x0000000cU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (3U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                         >> 2U)))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (((~ ((IData)(1U) << (0x0000000fU & ((IData)(1U) 
                                                   + 
                                                   (0x0000000cU 
                                                    & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))) 
                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n)) 
               | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                                        >> 1U)) << 
                                 (0x0000000fU & ((IData)(1U) 
                                                 + 
                                                 (0x0000000cU 
                                                  & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (0x0000000fU & ((IData)(4U) 
                                                  + 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U)))))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (((~ ((IData)(1U) << (0x0000000fU & ((IData)(2U) 
                                                   + 
                                                   (0x0000000cU 
                                                    & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))) 
                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n)) 
               | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                                        >> 2U)) << 
                                 (0x0000000fU & ((IData)(2U) 
                                                 + 
                                                 (0x0000000cU 
                                                  & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (0x0000000fU & ((IData)(8U) 
                                                  + 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U)))))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (((~ ((IData)(1U) << (0x0000000fU & ((IData)(3U) 
                                                   + 
                                                   (0x0000000cU 
                                                    & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))) 
                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n)) 
               | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                                        >> 3U)) << 
                                 (0x0000000fU & ((IData)(3U) 
                                                 + 
                                                 (0x0000000cU 
                                                  & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (0x0000000fU & ((IData)(0x0cU) 
                                                  + 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U)))))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
                = ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & 
                                      ((0x0000000cU 
                                        & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)) 
                                       + (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))));
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
                = ((~ ((IData)(1U) << (0x0000000fU 
                                       & ((0x0000000cU 
                                           & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                              << 2U)) 
                                          + (3U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                   >> 2U)))))) 
                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        }
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (0x0000000fU & ((0x0000000cU 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)) 
                                                  + 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      >> 2U)))))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
}
