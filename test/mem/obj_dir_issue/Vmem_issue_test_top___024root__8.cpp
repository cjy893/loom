// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__9(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___ico_comb__TOP__9\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<14>/*418:0*/ mem_issue_test_top__DOT__issue_dut__DOT__selected_uop;
    VL_ZERO_W(419, mem_issue_test_top__DOT__issue_dut__DOT__selected_uop);
    // Body
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[0U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[0U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[1U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[1U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[2U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[2U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[3U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[3U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[4U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[4U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[5U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[5U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[6U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[6U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[7U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[7U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[8U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[8U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[9U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[9U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[10U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[10U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[11U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[11U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[12U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[12U];
    mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[13U] 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[13U];
    vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec 
        = (0U != (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant));
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[0U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[0U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[1U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[1U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[2U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[2U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[3U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[3U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[4U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[4U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[5U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[6U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[6U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[7U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[8U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[9U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[9U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[10U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[10U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[11U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[11U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[12U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[12U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[13U] 
        = mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[13U];
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
        = ((0x7fffffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U]) 
           | ((((mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[8U] 
                 << 1U) | (mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[7U] 
                           >> 0x0000001fU)) & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                   << 0x0000000eU) 
                                                  | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                                     >> 0x00000012U)))) 
              << 0x0000001fU));
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
        = ((0xffffffe0U & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U]) 
           | (0x0000001fU & ((((mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[8U] 
                                << 1U) | (mem_issue_test_top__DOT__issue_dut__DOT__selected_uop[7U] 
                                          >> 0x0000001fU)) 
                              & (~ ((vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                     << 0x0000000eU) 
                                    | (vlSelfRef.mem_issue_test_top__DOT__brupdate[15U] 
                                       >> 0x00000012U)))) 
                             >> 1U)));
    vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
        = ((0xffcfffffU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U]) 
           | (((0U != (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen)) 
               << 0x00000015U) | ((0U != (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen)) 
                                  << 0x00000014U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete 
        = ((0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete)) 
           | (1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                     & ((0x00100000U != (0x00120000U 
                                         & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U])) 
                        | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen))) 
                    & ((0x00200000U != (0x00210000U 
                                        & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[8U])) 
                       | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen)))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete 
        = ((0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete)) 
           | (2U & (((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                       >> 1U) & ((0x00800000U != (0x00900000U 
                                                  & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U])) 
                                 | ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen) 
                                    >> 1U))) & ((0x01000000U 
                                                 != 
                                                 (0x01080000U 
                                                  & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[21U])) 
                                                | ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen) 
                                                   >> 1U))) 
                    << 1U)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete 
        = ((0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete)) 
           | (4U & (((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                       >> 2U) & ((0x04000000U != (0x04800000U 
                                                  & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U])) 
                                 | ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen) 
                                    >> 2U))) & ((0x08000000U 
                                                 != 
                                                 (0x08400000U 
                                                  & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[34U])) 
                                                | ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen) 
                                                   >> 2U))) 
                    << 2U)));
}
