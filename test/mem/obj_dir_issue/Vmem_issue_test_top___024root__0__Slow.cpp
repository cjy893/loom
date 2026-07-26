// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

VL_ATTR_COLD void Vmem_issue_test_top___024root___eval_static(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_static\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__available = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17952205073526594723ull);
        vlSelfRef.mem_issue_test_top__DOT__issue_dut__DOT__unnamedblk2__DOT__port_used = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13442453471626318003ull);
    }
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_valid__0 = vlSelfRef.dis_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_rob_idx__0 
        = vlSelfRef.dis_rob_idx;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc1__0 = vlSelfRef.dis_psrc1;
    vlSelfRef.__Vtrigprevexpr___TOP__dis_psrc2__0 = vlSelfRef.dis_psrc2;
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
    vlSelfRef.__Vtrigprevexpr___TOP__src1_data__0 = vlSelfRef.src1_data;
    vlSelfRef.__Vtrigprevexpr___TOP__src2_data__0 = vlSelfRef.src2_data;
    vlSelfRef.__Vtrigprevexpr___TOP__imm_data__0 = vlSelfRef.imm_data;
    vlSelfRef.__Vtrigprevexpr___TOP__resolve_mask__0 
        = vlSelfRef.resolve_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__mispredict_mask__0 
        = vlSelfRef.mispredict_mask;
    vlSelfRef.__Vtrigprevexpr___TOP__br_mispredict__0 
        = vlSelfRef.br_mispredict;
    vlSelfRef.__Vtrigprevexpr___TOP__flush_pipeline__0 
        = vlSelfRef.flush_pipeline;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vmem_issue_test_top___024root___eval_initial(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_initial\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmem_issue_test_top___024root___eval_final(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_final\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmem_issue_test_top___024root___eval_phase__stl(Vmem_issue_test_top___024root* vlSelf);

VL_ATTR_COLD void Vmem_issue_test_top___024root___eval_settle(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_settle\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmem_issue_test_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/ip/mycpu/test/mem/mem_issue_test_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vmem_issue_test_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}
