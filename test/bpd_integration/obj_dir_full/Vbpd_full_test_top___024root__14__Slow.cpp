// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__14(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___stl_sequent__TOP__14\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                >> 0x0eU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0x0eU;
    }
    if ((IData)((((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_vec) 
                  >> 0x0000000fU) & (~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit))))) {
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit = 1U;
        vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit_idx = 0x0fU;
    }
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__upd_hit_way 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7));
    vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__do_allocate 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24)) 
           & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)) 
              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)));
    vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_new_ctr 
        = ((0x0000000cU & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)
                             ? ((IData)(((0x60000000U 
                                          == (0x60000000U 
                                              & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U])) 
                                         & ((vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                                             >> 0x00000019U) 
                                            | (IData)(
                                                      ((0x14000000U 
                                                        == 
                                                        (0x14000000U 
                                                         & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U])) 
                                                       & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[8U])))))
                                 ? ((3U == (3U & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                                  >> 2U)))
                                     ? ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                        >> 2U) : ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                                   >> 2U)))
                                 : (((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                     >> 2U) - (0U != 
                                               (3U 
                                                & ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                                   >> 2U)))))
                             : ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                >> 2U)) << 2U)) | (3U 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30)
                                                       ? 
                                                      ((((vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U] 
                                                          >> 0x00000019U) 
                                                         | (IData)(
                                                                   (0x94000000U 
                                                                    == 
                                                                    (0x94000000U 
                                                                     & vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__s1_update[7U])))) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29))
                                                        ? 
                                                       ((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr)))
                                                         ? (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr)
                                                         : 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr)))
                                                        : 
                                                       ((IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr) 
                                                        - 
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr)))))
                                                       : (IData)(vlSelfRef.bpd_full_test_top__DOT__bim_inst__DOT__upd_old_ctr))));
}
