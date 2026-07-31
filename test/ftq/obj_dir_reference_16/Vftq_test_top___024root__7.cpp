// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

void Vftq_test_top___024root___nba_sequent__TOP__0(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__1(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__3(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___nba_sequent__TOP__4(Vftq_test_top___024root* vlSelf);

void Vftq_test_top___024root___eval_nba(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_nba\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vftq_test_top___024root___nba_sequent__TOP__0(vlSelf);
        Vftq_test_top___024root___nba_sequent__TOP__1(vlSelf);
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_busy_q 
                = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_busy_q;
            vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_end_q 
                = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_end_q;
            vlSelfRef.ftq_test_top__DOT__dut__DOT__commit_ptr_q 
                = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__commit_ptr_q;
            vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_ptr_q 
                = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_ptr_q;
            vlSelfRef.ftq_test_top__DOT__dut__DOT__entry_valid_q 
                = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__entry_valid_q;
            vlSelfRef.ftq_test_top__DOT__dut__DOT__repair_busy_q 
                = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__repair_busy_q;
            vlSelfRef.ftq_test_top__DOT__dut__DOT__enq_ptr_q 
                = vlSelfRef.__Vdly__ftq_test_top__DOT__dut__DOT__enq_ptr_q;
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
                    = (0x00000100U | vlSelfRef.ftq_test_top__DOT__dut__DOT__entries_q
                       [vlSelfRef.__VdlyDim0__ftq_test_top__DOT__dut__DOT__entries_q__v1][11U]);
            }
        }
        Vftq_test_top___024root___nba_sequent__TOP__3(vlSelf);
        Vftq_test_top___024root___nba_sequent__TOP__4(vlSelf);
    }
}

void Vftq_test_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}
