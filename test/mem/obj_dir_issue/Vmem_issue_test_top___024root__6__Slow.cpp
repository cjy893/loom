// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___stl_sequent__TOP__8(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___stl_sequent__TOP__8\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete)) 
           | ((IData)((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                        >> 3U) & (((0x00020000U != 
                                    (0x00024000U & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U])) 
                                   | ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen) 
                                      >> 3U)) & ((0x00040000U 
                                                  != 
                                                  (0x00042000U 
                                                   & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop[47U])) 
                                                 | ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen) 
                                                    >> 3U))))) 
              << 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = (1U 
                                                & (~ 
                                                   (((1U 
                                                      == 
                                                      (3U 
                                                       & (vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[2U] 
                                                          >> 4U)))
                                                      ? vlSelfRef.agen_addr
                                                      : (IData)(
                                                                ((0x00000020U 
                                                                  == 
                                                                  (0x00000030U 
                                                                   & vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_uop[2U])) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & vlSelfRef.agen_addr))))) 
                                                    & (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_agen_valid))));
    vlSelfRef.iss_valid = vlSelfRef.mem_issue_test_top__DOT__iss_valid_vec;
    vlSelfRef.iss_rob_idx = (0x0000003fU & vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[5U]);
    vlSelfRef.iss_use_agen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                    >> 0x00000011U));
    vlSelfRef.iss_use_dgen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                    >> 0x00000012U));
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed 
        = (0U != ((IData)(vlSelfRef.mispredict_mask) 
                  & ((vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                      << 2U) | (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                                >> 0x0000001eU))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire = 0U;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_q;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__survivor 
        = (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
            & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete))) 
           & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire 
        = ((2U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__alloc_fire)) 
           | (1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                     & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                    & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed)))));
}
