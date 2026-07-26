// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsr_file_test_top.h for the primary calling header

#include "Vcsr_file_test_top__pch.h"

#ifdef VL_DEBUG
void Vcsr_file_test_top___024root___eval_debug_assertions(Vcsr_file_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcsr_file_test_top___024root___eval_debug_assertions\n"); );
    Vcsr_file_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.csr_req_valid & 0xfeU)))) {
        Verilated::overWidthError("csr_req_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.csr_req_rob_idx & 0xc0U)))) {
        Verilated::overWidthError("csr_req_rob_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.csr_req_addr & 0xc000U)))) {
        Verilated::overWidthError("csr_req_addr");
    }
    if (VL_UNLIKELY(((vlSelfRef.csr_cmd & 0xfcU)))) {
        Verilated::overWidthError("csr_cmd");
    }
    if (VL_UNLIKELY(((vlSelfRef.csr_resp_ready & 0xfeU)))) {
        Verilated::overWidthError("csr_resp_ready");
    }
    if (VL_UNLIKELY(((vlSelfRef.csr_commit_valid & 0xfeU)))) {
        Verilated::overWidthError("csr_commit_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.csr_commit_rob_idx 
                      & 0xc0U)))) {
        Verilated::overWidthError("csr_commit_rob_idx");
    }
    if (VL_UNLIKELY(((vlSelfRef.csr_flush_pending & 0xfeU)))) {
        Verilated::overWidthError("csr_flush_pending");
    }
    if (VL_UNLIKELY(((vlSelfRef.xcpt_valid & 0xfeU)))) {
        Verilated::overWidthError("xcpt_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.xcpt_code & 0xc0U)))) {
        Verilated::overWidthError("xcpt_code");
    }
    if (VL_UNLIKELY(((vlSelfRef.xcpt_esubcode & 0xfe00U)))) {
        Verilated::overWidthError("xcpt_esubcode");
    }
    if (VL_UNLIKELY(((vlSelfRef.ertn_valid & 0xfeU)))) {
        Verilated::overWidthError("ertn_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.ipi_irq & 0xfeU)))) {
        Verilated::overWidthError("ipi_irq");
    }
}
#endif  // VL_DEBUG
