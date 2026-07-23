// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

void Vboom_core___024root___nba_comb__TOP__0(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_comb__TOP__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_addr 
        = ((((0x00000fc0U & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                             >> 3U)) | (0x0000003fU 
                                        & (vlSelfRef.lsu_resp[5U] 
                                           >> 0x00000010U))) 
            << 0x00000012U) | ((0x0003f000U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                               << 3U)) 
                               | ((0x00000fc0U & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                  >> 3U)) 
                                  | (0x0000003fU & 
                                     (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                      >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 = ((1U 
                                                  == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))
                                                  ? vlSelfRef.csr_rdata
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state))
                                                   ? (IData)(
                                                             VL_MULS_QQQ(64, 
                                                                         VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1), 
                                                                         VL_EXTENDS_QI(64,32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2)))
                                                   : 
                                                  (VL_DIVS_III(32, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs1, vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_rs2) 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__state)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137 = ((
                                                   ((0x00000fc0U 
                                                     & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                        >> 3U)) 
                                                    | (0x0000003fU 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                   << 0x00000012U) 
                                                  | ((0x0003f000U 
                                                      & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                         << 3U)) 
                                                     | ((0x00000fc0U 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                            >> 3U)) 
                                                        | (0x0000003fU 
                                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[0U])) 
                                                         & (IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[0U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[1U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[2U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[3U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[4U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[5U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[6U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[6U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[7U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[7U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[8U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[8U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[9U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[9U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[10U] 
        = vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[10U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[11U] 
        = (((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
            << 0x00000019U) | vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[11U]);
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[0U] 
        = vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result;
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[1U] 
        = vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result;
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[2U] 
        = (IData)((((QData)((IData)(((vlSelfRef.lsu_resp[1U] 
                                      << 0x00000019U) 
                                     | (vlSelfRef.lsu_resp[0U] 
                                        >> 7U)))) << 0x00000020U) 
                   | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result))));
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[3U] 
        = (IData)(((((QData)((IData)(((vlSelfRef.lsu_resp[1U] 
                                       << 0x00000019U) 
                                      | (vlSelfRef.lsu_resp[0U] 
                                         >> 7U)))) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result))) 
                   >> 0x00000020U));
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_data[4U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10;
    vlSelfRef.boom_core__DOT__wakeup_pdst_w = ((0x0000000fc0000000ULL 
                                                & vlSelfRef.boom_core__DOT__wakeup_pdst_w) 
                                               | (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)));
    vlSelfRef.boom_core__DOT__iregfile__DOT__write_en 
        = ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22) 
             << 4U) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) 
                        << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                                  << 2U))) | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[0U] = (IData)(
                                                         ((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                                          << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[1U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                   << 7U) 
                                                  | (IData)(
                                                            (((QData)((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result)) 
                                                              << 7U) 
                                                             >> 0x00000020U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[2U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[3U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[4U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[5U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[6U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[7U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[8U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[9U] = ((vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                   >> 0x00000019U) 
                                                  | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                     << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[10U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                    >> 0x00000019U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[11U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                    >> 0x00000019U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[12U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                    >> 0x00000019U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                      << 7U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[13U] = (
                                                   (0xffffff00U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[13U]) 
                                                   | (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_valid));
    vlSelfRef.boom_core__DOT__rob_wb_resps[13U] = (
                                                   (0x000000ffU 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[13U]) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[14U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[15U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[16U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[17U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[18U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[19U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[20U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[21U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[22U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[23U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[24U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[25U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                    >> 0x00000018U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                      << 8U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[26U] = (
                                                   ((0x000000feU 
                                                     & ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
                                                        << 1U)) 
                                                    | (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                       >> 0x00000018U)) 
                                                   | ((vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
                                                       << 9U) 
                                                      | (0xffffff00U 
                                                         & ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
                                                            << 1U))));
    vlSelfRef.boom_core__DOT__rob_wb_resps[27U] = (
                                                   (0xfffffe00U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[27U]) 
                                                   | (((0x000000ffU 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
                                                           >> 0x00000017U)) 
                                                       | ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_valid) 
                                                          >> 0x0000001fU)) 
                                                      | (0x00000100U 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result 
                                                            >> 0x00000017U))));
    vlSelfRef.boom_core__DOT__rob_wb_resps[27U] = (
                                                   (0x000001ffU 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[27U]) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[28U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[0U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[29U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[1U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[30U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[2U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[31U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[3U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[32U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[33U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[5U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[34U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[6U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[35U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[7U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[36U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[8U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[37U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[9U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[38U] = (
                                                   (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[10U] 
                                                    >> 0x00000017U) 
                                                   | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                      << 9U));
    vlSelfRef.boom_core__DOT__rob_wb_resps[39U] = (
                                                   ((0x000001f8U 
                                                     & (vlSelfRef.lsu_resp[0U] 
                                                        << 3U)) 
                                                    | ((0x000001fcU 
                                                        & ((IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_valid) 
                                                           << 2U)) 
                                                       | (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[11U] 
                                                          >> 0x00000017U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[0U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[40U] = (
                                                   ((vlSelfRef.lsu_resp[0U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[1U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[1U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[41U] = (
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[2U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[2U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[42U] = (
                                                   ((vlSelfRef.lsu_resp[2U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[3U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[3U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[43U] = (
                                                   ((vlSelfRef.lsu_resp[3U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[4U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[4U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[44U] = (
                                                   ((vlSelfRef.lsu_resp[4U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[45U] = (
                                                   ((vlSelfRef.lsu_resp[5U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[6U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[6U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[46U] = (
                                                   ((vlSelfRef.lsu_resp[6U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[7U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[7U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[47U] = (
                                                   ((vlSelfRef.lsu_resp[7U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[8U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[8U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[48U] = (
                                                   ((vlSelfRef.lsu_resp[8U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[9U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[9U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[49U] = (
                                                   ((vlSelfRef.lsu_resp[9U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[10U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[10U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[50U] = (
                                                   ((vlSelfRef.lsu_resp[10U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[11U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[11U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[51U] = (
                                                   ((vlSelfRef.lsu_resp[11U] 
                                                     >> 0x0000001dU) 
                                                    | (0x000001f8U 
                                                       & (vlSelfRef.lsu_resp[12U] 
                                                          << 3U))) 
                                                   | (0xfffffe00U 
                                                      & (vlSelfRef.lsu_resp[12U] 
                                                         << 3U)));
    vlSelfRef.boom_core__DOT__rob_wb_resps[52U] = (
                                                   (0xfffff800U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[52U]) 
                                                   | ((vlSelfRef.lsu_resp[12U] 
                                                       >> 0x0000001dU) 
                                                      | (0x000001f8U 
                                                         & (vlSelfRef.lsu_resp[13U] 
                                                            << 3U))));
    vlSelfRef.boom_core__DOT__rob_wb_resps[52U] = (
                                                   (0x000007ffU 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[52U]) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[53U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[0U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[54U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[0U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[1U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[55U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[1U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[2U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[56U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[2U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[3U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[57U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[3U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[4U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[58U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[4U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[5U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[59U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[5U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[6U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[60U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[6U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[7U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[61U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[7U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[8U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[62U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[8U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[9U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[63U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[9U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[10U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[64U] = (
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[10U] 
                                                    >> 0x00000015U) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[11U] 
                                                      << 0x0000000bU));
    vlSelfRef.boom_core__DOT__rob_wb_resps[65U] = (
                                                   (0xffffffe0U 
                                                    & vlSelfRef.boom_core__DOT__rob_wb_resps[65U]) 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[11U] 
                                                      >> 0x00000015U));
    vlSelfRef.boom_core__DOT__wakeups[48U] = ((0x0000003fU 
                                               & vlSelfRef.boom_core__DOT__wakeups[48U]) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[0U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[49U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[0U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[1U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[50U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[1U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[2U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[51U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[2U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[3U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[52U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[3U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[4U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[53U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[4U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[5U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[54U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[5U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[6U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[55U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[6U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[7U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[56U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[7U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[8U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[57U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[8U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[9U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[58U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[9U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[10U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__wakeups[59U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[10U] 
                                               >> 0x0000001aU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_153[11U] 
                                                 << 6U));
    vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_en 
        = ((0x00000020U & (vlSelfRef.boom_core__DOT__wakeups[71U] 
                           >> 0x0000001aU)) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_152));
    vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__wakeup_preg 
        = (((QData)((IData)((0x0000003fU & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                            >> 0x0000000fU)))) 
            << 0x0000001eU) | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_137)));
}

void Vboom_core___024root___nba_sequent__TOP__4(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_sequent__TOP__4\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_86;
    __VdfgRegularize_h6e95ff9d_0_86 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_135;
    __VdfgRegularize_h6e95ff9d_0_135 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_325;
    __VdfgRegularize_h6e95ff9d_0_325 = 0;
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_326;
    __VdfgRegularize_h6e95ff9d_0_326 = 0;
    SData/*11:0*/ __VdfgRegularize_h6e95ff9d_0_329;
    __VdfgRegularize_h6e95ff9d_0_329 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_330;
    __VdfgRegularize_h6e95ff9d_0_330 = 0;
    // Body
    vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception 
        = ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head_vals) 
           & ((2U & ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[1U] 
                      >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                     << 1U)) | (1U & (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_exception[0U] 
                                      >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_272 = ((~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                    | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_101));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_270 = ((~ 
                                                   (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception) 
                                                     >> 1U) 
                                                    | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_150) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_96) 
                                                          & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_101)) 
                                                             | (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__can_throw_exception)))))) 
                                                  & ((~ 
                                                      ((vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_bsy[1U] 
                                                        >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head)) 
                                                       | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_136[2U] 
                                                          >> 8U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_97)));
    vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_270) 
            << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_272));
    vlSelfRef.commit.__PVT__valids = ((2U & vlSelfRef.commit
                                       .__PVT__valids) 
                                      | (1U & (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit)));
    vlSelfRef.commit.__PVT__valids = ((1U & vlSelfRef.commit
                                       .__PVT__valids) 
                                      | (2U & (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit)));
    vlSelfRef.commit.__PVT__arch_valids = ((2U & vlSelfRef.commit
                                            .__PVT__arch_valids) 
                                           | (1U & 
                                              ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit) 
                                               & (~ 
                                                  (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_predicated[0U] 
                                                   >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))));
    vlSelfRef.commit.__PVT__arch_valids = ((1U & vlSelfRef.commit
                                            .__PVT__arch_valids) 
                                           | ((IData)(
                                                      (((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__will_commit) 
                                                        >> 1U) 
                                                       & (~ 
                                                          (vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_predicated[1U] 
                                                           >> (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head))))) 
                                              << 1U));
    VL_ASSIGN_W(754, vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops, vlSelfRef.commit
                .__PVT__uops);
    __VdfgRegularize_h6e95ff9d_0_86 = ((vlSelfRef.commit
                                        .__PVT__valids 
                                        >> 1U) & ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[13U] 
                                                       >> 8U))) 
                                                  & (2U 
                                                     != 
                                                     (3U 
                                                      & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[12U] 
                                                         >> 0x00000014U)))));
    __VdfgRegularize_h6e95ff9d_0_135 = (vlSelfRef.commit
                                        .__PVT__valids 
                                        & ((0U != (0x0000003fU 
                                                   & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[1U] 
                                                      >> 0x0000000fU))) 
                                           & (2U != 
                                              (3U & 
                                               (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[0U] 
                                                >> 0x0000001bU)))));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_en 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_86) 
            << 1U) | (IData)(__VdfgRegularize_h6e95ff9d_0_135));
    __VdfgRegularize_h6e95ff9d_0_325 = (0x0000003fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[4U] 
                                            >> 9U) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_135)))));
    __VdfgRegularize_h6e95ff9d_0_326 = (0x0000001fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[1U] 
                                            >> 0x0000000fU) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_135)))));
    __VdfgRegularize_h6e95ff9d_0_329 = (0x0000003fU 
                                        & ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[3U] 
                                            >> 9U) 
                                           & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_135)))));
    __VdfgRegularize_h6e95ff9d_0_330 = ((0U != (0x0000003fU 
                                                & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[3U] 
                                                   >> 9U))) 
                                        & (- (IData)((IData)(__VdfgRegularize_h6e95ff9d_0_135))));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_preg 
        = ((0x00000fc0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_86)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[16U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[16U] 
                                 >> 2U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_325) 
                                            >> 6U)) 
                           << 6U)) | (0x0000003fU & (IData)(__VdfgRegularize_h6e95ff9d_0_325)));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__commit_lreg 
        = ((0x000003e0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_86)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[13U] 
                                 << 0x00000018U) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[13U] 
                                 >> 8U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_326) 
                                            >> 5U)) 
                           << 5U)) | (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_326)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_preg 
        = ((0x00000fc0U & (((IData)(__VdfgRegularize_h6e95ff9d_0_86)
                             ? ((vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                 << 0x0000001eU) | 
                                (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                 >> 2U)) : ((IData)(__VdfgRegularize_h6e95ff9d_0_329) 
                                            >> 6U)) 
                           << 6U)) | (0x0000003fU & (IData)(__VdfgRegularize_h6e95ff9d_0_329)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_en 
        = ((2U & (((IData)(__VdfgRegularize_h6e95ff9d_0_86)
                    ? (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT____Vcellinp__rename__commit_uops[15U] 
                                             >> 2U)))
                    : ((IData)(__VdfgRegularize_h6e95ff9d_0_330) 
                       >> 1U)) << 1U)) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_330)));
}

extern const VlWide<24>/*767:0*/ Vboom_core__ConstPool__CONST_h4465c659_0;
extern const VlWide<12>/*383:0*/ Vboom_core__ConstPool__CONST_hdb31f06b_0;

void Vboom_core___024root___nba_comb__TOP__5(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_comb__TOP__5\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*47:0*/ __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec;
    __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    VlWide<24>/*753:0*/ __VdfgRegularize_h6e95ff9d_0_121;
    VL_ZERO_W(754, __VdfgRegularize_h6e95ff9d_0_121);
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_220;
    __VdfgRegularize_h6e95ff9d_0_220 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_279;
    __VdfgRegularize_h6e95ff9d_0_279 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_280;
    __VdfgRegularize_h6e95ff9d_0_280 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_281;
    __VdfgRegularize_h6e95ff9d_0_281 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_282;
    __VdfgRegularize_h6e95ff9d_0_282 = 0;
    VlWide<12>/*376:0*/ __VdfgRegularize_h6e95ff9d_0_284;
    VL_ZERO_W(377, __VdfgRegularize_h6e95ff9d_0_284);
    SData/*9:0*/ __VdfgRegularize_h6e95ff9d_0_287;
    __VdfgRegularize_h6e95ff9d_0_287 = 0;
    VlWide<12>/*383:0*/ __Vtemp_13;
    // Body
    vlSelfRef.boom_core__DOT__dec_uops[7U] = ((0xf03fffffU 
                                               & vlSelfRef.boom_core__DOT__dec_uops[7U]) 
                                              | (((0x0000003cU 
                                                   & ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_tag))) 
                                                 << 0x00000016U));
    vlSelfRef.boom_core__DOT__dec_uops[19U] = ((0xffe07fffU 
                                                & vlSelfRef.boom_core__DOT__dec_uops[19U]) 
                                               | (((0x0000003cU 
                                                    & ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask) 
                                                       >> 2U)) 
                                                   | (3U 
                                                      & ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_tag) 
                                                         >> 2U))) 
                                                  << 0x0000000fU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77 = ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.boom_core__DOT__dec_uops[7U] 
                                                                   >> 0x00000015U)))) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23 = (1U 
                                                 & ((~ 
                                                     (vlSelfRef.boom_core__DOT__dec_uops[15U] 
                                                      >> 1U)) 
                                                    & ((IData)(vlSelfRef.fe_valid) 
                                                       >> 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = (1U 
                                                 & ((~ 
                                                     (vlSelfRef.boom_core__DOT__dec_uops[3U] 
                                                      >> 8U)) 
                                                    & (IData)(vlSelfRef.fe_valid)));
    vlSelfRef.boom_core__DOT__brmask__DOT__br_tag = 
        ((0x0000000cU & ((((4U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77))
                            ? (1U & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                    >> 1U))))))
                            : 2U) | (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_77) 
                                                    >> 3U)))))) 
                         << 2U)) | (3U & ((- (IData)(
                                                     (1U 
                                                      & (~ 
                                                         ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q) 
                                                          >> 3U))))) 
                                          | ((4U & (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q))
                                              ? (1U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (~ 
                                                                  ((IData)(vlSelfRef.boom_core__DOT__brmask__DOT__br_mask_q) 
                                                                   >> 1U))))))
                                              : 2U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_298 = ((vlSelfRef.boom_core__DOT__dec_uops[19U] 
                                                   >> 0x0000000eU) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_289 = ((3U 
                                                   | ((0U 
                                                       != 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__dec_uops[1U] 
                                                           >> 0x0000000fU))) 
                                                      << 2U)) 
                                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_299 = ((vlSelfRef.boom_core__DOT__dec_uops[7U] 
                                                   >> 0x00000015U) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.boom_core__DOT__rename__DOT__dec_fire 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) 
            << 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 = (((0x00007c00U 
                                                   & (vlSelfRef.boom_core__DOT__dec_uops[1U] 
                                                      >> 5U)) 
                                                  | ((0x000003e0U 
                                                      & (vlSelfRef.boom_core__DOT__dec_uops[1U] 
                                                         << 2U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.boom_core__DOT__dec_uops[1U] 
                                                           >> 9U)))) 
                                                 & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))));
    __VdfgRegularize_h6e95ff9d_0_287 = (0x0000001fU 
                                        & ((vlSelfRef.boom_core__DOT__dec_uops[1U] 
                                            >> 0x0000000fU) 
                                           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT__dec_uops[1U] 
                                                        >> 0x0000000fU))) 
                                                   & (2U 
                                                      != 
                                                      (3U 
                                                       & (vlSelfRef.boom_core__DOT__dec_uops[0U] 
                                                          >> 0x0000001bU)))) 
                                                  & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_219 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_99) 
                                                   & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_299)))) 
                                                  | (IData)(vlSelfRef.boom_core__DOT__brmask__DOT__resolved_mask));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_mask 
        = ((2U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire)) 
           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87 = 
            (0x00007fffU & ((0x00007c00U & (vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                            << 2U)) 
                            | ((0x000003e0U & ((vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                                << 9U) 
                                               | (0x000001e0U 
                                                  & (vlSelfRef.boom_core__DOT__dec_uops[12U] 
                                                     >> 0x00000017U)))) 
                               | (0x0000001fU & (vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                                 >> 2U)))));
        __VdfgRegularize_h6e95ff9d_0_46 = (0x0000001fU 
                                           & ((vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                                 >> 8U)));
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87 = 
            (0x00007fffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                            >> 0x0000000fU));
        __VdfgRegularize_h6e95ff9d_0_46 = (0x0000001fU 
                                           & ((IData)(__VdfgRegularize_h6e95ff9d_0_287) 
                                              >> 5U));
    }
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_lreg 
        = (((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
            << 5U) | (0x0000001fU & (IData)(__VdfgRegularize_h6e95ff9d_0_287)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (1U 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                                    ? 
                                                   ((0U 
                                                     != 
                                                     (0x0000003fU 
                                                      & (vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                                         >> 8U))) 
                                                    & (2U 
                                                       != 
                                                       (3U 
                                                        & (vlSelfRef.boom_core__DOT__dec_uops[12U] 
                                                           >> 0x00000014U))))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                    >> 1U)));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_en 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
            << 1U) | (1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290)));
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask = 0ULL;
    __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
        = vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec;
    {
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0;
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 1U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 1U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 2U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 2U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 3U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 3U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 4U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 4U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 5U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 5U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 6U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 6U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 7U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 7U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 8U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 8U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 9U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 9U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0fU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x10U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x10U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x11U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x11U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x12U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x12U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x13U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x13U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x14U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x14U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x15U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x15U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x16U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x16U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x17U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x17U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x18U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x18U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x19U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x19U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1fU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x20U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x20U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x21U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x21U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x22U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x22U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x23U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x23U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x24U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x24U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x25U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x25U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x26U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x26U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x27U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x27U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x28U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x28U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x29U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x29U;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2aU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2bU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2cU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2dU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2eU;
            goto __Vlabel0;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2fU;
            goto __Vlabel0;
        }
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0U;
        __Vlabel0: ;
    }
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand 
        = ((0x0fc0U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
           | (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder));
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_en))) {
        if (VL_LIKELY(((0x2fU >= (0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)))))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask 
                = (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)))));
        }
    }
    __Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
        = (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec 
           & (~ vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask));
    {
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0;
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 1U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 1U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 2U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 2U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 3U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 3U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 4U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 4U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 5U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 5U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 6U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 6U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 7U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 7U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 8U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 8U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 9U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 9U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x0fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x0fU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x10U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x10U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x11U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x11U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x12U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x12U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x13U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x13U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x14U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x14U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x15U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x15U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x16U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x16U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x17U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x17U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x18U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x18U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x19U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x19U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x1fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x1fU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x20U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x20U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x21U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x21U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x22U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x22U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x23U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x23U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x24U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x24U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x25U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x25U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x26U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x26U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x27U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x27U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x28U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x28U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x29U)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x29U;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2aU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2aU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2bU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2bU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2cU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2cU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2dU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2dU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2eU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2eU;
            goto __Vlabel1;
        }
        if ((1U & (IData)((__Vfunc_boom_core__DOT__rename__DOT__freelist__DOT__priority_encoder__10__vec 
                           >> 0x2fU)))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0x2fU;
            goto __Vlabel1;
        }
        vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder = 0U;
        __Vlabel1: ;
    }
    vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand 
        = ((0x003fU & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand)) 
           | ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT____VlemCall_0__priority_encoder) 
              << 6U));
    if ((2U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_en))) {
        if (VL_LIKELY(((0x2fU >= (0x0000003fU & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                 >> 6U)))))) {
            vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask 
                = (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__unnamedblk2__DOT__taken_mask 
                   | (0x0000ffffffffffffULL & ((QData)((IData)(1U)) 
                                               << (0x0000003fU 
                                                   & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                      >> 6U)))));
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291 = (0x0000003fU 
                                                  & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                     & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (0x0000003fU 
                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                                    ? 
                                                   ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                    >> 6U)
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291) 
                                                    >> 6U)));
    vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__write_preg 
        = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
            << 6U) | (0x0000003fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_273 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                      & ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_46)) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                                                >> 0x0000000aU)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                      : 
                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000001fU 
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_287))) 
                                                          & ((0x0000001fU 
                                                              & (IData)(__VdfgRegularize_h6e95ff9d_0_287)) 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                                                 >> 0x0000000aU)))))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                                            >> 0x0000000aU)))
                                                        ? 0U
                                                        : vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                       [
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                                           >> 0x0000000aU))]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_276 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                      & ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_46)) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                            == 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                                                                >> 0x0000000aU)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                      : 
                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000001fU 
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_287))) 
                                                          & ((0x0000001fU 
                                                              & (IData)(__VdfgRegularize_h6e95ff9d_0_287)) 
                                                             == 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                                                                 >> 0x0000000aU)))))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                                                            >> 0x0000000aU)))
                                                        ? 0U
                                                        : vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                       [
                                                       (0x0000001fU 
                                                        & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                                                           >> 0x0000000aU))]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_274 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                      & ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_46)) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                                                >> 5U)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                      : 
                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000001fU 
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_287))) 
                                                          & ((0x0000001fU 
                                                              & (IData)(__VdfgRegularize_h6e95ff9d_0_287)) 
                                                             == 
                                                             (0x0000001fU 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                                                 >> 5U)))))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                                            >> 5U)))
                                                        ? 0U
                                                        : vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                       [
                                                       (0x0000001fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87) 
                                                           >> 5U))]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                      & ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_46)) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                            == 
                                                            (0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                      : 
                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000001fU 
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_287))) 
                                                          & ((0x0000001fU 
                                                              & (IData)(__VdfgRegularize_h6e95ff9d_0_287)) 
                                                             == 
                                                             (0x0000001fU 
                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)))))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87)))
                                                        ? 0U
                                                        : vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                       [
                                                       (0x0000001fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_87))]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                      & ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_46)) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                            == 
                                                            (0x0000001fU 
                                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                      : 
                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000001fU 
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_287))) 
                                                          & ((0x0000001fU 
                                                              & (IData)(__VdfgRegularize_h6e95ff9d_0_287)) 
                                                             == 
                                                             (0x0000001fU 
                                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81))))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81))
                                                        ? 0U
                                                        : vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                       [
                                                       (0x0000001fU 
                                                        & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81)]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_277 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                      & ((0U 
                                                          != (IData)(__VdfgRegularize_h6e95ff9d_0_46)) 
                                                         & ((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                            == 
                                                            (0x0000001fU 
                                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                                                                >> 5U)))))
                                                      ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                                      : 
                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                       & ((0U 
                                                           != 
                                                           (0x0000001fU 
                                                            & (IData)(__VdfgRegularize_h6e95ff9d_0_287))) 
                                                          & ((0x0000001fU 
                                                              & (IData)(__VdfgRegularize_h6e95ff9d_0_287)) 
                                                             == 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                                                                 >> 5U)))))
                                                       ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                                                            >> 5U)))
                                                        ? 0U
                                                        : vlSelfRef.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                       [
                                                       (0x0000001fU 
                                                        & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_81 
                                                           >> 5U))]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_278 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_277) 
                                                   << 6U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 = ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_278)) 
                                                 & (- (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))));
    __VdfgRegularize_h6e95ff9d_0_281 = ((~ ((vlSelfRef.boom_core__DOT__wakeups[71U] 
                                             >> 0x0000001fU) 
                                            & ((0x0000003fU 
                                                & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                                   >> 0x0000000fU)) 
                                               == (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                              >> 6U)))))) 
                                        & ((~ ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                               & ((0x0000003fU 
                                                   & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                      >> 9U)) 
                                                  == 
                                                  (0x0000003fU 
                                                   & (IData)(
                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                              >> 6U)))))) 
                                           & ((~ ((IData)(vlSelfRef.lsu_resp_valid) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         >> 0x00000010U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (IData)(
                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                 >> 6U)))))) 
                                              & ((~ 
                                                  (((0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U)) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                >> 6U)))) 
                                                   & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                 & ((~ 
                                                     (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                   >> 6U)))) 
                                                      & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                    & ((~ 
                                                        (((0x0000003fU 
                                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U)) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (IData)(
                                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                      >> 6U)))) 
                                                         & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                       & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (IData)(
                                                                          (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                           >> 6U)))) 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                             >> 6U)))))) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                              & ((0U 
                                                                  != 
                                                                  (0x0000003fU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                              >> 6U)))) 
                                                                 & ((0x0000003fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)) 
                                                                    == 
                                                                    (0x0000003fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 6U)))))) 
                                                             | (((0x2fU 
                                                                  >= 
                                                                  (0x0000003fU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                              >> 6U)))) 
                                                                 && (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 6U))))))) 
                                                                & (0U 
                                                                   != 
                                                                   (0x0000003fU 
                                                                    & (IData)(
                                                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                               >> 6U)))))))))))));
    __VdfgRegularize_h6e95ff9d_0_282 = ((~ ((vlSelfRef.boom_core__DOT__wakeups[71U] 
                                             >> 0x0000001fU) 
                                            & ((0x0000003fU 
                                                & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                                   >> 0x0000000fU)) 
                                               == (0x0000003fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))))) 
                                        & ((~ ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                               & ((0x0000003fU 
                                                   & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                      >> 9U)) 
                                                  == 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))))) 
                                           & ((~ ((IData)(vlSelfRef.lsu_resp_valid) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         >> 0x00000010U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))))) 
                                              & ((~ 
                                                  (((0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U)) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))) 
                                                   & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                 & ((~ 
                                                     (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))) 
                                                      & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                    & ((~ 
                                                        (((0x0000003fU 
                                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U)) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))) 
                                                         & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                       & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))) 
                                                              & ((0x0000003fU 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))))) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                              & ((0U 
                                                                  != 
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))) 
                                                                 & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                                    == 
                                                                    (0x0000003fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))))) 
                                                             | (((0x2fU 
                                                                  >= 
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))) 
                                                                 && (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78)))))) 
                                                                & (0U 
                                                                   != 
                                                                   (0x0000003fU 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78))))))))))));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28) {
        __VdfgRegularize_h6e95ff9d_0_121[0U] = vlSelfRef.boom_core__DOT__dec_uops[0U];
        __VdfgRegularize_h6e95ff9d_0_121[1U] = vlSelfRef.boom_core__DOT__dec_uops[1U];
        __VdfgRegularize_h6e95ff9d_0_121[2U] = vlSelfRef.boom_core__DOT__dec_uops[2U];
        __VdfgRegularize_h6e95ff9d_0_121[3U] = ((((0x0003f000U 
                                                   & (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                       & (- (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0x0000003fU 
                                                                      & (vlSelfRef.boom_core__DOT__dec_uops[1U] 
                                                                         >> 0x0000000fU)))))) 
                                                      << 0x0000000cU)) 
                                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138) 
                                                      << 6U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_277))) 
                                                 << 0x0000001dU) 
                                                | ((0x1ff80000U 
                                                    & vlSelfRef.boom_core__DOT__dec_uops[3U]) 
                                                   | (((IData)(__VdfgRegularize_h6e95ff9d_0_282) 
                                                       << 0x00000012U) 
                                                      | (((IData)(__VdfgRegularize_h6e95ff9d_0_281) 
                                                          << 0x00000011U) 
                                                         | ((0x00018000U 
                                                             & vlSelfRef.boom_core__DOT__dec_uops[3U]) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_276) 
                                                                << 9U) 
                                                               | (0x000001ffU 
                                                                  & vlSelfRef.boom_core__DOT__dec_uops[3U])))))));
        __VdfgRegularize_h6e95ff9d_0_121[4U] = ((0xffff8000U 
                                                 & vlSelfRef.boom_core__DOT__dec_uops[4U]) 
                                                | (((0x0003f000U 
                                                     & (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                                         & (- (IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x0000003fU 
                                                                        & (vlSelfRef.boom_core__DOT__dec_uops[1U] 
                                                                           >> 0x0000000fU)))))) 
                                                        << 0x0000000cU)) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_138) 
                                                        << 6U) 
                                                       | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_277))) 
                                                   >> 3U));
        __VdfgRegularize_h6e95ff9d_0_121[5U] = ((0x00007fffU 
                                                 & vlSelfRef.boom_core__DOT__dec_uops[5U]) 
                                                | (0xffff8000U 
                                                   & vlSelfRef.boom_core__DOT__dec_uops[5U]));
        __VdfgRegularize_h6e95ff9d_0_121[6U] = ((0x00007fffU 
                                                 & vlSelfRef.boom_core__DOT__dec_uops[6U]) 
                                                | (0xffff8000U 
                                                   & vlSelfRef.boom_core__DOT__dec_uops[6U]));
        __VdfgRegularize_h6e95ff9d_0_121[7U] = ((0x00007fffU 
                                                 & vlSelfRef.boom_core__DOT__dec_uops[7U]) 
                                                | (0xffff8000U 
                                                   & vlSelfRef.boom_core__DOT__dec_uops[7U]));
        __VdfgRegularize_h6e95ff9d_0_121[8U] = ((0x00007fffU 
                                                 & vlSelfRef.boom_core__DOT__dec_uops[8U]) 
                                                | (0xffff8000U 
                                                   & vlSelfRef.boom_core__DOT__dec_uops[8U]));
        __VdfgRegularize_h6e95ff9d_0_121[9U] = ((0x00007fffU 
                                                 & vlSelfRef.boom_core__DOT__dec_uops[9U]) 
                                                | (0xffff8000U 
                                                   & vlSelfRef.boom_core__DOT__dec_uops[9U]));
        __VdfgRegularize_h6e95ff9d_0_121[10U] = ((0x00007fffU 
                                                  & vlSelfRef.boom_core__DOT__dec_uops[10U]) 
                                                 | (0xffff8000U 
                                                    & vlSelfRef.boom_core__DOT__dec_uops[10U]));
        __VdfgRegularize_h6e95ff9d_0_121[11U] = ((0x00007fffU 
                                                  & vlSelfRef.boom_core__DOT__dec_uops[11U]) 
                                                 | (0x01ff8000U 
                                                    & vlSelfRef.boom_core__DOT__dec_uops[11U]));
        __VdfgRegularize_h6e95ff9d_0_121[12U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[13U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[14U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[15U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[16U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[17U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[18U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[19U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[20U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[21U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[22U] = 0U;
        __VdfgRegularize_h6e95ff9d_0_121[23U] = 0U;
    } else {
        VL_ASSIGN_W(754, __VdfgRegularize_h6e95ff9d_0_121, Vboom_core__ConstPool__CONST_h4465c659_0);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118 = (0x00000fffU 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23)
                                                      ? 
                                                     (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_274) 
                                                       << 6U) 
                                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275))
                                                      : (IData)(
                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                 >> 0x00000012U))));
    __VdfgRegularize_h6e95ff9d_0_279 = ((~ ((vlSelfRef.boom_core__DOT__wakeups[71U] 
                                             >> 0x0000001fU) 
                                            & ((0x0000003fU 
                                                & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                                   >> 0x0000000fU)) 
                                               == (0x0000003fU 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                      >> 6U))))) 
                                        & ((~ ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                               & ((0x0000003fU 
                                                   & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                      >> 9U)) 
                                                  == 
                                                  (0x0000003fU 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                      >> 6U))))) 
                                           & ((~ ((IData)(vlSelfRef.lsu_resp_valid) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         >> 0x00000010U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                         >> 6U))))) 
                                              & ((~ 
                                                  (((0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U)) 
                                                    == 
                                                    (0x0000003fU 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                        >> 6U))) 
                                                   & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                 & ((~ 
                                                     (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                           >> 6U))) 
                                                      & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                    & ((~ 
                                                        (((0x0000003fU 
                                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U)) 
                                                          == 
                                                          (0x0000003fU 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                              >> 6U))) 
                                                         & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                       & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                                   >> 6U))) 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                                     >> 6U))))) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                              & ((0U 
                                                                  != 
                                                                  (0x0000003fU 
                                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                                      >> 6U))) 
                                                                 & ((0x0000003fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)) 
                                                                    == 
                                                                    (0x0000003fU 
                                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                                        >> 6U))))) 
                                                             | (((0x2fU 
                                                                  >= 
                                                                  (0x0000003fU 
                                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                                      >> 6U))) 
                                                                 && (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                                                >> 6U)))))) 
                                                                & (0U 
                                                                   != 
                                                                   (0x0000003fU 
                                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118) 
                                                                       >> 6U))))))))))));
    __VdfgRegularize_h6e95ff9d_0_280 = ((~ ((vlSelfRef.boom_core__DOT__wakeups[71U] 
                                             >> 0x0000001fU) 
                                            & ((0x0000003fU 
                                                & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                                   >> 0x0000000fU)) 
                                               == (0x0000003fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))))) 
                                        & ((~ ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                               & ((0x0000003fU 
                                                   & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                      >> 9U)) 
                                                  == 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))))) 
                                           & ((~ ((IData)(vlSelfRef.lsu_resp_valid) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.lsu_resp[5U] 
                                                         >> 0x00000010U)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))))) 
                                              & ((~ 
                                                  (((0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                        >> 9U)) 
                                                    == 
                                                    (0x0000003fU 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))) 
                                                   & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                 & ((~ 
                                                     (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                           >> 9U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))) 
                                                      & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                    & ((~ 
                                                        (((0x0000003fU 
                                                           & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                              >> 9U)) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))) 
                                                         & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                       & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                           & ((0U 
                                                               != 
                                                               (0x0000003fU 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))) 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))))) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                              & ((0U 
                                                                  != 
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))) 
                                                                 & ((0x0000003fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)) 
                                                                    == 
                                                                    (0x0000003fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))))) 
                                                             | (((0x2fU 
                                                                  >= 
                                                                  (0x0000003fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))) 
                                                                 && (1U 
                                                                     & (IData)(
                                                                               (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118)))))) 
                                                                & (0U 
                                                                   != 
                                                                   (0x0000003fU 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_118))))))))))));
    if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23) {
        __Vtemp_13[0U] = ((vlSelfRef.boom_core__DOT__dec_uops[12U] 
                           << 7U) | (vlSelfRef.boom_core__DOT__dec_uops[11U] 
                                     >> 0x00000019U));
        __Vtemp_13[1U] = ((vlSelfRef.boom_core__DOT__dec_uops[13U] 
                           << 7U) | (vlSelfRef.boom_core__DOT__dec_uops[12U] 
                                     >> 0x00000019U));
        __Vtemp_13[2U] = ((vlSelfRef.boom_core__DOT__dec_uops[14U] 
                           << 7U) | (vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                     >> 0x00000019U));
        __Vtemp_13[3U] = ((((0x0003f000U & (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                             << 6U) 
                                            & ((- (IData)(
                                                          (0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                                               >> 8U))))) 
                                               << 0x0000000cU))) 
                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275) 
                                << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_274))) 
                           << 0x0000001dU) | ((0x1ff80000U 
                                               & (vlSelfRef.boom_core__DOT__dec_uops[15U] 
                                                  << 7U)) 
                                              | (((IData)(__VdfgRegularize_h6e95ff9d_0_280) 
                                                  << 0x00000012U) 
                                                 | (((IData)(__VdfgRegularize_h6e95ff9d_0_279) 
                                                     << 0x00000011U) 
                                                    | ((0x00018000U 
                                                        & (vlSelfRef.boom_core__DOT__dec_uops[15U] 
                                                           << 7U)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_273) 
                                                           << 9U) 
                                                          | (0x000001ffU 
                                                             & ((vlSelfRef.boom_core__DOT__dec_uops[15U] 
                                                                 << 7U) 
                                                                | (vlSelfRef.boom_core__DOT__dec_uops[14U] 
                                                                   >> 0x00000019U)))))))));
        __Vtemp_13[4U] = ((0xffff8000U & (vlSelfRef.boom_core__DOT__dec_uops[16U] 
                                          << 7U)) | 
                          (((0x0003f000U & (((IData)(vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                             << 6U) 
                                            & ((- (IData)(
                                                          (0U 
                                                           != 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.boom_core__DOT__dec_uops[13U] 
                                                               >> 8U))))) 
                                               << 0x0000000cU))) 
                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_275) 
                                << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_274))) 
                           >> 3U));
        __Vtemp_13[5U] = (((0x00007f80U & (vlSelfRef.boom_core__DOT__dec_uops[17U] 
                                           << 7U)) 
                           | (vlSelfRef.boom_core__DOT__dec_uops[16U] 
                              >> 0x00000019U)) | (0xffff8000U 
                                                  & (vlSelfRef.boom_core__DOT__dec_uops[17U] 
                                                     << 7U)));
        __Vtemp_13[6U] = (((0x00007f80U & (vlSelfRef.boom_core__DOT__dec_uops[18U] 
                                           << 7U)) 
                           | (vlSelfRef.boom_core__DOT__dec_uops[17U] 
                              >> 0x00000019U)) | (0xffff8000U 
                                                  & (vlSelfRef.boom_core__DOT__dec_uops[18U] 
                                                     << 7U)));
        __Vtemp_13[7U] = (((0x00007f80U & (vlSelfRef.boom_core__DOT__dec_uops[19U] 
                                           << 7U)) 
                           | (vlSelfRef.boom_core__DOT__dec_uops[18U] 
                              >> 0x00000019U)) | (0xffff8000U 
                                                  & (vlSelfRef.boom_core__DOT__dec_uops[19U] 
                                                     << 7U)));
        __Vtemp_13[8U] = (((0x00007f80U & (vlSelfRef.boom_core__DOT__dec_uops[20U] 
                                           << 7U)) 
                           | (vlSelfRef.boom_core__DOT__dec_uops[19U] 
                              >> 0x00000019U)) | (0xffff8000U 
                                                  & (vlSelfRef.boom_core__DOT__dec_uops[20U] 
                                                     << 7U)));
        __Vtemp_13[9U] = (((0x00007f80U & (vlSelfRef.boom_core__DOT__dec_uops[21U] 
                                           << 7U)) 
                           | (vlSelfRef.boom_core__DOT__dec_uops[20U] 
                              >> 0x00000019U)) | (0xffff8000U 
                                                  & (vlSelfRef.boom_core__DOT__dec_uops[21U] 
                                                     << 7U)));
        __Vtemp_13[10U] = (((0x00007f80U & (vlSelfRef.boom_core__DOT__dec_uops[22U] 
                                            << 7U)) 
                            | (vlSelfRef.boom_core__DOT__dec_uops[21U] 
                               >> 0x00000019U)) | (0xffff8000U 
                                                   & (vlSelfRef.boom_core__DOT__dec_uops[22U] 
                                                      << 7U)));
        __Vtemp_13[11U] = (((0x00007f80U & (vlSelfRef.boom_core__DOT__dec_uops[23U] 
                                            << 7U)) 
                            | (vlSelfRef.boom_core__DOT__dec_uops[22U] 
                               >> 0x00000019U)) | (0x01ff8000U 
                                                   & (vlSelfRef.boom_core__DOT__dec_uops[23U] 
                                                      << 7U)));
    } else {
        __Vtemp_13[0U] = ((__VdfgRegularize_h6e95ff9d_0_121[12U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[11U] 
                                     >> 0x00000019U));
        __Vtemp_13[1U] = ((__VdfgRegularize_h6e95ff9d_0_121[13U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[12U] 
                                     >> 0x00000019U));
        __Vtemp_13[2U] = ((__VdfgRegularize_h6e95ff9d_0_121[14U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[13U] 
                                     >> 0x00000019U));
        __Vtemp_13[3U] = ((__VdfgRegularize_h6e95ff9d_0_121[15U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[14U] 
                                     >> 0x00000019U));
        __Vtemp_13[4U] = ((__VdfgRegularize_h6e95ff9d_0_121[16U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[15U] 
                                     >> 0x00000019U));
        __Vtemp_13[5U] = ((__VdfgRegularize_h6e95ff9d_0_121[17U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[16U] 
                                     >> 0x00000019U));
        __Vtemp_13[6U] = ((__VdfgRegularize_h6e95ff9d_0_121[18U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[17U] 
                                     >> 0x00000019U));
        __Vtemp_13[7U] = ((__VdfgRegularize_h6e95ff9d_0_121[19U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[18U] 
                                     >> 0x00000019U));
        __Vtemp_13[8U] = ((__VdfgRegularize_h6e95ff9d_0_121[20U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[19U] 
                                     >> 0x00000019U));
        __Vtemp_13[9U] = ((__VdfgRegularize_h6e95ff9d_0_121[21U] 
                           << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[20U] 
                                     >> 0x00000019U));
        __Vtemp_13[10U] = ((__VdfgRegularize_h6e95ff9d_0_121[22U] 
                            << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[21U] 
                                      >> 0x00000019U));
        __Vtemp_13[11U] = ((__VdfgRegularize_h6e95ff9d_0_121[23U] 
                            << 7U) | (__VdfgRegularize_h6e95ff9d_0_121[22U] 
                                      >> 0x00000019U));
    }
    __VdfgRegularize_h6e95ff9d_0_220 = (1U & (((1U 
                                                == 
                                                (0x0000000fU 
                                                 & (__VdfgRegularize_h6e95ff9d_0_121[8U] 
                                                    >> 0x00000014U)))
                                                ? (~ 
                                                   (0x0000ffffU 
                                                    == (IData)(vlSelfRef.boom_core__DOT__mem_slot_request)))
                                                : (
                                                   (4U 
                                                    == 
                                                    (0x0000000fU 
                                                     & (__VdfgRegularize_h6e95ff9d_0_121[8U] 
                                                        >> 0x00000014U)))
                                                    ? 
                                                   (~ 
                                                    (0x0000ffffU 
                                                     == (IData)(vlSelfRef.boom_core__DOT__alu_slot_request)))
                                                    : (IData)(
                                                              ((0x00200000U 
                                                                == 
                                                                (0x00f00000U 
                                                                 & __VdfgRegularize_h6e95ff9d_0_121[8U])) 
                                                               & (~ 
                                                                  (0x00000fffU 
                                                                   == (IData)(vlSelfRef.boom_core__DOT__unq_slot_request))))))) 
                                              & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)))));
    vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy 
        = (((((~ ((vlSelfRef.boom_core__DOT__wakeups[71U] 
                   >> 0x0000001fU) & ((0x0000003fU 
                                       & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                          >> 0x0000000fU)) 
                                      == (0x0000003fU 
                                          & (IData)(
                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                     >> 0x0000001eU)))))) 
              & ((~ ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                     & ((0x0000003fU & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                >> 0x0000001eU))) 
                        == (0x0000003fU & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                           >> 9U))))) 
                 & ((~ ((IData)(vlSelfRef.lsu_resp_valid) 
                        & ((0x0000003fU & (vlSelfRef.lsu_resp[5U] 
                                           >> 0x00000010U)) 
                           == (0x0000003fU & (IData)(
                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                      >> 0x0000001eU)))))) 
                    & ((~ (((0x0000003fU & (IData)(
                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                    >> 0x0000001eU))) 
                            == (0x0000003fU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                               >> 9U))) 
                           & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                       & ((~ (((0x0000003fU & (IData)(
                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                       >> 0x0000001eU))) 
                               == (0x0000003fU & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                  >> 9U))) 
                              & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                          & ((~ (((0x0000003fU & (IData)(
                                                         (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                          >> 0x0000001eU))) 
                                  == (0x0000003fU & 
                                      (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                       >> 9U))) & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                             & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                 & ((0U != (0x0000003fU 
                                            & (IData)(
                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                       >> 0x0000001eU)))) 
                                    & ((0x0000003fU 
                                        & (IData)((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                   >> 0x0000001eU))) 
                                       == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)))) 
                                | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                    & ((0U != (0x0000003fU 
                                               & (IData)(
                                                         (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                          >> 0x0000001eU)))) 
                                       & ((0x0000003fU 
                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)) 
                                          == (0x0000003fU 
                                              & (IData)(
                                                        (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                         >> 0x0000001eU)))))) 
                                   | (((0x2fU >= (0x0000003fU 
                                                  & (IData)(
                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                             >> 0x0000001eU)))) 
                                       && (1U & (IData)(
                                                        (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                         >> 
                                                         (0x0000003fU 
                                                          & (IData)(
                                                                    (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                     >> 0x0000001eU))))))) 
                                      & (0U != (0x0000003fU 
                                                & (IData)(
                                                          (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                           >> 0x0000001eU))))))))))))) 
             << 5U) | (((IData)(__VdfgRegularize_h6e95ff9d_0_279) 
                        << 4U) | ((IData)(__VdfgRegularize_h6e95ff9d_0_280) 
                                  << 3U))) | ((((~ 
                                                 ((vlSelfRef.boom_core__DOT__wakeups[71U] 
                                                   >> 0x0000001fU) 
                                                  & ((0x0000003fU 
                                                      & (vlSelfRef.boom_core__DOT__wakeups[64U] 
                                                         >> 0x0000000fU)) 
                                                     == 
                                                     (0x0000003fU 
                                                      & (IData)(
                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                 >> 0x0000000cU)))))) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                            >> 9U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (IData)(
                                                                   (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                    >> 0x0000000cU)))))) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.lsu_resp_valid) 
                                                        & ((0x0000003fU 
                                                            & (vlSelfRef.lsu_resp[5U] 
                                                               >> 0x00000010U)) 
                                                           == 
                                                           (0x0000003fU 
                                                            & (IData)(
                                                                      (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                       >> 0x0000000cU)))))) 
                                                      & ((~ 
                                                          (((0x0000003fU 
                                                             & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                >> 9U)) 
                                                            == 
                                                            (0x0000003fU 
                                                             & (IData)(
                                                                       (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                        >> 0x0000000cU)))) 
                                                           & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                         & ((~ 
                                                             (((0x0000003fU 
                                                                & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                   >> 9U)) 
                                                               == 
                                                               (0x0000003fU 
                                                                & (IData)(
                                                                          (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                           >> 0x0000000cU)))) 
                                                              & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                            & ((~ 
                                                                (((0x0000003fU 
                                                                   & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                      >> 9U)) 
                                                                  == 
                                                                  (0x0000003fU 
                                                                   & (IData)(
                                                                             (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                              >> 0x0000000cU)))) 
                                                                 & (IData)(vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                               & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8) 
                                                                   & ((0U 
                                                                       != 
                                                                       (0x0000003fU 
                                                                        & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 0x0000000cU)))) 
                                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9) 
                                                                         == 
                                                                         (0x0000003fU 
                                                                          & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 0x0000000cU)))))) 
                                                                  | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_290) 
                                                                      & ((0U 
                                                                          != 
                                                                          (0x0000003fU 
                                                                           & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 0x0000000cU)))) 
                                                                         & ((0x0000003fU 
                                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_291)) 
                                                                            == 
                                                                            (0x0000003fU 
                                                                             & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 0x0000000cU)))))) 
                                                                     | (((0x2fU 
                                                                          >= 
                                                                          (0x0000003fU 
                                                                           & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 0x0000000cU)))) 
                                                                         && (1U 
                                                                             & (IData)(
                                                                                (vlSelfRef.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 0x0000000cU))))))) 
                                                                        & (0U 
                                                                           != 
                                                                           (0x0000003fU 
                                                                            & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_78 
                                                                                >> 0x0000000cU))))))))))))) 
                                               << 2U) 
                                              | (((IData)(__VdfgRegularize_h6e95ff9d_0_281) 
                                                  << 1U) 
                                                 | (IData)(__VdfgRegularize_h6e95ff9d_0_282))));
    __VdfgRegularize_h6e95ff9d_0_284[0U] = __Vtemp_13[0U];
    __VdfgRegularize_h6e95ff9d_0_284[1U] = __Vtemp_13[1U];
    __VdfgRegularize_h6e95ff9d_0_284[2U] = __Vtemp_13[2U];
    __VdfgRegularize_h6e95ff9d_0_284[3U] = __Vtemp_13[3U];
    __VdfgRegularize_h6e95ff9d_0_284[4U] = __Vtemp_13[4U];
    __VdfgRegularize_h6e95ff9d_0_284[5U] = __Vtemp_13[5U];
    __VdfgRegularize_h6e95ff9d_0_284[6U] = __Vtemp_13[6U];
    __VdfgRegularize_h6e95ff9d_0_284[7U] = __Vtemp_13[7U];
    __VdfgRegularize_h6e95ff9d_0_284[8U] = __Vtemp_13[8U];
    __VdfgRegularize_h6e95ff9d_0_284[9U] = __Vtemp_13[9U];
    __VdfgRegularize_h6e95ff9d_0_284[10U] = __Vtemp_13[10U];
    __VdfgRegularize_h6e95ff9d_0_284[11U] = (0x01ffffffU 
                                             & __Vtemp_13[11U]);
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[0U] 
        = __VdfgRegularize_h6e95ff9d_0_121[0U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[1U] 
        = __VdfgRegularize_h6e95ff9d_0_121[1U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[2U] 
        = __VdfgRegularize_h6e95ff9d_0_121[2U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[3U] 
        = __VdfgRegularize_h6e95ff9d_0_121[3U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[4U] 
        = __VdfgRegularize_h6e95ff9d_0_121[4U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[5U] 
        = __VdfgRegularize_h6e95ff9d_0_121[5U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[6U] 
        = __VdfgRegularize_h6e95ff9d_0_121[6U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[7U] 
        = __VdfgRegularize_h6e95ff9d_0_121[7U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
        = __VdfgRegularize_h6e95ff9d_0_121[8U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[9U] 
        = __VdfgRegularize_h6e95ff9d_0_121[9U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[10U] 
        = __VdfgRegularize_h6e95ff9d_0_121[10U];
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[11U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[0U] << 0x00000019U) 
           | (0x01ffffffU & __VdfgRegularize_h6e95ff9d_0_121[11U]));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[12U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[0U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[1U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[13U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[1U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[2U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[14U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[2U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[3U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[15U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[3U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[4U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[16U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[4U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[5U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[17U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[5U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[6U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[18U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[6U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[7U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[19U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[7U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[8U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[8U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[9U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[21U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[9U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[10U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[22U] 
        = ((__VdfgRegularize_h6e95ff9d_0_284[10U] >> 7U) 
           | (__VdfgRegularize_h6e95ff9d_0_284[11U] 
              << 0x00000019U));
    vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[23U] 
        = (__VdfgRegularize_h6e95ff9d_0_284[11U] >> 7U);
    vlSelfRef.boom_core__DOT__disp__DOT__iq_ready = 
        ((2U & (((2U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire))
                  ? ((1U == (0x0000000fU & (__VdfgRegularize_h6e95ff9d_0_284[8U] 
                                            >> 0x00000014U)))
                      ? (~ (0x0000ffffU == (IData)(vlSelfRef.boom_core__DOT__mem_slot_request)))
                      : ((4U == (0x0000000fU & (__VdfgRegularize_h6e95ff9d_0_284[8U] 
                                                >> 0x00000014U)))
                          ? (~ (0x0000ffffU == (IData)(vlSelfRef.boom_core__DOT__alu_slot_request)))
                          : (IData)(((0x00200000U == 
                                      (0x00f00000U 
                                       & __VdfgRegularize_h6e95ff9d_0_284[8U])) 
                                     & (~ (0x00000fffU 
                                           == (IData)(vlSelfRef.boom_core__DOT__unq_slot_request)))))))
                  : ((IData)(__VdfgRegularize_h6e95ff9d_0_220) 
                     >> 1U)) << 1U)) | (1U & (IData)(__VdfgRegularize_h6e95ff9d_0_220)));
    vlSelfRef.boom_core__DOT__disp__DOT__block = 0U;
    vlSelfRef.boom_core__DOT__dis_fire = 0U;
    if ((1U & ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__rn2_mask) 
               & (IData)(vlSelfRef.boom_core__DOT__disp__DOT__iq_ready)))) {
        vlSelfRef.boom_core__DOT__dis_fire = (1U | (IData)(vlSelfRef.boom_core__DOT__dis_fire));
    } else if ((1U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__rn2_mask))) {
        vlSelfRef.boom_core__DOT__disp__DOT__block = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.boom_core__DOT__rename__DOT__rn2_mask) 
                 & (IData)(vlSelfRef.boom_core__DOT__disp__DOT__iq_ready)) 
                >> 1U) & (~ (IData)(vlSelfRef.boom_core__DOT__disp__DOT__block))))) {
        vlSelfRef.boom_core__DOT__dis_fire = (2U | (IData)(vlSelfRef.boom_core__DOT__dis_fire));
    } else if ((2U & (IData)(vlSelfRef.boom_core__DOT__rename__DOT__rn2_mask))) {
        vlSelfRef.boom_core__DOT__disp__DOT__block = 1U;
    }
    vlSelfRef.fe_ready = ((~ (0U != ((IData)(vlSelfRef.boom_core__DOT__rename__DOT__dec_fire) 
                                     & (- (IData)((1U 
                                                   & (~ 
                                                      ((~ (IData)(vlSelfRef.boom_core__DOT__disp__DOT__block)) 
                                                       & (0U 
                                                          != 
                                                          (0x00007fffffffffffULL 
                                                           & (vlSelfRef.boom_core__DOT__rename__DOT__freelist__DOT__free_vec 
                                                              >> 1U))))))))))) 
                          & ((~ (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_146) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_147)) 
                                 & ((IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_head) 
                                    == (0x0000001fU 
                                        & (((IData)(1U) 
                                            + (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail)) 
                                           & (- (IData)(
                                                        (0x1fU 
                                                         != (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_tail))))))))) 
                             & (0U == (IData)(vlSelfRef.boom_core__DOT__rob_inst__DOT__rob_state))));
    vlSelfRef.boom_core__DOT__iq_mem_dis_valid = 0U;
    VL_ASSIGN_W(377, vlSelfRef.boom_core__DOT__iq_mem_dis_uop, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    vlSelfRef.boom_core__DOT__iq_alu_dis_valid = 0U;
    VL_ASSIGN_W(377, vlSelfRef.boom_core__DOT__iq_alu_dis_uop, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    vlSelfRef.boom_core__DOT__iq_unq_dis_valid = 0U;
    VL_ASSIGN_W(377, vlSelfRef.boom_core__DOT__iq_unq_dis_uop, Vboom_core__ConstPool__CONST_hdb31f06b_0);
    if ((1U & (IData)(vlSelfRef.boom_core__DOT__dis_fire))) {
        if ((1U == (0x0000000fU & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                   >> 0x00000014U)))) {
            vlSelfRef.boom_core__DOT__iq_mem_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[0U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[0U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[1U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[1U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[2U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[2U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[3U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[3U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[4U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[4U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[5U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[5U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[6U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[6U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[7U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[7U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[8U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[9U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[9U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[10U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[10U];
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[11U]);
        } else if ((4U == (0x0000000fU & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                          >> 0x00000014U)))) {
            vlSelfRef.boom_core__DOT__iq_alu_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[0U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[0U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[1U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[1U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[2U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[2U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[3U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[3U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[4U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[4U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[5U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[5U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[6U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[6U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[7U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[7U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[8U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[9U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[9U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[10U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[10U];
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[11U]);
        } else if ((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                          >> 0x00000014U)))) {
            vlSelfRef.boom_core__DOT__iq_unq_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[0U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[0U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[1U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[1U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[2U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[2U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[3U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[3U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[4U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[4U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[5U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[5U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[6U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[6U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[7U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[7U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[8U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[9U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[9U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[10U] 
                = vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[10U];
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[11U]);
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (0x0000000fU 
                                           & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                              >> 0x00000014U))) 
                                   << 2U) | (((4U == 
                                               (0x0000000fU 
                                                & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                                   >> 0x00000014U))) 
                                              << 1U) 
                                             | (1U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                                    >> 0x00000014U))))))))) {
            if ((0U == (((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                                >> 0x00000014U))) 
                         << 2U) | (((4U == (0x0000000fU 
                                            & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                               >> 0x00000014U))) 
                                    << 1U) | (1U == 
                                              (0x0000000fU 
                                               & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                                  >> 0x00000014U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dispatch.sv:62: Assertion failed in %m: unique case, but none matched for '4'h%X'\n",4, 'M',vlSymsp->name(),"boom_core.disp.unnamedblk3", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',4,(0x0000000fU 
                                          & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                             >> 0x00000014U)));
                    VL_STOP_MT("exu/dispatch.sv", 62, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: dispatch.sv:62: Assertion failed in %m: unique case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->name(),"boom_core.disp.unnamedblk3", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',4,(0x0000000fU & 
                                      (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[8U] 
                                       >> 0x00000014U)));
                VL_STOP_MT("exu/dispatch.sv", 62, "");
            }
        }
    }
    if ((2U & (IData)(vlSelfRef.boom_core__DOT__dis_fire))) {
        if ((1U == (0x0000000fU & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                   >> 0x0000000dU)))) {
            vlSelfRef.boom_core__DOT__iq_mem_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_mem_dis_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[22U] 
                                             >> 0x00000019U)));
        } else if ((4U == (0x0000000fU & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                          >> 0x0000000dU)))) {
            vlSelfRef.boom_core__DOT__iq_alu_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_alu_dis_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[22U] 
                                             >> 0x00000019U)));
        } else if ((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                          >> 0x0000000dU)))) {
            vlSelfRef.boom_core__DOT__iq_unq_dis_valid = 1U;
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[0U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[1U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[2U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[3U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[4U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[5U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[6U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[7U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[8U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[9U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[10U] 
                = ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__iq_unq_dis_uop[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[22U] 
                                             >> 0x00000019U)));
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (0x0000000fU 
                                           & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                              >> 0x0000000dU))) 
                                   << 2U) | (((4U == 
                                               (0x0000000fU 
                                                & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                                   >> 0x0000000dU))) 
                                              << 1U) 
                                             | (1U 
                                                == 
                                                (0x0000000fU 
                                                 & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                                    >> 0x0000000dU))))))))) {
            if ((0U == (((2U == (0x0000000fU & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                                >> 0x0000000dU))) 
                         << 2U) | (((4U == (0x0000000fU 
                                            & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                               >> 0x0000000dU))) 
                                    << 1U) | (1U == 
                                              (0x0000000fU 
                                               & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                                  >> 0x0000000dU))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: dispatch.sv:62: Assertion failed in %m: unique case, but none matched for '4'h%X'\n",4, 'M',vlSymsp->name(),"boom_core.disp.unnamedblk3", 'T',-12
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',4,(0x0000000fU 
                                          & (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                             >> 0x0000000dU)));
                    VL_STOP_MT("exu/dispatch.sv", 62, "");
                }
            } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: dispatch.sv:62: Assertion failed in %m: unique case, but multiple matches found for '4'h%X'\n",4, 'M',vlSymsp->name(),"boom_core.disp.unnamedblk3", 'T',-12
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',4,(0x0000000fU & 
                                      (vlSelfRef.boom_core__DOT__rename__DOT__rn2_uops[20U] 
                                       >> 0x0000000dU)));
                VL_STOP_MT("exu/dispatch.sv", 62, "");
            }
        }
    }
}

extern const VlWide<189>/*6047:0*/ Vboom_core__ConstPool__CONST_h2a0917b4_0;

void Vboom_core___024root___nba_comb__TOP__9(Vboom_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboom_core___024root___nba_comb__TOP__9\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid = 0U;
    VL_ASSIGN_W(6032, vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, Vboom_core__ConstPool__CONST_h2a0917b4_0);
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear = 0U;
    vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_accepted = 0U;
    vlSelfRef.boom_core__DOT__mem_iq__DOT__dst = 0U;
    if ((1U & vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid)) {
        if ((0U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[0U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[1U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[2U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[3U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[4U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[5U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[6U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[7U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[8U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[9U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[10U];
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[11U]);
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 1U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((1U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[12U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[11U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[13U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[12U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[14U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[13U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[15U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[14U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[16U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[15U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[17U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[16U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[18U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[17U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[19U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[18U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[20U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[19U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[21U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[20U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[22U] 
                    << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[21U] 
                              >> 0x00000019U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[23U] 
                                   << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[22U] 
                                             >> 0x00000019U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 2U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((2U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (4U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[24U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[23U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[25U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[24U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[26U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[25U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[27U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[26U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[28U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[27U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[29U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[28U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[30U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[29U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[31U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[30U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[32U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[31U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[33U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[32U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[34U] 
                    << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[33U] 
                                       >> 0x00000012U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[35U] 
                                   << 0x0000000eU) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[34U] 
                                     >> 0x00000012U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 3U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((3U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (8U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[36U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[35U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[37U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[36U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[38U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[37U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[39U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[38U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[40U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[39U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[41U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[40U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[42U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[41U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[43U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[42U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[44U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[43U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[45U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[44U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[46U] 
                    << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[45U] 
                                       >> 0x0000000bU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[47U] 
                                   << 0x00000015U) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[46U] 
                                     >> 0x0000000bU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 4U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((4U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[48U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[47U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[49U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[48U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[50U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[49U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[51U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[50U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[52U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[51U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[53U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[52U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[54U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[53U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[55U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[54U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[56U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[55U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[57U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[56U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[58U] 
                    << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[57U] 
                                       >> 4U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[58U] 
                                  >> 4U));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 5U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((5U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[59U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[58U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[60U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[59U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[61U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[60U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[62U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[61U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[63U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[62U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[64U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[63U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[65U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[64U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[66U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[65U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[67U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[66U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[68U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[67U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[69U] 
                    << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[68U] 
                              >> 0x0000001dU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[70U] 
                                   << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[69U] 
                                             >> 0x0000001dU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 6U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((6U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[71U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[70U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[72U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[71U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[73U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[72U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[74U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[73U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[75U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[74U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[76U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[75U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[77U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[76U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[78U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[77U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[79U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[78U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[80U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[79U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[81U] 
                    << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[80U] 
                                       >> 0x00000016U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[82U] 
                                   << 0x0000000aU) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[81U] 
                                     >> 0x00000016U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 7U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((7U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[83U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[82U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[84U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[83U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[85U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[84U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[86U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[85U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[87U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[86U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[88U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[87U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[89U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[88U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[90U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[89U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[91U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[90U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[92U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[91U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[93U] 
                    << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[92U] 
                                       >> 0x0000000fU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[94U] 
                                   << 0x00000011U) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[93U] 
                                     >> 0x0000000fU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 8U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((8U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[95U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[94U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[96U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[95U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[97U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[96U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[98U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[97U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[99U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[98U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[100U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[99U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[101U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[100U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[102U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[101U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[103U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[102U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[104U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[103U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[105U] 
                    << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[104U] 
                                       >> 8U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[106U] 
                                   << 0x00000018U) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[105U] 
                                     >> 8U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 9U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((9U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[107U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[106U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[108U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[107U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[109U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[108U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[110U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[109U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[111U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[110U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[112U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[111U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[113U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[112U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[114U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[113U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[115U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[114U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[116U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[115U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[117U] 
                    << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[116U] 
                                       >> 1U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[117U] 
                                  >> 1U));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 0x0aU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((0x0000000aU != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[118U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[117U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[119U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[118U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[120U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[119U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[121U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[120U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[122U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[121U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[123U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[122U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[124U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[123U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[125U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[124U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[126U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[125U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[127U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[126U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[128U] 
                    << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[127U] 
                              >> 0x0000001aU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[129U] 
                                   << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[128U] 
                                             >> 0x0000001aU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 0x0bU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((0x0000000bU != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[130U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[129U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[131U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[130U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[132U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[131U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[133U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[132U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[134U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[133U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[135U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[134U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[136U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[135U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[137U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[136U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[138U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[137U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[139U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[138U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[140U] 
                    << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[139U] 
                                       >> 0x00000013U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[141U] 
                                   << 0x0000000dU) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[140U] 
                                     >> 0x00000013U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 0x0cU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((0x0000000cU != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[142U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[141U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[143U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[142U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[144U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[143U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[145U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[144U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[146U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[145U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[147U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[146U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[148U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[147U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[149U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[148U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[150U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[149U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[151U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[150U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[152U] 
                    << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[151U] 
                                       >> 0x0000000cU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[153U] 
                                   << 0x00000014U) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[152U] 
                                     >> 0x0000000cU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 0x0dU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((0x0000000dU != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[154U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[153U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[155U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[154U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[156U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[155U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[157U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[156U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[158U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[157U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[159U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[158U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[160U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[159U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[161U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[160U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[162U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[161U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[163U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[162U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[164U] 
                    << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[163U] 
                                       >> 5U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[164U] 
                                  >> 5U));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 0x0eU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((0x0000000eU != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[165U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[164U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[166U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[165U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[167U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[166U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[168U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[167U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[169U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[168U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[170U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[169U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[171U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[170U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[172U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[171U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[173U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[172U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[174U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[173U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[175U] 
                    << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[174U] 
                              >> 0x0000001eU));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[176U] 
                                   << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[175U] 
                                             >> 0x0000001eU)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 0x0fU) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        if ((0x0000000fU != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear 
                = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[177U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[176U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[178U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[177U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[179U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[178U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[180U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[179U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[181U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[180U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[182U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[181U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[183U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[182U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[184U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[183U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[185U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[184U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[186U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[185U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[187U] 
                    << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[186U] 
                              >> 0x00000017U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[188U] 
                                   << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[187U] 
                                             >> 0x00000017U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    if (((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
          >> 0x10U) & VL_GTS_III(32, 0x00000010U, vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))) {
        vlSelfRef.boom_core__DOT__mem_iq__DOT__d = 0U;
        if ((0x00000010U != vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)) {
            vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid 
                = ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_valid) 
                   | (0x0000ffffU & ((IData)(1U) << 
                                     (0x0000000fU & vlSelfRef.boom_core__DOT__mem_iq__DOT__dst))));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[0U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[189U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[188U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[1U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[190U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[189U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[2U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[191U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[190U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[192U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[191U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[193U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[192U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[5U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[194U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[193U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[6U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[195U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[194U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[7U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[196U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[195U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[8U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[197U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[196U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[9U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[198U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[197U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[10U] 
                = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[199U] 
                    << 0x00000010U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[198U] 
                                       >> 0x00000010U));
            vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[11U] 
                = (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[200U] 
                                   << 0x00000010U) 
                                  | (vlSelfRef.boom_core__DOT__mem_iq__DOT__src_uop[199U] 
                                     >> 0x00000010U)));
            if ((1U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)(vlSelfRef.boom_core__DOT__wakeup_pdst_w)) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((2U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 6U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((4U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x0cU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((8U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x12U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000010U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x18U))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if ((0x00000020U & (IData)(vlSelfRef.boom_core__DOT__wakeup_valid_w))) {
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                         >> 3U))) & 
                     (0U != (0x0000003fU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                            >> 3U))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffbffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
                if ((((0x0000003fU & (IData)((vlSelfRef.boom_core__DOT__wakeup_pdst_w 
                                              >> 0x1eU))) 
                      == (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                          >> 0x0000001dU)))) 
                     & (0U != (0x0000003fU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[4U] 
                                               << 3U) 
                                              | (vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                                                 >> 0x0000001dU)))))) {
                    vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U] 
                        = (0xfffdffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp[3U]);
                }
            }
            if (VL_LIKELY(((0x178fU >= (0x00001fffU 
                                        & ((IData)(0x00000179U) 
                                           * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)))))) {
                VL_ASSIGNSEL_WW(6032, 377, (0x00001fffU 
                                            & ((IData)(0x00000179U) 
                                               * vlSelfRef.boom_core__DOT__mem_iq__DOT__dst)), vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_in_uop, vlSelfRef.boom_core__DOT__mem_iq__DOT__tmp);
            }
        }
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_accepted = 1U;
        vlSelfRef.boom_core__DOT__mem_iq__DOT__dst 
            = ((IData)(1U) + vlSelfRef.boom_core__DOT__mem_iq__DOT__dst);
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_ready 
        = vlSelfRef.boom_core__DOT__mem_iq__DOT__dis_accepted;
    vlSelfRef.boom_core__DOT__mem_iss_valid = 0U;
    VL_ASSIGN_W(754, vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop, Vboom_core__ConstPool__CONST_h4465c659_0);
    vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant = 0U;
    vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used = 0U;
    {
        if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request)))) {
            goto __Vlabel0;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[0U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[1U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[2U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[3U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[4U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[5U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[6U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[7U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[8U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[9U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[10U];
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[11U]));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel1;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[0U] 
                          << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[0U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[1U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[1U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[2U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[2U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[3U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[3U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[4U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[4U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[5U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[5U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[6U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[6U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[7U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[7U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[8U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[8U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[9U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[9U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[10U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[10U] 
                        >> 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[11U] 
                                  << 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[11U] 
                                      >> 7U));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel1: ;
        }
        __Vlabel0: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 1U)))) {
            goto __Vlabel2;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[12U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[11U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[13U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[12U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[14U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[13U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[15U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[14U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[16U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[15U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[17U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[16U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[18U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[17U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[19U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[18U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[20U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[19U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[21U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[20U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[22U] 
                        << 7U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[21U] 
                                  >> 0x00000019U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[23U] 
                                          << 7U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[22U] 
                                          >> 0x00000019U))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel3;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[11U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[12U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[12U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[13U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[13U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[14U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[14U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[15U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[15U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[16U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[16U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[17U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[17U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[18U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[18U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[19U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[19U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[20U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[20U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[21U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[21U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[22U]) 
                       | (0xfe000000U & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[22U]));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[23U]);
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel3: ;
        }
        __Vlabel2: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 2U)))) {
            goto __Vlabel4;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[24U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[23U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[25U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[24U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[26U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[25U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[27U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[26U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[28U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[27U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[29U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[28U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[30U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[29U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[31U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[30U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[32U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[31U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[33U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[32U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[34U] 
                        << 0x0000000eU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[33U] 
                                           >> 0x00000012U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[35U] 
                                          << 0x0000000eU) 
                                         | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[34U] 
                                            >> 0x00000012U))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel5;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (4U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[23U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[24U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[23U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[24U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[25U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[24U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[25U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[26U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[25U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[26U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[27U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[26U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[27U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[28U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[27U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[28U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[29U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[28U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[29U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[30U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[29U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[30U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[31U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[30U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[31U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[32U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[31U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[32U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[33U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[32U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[33U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01ffff80U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[34U] 
                                        << 7U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[33U] 
                                                   >> 0x00000019U)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[34U] 
                                         << 7U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & ((0x01ffff80U 
                                       & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[35U] 
                                          << 7U)) | 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[34U] 
                                       >> 0x00000019U)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel5: ;
        }
        __Vlabel4: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 3U)))) {
            goto __Vlabel6;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (8U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[36U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[35U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[37U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[36U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[38U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[37U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[39U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[38U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[40U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[39U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[41U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[40U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[42U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[41U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[43U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[42U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[44U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[43U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[45U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[44U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[46U] 
                        << 0x00000015U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[45U] 
                                           >> 0x0000000bU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[47U] 
                                          << 0x00000015U) 
                                         | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[46U] 
                                            >> 0x0000000bU))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel7;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (8U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[35U] 
                                         << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[36U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[35U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[36U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[37U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[36U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[37U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[38U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[37U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[38U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[39U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[38U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[39U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[40U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[39U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[40U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[41U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[40U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[41U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[42U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[41U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[42U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[43U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[42U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[43U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[44U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[43U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[44U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[45U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[44U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[45U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01ffc000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[46U] 
                                        << 0x0000000eU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[45U] 
                           >> 0x00000012U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[46U] 
                                                  << 0x0000000eU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & ((0x01ffc000U 
                                       & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[47U] 
                                          << 0x0000000eU)) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[46U] 
                                         >> 0x00000012U)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel7: ;
        }
        __Vlabel6: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 4U)))) {
            goto __Vlabel8;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[48U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[47U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[49U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[48U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[50U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[49U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[51U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[50U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[52U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[51U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[53U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[52U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[54U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[53U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[55U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[54U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[56U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[55U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[57U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[56U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[58U] 
                        << 0x0000001cU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[57U] 
                                           >> 4U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[58U] 
                                         >> 4U)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel9;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000010U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[47U] 
                                         << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[48U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[47U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[48U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[49U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[48U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[49U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[50U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[49U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[50U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[51U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[50U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[51U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[52U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[51U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[52U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[53U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[52U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[53U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[54U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[53U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[54U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[55U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[54U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[55U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[56U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[55U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[56U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[57U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[56U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[57U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01e00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[58U] 
                                        << 0x00000015U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[57U] 
                           >> 0x0000000bU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[58U] 
                                                  << 0x00000015U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[58U] 
                                      >> 0x0000000bU));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel9: ;
        }
        __Vlabel8: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 5U)))) {
            goto __Vlabel10;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[59U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[58U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[60U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[59U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[61U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[60U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[62U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[61U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[63U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[62U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[64U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[63U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[65U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[64U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[66U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[65U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[67U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[66U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[68U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[67U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[69U] 
                        << 3U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[68U] 
                                  >> 0x0000001dU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[70U] 
                                          << 3U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[69U] 
                                          >> 0x0000001dU))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel11;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000020U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[59U] 
                           << 0x0000001cU) | (0x0e000000U 
                                              & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[58U] 
                                                 >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[59U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[60U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[59U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[60U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[61U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[60U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[61U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[62U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[61U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[62U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[63U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[62U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[63U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[64U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[63U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[64U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[65U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[64U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[65U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[66U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[65U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[66U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[67U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[66U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[67U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[68U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[67U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[68U] 
                                       >> 4U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[69U] 
                                                   << 0x0000001cU) 
                                                  | (0x0e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[68U] 
                                                        >> 4U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[69U] 
                                       >> 4U)) | (0xfe000000U 
                                                  & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[70U] 
                                                      << 0x0000001cU) 
                                                     | (0x0e000000U 
                                                        & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[69U] 
                                                           >> 4U)))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[70U] 
                                      >> 4U));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel11: ;
        }
        __Vlabel10: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 6U)))) {
            goto __Vlabel12;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[71U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[70U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[72U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[71U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[73U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[72U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[74U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[73U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[75U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[74U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[76U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[75U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[77U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[76U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[78U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[77U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[79U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[78U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[80U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[79U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[81U] 
                        << 0x0000000aU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[80U] 
                                           >> 0x00000016U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[82U] 
                                          << 0x0000000aU) 
                                         | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[81U] 
                                            >> 0x00000016U))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel13;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000040U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[70U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[71U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[70U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[71U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[72U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[71U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[72U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[73U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[72U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[73U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[74U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[73U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[74U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[75U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[74U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[75U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[76U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[75U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[76U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[77U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[76U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[77U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[78U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[77U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[78U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[79U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[78U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[79U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[80U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[79U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[80U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01fffff8U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[81U] 
                                        << 3U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[80U] 
                                                   >> 0x0000001dU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[81U] 
                                         << 3U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & ((0x01fffff8U 
                                       & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[82U] 
                                          << 3U)) | 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[81U] 
                                       >> 0x0000001dU)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel13: ;
        }
        __Vlabel12: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 7U)))) {
            goto __Vlabel14;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[83U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[82U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[84U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[83U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[85U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[84U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[86U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[85U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[87U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[86U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[88U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[87U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[89U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[88U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[90U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[89U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[91U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[90U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[92U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[91U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[93U] 
                        << 0x00000011U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[92U] 
                                           >> 0x0000000fU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[94U] 
                                          << 0x00000011U) 
                                         | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[93U] 
                                            >> 0x0000000fU))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel15;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000080U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[82U] 
                                         << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[83U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[82U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[83U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[84U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[83U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[84U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[85U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[84U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[85U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[86U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[85U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[86U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[87U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[86U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[87U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[88U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[87U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[88U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[89U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[88U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[89U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[90U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[89U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[90U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[91U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[90U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[91U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[92U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[91U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[92U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01fffc00U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[93U] 
                                        << 0x0000000aU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[92U] 
                           >> 0x00000016U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[93U] 
                                                  << 0x0000000aU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & ((0x01fffc00U 
                                       & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[94U] 
                                          << 0x0000000aU)) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[93U] 
                                         >> 0x00000016U)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel15: ;
        }
        __Vlabel14: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 8U)))) {
            goto __Vlabel16;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[95U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[94U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[96U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[95U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[97U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[96U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[98U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[97U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[99U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[98U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[100U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[99U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[101U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[100U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[102U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[101U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[103U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[102U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[104U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[103U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[105U] 
                        << 0x00000018U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[104U] 
                                           >> 8U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[106U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[105U] 
                                            >> 8U))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel17;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000100U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[94U] 
                                         << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[95U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[94U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[95U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[96U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[95U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[96U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[97U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[96U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[97U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[98U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[97U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[98U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[99U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[98U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[99U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[100U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[99U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[100U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[101U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[100U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[101U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[102U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[101U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[102U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[103U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[102U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[103U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[104U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[103U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[104U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01fe0000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[105U] 
                                        << 0x00000011U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[104U] 
                           >> 0x0000000fU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[105U] 
                                                  << 0x00000011U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & ((0x01fe0000U 
                                       & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[106U] 
                                          << 0x00000011U)) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[105U] 
                                         >> 0x0000000fU)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel17: ;
        }
        __Vlabel16: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 9U)))) {
            goto __Vlabel18;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[107U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[106U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[108U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[107U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[109U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[108U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[110U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[109U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[111U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[110U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[112U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[111U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[113U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[112U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[114U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[113U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[115U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[114U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[116U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[115U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[117U] 
                        << 0x0000001fU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[116U] 
                                           >> 1U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[117U] 
                                         >> 1U)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel19;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000200U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[106U] 
                                         << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[107U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[106U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[107U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[108U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[107U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[108U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[109U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[108U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[109U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[110U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[109U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[110U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[111U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[110U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[111U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[112U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[111U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[112U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[113U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[112U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[113U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[114U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[113U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[114U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[115U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[114U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[115U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[116U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[115U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[116U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[117U] 
                                        << 0x00000018U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[116U] 
                           >> 8U)) | (0xfe000000U & 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[117U] 
                                       << 0x00000018U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[117U] 
                                      >> 8U));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel19: ;
        }
        __Vlabel18: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 0x0aU)))) {
            goto __Vlabel20;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[118U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[117U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[119U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[118U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[120U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[119U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[121U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[120U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[122U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[121U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[123U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[122U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[124U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[123U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[125U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[124U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[126U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[125U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[127U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[126U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[128U] 
                        << 6U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[127U] 
                                  >> 0x0000001aU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[129U] 
                                          << 6U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[128U] 
                                          >> 0x0000001aU))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel21;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000400U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[118U] 
                           << 0x0000001fU) | (0x7e000000U 
                                              & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[117U] 
                                                 >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[118U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[119U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[118U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[119U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[120U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[119U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[120U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[121U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[120U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[121U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[122U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[121U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[122U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[123U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[122U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[123U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[124U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[123U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[124U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[125U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[124U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[125U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[126U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[125U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[126U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[127U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[126U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[127U] 
                                       >> 1U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[128U] 
                                                   << 0x0000001fU) 
                                                  | (0x7e000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[127U] 
                                                        >> 1U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[128U] 
                                       >> 1U)) | (0xfe000000U 
                                                  & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[129U] 
                                                      << 0x0000001fU) 
                                                     | (0x7e000000U 
                                                        & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[128U] 
                                                           >> 1U)))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[129U] 
                                      >> 1U));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel21: ;
        }
        __Vlabel20: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 0x0bU)))) {
            goto __Vlabel22;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[130U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[129U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[131U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[130U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[132U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[131U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[133U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[132U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[134U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[133U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[135U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[134U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[136U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[135U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[137U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[136U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[138U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[137U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[139U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[138U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[140U] 
                        << 0x0000000dU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[139U] 
                                           >> 0x00000013U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[141U] 
                                          << 0x0000000dU) 
                                         | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[140U] 
                                            >> 0x00000013U))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel23;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00000800U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[129U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[130U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[129U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[130U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[131U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[130U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[131U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[132U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[131U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[132U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[133U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[132U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[133U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[134U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[133U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[134U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[135U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[134U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[135U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[136U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[135U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[136U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[137U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[136U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[137U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[138U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[137U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[138U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[139U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[138U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[139U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01ffffc0U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[140U] 
                                        << 6U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[139U] 
                                                   >> 0x0000001aU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[140U] 
                                         << 6U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & ((0x01ffffc0U 
                                       & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[141U] 
                                          << 6U)) | 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[140U] 
                                       >> 0x0000001aU)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel23: ;
        }
        __Vlabel22: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 0x0cU)))) {
            goto __Vlabel24;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[142U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[141U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[143U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[142U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[144U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[143U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[145U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[144U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[146U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[145U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[147U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[146U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[148U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[147U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[149U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[148U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[150U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[149U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[151U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[150U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[152U] 
                        << 0x00000014U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[151U] 
                                           >> 0x0000000cU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[153U] 
                                          << 0x00000014U) 
                                         | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[152U] 
                                            >> 0x0000000cU))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel25;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00001000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[141U] 
                                         << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[142U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[141U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[142U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[143U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[142U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[143U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[144U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[143U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[144U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[145U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[144U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[145U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[146U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[145U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[146U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[147U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[146U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[147U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[148U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[147U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[148U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[149U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[148U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[149U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[150U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[149U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[150U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[151U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[150U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[151U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01ffe000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[152U] 
                                        << 0x0000000dU)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[151U] 
                           >> 0x00000013U)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[152U] 
                                                  << 0x0000000dU)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & ((0x01ffe000U 
                                       & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[153U] 
                                          << 0x0000000dU)) 
                                      | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[152U] 
                                         >> 0x00000013U)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel25: ;
        }
        __Vlabel24: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 0x0dU)))) {
            goto __Vlabel26;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[154U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[153U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[155U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[154U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[156U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[155U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[157U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[156U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[158U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[157U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[159U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[158U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[160U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[159U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[161U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[160U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[162U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[161U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[163U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[162U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[164U] 
                        << 0x0000001bU) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[163U] 
                                           >> 5U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[164U] 
                                         >> 5U)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel27;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00002000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[153U] 
                                         << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[154U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[153U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[154U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[155U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[154U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[155U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[156U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[155U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[156U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[157U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[156U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[157U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[158U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[157U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[158U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[159U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[158U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[159U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[160U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[159U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[160U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[161U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[160U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[161U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[162U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[161U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[162U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[163U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[162U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[163U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01f00000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[164U] 
                                        << 0x00000014U)) 
                        | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[163U] 
                           >> 0x0000000cU)) | (0xfe000000U 
                                               & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[164U] 
                                                  << 0x00000014U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[164U] 
                                      >> 0x0000000cU));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel27: ;
        }
        __Vlabel26: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 0x0eU)))) {
            goto __Vlabel28;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[165U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[164U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[166U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[165U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[167U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[166U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[168U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[167U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[169U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[168U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[170U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[169U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[171U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[170U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[172U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[171U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[173U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[172U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[174U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[173U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[175U] 
                        << 2U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[174U] 
                                  >> 0x0000001eU));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[176U] 
                                          << 2U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[175U] 
                                          >> 0x0000001eU))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel29;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00004000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[165U] 
                           << 0x0000001bU) | (0x06000000U 
                                              & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[164U] 
                                                 >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[165U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[166U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[165U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[166U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[167U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[166U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[167U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[168U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[167U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[168U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[169U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[168U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[169U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[170U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[169U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[170U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[171U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[170U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[171U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[172U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[171U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[172U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[173U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[172U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[173U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[174U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[173U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[174U] 
                                       >> 5U)) | ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[175U] 
                                                   << 0x0000001bU) 
                                                  | (0x06000000U 
                                                     & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[174U] 
                                                        >> 5U))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = ((0x01ffffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[175U] 
                                       >> 5U)) | (0xfe000000U 
                                                  & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[176U] 
                                                      << 0x0000001bU) 
                                                     | (0x06000000U 
                                                        & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[175U] 
                                                           >> 5U)))));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[176U] 
                                      >> 5U));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel29: ;
        }
        __Vlabel28: ;
    }
    {
        if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_request) 
                      >> 0x0fU)))) {
            goto __Vlabel30;
        }
        {
            if ((1U & (~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[0U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[177U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[176U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[1U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[178U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[177U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[2U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[179U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[178U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[3U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[180U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[179U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[181U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[180U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[5U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[182U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[181U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[6U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[183U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[182U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[7U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[184U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[183U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[8U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[185U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[184U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[9U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[186U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[185U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[10U] 
                    = ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[187U] 
                        << 9U) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[186U] 
                                  >> 0x00000017U));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0xfe000000U & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0x01ffffffU & ((vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[188U] 
                                          << 9U) | 
                                         (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[187U] 
                                          >> 0x00000017U))));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (1U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
                goto __Vlabel31;
            }
            if ((1U & (~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used) 
                          >> 1U)))) {
                vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant 
                    = (0x00008000U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_grant));
                vlSelfRef.boom_core__DOT__mem_iss_valid 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iss_valid));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U] 
                    = ((0x01ffffffU & vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[11U]) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[176U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[12U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[177U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[176U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[177U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[13U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[178U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[177U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[178U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[14U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[179U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[178U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[179U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[180U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[179U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[180U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[181U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[180U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[181U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[17U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[182U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[181U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[182U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[18U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[183U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[182U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[183U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[19U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[184U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[183U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[184U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[20U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[185U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[184U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[185U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[21U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[186U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[185U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[186U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[22U] 
                    = (((0x01fffffcU & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[187U] 
                                        << 2U)) | (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[186U] 
                                                   >> 0x0000001eU)) 
                       | (0xfe000000U & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[187U] 
                                         << 2U)));
                vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[23U] 
                    = (0x0003ffffU & ((0x01fffffcU 
                                       & (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[188U] 
                                          << 2U)) | 
                                      (vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_iss_uop[187U] 
                                       >> 0x0000001eU)));
                vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used 
                    = (2U | (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__port_used));
            }
            __Vlabel31: ;
        }
        __Vlabel30: ;
    }
    vlSelfRef.boom_core__DOT__mem_iq__DOT__src_valid 
        = ((((((((~ (vlSelfRef.boom_core__DOT__iq_mem_dis_uop[3U] 
                     >> 8U)) & (IData)(vlSelfRef.boom_core__DOT__iq_mem_dis_valid)) 
                << 4U) | (((IData)(((~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                        >> 0x0000000fU)) 
                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                       >> 0x0000000fU))) 
                           << 3U) | (4U & (((~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                >> 0x0000000eU)) 
                                            << 2U) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                              >> 0x0000000cU))))) 
              | ((2U & (((~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                             >> 0x0000000dU)) << 1U) 
                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                           >> 0x0000000cU))) | (1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                     >> 0x0000000cU)) 
                                                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                      >> 0x0000000cU))))) 
             << 0x0000000cU) | ((((2U & (((~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                              >> 0x0000000bU)) 
                                          << 1U) & 
                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                          >> 0x0000000aU))) 
                                  | (1U & ((~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                               >> 0x0000000aU)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                              >> 0x0000000aU)))) 
                                 << 0x0000000aU) | 
                                (((2U & (((~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                              >> 9U)) 
                                          << 1U) & 
                                         ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                          >> 8U))) 
                                  | (1U & ((~ ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                               >> 8U)) 
                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                              >> 8U)))) 
                                 << 8U))) | (((((2U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                       >> 7U)) 
                                                     << 1U) 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                       >> 6U))) 
                                                | (1U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                        >> 6U)) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                         >> 6U)))) 
                                               << 6U) 
                                              | (((2U 
                                                   & (((~ 
                                                        ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                         >> 5U)) 
                                                       << 1U) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                         >> 4U))) 
                                                  | (1U 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                          >> 4U)) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                           >> 4U)))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (((~ 
                                                        ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                         >> 3U)) 
                                                       << 1U) 
                                                      & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                         >> 2U))) 
                                                  | (1U 
                                                     & ((~ 
                                                         ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                          >> 2U)) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                           >> 2U)))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (((~ 
                                                         ((IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear) 
                                                          >> 1U)) 
                                                        << 1U) 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4))) 
                                                   | (1U 
                                                      & ((~ (IData)(vlSelfRef.boom_core__DOT__mem_iq__DOT__slot_clear)) 
                                                         & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                           << 4U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                             >> 0x0000001cU)))) 
                                                     & ((0x0000003fU 
                                                         & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                             << 4U) 
                                                            | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                               >> 0x0000001cU))) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                        << 4U) 
                                                       | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                          >> 0x0000001cU)))) 
                                                  & (((0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                           << 4U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                             >> 0x0000001cU))) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                        << 4U) 
                                                       | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                          >> 0x0000001cU)))) 
                                                  & (((0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                           << 4U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                             >> 0x0000001cU))) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                        << 4U) 
                                                       | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                          >> 0x0000001cU)))) 
                                                  & (((0x0000003fU 
                                                       & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                           << 4U) 
                                                          | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                             >> 0x0000001cU))) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13) 
                                                  & ((0U 
                                                      != 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 3U))) 
                                                     & ((0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                            >> 3U)) 
                                                        == 
                                                        (0x0000003fU 
                                                         & (vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                            >> 9U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.lsu_resp[5U] 
                                                          >> 0x00000010U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240 = ((0U 
                                                   != 
                                                   (0x0000003fU 
                                                    & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                       >> 3U))) 
                                                  & (((0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                          >> 3U)) 
                                                      == 
                                                      (0x0000003fU 
                                                       & (vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__exe_uop[4U] 
                                                          >> 9U))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_231 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                         << 4U) 
                                                        | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                           >> 0x0000001cU)))) 
                                                   & (((0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                            << 4U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                              >> 0x0000001cU))) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_233)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_234)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_235)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                              << 4U) 
                                                             | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                                >> 0x0000001cU)))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                                << 4U) 
                                                               | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                                  >> 0x0000001cU)))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & ((vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[16U] 
                                                            << 4U) 
                                                           | (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[15U] 
                                                              >> 0x0000001cU)))]
                                                        : 0U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_236 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                        >> 3U))) 
                                                   & (((0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                           >> 3U)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                           >> 9U))) 
                                                      & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22)))
                                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10
                                                   : 
                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_238)
                                                    ? 
                                                   ((vlSelfRef.lsu_resp[1U] 
                                                     << 0x00000019U) 
                                                    | (vlSelfRef.lsu_resp[0U] 
                                                       >> 7U))
                                                    : 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_239)
                                                     ? vlSelfRef.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__alu_result
                                                     : 
                                                    ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_240)
                                                      ? vlSelfRef.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__alu_result
                                                      : 
                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_237)
                                                       ? vlSelfRef.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__alu_result
                                                       : 
                                                      (((0U 
                                                         != 
                                                         (0x0000003fU 
                                                          & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                             >> 3U))) 
                                                        & (0x2fU 
                                                           >= 
                                                           (0x0000003fU 
                                                            & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                               >> 3U))))
                                                        ? vlSelfRef.boom_core__DOT__iregfile__DOT__rf
                                                       [
                                                       (0x0000003fU 
                                                        & (vlSelfRef.boom_core__DOT____Vcellout__mem_iq__iss_uop[4U] 
                                                           >> 3U))]
                                                        : 0U))))));
}
