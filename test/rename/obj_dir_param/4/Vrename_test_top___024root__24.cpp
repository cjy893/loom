// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

extern const VlWide<26>/*831:0*/ Vrename_test_top__ConstPool__CONST_h571eb658_0;

void Vrename_test_top___024root___nba_sequent__TOP__3(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__3\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.rollback) {
            vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec = 0ULL;
            vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                = (0x00ffffffffffffffULL & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__mt_arch_busy_vec));
            vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                = (0x00fffffffffffffeULL & vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec);
        } else {
            if (((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en) 
                 & (0U != (0x0000003fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg))))) {
                if ((0x37U >= (0x0000003fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg)))) {
                    vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                        = (vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                           | (0x00ffffffffffffffULL 
                              & ((QData)((IData)(1U)) 
                                 << (0x0000003fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg)))));
                }
            }
            if ((((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_en) 
                  >> 1U) & (0U != (0x0000003fU & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg) 
                                                  >> 6U))))) {
                if ((0x37U >= (0x0000003fU & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg) 
                                              >> 6U)))) {
                    vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                        = (vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                           | (0x00ffffffffffffffULL 
                              & ((QData)((IData)(1U)) 
                                 << (0x0000003fU & 
                                     ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_write_preg) 
                                      >> 6U)))));
                }
            }
            if (vlSelfRef.wakeup_valid) {
                if ((0x37U >= (IData)(vlSelfRef.wakeup_pdst))) {
                    vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec 
                        = ((~ (1ULL << (IData)(vlSelfRef.wakeup_pdst))) 
                           & vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec);
                }
            }
            vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec_next;
        }
        if (((IData)(vlSelfRef.kill) | (IData)(vlSelfRef.rollback))) {
            VL_ASSIGN_W(832, vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q, Vrename_test_top__ConstPool__CONST_h571eb658_0);
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q = 0U;
        } else {
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[0U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[0U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[1U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[2U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[2U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[3U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[3U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[4U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[4U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[5U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[5U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[6U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[6U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[7U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[7U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[8U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[8U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[9U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[9U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[10U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[10U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[11U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[11U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[12U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[12U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[13U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[13U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[14U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[15U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[15U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[16U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[16U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[17U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[17U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[18U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[18U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[19U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[19U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[20U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[20U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[21U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[21U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[22U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[22U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[23U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[23U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[24U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[24U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[25U] 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_next[25U];
            vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q 
                = vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_next;
        }
    } else {
        vlSelfRef.rename_test_top__DOT__dut__DOT__busytable__DOT__busy_vec = 0ULL;
        VL_ASSIGN_W(832, vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q, Vrename_test_top__ConstPool__CONST_h571eb658_0);
        vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q = 0U;
        vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__free_vec = 0x00ffffff00000000ULL;
    }
}
