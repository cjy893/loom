// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__3(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__3\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if ((1U & (~ (IData)(vlSelfRef.flush_pipeline)))) {
            if (((IData)(vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec) 
                 & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed)))) {
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_imm 
                    = vlSelfRef.imm_data;
            }
        }
    }
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
        = (0x0000000fU & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid)));
    vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 0U;
    if ((1U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec 
            = (1U | (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot 
            = (0x0cU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
               & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                  >> 1U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec 
            = (1U | (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot 
            = (1U | (0x0cU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
               & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                  >> 2U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec 
            = (1U | (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot 
            = (2U | (0x0cU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if (((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
         & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
            >> 3U))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec 
            = (1U | (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot 
            = (3U | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
}
