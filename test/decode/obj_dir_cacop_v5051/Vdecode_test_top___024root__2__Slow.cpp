// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vdecode_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vdecode_test_top___024root___ico_sequent__TOP__0(Vdecode_test_top___024root* vlSelf);
VL_ATTR_COLD void Vdecode_test_top___024root___stl_sequent__TOP__1(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___ico_comb__TOP__1(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___ico_comb__TOP__2(Vdecode_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vdecode_test_top___024root___eval_phase__stl(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___eval_phase__stl\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecode_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vdecode_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vdecode_test_top___024root___ico_sequent__TOP__0(vlSelf);
                Vdecode_test_top___024root___stl_sequent__TOP__1(vlSelf);
                Vdecode_test_top___024root___ico_comb__TOP__1(vlSelf);
                Vdecode_test_top___024root___ico_comb__TOP__2(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vdecode_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vdecode_test_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( inst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( pc)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( status_prv)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG
