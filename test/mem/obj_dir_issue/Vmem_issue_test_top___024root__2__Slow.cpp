// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___stl_sequent__TOP__1(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___stl_sequent__TOP__1\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed 
        = ((((IData)(vlSelfRef.dis_valid_1) & (0U != 
                                               ((IData)(vlSelfRef.mispredict_mask) 
                                                & (IData)(vlSelfRef.dis_br_mask_1)))) 
            << 1U) | ((IData)(vlSelfRef.dis_valid) 
                      & (0U != ((IData)(vlSelfRef.mispredict_mask) 
                                & (IData)(vlSelfRef.dis_br_mask)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((~ 
                                                 (0U 
                                                  != 
                                                  (((vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[8U] 
                                                     << 1U) 
                                                    | (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[7U] 
                                                       >> 0x0000001fU)) 
                                                   & (IData)(vlSelfRef.mispredict_mask)))) 
                                                & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_valid));
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
}
