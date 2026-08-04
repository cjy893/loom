// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrename_test_top.h for the primary calling header

#include "Vrename_test_top__pch.h"

void Vrename_test_top___024root___nba_sequent__TOP__1(Vrename_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrename_test_top___024root___nba_sequent__TOP__1\n"); );
    Vrename_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if ((1U & ((~ (IData)(vlSelfRef.rollback)) 
                   & (~ (vlSelfRef.rename_test_top__DOT__brupdate[2U] 
                         >> 8U))))) {
            if ((1U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_en))) {
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v0 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][0U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v0 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v0 = 1U;
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v1 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][1U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v1 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v2 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][2U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v2 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v3 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][3U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v3 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v4 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][4U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v4 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v5 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][5U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v5 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v6 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][6U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v6 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v7 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][7U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v7 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v8 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][8U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v8 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v9 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][9U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v9 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v10 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][10U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v10 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v11 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][11U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v11 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v12 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][12U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v12 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v13 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][13U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v13 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v14 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][14U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v14 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v15 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][15U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v15 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v16 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][16U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v16 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v17 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][17U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v17 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v18 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][18U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v18 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v19 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][19U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v19 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v20 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][20U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v20 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v21 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][21U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v21 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v22 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][22U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v22 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v23 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][23U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v23 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v24 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][24U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v24 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v25 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][25U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v25 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v26 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][26U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v26 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v27 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][27U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v27 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v28 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][28U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v28 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v29 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][29U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v29 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v30 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][30U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v30 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v31 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[1U][31U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v31 
                    = (7U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag));
            }
            if ((2U & (IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_en))) {
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v32 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][0U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v32 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v32 = 1U;
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v33 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][1U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v33 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v34 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][2U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v34 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v35 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][3U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v35 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v36 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][4U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v36 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v37 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][5U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v37 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v38 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][6U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v38 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v39 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][7U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v39 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v40 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][8U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v40 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v41 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][9U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v41 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v42 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][10U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v42 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v43 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][11U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v43 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v44 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][12U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v44 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v45 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][13U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v45 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v46 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][14U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v46 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v47 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][15U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v47 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v48 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][16U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v48 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v49 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][17U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v49 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v50 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][18U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v50 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v51 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][19U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v51 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v52 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][20U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v52 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v53 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][21U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v53 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v54 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][22U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v54 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v55 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][23U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v55 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v56 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][24U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v56 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v57 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][25U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v57 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v58 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][26U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v58 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v59 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][27U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v59 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v60 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][28U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v60 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v61 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][29U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v61 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v62 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][30U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v62 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
                vlSelfRef.__VdlyVal__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v63 
                    = vlSelfRef.rename_test_top__DOT__dut__DOT__maptable__DOT__map_after_lane[2U][31U];
                vlSelfRef.__VdlyDim1__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v63 
                    = (7U & ((IData)(vlSelfRef.rename_test_top__DOT__dut__DOT__br_snapshot_tag) 
                             >> 3U));
            }
        }
    } else {
        vlSelfRef.__VdlySet__rename_test_top__DOT__dut__DOT__maptable__DOT__br_snapshot_q__v64 = 1U;
    }
}
