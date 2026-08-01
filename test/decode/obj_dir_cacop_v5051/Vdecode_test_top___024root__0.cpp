// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

void Vdecode_test_top___024root___eval_triggers_vec__ico(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___eval_triggers_vec__ico\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico__0
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.status_prv) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__status_prv__0)) 
                                                          << 2U) 
                                                         | (((vlSelfRef.pc 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__pc__0) 
                                                             << 1U) 
                                                            | (vlSelfRef.inst 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__inst__0)))));
    }
    {
        // Inlined CFunc: _eval_triggers_vec__ico__1
        vlSelfRef.__Vtrigprevexpr___TOP__inst__0 = vlSelfRef.inst;
        vlSelfRef.__Vtrigprevexpr___TOP__pc__0 = vlSelfRef.pc;
        vlSelfRef.__Vtrigprevexpr___TOP__status_prv__0 
            = vlSelfRef.status_prv;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
}

bool Vdecode_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}
