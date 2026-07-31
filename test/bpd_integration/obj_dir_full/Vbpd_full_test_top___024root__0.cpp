// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

bool Vbpd_full_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vbpd_full_test_top___024root___eval_triggers_vec__ico__0(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___eval_triggers_vec__ico__0\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                    ((((((0U 
                                                          != 
                                                          ((((vlSelfRef.update_meta[0U] 
                                                              ^ vlSelfRef.__Vtrigprevexpr___TOP__update_meta__0[0U]) 
                                                             | (vlSelfRef.update_meta[1U] 
                                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__update_meta__0[1U])) 
                                                            | (vlSelfRef.update_meta[2U] 
                                                               ^ vlSelfRef.__Vtrigprevexpr___TOP__update_meta__0[2U])) 
                                                           | (vlSelfRef.update_meta[3U] 
                                                              ^ vlSelfRef.__Vtrigprevexpr___TOP__update_meta__0[3U]))) 
                                                         << 0x0000000cU) 
                                                        | (((((vlSelfRef.update_target 
                                                               != vlSelfRef.__Vtrigprevexpr___TOP__update_target__0) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.update_cfi_is_jirl) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_is_jirl__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.update_cfi_is_b_bl) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_is_b_bl__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.update_cfi_is_br) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_is_br__0)))) 
                                                           << 8U)) 
                                                       | (((((((IData)(vlSelfRef.update_cfi_mispredicted) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_mispredicted__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.update_cfi_taken) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_taken__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.update_cfi_idx) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_idx__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.update_cfi_valid) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_cfi_valid__0)))) 
                                                           << 4U) 
                                                          | (((((IData)(vlSelfRef.update_br_mask) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_br_mask__0)) 
                                                               << 3U) 
                                                              | ((vlSelfRef.update_pc 
                                                                  != vlSelfRef.__Vtrigprevexpr___TOP__update_pc__0) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.update_btb_mispredicts) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_btb_mispredicts__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.update_is_repair_update) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_is_repair_update__0)))))) 
                                                      << 0x00000010U) 
                                                     | ((((((((IData)(vlSelfRef.update_is_mispredict_update) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_is_mispredict_update__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.update_valid) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__update_valid__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.restore_ras_idx) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__restore_ras_idx__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.restore_saw_nt) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__restore_saw_nt__0)))) 
                                                          << 0x0000000cU) 
                                                         | (((((vlSelfRef.restore_old_history 
                                                                != vlSelfRef.__Vtrigprevexpr___TOP__restore_old_history__0) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.ghist_restore_valid) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ghist_restore_valid__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.ras_read_idx) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ras_read_idx__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.f1_is_ret) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__f1_is_ret__0)))) 
                                                            << 8U)) 
                                                        | (((((((IData)(vlSelfRef.f1_is_call) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__f1_is_call__0)) 
                                                               << 3U) 
                                                              | (((IData)(vlSelfRef.f1_taken) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__f1_taken__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.f1_is_br) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__f1_is_br__0)) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelfRef.f1_update_valid) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__f1_update_valid__0)))) 
                                                            << 4U) 
                                                           | ((((vlSelfRef.f0_pc 
                                                                 != vlSelfRef.__Vtrigprevexpr___TOP__f0_pc__0) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.f0_valid) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__f0_valid__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.rst_n) 
                                                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.clk) 
                                                                    != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))))));
}
