// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmem_issue_test_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vmem_issue_test_top___024root___stl_sequent__TOP__0(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__4(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___nba_sequent__TOP__5(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__6(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__7(Vmem_issue_test_top___024root* vlSelf);

VL_ATTR_COLD bool Vmem_issue_test_top___024root___eval_phase__stl(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_phase__stl\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        Vmem_issue_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vmem_issue_test_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vmem_issue_test_top___024root___stl_sequent__TOP__0(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__4(vlSelf);
                Vmem_issue_test_top___024root___nba_sequent__TOP__5(vlSelf);
                Vmem_issue_test_top___024root___ico_comb__TOP__6(vlSelf);
                Vmem_issue_test_top___024root___ico_comb__TOP__7(vlSelf);
                {
                    // Inlined CFunc: _ico_comb__TOP__8
                    vlSelfRef.iss_use_dgen = (1U & 
                                              (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                               >> 0x0000000cU));
                    vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed 
                        = ((IData)(vlSelfRef.br_mispredict) 
                           & (0U != ((IData)(vlSelfRef.mispredict_mask) 
                                     & ((vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                                         << 8U) | (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                                                   >> 0x00000018U)))));
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico__0(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico__1(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico__2(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___dump_triggers__ico\n"); );
    // Body
    Vmem_issue_test_top___024root___dump_triggers__ico__0(triggers, tag);
    Vmem_issue_test_top___024root___dump_triggers__ico__1(triggers, tag);
    Vmem_issue_test_top___024root___dump_triggers__ico__2(triggers, tag);
}
#endif  // VL_DEBUG
