// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

void Vdecode_test_top___024root___eval_triggers_vec__ico(Vdecode_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecode_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vdecode_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vdecode_test_top___024root___ico_sequent__TOP__0(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___ico_sequent__TOP__1(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___ico_comb__TOP__0(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___ico_comb__TOP__1(Vdecode_test_top___024root* vlSelf);
void Vdecode_test_top___024root___ico_comb__TOP__2(Vdecode_test_top___024root* vlSelf);

bool Vdecode_test_top___024root___eval_phase__ico(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___eval_phase__ico\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vdecode_test_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecode_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vdecode_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vdecode_test_top___024root___ico_sequent__TOP__0(vlSelf);
                Vdecode_test_top___024root___ico_sequent__TOP__1(vlSelf);
            }
            if ((5ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vdecode_test_top___024root___ico_comb__TOP__0(vlSelf);
            }
            if ((7ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vdecode_test_top___024root___ico_comb__TOP__1(vlSelf);
                Vdecode_test_top___024root___ico_comb__TOP__2(vlSelf);
            }
        }
    }
    return (__VicoExecute);
}

void Vdecode_test_top___024root___eval(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___eval\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vdecode_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/mnt/e/nscscc/chiplab/IP/myCPU/test/decode/decode_test_top.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vdecode_test_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Vdecode_test_top___024root___eval_debug_assertions(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___eval_debug_assertions\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.status_prv & 0xfcU)))) {
        Verilated::overWidthError("status_prv");
    }
}
#endif  // VL_DEBUG
