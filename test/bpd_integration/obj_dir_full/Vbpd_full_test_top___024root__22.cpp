// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

extern const VlWide<10>/*319:0*/ Vbpd_full_test_top__ConstPool__CONST_h9e45139a_0;

void Vbpd_full_test_top___024root___nba_sequent__TOP__15(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___nba_sequent__TOP__15\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entry_valid) 
                   >> 0x0fU)) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__found_empty = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__alloc_idx = 0x0fU;
    }
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_read_bypass_valid 
        = ((IData)(vlSelfRef.rst_n) && ((((IData)(vlSelfRef.f0_valid) 
                                          & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset))) 
                                         & (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_write)) 
                                        & ((0x000007ffU 
                                            & (vlSelfRef.f0_pc 
                                               >> 4U)) 
                                           == (0x000007ffU 
                                               & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                                  >> 5U)))));
    if (vlSelfRef.rst_n) {
        if (((((IData)(vlSelfRef.f0_valid) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset))) 
              & (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_write)) 
             & ((0x000007ffU & (vlSelfRef.f0_pc >> 4U)) 
                == (0x000007ffU & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                   >> 5U))))) {
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_read_bypass_data 
                = vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr;
        }
        if (((IData)(vlSelfRef.update_valid) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset)))) {
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[0U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[0U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[1U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[1U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[2U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[2U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[3U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[3U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[4U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[4U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[5U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[5U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[6U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[6U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[7U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[8U];
            vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[9U] 
                = vlSelfRef.bpd_full_test_top__DOT__update_packed[9U];
        }
    } else {
        vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_read_bypass_data = 0U;
        VL_ASSIGN_W(293, vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update, Vbpd_full_test_top__ConstPool__CONST_h9e45139a_0);
    }
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset 
        = vlSelfRef.__Vdly__bpd_full_test_top__DOT__bim_inst__DOT__doing_reset;
    vlSelfRef.bim_ready = (1U & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__doing_reset)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36 = (1U 
                                                 & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U] 
                                                    | (3U 
                                                       == 
                                                       (3U 
                                                        & (vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                                                           >> 0x0000001dU)))));
}
