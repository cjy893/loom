// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

extern const VlWide<53>/*1695:0*/ Vmem_issue_test_top__ConstPool__CONST_hbcab5543_0;
extern const VlWide<14>/*447:0*/ Vmem_issue_test_top__ConstPool__CONST_h2f12751c_0;

void Vmem_issue_test_top___024root___nba_sequent__TOP__6(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__6\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready = 0U;
    VL_ASSIGN_W(1676, vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms, Vmem_issue_test_top__ConstPool__CONST_hbcab5543_0);
    VL_ASSIGN_W(419, vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits, Vmem_issue_test_top__ConstPool__CONST_h2f12751c_0);
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed 
        = ((0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)) 
           | (0U != (0x0000003fU & (((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U] 
                                      << 1U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[7U] 
                                                >> 0x0000001fU)) 
                                    & ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                        << 0x00000014U) 
                                       | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                          >> 0x0000000cU))))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready 
        = ((0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready)) 
           | ((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed))) 
               & (~ (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                     >> 0x00000015U))) & (0x00100000U 
                                          == (0x00120000U 
                                              & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U]))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready 
        = ((0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready)) 
           | ((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed))) 
               & (~ (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[3U] 
                     >> 0x00000014U))) & (0x00200000U 
                                          == (0x00210000U 
                                              & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U]))));
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
}
