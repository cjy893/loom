// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h4b97b6c5_0;

void Vdecode_test_top___024root___ico_comb__TOP__1(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___ico_comb__TOP__1\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<9>/*287:0*/ __Vtemp_1;
    // Body
    if ((0U == (3U & vlSelfRef.pc))) {
        if ((0x00000800U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U])) {
            __Vtemp_1[0U] = (IData)((0x000000000000002aULL 
                                     | ((QData)((IData)(
                                                        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
                                                          << 3U) 
                                                         | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
                                                            >> 0x0000001dU)))) 
                                        << 6U)));
            __Vtemp_1[1U] = (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
                               << 9U) | (0x00000100U 
                                         & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
                                            >> 0x00000017U))) 
                             | (IData)(((0x000000000000002aULL 
                                         | ((QData)((IData)(
                                                            ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
                                                              << 3U) 
                                                             | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
                                                                >> 0x0000001dU)))) 
                                            << 6U)) 
                                        >> 0x00000020U)));
            __Vtemp_1[2U] = ((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
                                             >> 0x00000017U)) 
                             | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
                                 << 9U) | (0x00000100U 
                                           & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
                                              >> 0x00000017U))));
            __Vtemp_1[3U] = ((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
                                             >> 0x00000017U)) 
                             | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
                                 << 9U) | (0x00000100U 
                                           & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
                                              >> 0x00000017U))));
            __Vtemp_1[4U] = ((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
                                             >> 0x00000017U)) 
                             | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
                                 << 9U) | (0x00000100U 
                                           & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
                                              >> 0x00000017U))));
            __Vtemp_1[5U] = ((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
                                             >> 0x00000017U)) 
                             | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
                                 << 9U) | (0x00000100U 
                                           & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
                                              >> 0x00000017U))));
            __Vtemp_1[6U] = ((0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
                                             >> 0x00000017U)) 
                             | (0xffffff00U & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                                                << 9U) 
                                               | (0x00000100U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
                                                     >> 0x00000017U)))));
            __Vtemp_1[7U] = (((IData)((QData)((IData)(
                                                      (0x001ffffeU 
                                                       & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
                                                           << 7U) 
                                                          | (0x0000007eU 
                                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                                                                >> 0x00000019U))))))) 
                              << 2U) | (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                                              >> 0x00000017U)));
            __Vtemp_1[8U] = (((IData)((QData)((IData)(
                                                      (0x001ffffeU 
                                                       & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
                                                           << 7U) 
                                                          | (0x0000007eU 
                                                             & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                                                                >> 0x00000019U))))))) 
                              >> 0x0000001eU) | ((IData)(
                                                         ((QData)((IData)(
                                                                          (0x001ffffeU 
                                                                           & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
                                                                               << 7U) 
                                                                              | (0x0000007eU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                                                                                >> 0x00000019U)))))) 
                                                          >> 0x00000020U)) 
                                                 << 2U));
        } else {
            __Vtemp_1[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
                                        >> 0x00000017U));
            __Vtemp_1[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
                                        >> 0x00000017U));
            __Vtemp_1[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
                                        >> 0x00000017U));
            __Vtemp_1[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
                                        >> 0x00000017U));
            __Vtemp_1[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
                                        >> 0x00000017U));
            __Vtemp_1[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
                                        >> 0x00000017U));
            __Vtemp_1[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
                                        >> 0x00000017U));
            __Vtemp_1[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                                        >> 0x00000017U));
            __Vtemp_1[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U] 
                              << 9U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
                                        >> 0x00000017U));
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
            = ((__Vtemp_1[0U] << 0x00000017U) | (0x007fffffU 
                                                 & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
            = ((__Vtemp_1[0U] >> 9U) | (__Vtemp_1[1U] 
                                        << 0x00000017U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
            = ((__Vtemp_1[1U] >> 9U) | (__Vtemp_1[2U] 
                                        << 0x00000017U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] 
            = ((__Vtemp_1[2U] >> 9U) | (__Vtemp_1[3U] 
                                        << 0x00000017U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U] 
            = ((__Vtemp_1[3U] >> 9U) | (__Vtemp_1[4U] 
                                        << 0x00000017U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[5U] 
            = ((__Vtemp_1[4U] >> 9U) | (__Vtemp_1[5U] 
                                        << 0x00000017U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[6U] 
            = ((__Vtemp_1[5U] >> 9U) | (__Vtemp_1[6U] 
                                        << 0x00000017U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
            = ((__Vtemp_1[6U] >> 9U) | (__Vtemp_1[7U] 
                                        << 0x00000017U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[8U] 
            = (((IData)((0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U])) 
                                                     >> 0x0000001cU)))) 
                << 0x0000001cU) | ((__Vtemp_1[7U] >> 9U) 
                                   | (0x0f800000U & 
                                      (__Vtemp_1[8U] 
                                       << 0x00000017U))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[9U] 
            = (((IData)((0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U])) 
                                                     >> 0x0000001cU)))) 
                >> 4U) | ((IData)(((0x00000001ffffffffULL 
                                    & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U])) 
                                        << 4U) | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U])) 
                                                  >> 0x0000001cU))) 
                                   >> 0x00000020U)) 
                          << 0x0000001cU));
    } else {
        VL_ASSIGN_W(317, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0, Vdecode_test_top__ConstPool__CONST_h4b97b6c5_0);
    }
    vlSelfRef.iq_type = (0x0000000fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[8U] 
                                        >> 0x00000018U));
    vlSelfRef.fu_code = (0x000003ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[8U] 
                                        >> 0x0000000eU));
    vlSelfRef.ldst = (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                     >> 0x0000000fU));
    vlSelfRef.lsrc1 = (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                      >> 9U));
    vlSelfRef.lsrc2 = (0x0000003fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
                                      >> 3U));
    vlSelfRef.dst_rtype = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                 >> 0x0000001bU));
    vlSelfRef.lsrc1_rtype = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                   >> 0x00000019U));
    vlSelfRef.lsrc2_rtype = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                   >> 0x00000017U));
    vlSelfRef.op1_sel = (3U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[5U] 
                               >> 0x00000014U));
    vlSelfRef.op2_sel = (7U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[5U] 
                               >> 0x00000011U));
    vlSelfRef.fcn_op = (0x0000000fU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                       >> 0x00000011U));
    vlSelfRef.imm_sel = (7U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[6U] 
                               >> 0x00000016U));
}
