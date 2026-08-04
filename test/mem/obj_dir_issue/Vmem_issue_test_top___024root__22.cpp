// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___nba_sequent__TOP__9(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___nba_sequent__TOP__9\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b;
    mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b = 0;
    // Body
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready 
        = ((0x0dU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready)) 
           | (2U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready) 
                    & ((~ (0U != (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_q) 
                                   >> 4U) & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)))) 
                       << 1U))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready 
        = ((0x0bU & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready)) 
           | (4U & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready) 
                    & ((~ (0U != (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_q) 
                                   >> 8U) & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)))) 
                       << 2U))));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready 
        = ((7U & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready)) 
           | ((IData)((((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready) 
                        >> 3U) & (~ (0U != (((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__older_q) 
                                             >> 0x0cU) 
                                            & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_ready)))))) 
              << 3U));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant 
        = vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__oldest_ready;
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_agen 
        = ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
           & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_agen_ready));
    vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__issue_dgen 
        = ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
           & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_dgen_ready));
    mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b = 0U;
    while (VL_GTS_III(32, 0x000001a0U, mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)) {
        if (VL_LIKELY(((0x067fU >= (0x000007ffU & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                   << 2U)))))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms[(0x0000003fU 
                                                                              & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                                                >> 3U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                           << 2U)))) 
                    & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms
                    [(0x0000003fU & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                     >> 3U))]) | ((1U 
                                                   & ((vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                                                       [
                                                       (0x0000000fU 
                                                        & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x0000001fU 
                                                        & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)) 
                                                      & (IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant))) 
                                                  << 
                                                  (0x0000001fU 
                                                   & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                      << 2U))));
        }
        if (VL_LIKELY(((0x067fU >= (0x000007ffU & ((IData)(1U) 
                                                   + 
                                                   (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                    << 2U))))))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms[(0x0000003fU 
                                                                              & (((IData)(1U) 
                                                                                + 
                                                                                (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                                                << 2U)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(1U) 
                                           + (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                              << 2U))))) 
                    & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms
                    [(0x0000003fU & (((IData)(1U) + 
                                      (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                       << 2U)) >> 5U))]) 
                   | ((((0x067fU >= (0x000007ffU & 
                                     ((IData)(0x01a0U) 
                                      + (0x000001ffU 
                                         & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)))) 
                        && (1U & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                                  [(0x0000003fU & (
                                                   ((IData)(0x01a0U) 
                                                    + 
                                                    (0x000001ffU 
                                                     & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)) 
                                                   >> 5U))] 
                                  >> (0x0000001fU & 
                                      ((IData)(0x01a0U) 
                                       + (0x000001ffU 
                                          & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)))))) 
                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                          >> 1U)) << (0x0000001fU & 
                                      ((IData)(1U) 
                                       + (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                          << 2U)))));
        }
        if (VL_LIKELY(((0x067fU >= (0x000007ffU & ((IData)(2U) 
                                                   + 
                                                   (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                    << 2U))))))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms[(0x0000003fU 
                                                                              & (((IData)(2U) 
                                                                                + 
                                                                                (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                                                << 2U)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(2U) 
                                           + (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                              << 2U))))) 
                    & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms
                    [(0x0000003fU & (((IData)(2U) + 
                                      (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                       << 2U)) >> 5U))]) 
                   | ((((0x067fU >= (0x000007ffU & 
                                     ((IData)(0x0340U) 
                                      + (0x000001ffU 
                                         & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)))) 
                        && (1U & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                                  [(0x0000003fU & (
                                                   ((IData)(0x0340U) 
                                                    + 
                                                    (0x000001ffU 
                                                     & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)) 
                                                   >> 5U))] 
                                  >> (0x0000001fU & 
                                      ((IData)(0x0340U) 
                                       + (0x000001ffU 
                                          & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)))))) 
                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                          >> 2U)) << (0x0000001fU & 
                                      ((IData)(2U) 
                                       + (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                          << 2U)))));
        }
        if (VL_LIKELY(((0x067fU >= (0x000007ffU & ((IData)(3U) 
                                                   + 
                                                   (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                    << 2U))))))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms[(0x0000003fU 
                                                                              & (((IData)(3U) 
                                                                                + 
                                                                                (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                                                << 2U)) 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & ((IData)(3U) 
                                           + (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                              << 2U))))) 
                    & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms
                    [(0x0000003fU & (((IData)(3U) + 
                                      (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                       << 2U)) >> 5U))]) 
                   | ((((0x067fU >= (0x000007ffU & 
                                     ((IData)(0x04e0U) 
                                      + (0x000001ffU 
                                         & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)))) 
                        && (1U & (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_uop
                                  [(0x0000003fU & (
                                                   ((IData)(0x04e0U) 
                                                    + 
                                                    (0x000001ffU 
                                                     & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)) 
                                                   >> 5U))] 
                                  >> (0x0000001fU & 
                                      ((IData)(0x04e0U) 
                                       + (0x000001ffU 
                                          & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)))))) 
                       & ((IData)(vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__slot_grant) 
                          >> 3U)) << (0x0000001fU & 
                                      ((IData)(3U) 
                                       + (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                          << 2U)))));
        }
        if (VL_LIKELY(((0x019fU >= (0x000001ffU & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b))))) {
            vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits[(0x0000000fU 
                                                                                & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                                                >> 5U))] 
                = (((~ ((IData)(1U) << (0x0000001fU 
                                        & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b))) 
                    & vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__selected_uop_bits
                    [(0x0000000fU & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                     >> 5U))]) | ((0U 
                                                   != 
                                                   ((0x067fU 
                                                     >= 
                                                     (0x000007ffU 
                                                      & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                         << 2U)))
                                                     ? 
                                                    (0x0000000fU 
                                                     & (((0U 
                                                          == 
                                                          (0x0000001fU 
                                                           & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                              << 2U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms
                                                          [
                                                          (((IData)(3U) 
                                                            + 
                                                            (0x000007ffU 
                                                             & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                                << 2U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x00000020U) 
                                                           - 
                                                           (0x0000001fU 
                                                            & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                               << 2U))))) 
                                                        | (vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__uop_mux_terms
                                                           [
                                                           (0x0000003fU 
                                                            & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                               >> 3U))] 
                                                           >> 
                                                           (0x0000001fU 
                                                            & (mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
                                                               << 2U)))))
                                                     : 0U)) 
                                                  << 
                                                  (0x0000001fU 
                                                   & mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b)));
        }
        mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b 
            = ((IData)(1U) + mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__unnamedblk5__DOT__b);
    }
}
