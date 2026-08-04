// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___eval_triggers_vec__ico(Vrename_test_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrename_test_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vrename_test_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vrename_test_top___024root___eval_ico(Vrename_test_top___024root* vlSelf);

bool Vrename_test_top___024root___eval_phase__ico(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___eval_phase__ico\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vrename_test_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrename_test_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vrename_test_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vrename_test_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

bool Vrename_test_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vrename_test_top___024root___nba_sequent__TOP__0(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__0\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q__v0 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q__v1 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v0 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v6 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v12 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v13 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v14 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v0 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v1 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v2 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v3 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v4 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v5 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v6 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v7 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v8 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v9 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v10 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v11 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v12 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v13 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v14 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v15 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v16 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v17 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v18 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v19 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v20 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v21 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v22 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v23 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v24 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v25 = 0U;
}
