// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__1(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__1\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ (IData)(vlSelfRef.rst_n)) | (IData)(vlSelfRef.flush_pipeline)))) {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_q = 0U;
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid = 0U;
    } else {
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_q 
            = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_n;
        if ((1U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete) 
                   | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid 
                = (0x0eU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid));
        }
        if ((2U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete) 
                   | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid 
                = (0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid));
        }
        if ((4U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete) 
                   | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid 
                = (0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid));
        }
        if ((8U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_complete) 
                   | (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_killed)))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid 
                = (7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid));
        }
        if ((1U & (((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                    & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                   & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed))))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid 
                = ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                   | (0x0fU & ((IData)(1U) << (3U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot)))));
        }
        if ((1U & ((((IData)(vlSelfRef.mem_issue_test_top__DOT__dis_valid_vec) 
                     & (IData)(vlSelfRef.mem_issue_test_top__DOT__dis_ready_vec)) 
                    >> 1U) & (~ ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_br_killed) 
                                 >> 1U))))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid 
                = ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_valid) 
                   | (0x0fU & ((IData)(1U) << (3U & 
                                               ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__dis_slot) 
                                                >> 2U)))));
        }
    }
    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_valid 
        = ((IData)(vlSelfRef.rst_n) && ((1U & (~ (IData)(vlSelfRef.flush_pipeline))) 
                                        && ((IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_valid) 
                                            & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed)))));
    if (vlSelfRef.rst_n) {
        if ((1U & (~ (IData)(vlSelfRef.flush_pipeline)))) {
            if (((IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_valid) 
                 & (~ (IData)(vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_br_killed)))) {
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_src2 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_src2;
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_src1 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_src1;
                vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__exe_imm 
                    = vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__rrd_imm;
            }
        }
    }
}
