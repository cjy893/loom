// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

extern const VlWide<16>/*511:0*/ Vrename_test_top__ConstPool__CONST_he2526274_0;

void Vrename_test_top___024root___ico_comb__TOP__0(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___ico_comb__TOP__0\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}
