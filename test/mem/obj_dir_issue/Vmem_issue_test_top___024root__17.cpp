// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__4(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__4\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec) 
                   >> 1U)) & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec 
            = (2U | (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot 
            = (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec) 
                   >> 1U)) & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                              >> 1U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec 
            = (2U | (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot 
            = (4U | (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec) 
                   >> 1U)) & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                              >> 2U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec 
            = (2U | (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot 
            = (8U | (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if ((IData)(((~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec) 
                     >> 1U)) & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                                >> 3U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec 
            = (2U | (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot 
            = (0x0000000cU | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    vlSelfRef.agen_rob_idx = (0x0000003fU & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[5U]);
}
