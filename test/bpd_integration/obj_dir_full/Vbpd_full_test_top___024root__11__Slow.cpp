// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbpd_full_test_top.h for the primary calling header

#include "Vbpd_full_test_top__pch.h"

VL_ATTR_COLD void Vbpd_full_test_top___024root___stl_sequent__TOP__11(Vbpd_full_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpd_full_test_top___024root___stl_sequent__TOP__11\n"); );
    Vbpd_full_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                      >> 2U))] 
                                                 >> 1U) 
                                                & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                    >> 7U) 
                                                   == 
                                                   (0x01ffffffU 
                                                    & ((vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                        [
                                                        (0x0000001fU 
                                                         & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                            >> 2U))][3U] 
                                                        << 1U) 
                                                       | (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                          [
                                                          (0x0000001fU 
                                                           & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                              >> 2U))][2U] 
                                                          >> 0x0000001fU)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entry_valid
                                                 [(0x0000001fU 
                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                      >> 2U))] 
                                                 & ((vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                     >> 7U) 
                                                    == 
                                                    (0x01ffffffU 
                                                     & (vlSelfRef.bpd_full_test_top__DOT__btb_inst__DOT__entries
                                                        [
                                                        (0x0000001fU 
                                                         & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__update_lane_pc 
                                                            >> 2U))][1U] 
                                                        >> 3U))));
    vlSelfRef.ubtb_f1_preds[0U] = (IData)(((- (QData)((IData)(
                                                              ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit) 
                                                               & (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_valid))))) 
                                           & (((QData)((IData)(
                                                               (2U 
                                                                | (1U 
                                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                      [
                                                                      (((IData)(2U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                       >> 5U)] 
                                                                      >> 
                                                                      (0x0000001fU 
                                                                       & ((IData)(2U) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & ((IData)(0x00000041U) 
                                                                              * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))))) 
                                               << 0x00000022U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                      [
                                                                      (((IData)(1U) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & ((IData)(0x00000041U) 
                                                                            * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                       >> 5U)] 
                                                                      >> 
                                                                      (0x0000001fU 
                                                                       & ((IData)(1U) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & ((IData)(0x00000041U) 
                                                                              * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))) 
                                                  << 0x00000021U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                         [
                                                                         (0x0000003fU 
                                                                          & (((IData)(0x00000041U) 
                                                                              * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)) 
                                                                             >> 5U))] 
                                                                         >> 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x00000041U) 
                                                                             * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(
                                                                      (((0U 
                                                                         == 
                                                                         (0x0000001fU 
                                                                          & ((IData)(3U) 
                                                                             + 
                                                                             (0x000007ffU 
                                                                              & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))
                                                                         ? 0U
                                                                         : 
                                                                        (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                         [
                                                                         (((IData)(0x00000022U) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & ((IData)(0x00000041U) 
                                                                               * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                          >> 5U)] 
                                                                         << 
                                                                         ((IData)(0x00000020U) 
                                                                          - 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              + 
                                                                              (0x000007ffU 
                                                                               & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))) 
                                                                       | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                          [
                                                                          (((IData)(3U) 
                                                                            + 
                                                                            (0x000007ffU 
                                                                             & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                           >> 5U)] 
                                                                          >> 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              + 
                                                                              (0x000007ffU 
                                                                               & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))))))));
    vlSelfRef.ubtb_f1_preds[1U] = ((0xfffffff0U & vlSelfRef.ubtb_f1_preds[1U]) 
                                   | (IData)((((- (QData)((IData)(
                                                                  ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit) 
                                                                   & (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_valid))))) 
                                               & (((QData)((IData)(
                                                                   (2U 
                                                                    | (1U 
                                                                       & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                          [
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0x000007ffU 
                                                                             & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                           >> 5U)] 
                                                                          >> 
                                                                          (0x0000001fU 
                                                                           & ((IData)(2U) 
                                                                              + 
                                                                              (0x000007ffU 
                                                                               & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))))) 
                                                   << 0x00000022U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                          [
                                                                          (((IData)(1U) 
                                                                            + 
                                                                            (0x000007ffU 
                                                                             & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                           >> 5U)] 
                                                                          >> 
                                                                          (0x0000001fU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (0x000007ffU 
                                                                               & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))) 
                                                      << 0x00000021U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                             [
                                                                             (0x0000003fU 
                                                                              & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)) 
                                                                                >> 5U))] 
                                                                             >> 
                                                                             (0x0000001fU 
                                                                              & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          (((0U 
                                                                             == 
                                                                             (0x0000001fU 
                                                                              & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))
                                                                             ? 0U
                                                                             : 
                                                                            (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                             [
                                                                             (((IData)(0x00000022U) 
                                                                               + 
                                                                               (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                              >> 5U)] 
                                                                             << 
                                                                             ((IData)(0x00000020U) 
                                                                              - 
                                                                              (0x0000001fU 
                                                                               & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))))))) 
                                                                           | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                              [
                                                                              (((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx)))) 
                                                                               >> 5U)] 
                                                                              >> 
                                                                              (0x0000001fU 
                                                                               & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__0__KET____DOT__hit_idx))))))))))))) 
                                              >> 0x00000020U)));
    vlSelfRef.ubtb_f1_preds[1U] = ((0x0000000fU & vlSelfRef.ubtb_f1_preds[1U]) 
                                   | ((IData)(((- (QData)((IData)(
                                                                  ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_valid) 
                                                                   & (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                                               & (((QData)((IData)(
                                                                   (2U 
                                                                    | (1U 
                                                                       & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                          [
                                                                          (((IData)(2U) 
                                                                            + 
                                                                            (0x000007ffU 
                                                                             & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                           >> 5U)] 
                                                                          >> 
                                                                          (0x0000001fU 
                                                                           & ((IData)(2U) 
                                                                              + 
                                                                              (0x000007ffU 
                                                                               & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                                                   << 0x00000022U) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                          [
                                                                          (((IData)(1U) 
                                                                            + 
                                                                            (0x000007ffU 
                                                                             & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                           >> 5U)] 
                                                                          >> 
                                                                          (0x0000001fU 
                                                                           & ((IData)(1U) 
                                                                              + 
                                                                              (0x000007ffU 
                                                                               & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                                      << 0x00000021U) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                             [
                                                                             (0x0000003fU 
                                                                              & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                                >> 5U))] 
                                                                             >> 
                                                                             (0x0000001fU 
                                                                              & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                                         << 0x00000020U) 
                                                        | (QData)((IData)(
                                                                          (((0U 
                                                                             == 
                                                                             (0x0000001fU 
                                                                              & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                             ? 0U
                                                                             : 
                                                                            (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                             [
                                                                             (((IData)(0x00000022U) 
                                                                               + 
                                                                               (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                              >> 5U)] 
                                                                             << 
                                                                             ((IData)(0x00000020U) 
                                                                              - 
                                                                              (0x0000001fU 
                                                                               & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                           | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                              [
                                                                              (((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                               >> 5U)] 
                                                                              >> 
                                                                              (0x0000001fU 
                                                                               & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))))))) 
                                      << 4U));
    vlSelfRef.ubtb_f1_preds[2U] = (0x000000ffU & (((IData)(
                                                           ((- (QData)((IData)(
                                                                               ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_valid) 
                                                                                & (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                                                            & (((QData)((IData)(
                                                                                (2U 
                                                                                | (1U 
                                                                                & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                                                                << 0x00000022U) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                                                   << 0x00000021U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (0x0000003fU 
                                                                                & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                                                      << 0x00000020U) 
                                                                     | (QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (((IData)(0x00000022U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                                | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))))))) 
                                                   >> 0x0000001cU) 
                                                  | ((IData)(
                                                             (((- (QData)((IData)(
                                                                                ((IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__f1_valid) 
                                                                                & (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit))))) 
                                                               & (((QData)((IData)(
                                                                                (2U 
                                                                                | (1U 
                                                                                & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(2U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))))) 
                                                                   << 0x00000022U) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(1U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))) 
                                                                      << 0x00000021U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (0x0000003fU 
                                                                                & (((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))) 
                                                                         << 0x00000020U) 
                                                                        | (QData)((IData)(
                                                                                (((0U 
                                                                                == 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))
                                                                                 ? 0U
                                                                                 : 
                                                                                (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (((IData)(0x00000022U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x00000020U) 
                                                                                - 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))))))) 
                                                                                | (vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__entries
                                                                                [
                                                                                (((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx)))) 
                                                                                >> 5U)] 
                                                                                >> 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                + 
                                                                                (0x000007ffU 
                                                                                & ((IData)(0x00000041U) 
                                                                                * (IData)(vlSelfRef.bpd_full_test_top__DOT__ubtb_inst__DOT__genblk1__BRA__1__KET____DOT__hit_idx))))))))))))) 
                                                              >> 0x00000020U)) 
                                                     << 4U)));
}
