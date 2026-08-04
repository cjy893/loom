// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___stl_sequent__TOP__9(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___stl_sequent__TOP__9\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire 
        = ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire)) 
           | (1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                     & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                    & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed)))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire 
        = ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire)) 
           | (2U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                     & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                    & ((~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed) 
                           >> 1U)) << 1U))));
    if ((1U & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor)))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfffeU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((3U != (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfffdU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((5U != (5U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfffbU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((9U != (9U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xfff7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
    if ((IData)((3U != (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor))))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
            = (0xffefU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n));
    }
}
