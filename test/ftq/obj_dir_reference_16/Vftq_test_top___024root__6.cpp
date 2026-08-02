// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

void Vftq_test_top___024root___nba_sequent__TOP__2(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___nba_sequent__TOP__2\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q 
        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q;
    vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_end_q 
        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q;
    vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_busy_q 
        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q;
    vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q 
        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q;
    vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q 
        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q;
    vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_busy_q 
        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q;
    vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q 
        = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q;
}

void Vftq_test_top___024root___nba_sequent__TOP__3(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___nba_sequent__TOP__3\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v0) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0][11U] 
            = ((0x00001fffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0][11U]) 
               | (vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v0 
                  << 0x0000000dU));
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0][12U] 
            = ((0xffffe000U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v0][12U]) 
               | (vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v0 
                  >> 0x00000013U));
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v1) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v1][11U] 
            = ((0xffffe1ffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v1][11U]) 
               | ((IData)(vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v1) 
                  << 9U));
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v2) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v2][11U] 
            = (0x00000100U | vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
               [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v2][11U]);
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v3) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v3][11U] 
            = ((0xffffff3fU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v3][11U]) 
               | ((IData)(vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v3) 
                  << 6U));
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v4) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v4][11U] 
            = ((0xffffffc7U & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v4][11U]) 
               | ((IData)(vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v4) 
                  << 3U));
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v5) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v5][10U] 
            = ((0x7fffffffU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v5][10U]) 
               | ((IData)(vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v5) 
                  << 0x0000001fU));
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v6) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v6][10U] 
            = (0x40000000U | vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
               [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v6][10U]);
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v7) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v7][11U] 
            = ((0xfffffffbU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v7][11U]) 
               | ((IData)(vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v7) 
                  << 2U));
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v8) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v8][11U] 
            = ((0xfffffffdU & vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v8][11U]) 
               | ((IData)(vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v8) 
                  << 1U));
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v9) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v9][11U] 
            = (1U | vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
               [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v9][11U]);
    }
    if (vlSelfRef.__VdlySet__ftq_test_top__DOT__dut__DOT__entries_q__v10) {
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][0U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[0U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][1U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[1U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][2U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[2U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][3U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[3U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][4U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[4U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][5U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[5U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][6U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[6U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][7U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[7U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][8U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[8U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][9U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[9U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][10U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[10U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][11U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[11U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][12U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[12U];
        vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q[vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v10][13U] 
            = vlSelfRef.__VdlyVal__ftq_test_top__DOT__dut__DOT__entries_q__v10[13U];
    }
    vlSelfRef.bpd_update_valid = vlSelfRef.ftq_test_top__DOT__dut__DOT__bpd_update_valid_q;
}
