// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

VL_ATTR_COLD bool Vrename_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vrename_test_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vrename_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<16>/*511:0*/ Vrename_test_top__ConstPool__CONST_he2526274_0;

VL_ATTR_COLD void Vrename_test_top___024root___stl_sequent__TOP__4(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___stl_sequent__TOP__4\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_br_mask_0 = (0x000000ffU & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[8U] 
                                               << 1U) 
                                              | (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[7U] 
                                                 >> 0x0000001fU)));
    vlSelfRef.out_br_mask_1 = (0x000000ffU & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[21U] 
                                              >> 4U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_45 = (7U 
                                                 & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[7U] 
                                                     >> 0x0000001cU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))))));
    VL_ASSIGN_W(510, vlSelfRef.rename_test_top__DOT__brupdate, Vrename_test_top__ConstPool__CONST_he2526274_0);
    vlSelfRef.rename_test_top__DOT__brupdate[15U] = 
        ((0x00003fffU & vlSelfRef.rename_test_top__DOT__brupdate[15U]) 
         | (0x3fffffffU & (((IData)(vlSelfRef.br_resolve_mask) 
                            << 0x00000016U) | ((IData)(vlSelfRef.br_mispredict_mask) 
                                               << 0x0000000eU))));
    vlSelfRef.rename_test_top__DOT__brupdate[2U] = 
        ((0xfffffeffU & vlSelfRef.rename_test_top__DOT__brupdate[2U]) 
         | ((IData)(vlSelfRef.br_mispredict) << 8U));
    vlSelfRef.rename_test_top__DOT__brupdate[10U] = 
        ((0xffffff1fU & vlSelfRef.rename_test_top__DOT__brupdate[10U]) 
         | ((IData)(vlSelfRef.br_mispredict_tag) << 5U));
    if (vlSelfRef.br_mispredict) {
        vlSelfRef.rename_test_top__DOT__brupdate[(((IData)(0x000001f6U) 
                                                   + (IData)(vlSelfRef.br_mispredict_tag)) 
                                                  >> 5U)] 
            = (vlSelfRef.rename_test_top__DOT__brupdate
               [(((IData)(0x000001f6U) + (IData)(vlSelfRef.br_mispredict_tag)) 
                 >> 5U)] | ((IData)(1U) << (0x0000001fU 
                                            & ((IData)(0x000001f6U) 
                                               + (IData)(vlSelfRef.br_mispredict_tag)))));
        vlSelfRef.rename_test_top__DOT__brupdate[(((IData)(0x000001eeU) 
                                                   + (IData)(vlSelfRef.br_mispredict_tag)) 
                                                  >> 5U)] 
            = (vlSelfRef.rename_test_top__DOT__brupdate
               [(((IData)(0x000001eeU) + (IData)(vlSelfRef.br_mispredict_tag)) 
                 >> 5U)] | ((IData)(1U) << (0x0000001fU 
                                            & ((IData)(0x000001eeU) 
                                               + (IData)(vlSelfRef.br_mispredict_tag)))));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29 = ((IData)(vlSelfRef.commit_valid) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.commit_ldst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (1U 
                                                 & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_26 = ((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U] 
                                                      >> 0x00000014U))) 
                                                 & (2U 
                                                    != 
                                                    (3U 
                                                     & vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[14U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = (0x0000001fU 
                                                 & ((vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                     >> 0x0000000fU) 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (((0x00007c00U 
                                                   & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                      >> 5U)) 
                                                  | ((0x000003e0U 
                                                      & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                         << 2U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_uops_q[1U] 
                                                           >> 9U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__rn2_mask_q)))));
}
