// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vftq_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vftq_test_top___024root___stl_sequent__TOP__0(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___ico_comb__TOP__1(Vftq_test_top___024root* vlSelf);
void Vftq_test_top___024root___ico_comb__TOP__2(Vftq_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vftq_test_top___024root___eval_phase__stl(Vftq_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___eval_phase__stl\n"); );
    Vftq_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vftq_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vftq_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vftq_test_top___024root___stl_sequent__TOP__0(vlSelf);
                Vftq_test_top___024root___ico_comb__TOP__1(vlSelf);
                Vftq_test_top___024root___ico_comb__TOP__2(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico__0(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico__1(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico__2(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico__3(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___dump_triggers__ico\n"); );
    // Body
    Vftq_test_top___024root___dump_triggers__ico__0(triggers, tag);
    Vftq_test_top___024root___dump_triggers__ico__1(triggers, tag);
    Vftq_test_top___024root___dump_triggers__ico__2(triggers, tag);
    Vftq_test_top___024root___dump_triggers__ico__3(triggers, tag);
}
#endif  // VL_DEBUG

bool Vftq_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__ico__0(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vftq_test_top___024root___dump_triggers__ico__0\n"); );
    // Body
    if ((1U & (~ (IData)(Vftq_test_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( enq_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( enq_pc)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( enq_next_pc)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( enq_br_mask)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( enq_cfi_valid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @( enq_cfi_idx)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @( enq_cfi_type)\n");
    }
}
