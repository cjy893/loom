// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__5(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__5\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                         >> 1U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                      >> 1U))) & (0U 
                                                  == 
                                                  (0x00001c00U 
                                                   & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U])))) 
              << 1U));
    if ((1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready) 
                >> 1U) & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[0U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[13U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[12U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[1U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[14U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[13U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[2U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[15U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[14U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[3U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[15U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[4U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[16U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[18U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[17U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[6U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[19U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[18U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[19U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[9U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[22U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[10U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[23U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[22U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[11U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[24U] 
                << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[23U] 
                          >> 0x0000001aU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[12U] 
            = (0x03ffffffU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[25U] 
                               << 6U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[24U] 
                                         >> 0x0000001aU)));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = ((0xf0ffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U]) 
               | (0x0f000000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                                    << 0x0000000eU) 
                                   | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[20U] 
                                      >> 0x00000012U)) 
                                  & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 7U)))) 
                                 << 0x00000018U)));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant 
            = (2U | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed 
        = ((0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                       << 0x00000014U) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                         >> 0x0000000cU)) 
                                     & ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x0000001dU) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 3U))))) 
              << 2U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | ((IData)(((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                         >> 2U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                      >> 2U))) & (0U 
                                                  == 
                                                  (0x00000070U 
                                                   & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U])))) 
              << 2U));
}
