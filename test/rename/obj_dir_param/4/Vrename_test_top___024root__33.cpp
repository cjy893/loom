// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__12(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__12\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec = 0ULL;
    vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
        = (1ULL | vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec);
    if ((0x37U >= vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[1U])) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
            = (vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
               | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[1U])));
    }
    if ((0x37U >= vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[2U])) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
            = (vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
               | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[2U])));
    }
    if ((0x37U >= vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[3U])) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
            = (vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
               | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[3U])));
    }
    if ((0x37U >= vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[4U])) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
            = (vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
               | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[4U])));
    }
    if ((0x37U >= vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[5U])) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
            = (vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
               | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[5U])));
    }
    if ((0x37U >= vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[6U])) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
            = (vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
               | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[6U])));
    }
    if ((0x37U >= vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[7U])) {
        vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
            = (vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec 
               | (0x00ffffffffffffffULL & ((QData)((IData)(1U)) 
                                           << vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q[7U])));
    }
}
