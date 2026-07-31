// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_issue_test_top.h for the primary calling header

#include "Vmem_issue_test_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmem_issue_test_top___024root___eval_phase__ico(Vmem_issue_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_issue_test_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vmem_issue_test_top___024root___eval_phase__act(Vmem_issue_test_top___024root* vlSelf);
bool Vmem_issue_test_top___024root___eval_phase__nba(Vmem_issue_test_top___024root* vlSelf);

void Vmem_issue_test_top___024root___eval(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vmem_issue_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/mem/mem_issue_test_top.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vmem_issue_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmem_issue_test_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/mem/mem_issue_test_top.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmem_issue_test_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/mem/mem_issue_test_top.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vmem_issue_test_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vmem_issue_test_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vmem_issue_test_top___024root___eval_debug_assertions(Vmem_issue_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_issue_test_top___024root___eval_debug_assertions\n"); );
    Vmem_issue_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_valid & 0xfeU)))) {
        Verilated::overWidthError("dis_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_rob_idx & 0xc0U)))) {
        Verilated::overWidthError("dis_rob_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_psrc1 & 0xc0U)))) {
        Verilated::overWidthError("dis_psrc1");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_psrc2 & 0xc0U)))) {
        Verilated::overWidthError("dis_psrc2");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_psrc1_busy & 0xfeU)))) {
        Verilated::overWidthError("dis_psrc1_busy");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_psrc2_busy & 0xfeU)))) {
        Verilated::overWidthError("dis_psrc2_busy");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_use_agen & 0xfeU)))) {
        Verilated::overWidthError("dis_use_agen");
    }
    if (VL_UNLIKELY(((vlSelfRef.dis_use_dgen & 0xfeU)))) {
        Verilated::overWidthError("dis_use_dgen");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_valid_0 & 0xfeU)))) {
        Verilated::overWidthError("wakeup_valid_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_pdst_0 & 0xc0U)))) {
        Verilated::overWidthError("wakeup_pdst_0");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_valid_1 & 0xfeU)))) {
        Verilated::overWidthError("wakeup_valid_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.wakeup_pdst_1 & 0xc0U)))) {
        Verilated::overWidthError("wakeup_pdst_1");
    }
    if (VL_UNLIKELY(((vlSelfRef.resolve_mask & 0xf0U)))) {
        Verilated::overWidthError("resolve_mask");
    }
    if (VL_UNLIKELY(((vlSelfRef.mispredict_mask & 0xf0U)))) {
        Verilated::overWidthError("mispredict_mask");
    }
    if (VL_UNLIKELY(((vlSelfRef.br_mispredict & 0xfeU)))) {
        Verilated::overWidthError("br_mispredict");
    }
    if (VL_UNLIKELY(((vlSelfRef.flush_pipeline & 0xfeU)))) {
        Verilated::overWidthError("flush_pipeline");
    }
}
#endif  // VL_DEBUG
