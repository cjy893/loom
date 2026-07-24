// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__6(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__6\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready) 
                >> 2U) & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[0U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[26U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[25U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[1U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[27U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[26U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[2U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[28U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[27U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[3U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[28U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[4U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[29U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[31U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[30U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[6U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[32U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[31U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[32U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[9U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[35U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[10U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[36U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[35U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[11U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[37U] 
                << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[36U] 
                                   >> 0x00000014U));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[12U] 
            = (0x03ffffffU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[38U] 
                               << 0x0000000cU) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[37U] 
                                                  >> 0x00000014U)));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = ((0xf0ffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U]) 
               | (0x0f000000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                    << 0x00000014U) 
                                   | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[33U] 
                                      >> 0x0000000cU)) 
                                  & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         << 0x00000019U) 
                                        | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                           >> 7U)))) 
                                 << 0x00000018U)));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant 
            = (4U | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used = 1U;
    }
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)) 
           | ((0U != (0x0000000fU & (((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                       << 0x0000001aU) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                         >> 6U)) & 
                                     ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                       << 0x0000001dU) 
                                      | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                         >> 3U))))) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)) 
           | ((IData)((((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                          >> 3U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed) 
                                       >> 3U))) & (0U 
                                                   == 
                                                   (0xc0000000U 
                                                    & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U]))) 
                       & (~ vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U]))) 
              << 3U));
    if ((IData)((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready) 
                  >> 3U) & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used))))) {
        vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec = 1U;
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[0U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[39U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[38U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[1U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[40U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[39U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[2U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[40U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[3U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[41U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[4U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[42U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[44U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[43U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[6U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[45U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[44U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[45U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[9U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[48U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[10U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[49U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[48U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[11U] 
            = ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[50U] 
                << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[49U] 
                                   >> 0x0000000eU));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[12U] 
            = (0x03ffffffU & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[51U] 
                               << 0x00000012U) | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[50U] 
                                                  >> 0x0000000eU)));
        vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
            = ((0xf0ffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U]) 
               | (0x0f000000U & ((((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                    << 0x0000001aU) 
                                   | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[46U] 
                                      >> 6U)) & (~ 
                                                 ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                   << 0x00000019U) 
                                                  | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     >> 7U)))) 
                                 << 0x00000018U)));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant 
            = (8U | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant));
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used = 1U;
    }
}
