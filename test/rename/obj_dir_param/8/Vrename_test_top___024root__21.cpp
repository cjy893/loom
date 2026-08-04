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
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v8 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v16 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v17 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v18 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v0 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v32 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v64 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__map_q__v0 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__map_q__v32 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__map_q__v64 = 0U;
    vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__map_q__v96 = 0U;
    if (vlSelfRef.rst_n) {
        if (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_29) 
             & (0U != (0x0000001fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_commit_lreg))))) {
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q__v0 
                = (0x0000003fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_commit_preg));
            vlSelfRef.__VdlyDim0__rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q__v0 
                = (0x0000001fU & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__mt_commit_lreg));
            vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q__v0 = 1U;
        }
        if (vlSelfRef.rollback) {
            vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v0 = 1U;
        } else {
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v8 
                = ((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[0U] 
                    & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask)) 
                   | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all);
            vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v8 = 1U;
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v9 
                = ((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[1U] 
                    & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask)) 
                   | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all);
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v10 
                = ((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[2U] 
                    & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask)) 
                   | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all);
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v11 
                = ((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[3U] 
                    & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask)) 
                   | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all);
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v12 
                = ((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[4U] 
                    & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask)) 
                   | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all);
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v13 
                = ((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[5U] 
                    & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask)) 
                   | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all);
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v14 
                = ((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[6U] 
                    & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask)) 
                   | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all);
            vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v15 
                = ((vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q[7U] 
                    & (~ vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__br_free_mask)) 
                   | vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_mask_all);
            if ((1U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_en))) {
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v16 
                    = (0x00ffffffffffffffULL & (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[3U])) 
                                                 << 0x00000028U) 
                                                | (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[2U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[1U])) 
                                                      >> 0x00000018U))));
                vlSelfRef.__VdlyDim0__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v16 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v16 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_en))) {
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v17 
                    = (0x00ffffffffffffffULL & (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[5U])) 
                                                 << 0x00000030U) 
                                                | (((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[4U])) 
                                                    << 0x00000010U) 
                                                   | ((QData)((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__freelist__DOT__alloc_suffix[3U])) 
                                                      >> 0x00000010U))));
                vlSelfRef.__VdlyDim0__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v17 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v17 = 1U;
            }
        }
    } else {
        vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__commit_map_q__v1 = 1U;
        vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__freelist__DOT__br_alloc_q__v18 = 1U;
    }
}
