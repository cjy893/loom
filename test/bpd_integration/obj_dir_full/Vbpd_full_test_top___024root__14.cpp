// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

void Vbpd_full_test_top___024root___nba_sequent__TOP__7(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__7\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5 = 0U;
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__do_allocate) {
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0 
                = (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                   >> 7U);
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0 
                = ((IData)(0x00000023U) + (0x0000007fU 
                                           & ((IData)(0x0000003cU) 
                                              * vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                                              [(0x0000001fU 
                                                & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                   >> 2U))])));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entries__v0 = 1U;
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1 
                = ((vlSelfRef.bpd_full_test_top__DOT__update_packed[4U] 
                    << 8U) | (vlSelfRef.bpd_full_test_top__DOT__update_packed[3U] 
                              >> 0x00000018U));
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1 
                = ((IData)(3U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                      >> 2U))])));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v1 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2 
                = (1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                         >> 0x0000001aU));
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2 
                = ((IData)(2U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                      >> 2U))])));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v2 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3 
                = (1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                         >> 0x00000019U));
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3 
                = ((IData)(1U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                      >> 2U))])));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v3 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4 
                = (1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                         >> 0x00000018U));
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4 
                = (0x0000007fU & ((IData)(0x0000003cU) 
                                  * vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__repl_ptr
                                  [(0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                   >> 2U))]));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v4 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
        } else if ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) {
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5 
                = ((vlSelfRef.bpd_full_test_top__DOT__update_packed[4U] 
                    << 8U) | (vlSelfRef.bpd_full_test_top__DOT__update_packed[3U] 
                              >> 0x00000018U));
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5 
                = ((IData)(3U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__upd_hit_way))));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlySet__bpd_full_test_top__DOT__btb_inst__DOT__entries__v5 = 1U;
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6 
                = (1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                         >> 0x0000001aU));
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6 
                = ((IData)(2U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__upd_hit_way))));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v6 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7 
                = (1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                         >> 0x00000019U));
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7 
                = ((IData)(1U) + (0x0000007fU & ((IData)(0x0000003cU) 
                                                 * (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__upd_hit_way))));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v7 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
            vlSelfRef.__VdlyVal__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8 
                = (1U & (vlSelfRef.bpd_full_test_top__DOT__update_packed[7U] 
                         >> 0x00000018U));
            vlSelfRef.__VdlyLsb__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8 
                = (0x0000007fU & ((IData)(0x0000003cU) 
                                  * (IData)(vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__upd_hit_way)));
            vlSelfRef.__VdlyDim0__bpd_full_test_top__DOT__btb_inst__DOT__entries__v8 
                = (0x0000001fU & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                  >> 2U));
        }
    }
}
