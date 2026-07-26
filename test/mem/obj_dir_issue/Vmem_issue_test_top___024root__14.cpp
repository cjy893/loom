// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__7(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__7\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available;
    mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available = 0;
    // Body
    mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
        = (0x0000000fU & (((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid)) 
                           | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant)) 
                          | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)));
    vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 0U;
    if ((1U & (IData)(mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 0U;
        mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0eU & (IData)(mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
               & ((IData)(mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                  >> 1U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 1U;
        mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0dU & (IData)(mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if ((1U & ((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
               & ((IData)(mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
                  >> 2U)))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 2U;
        mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (0x0bU & (IData)(mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    if (((~ (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
         & ((IData)(mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available) 
            >> 3U))) {
        vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot = 3U;
        mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available 
            = (7U & (IData)(mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available));
    }
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed 
        = ((IData)(vlSelfRef.br_mispredict) & (0U != 
                                               ((IData)(vlSelfRef.mispredict_mask) 
                                                & ((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                                    << 7U) 
                                                   | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_uop[7U] 
                                                      >> 0x00000019U)))));
    vlSelfRef.iss_valid = vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec;
    vlSelfRef.dis_ready = vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec;
}
