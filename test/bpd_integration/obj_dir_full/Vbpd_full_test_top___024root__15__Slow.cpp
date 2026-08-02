// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___eval_triggers_vec__stl(Vbpd_full_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbpd_full_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbpd_full_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__0(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__1(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__2(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__3(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___nba_comb__TOP__2(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__5(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__6(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__7(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__8(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__9(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__10(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__11(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__12(Vbpd_full_test_top___024root* vlSelf);
void Vbpd_full_test_top___024root___ico_comb__TOP__4(Vbpd_full_test_top___024root* vlSelf);
VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__14(Vbpd_full_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vbpd_full_test_top___024root___eval_phase__stl(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_phase__stl\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbpd_full_test_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vbpd_full_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vbpd_full_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vbpd_full_test_top___024root___stl_sequent__TOP__0(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__1(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__2(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__3(vlSelf);
                Vbpd_full_test_top___024root___nba_comb__TOP__2(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__5(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__6(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__7(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__8(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__9(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__10(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__11(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__12(vlSelf);
                Vbpd_full_test_top___024root___ico_comb__TOP__4(vlSelf);
                Vbpd_full_test_top___024root___stl_sequent__TOP__14(vlSelf);
                {
                    // Inlined CFunc: _stl_sequent__TOP__15
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                        = ((IData)(vlSelfRef.f1_is_br) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_31));
                    vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__do_allocate 
                        = ((~ (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_hit)) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                        = (1U & (- (IData)(((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)) 
                                            & (IData)(vlSelfRef.f1_is_br)))));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_30 
                        = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                 | ((vlSelfRef.bpd_full_test_top__DOT__ghist_inst__DOT__history_q[0U] 
                                     >> 7U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                               >> 1U))));
                }
            }
        }
    }
    return (__VstlExecute);
}
