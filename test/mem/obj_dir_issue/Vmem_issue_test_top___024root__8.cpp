// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

void Vmem_issue_test_top___024root___ico_comb__TOP__2(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__3(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__4(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__5(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__6(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___ico_comb__TOP__7(Vmem_issue_test_top___024root* vlSelf);

void Vmem_issue_test_top___024root___eval_ico(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_ico\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000001400ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__0
            vlSelfRef.mem_issue_test_top__DOT__wakeup_valid 
                = (((IData)(vlSelfRef.wakeup_valid_1) 
                    << 1U) | (IData)(vlSelfRef.wakeup_valid_0));
        }
    }
    if ((0x0000000000002800ULL & vlSelfRef.__VicoTriggered[0U])) {
        {
            // Inlined CFunc: _ico_comb__TOP__1
            vlSelfRef.mem_issue_test_top__DOT__wakeup_pdst 
                = (((IData)(vlSelfRef.wakeup_pdst_1) 
                    << 6U) | (IData)(vlSelfRef.wakeup_pdst_0));
        }
    }
    if ((0x00000000000c0000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x00000000000003f8ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x00000000000e0000ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vmem_issue_test_top___024root___ico_comb__TOP__4(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__5(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__6(vlSelf);
        Vmem_issue_test_top___024root___ico_comb__TOP__7(vlSelf);
        {
            // Inlined CFunc: _ico_comb__TOP__8
            vlSelfRef.iss_use_dgen = (1U & (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                            >> 0x00000012U));
            vlSelfRef.mem_issue_test_top__DOT__mem_dut__DOT__iss_br_killed 
                = ((IData)(vlSelfRef.br_mispredict) 
                   & (0U != ((IData)(vlSelfRef.mispredict_mask) 
                             & ((vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[8U] 
                                 << 2U) | (vlSelfRef.mem_issue_test_top__DOT____Vcellout__issue_dut__iss_uop[7U] 
                                           >> 0x0000001eU)))));
        }
    }
}

void Vmem_issue_test_top___024root___eval_triggers_vec__ico__0(Vmem_issue_test_top___024root* vlSelf);
void Vmem_issue_test_top___024root___eval_triggers_vec__ico__2(Vmem_issue_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmem_issue_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool Vmem_issue_test_top___024root___eval_phase__ico(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_phase__ico\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        Vmem_issue_test_top___024root___eval_triggers_vec__ico__0(vlSelf);
        {
            // Inlined CFunc: _eval_triggers_vec__ico__1
            vlSelfRef.__Vtrigprevexpr___TOP__clk__0 
                = vlSelfRef.clk;
            vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 
                = vlSelfRef.rst_n;
            vlSelfRef.__Vtrigprevexpr___TOP__dis_valid__0 
                = vlSelfRef.dis_valid;
            vlSelfRef.__Vtrigprevexpr___TOP__dis_rob_idx__0 
                = vlSelfRef.dis_rob_idx;
            vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1__0 
                = vlSelfRef.dis_psrc1;
            vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2__0 
                = vlSelfRef.dis_psrc2;
            vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1_busy__0 
                = vlSelfRef.dis_psrc1_busy;
            vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2_busy__0 
                = vlSelfRef.dis_psrc2_busy;
            vlSelfRef.__Vtrigprevexpr___TOP__dis_use_agen__0 
                = vlSelfRef.dis_use_agen;
            vlSelfRef.__Vtrigprevexpr___TOP__dis_use_dgen__0 
                = vlSelfRef.dis_use_dgen;
            vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid_0__0 
                = vlSelfRef.wakeup_valid_0;
            vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst_0__0 
                = vlSelfRef.wakeup_pdst_0;
            vlSelfRef.__Vtrigprevexpr___TOP__wakeup_valid_1__0 
                = vlSelfRef.wakeup_valid_1;
            vlSelfRef.__Vtrigprevexpr___TOP__wakeup_pdst_1__0 
                = vlSelfRef.wakeup_pdst_1;
            vlSelfRef.__Vtrigprevexpr___TOP__src1_data__0 
                = vlSelfRef.src1_data;
            vlSelfRef.__Vtrigprevexpr___TOP__src2_data__0 
                = vlSelfRef.src2_data;
            vlSelfRef.__Vtrigprevexpr___TOP__imm_data__0 
                = vlSelfRef.imm_data;
            vlSelfRef.__Vtrigprevexpr___TOP__resolve_mask__0 
                = vlSelfRef.resolve_mask;
            vlSelfRef.__Vtrigprevexpr___TOP__mispredict_mask__0 
                = vlSelfRef.mispredict_mask;
            vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict__0 
                = vlSelfRef.br_mispredict;
            vlSelfRef.__Vtrigprevexpr___TOP__flush_pipeline__0 
                = vlSelfRef.flush_pipeline;
        }
        Vmem_issue_test_top___024root___eval_triggers_vec__ico__2(vlSelf);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem_issue_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vmem_issue_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vmem_issue_test_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}
