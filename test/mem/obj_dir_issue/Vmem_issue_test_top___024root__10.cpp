// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__12(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__12\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((IData)((3U != (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xffefU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((1U & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                  >> 1U)))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xffdfU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((6U != (6U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xffbfU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((0x0aU != (0x0aU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xff7fU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((5U != (5U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfeffU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((6U != (6U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfdffU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((1U & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                  >> 2U)))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfbffU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
}

void Vmem_issue_test_top___024root___ico_comb__TOP__13(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__13\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((IData)((0x0cU != (0x0cU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xf7ffU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((9U != (9U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xefffU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((0x0aU != (0x0aU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xdfffU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((0x0cU != (0x0cU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xbfffU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((1U & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                  >> 3U)))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0x7fffU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (((~ ((IData)(1U) << (0x0000000cU & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                   << 2U)))) 
                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n)) 
               | (0x0000ffffU & ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor)) 
                                 << (0x0000000cU & 
                                     ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                      << 2U)))));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (((~ ((IData)(1U) << (0x0000000fU & ((IData)(1U) 
                                                   + 
                                                   (0x0000000cU 
                                                    & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                       << 2U)))))) 
                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n)) 
               | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                                        >> 1U)) << 
                                 (0x0000000fU & ((IData)(1U) 
                                                 + 
                                                 (0x0000000cU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                     << 2U)))))));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (0x0000000fU & ((IData)(4U) 
                                                  + 
                                                  (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (((~ ((IData)(1U) << (0x0000000fU & ((IData)(2U) 
                                                   + 
                                                   (0x0000000cU 
                                                    & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                       << 2U)))))) 
                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n)) 
               | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                                        >> 2U)) << 
                                 (0x0000000fU & ((IData)(2U) 
                                                 + 
                                                 (0x0000000cU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                     << 2U)))))));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (0x0000000fU & ((IData)(8U) 
                                                  + 
                                                  (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (((~ ((IData)(1U) << (0x0000000fU & ((IData)(3U) 
                                                   + 
                                                   (0x0000000cU 
                                                    & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                       << 2U)))))) 
                & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n)) 
               | (0x0000ffffU & ((1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor) 
                                        >> 3U)) << 
                                 (0x0000000fU & ((IData)(3U) 
                                                 + 
                                                 (0x0000000cU 
                                                  & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                     << 2U)))))));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (0x0000000fU & ((IData)(0x0cU) 
                                                  + 
                                                  (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = ((~ ((IData)(1U) << (0x0000000fU & ((0x0000000cU 
                                                   & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                      << 2U)) 
                                                  + 
                                                  (3U 
                                                   & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))))) 
               & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
}
