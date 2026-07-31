// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vftq_test_top.h for the primary calling header

#include "Vftq_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vftq_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vftq_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vftq_test_top___024root___stl_sequent__TOP__0(Vftq_test_top___024root* vlSelf);

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
                {
                    // Inlined CFunc: _ico_sequent__TOP__1
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                        = (IData)((2U == (3U & (IData)(vlSelfRef.brupdate_b2_br_mask))));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 
                        = (1U & ((IData)(vlSelfRef.brupdate_b2_br_mask) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                 & ((IData)(vlSelfRef.brupdate_b2_br_mask) 
                                    >> 2U)));
                }
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
