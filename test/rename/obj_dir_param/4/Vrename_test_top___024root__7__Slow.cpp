// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrename_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vrename_test_top___024root___nba_sequent__TOP__12(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__13(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__14(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__15(Vrename_test_top___024root* vlSelf);
VL_ATTR_COLD void Vrename_test_top___024root___stl_sequent__TOP__4(Vrename_test_top___024root* vlSelf);
VL_ATTR_COLD void Vrename_test_top___024root___stl_sequent__TOP__5(Vrename_test_top___024root* vlSelf);
VL_ATTR_COLD void Vrename_test_top___024root___stl_sequent__TOP__6(Vrename_test_top___024root* vlSelf);
VL_ATTR_COLD void Vrename_test_top___024root___stl_sequent__TOP__7(Vrename_test_top___024root* vlSelf);
VL_ATTR_COLD void Vrename_test_top___024root___stl_sequent__TOP__8(Vrename_test_top___024root* vlSelf);
VL_ATTR_COLD void Vrename_test_top___024root___stl_sequent__TOP__9(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__21(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__22(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__23(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__24(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__19(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__26(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___ico_comb__TOP__22(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__28(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__29(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__30(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__31(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__32(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__33(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__34(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__35(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__36(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__37(Vrename_test_top___024root* vlSelf);
void Vrename_test_top___024root___nba_sequent__TOP__38(Vrename_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vrename_test_top___024root___eval_phase__stl(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_phase__stl\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vrename_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vrename_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vrename_test_top___024root___nba_sequent__TOP__12(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__13(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__14(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__15(vlSelf);
                Vrename_test_top___024root___stl_sequent__TOP__4(vlSelf);
                Vrename_test_top___024root___stl_sequent__TOP__5(vlSelf);
                Vrename_test_top___024root___stl_sequent__TOP__6(vlSelf);
                Vrename_test_top___024root___stl_sequent__TOP__7(vlSelf);
                Vrename_test_top___024root___stl_sequent__TOP__8(vlSelf);
                Vrename_test_top___024root___stl_sequent__TOP__9(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__21(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__22(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__23(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__24(vlSelf);
                Vrename_test_top___024root___ico_comb__TOP__19(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__26(vlSelf);
                Vrename_test_top___024root___ico_comb__TOP__22(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__28(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__29(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__30(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__31(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__32(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__33(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__34(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__35(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__36(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__37(vlSelf);
                Vrename_test_top___024root___nba_sequent__TOP__38(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico__0(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico__1(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico__2(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico__3(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___dump_triggers__ico\n"); );
    // Body
    Vrename_test_top___024root___dump_triggers__ico__0(triggers, tag);
    Vrename_test_top___024root___dump_triggers__ico__1(triggers, tag);
    Vrename_test_top___024root___dump_triggers__ico__2(triggers, tag);
    Vrename_test_top___024root___dump_triggers__ico__3(triggers, tag);
}
#endif  // VL_DEBUG
