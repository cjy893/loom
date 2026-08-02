// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h90bb8da8_0;
extern const VlWide<9>/*287:0*/ Vdecode_test_top__ConstPool__CONST_h7f9b92ff_0;
extern const VlWide<9>/*287:0*/ Vdecode_test_top__ConstPool__CONST_hd828b2ff_0;
extern const VlWide<9>/*287:0*/ Vdecode_test_top__ConstPool__CONST_h9b90e2ff_0;
extern const VlWide<9>/*287:0*/ Vdecode_test_top__ConstPool__CONST_h0f7390c2_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h5a67e08e_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h1670bce2_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h4a8a6736_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h7b844236_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_hb59458f7_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h401d02ed_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_hc8ddfb93_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h2f095bee_0;
extern const VlWide<10>/*319:0*/ Vdecode_test_top__ConstPool__CONST_h0cc0a684_0;

void Vdecode_test_top___024root___ico_comb__TOP__0(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___ico_comb__TOP__0\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<9>/*287:0*/ __Vtemp_1;
    VlWide<10>/*319:0*/ __Vtemp_7;
    VlWide<10>/*319:0*/ __Vtemp_8;
    VlWide<10>/*319:0*/ __Vtemp_13;
    VlWide<5>/*159:0*/ __Vtemp_17;
    VlWide<7>/*223:0*/ __Vtemp_19;
    VlWide<5>/*159:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<9>/*287:0*/ __Vtemp_26;
    VlWide<9>/*287:0*/ __Vtemp_27;
    VlWide<9>/*287:0*/ __Vtemp_28;
    VlWide<9>/*287:0*/ __Vtemp_31;
    VlWide<9>/*287:0*/ __Vtemp_32;
    VlWide<9>/*287:0*/ __Vtemp_37;
    VlWide<9>/*287:0*/ __Vtemp_44;
    VlWide<7>/*223:0*/ __Vtemp_47;
    VlWide<7>/*223:0*/ __Vtemp_52;
    VlWide<6>/*191:0*/ __Vtemp_57;
    VlWide<6>/*191:0*/ __Vtemp_59;
    VlWide<9>/*287:0*/ __Vtemp_62;
    VlWide<8>/*255:0*/ __Vtemp_63;
    VlWide<5>/*159:0*/ __Vtemp_67;
    VlWide<7>/*223:0*/ __Vtemp_70;
    VlWide<8>/*255:0*/ __Vtemp_74;
    // Body
    if ((8U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
        if ((4U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
            VL_ASSIGN_W(317, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2, Vdecode_test_top__ConstPool__CONST_h90bb8da8_0);
        } else if ((2U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
            VL_ASSIGN_W(317, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2, Vdecode_test_top__ConstPool__CONST_h90bb8da8_0);
        } else {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((IData)((0x00020000U != (0x00028000U 
                                             & vlSelfRef.inst)))) {
                    VL_ASSIGN_W(267, __Vtemp_1, Vdecode_test_top__ConstPool__CONST_h7f9b92ff_0);
                } else if ((0x00010000U & vlSelfRef.inst)) {
                    VL_ASSIGN_W(267, __Vtemp_1, Vdecode_test_top__ConstPool__CONST_hd828b2ff_0);
                } else {
                    VL_ASSIGN_W(267, __Vtemp_1, Vdecode_test_top__ConstPool__CONST_h9b90e2ff_0);
                }
            } else if (((vlSelfRef.inst >> 0x0000000aU) 
                        & (0U != (0x0000001fU & (vlSelfRef.inst 
                                                 >> 5U))))) {
                VL_ASSIGN_W(267, __Vtemp_1, Vdecode_test_top__ConstPool__CONST_h0f7390c2_0);
            } else {
                __Vtemp_1[0U] = (IData)(((0U != (0x0000001fU 
                                                 & (vlSelfRef.inst 
                                                    >> 5U)))
                                          ? (0x0000000000000282ULL 
                                             | ((QData)((IData)(
                                                                (0x0000001fU 
                                                                 & (vlSelfRef.inst 
                                                                    >> 5U)))) 
                                                << 0x0000001eU))
                                          : (((QData)((IData)(
                                                              (0x0000001fU 
                                                               & vlSelfRef.inst))) 
                                              << 0x0000001eU) 
                                             | (QData)((IData)(
                                                               (0x00000280U 
                                                                | (1U 
                                                                   & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.inst 
                                                                                >> 0x0000000aU)))))))))));
                __Vtemp_1[1U] = (0x00008000U | (IData)(
                                                       (((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (vlSelfRef.inst 
                                                              >> 5U)))
                                                          ? 
                                                         (0x0000000000000282ULL 
                                                          | ((QData)((IData)(
                                                                             (0x0000001fU 
                                                                              & (vlSelfRef.inst 
                                                                                >> 5U)))) 
                                                             << 0x0000001eU))
                                                          : 
                                                         (((QData)((IData)(
                                                                           (0x0000001fU 
                                                                            & vlSelfRef.inst))) 
                                                           << 0x0000001eU) 
                                                          | (QData)((IData)(
                                                                            (0x00000280U 
                                                                             | (1U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.inst 
                                                                                >> 0x0000000aU)))))))))) 
                                                        >> 0x00000020U)));
                __Vtemp_1[2U] = 0U;
                __Vtemp_1[3U] = 0U;
                __Vtemp_1[4U] = 0U;
                __Vtemp_1[5U] = (0x0000000aU | (0x00000020U 
                                                & (vlSelfRef.inst 
                                                   >> 5U)));
                __Vtemp_1[6U] = 0x001000e0U;
                __Vtemp_1[7U] = 0U;
                __Vtemp_1[8U] = 0x00000100U;
            }
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
                = (__Vtemp_1[0U] << 0x00000011U);
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
                = ((__Vtemp_1[0U] >> 0x0000000fU) | 
                   (__Vtemp_1[1U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
                = ((__Vtemp_1[1U] >> 0x0000000fU) | 
                   (__Vtemp_1[2U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
                = ((__Vtemp_1[2U] >> 0x0000000fU) | 
                   (__Vtemp_1[3U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
                = ((__Vtemp_1[3U] >> 0x0000000fU) | 
                   (__Vtemp_1[4U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
                = ((__Vtemp_1[4U] >> 0x0000000fU) | 
                   (__Vtemp_1[5U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
                = ((__Vtemp_1[5U] >> 0x0000000fU) | 
                   (__Vtemp_1[6U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                = ((__Vtemp_1[6U] >> 0x0000000fU) | 
                   (__Vtemp_1[7U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
                = ((__Vtemp_1[7U] >> 0x0000000fU) | 
                   (__Vtemp_1[8U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U] = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
        if ((2U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((0x0018U == (vlSelfRef.inst >> 0x00000016U))) {
                    if (((3U != (3U & (vlSelfRef.inst 
                                       >> 3U))) & (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & vlSelfRef.inst)) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & vlSelfRef.inst))))) {
                        if (((0U != (IData)(vlSelfRef.status_prv)) 
                             & (2U != (3U & (vlSelfRef.inst 
                                             >> 3U))))) {
                            VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                        } else {
                            __Vtemp_8[0U] = (0x00000044U 
                                             | (0x00f80000U 
                                                & (vlSelfRef.inst 
                                                   << 0x0000000eU)));
                            __Vtemp_8[1U] = 0x00000600U;
                            __Vtemp_8[2U] = 0U;
                            __Vtemp_8[3U] = 0U;
                            __Vtemp_8[4U] = 0x08000000U;
                            __Vtemp_8[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11;
                            __Vtemp_8[6U] = 0U;
                            __Vtemp_8[7U] = 0U;
                            __Vtemp_8[8U] = 8U;
                            __Vtemp_8[9U] = 0U;
                        }
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h1670bce2_0);
                    }
                } else if ((0x06483800U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h4a8a6736_0);
                    }
                } else if ((0x06482800U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h7b844236_0);
                    }
                } else if ((0x06482c00U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_hb59458f7_0);
                    }
                } else if ((0x06483000U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h401d02ed_0);
                    }
                } else if ((0x06483400U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_hc8ddfb93_0);
                    }
                } else if (((0x00000c93U == (vlSelfRef.inst 
                                             >> 0x0000000fU)) 
                            & (6U >= (0x0000001fU & vlSelfRef.inst)))) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        __Vtemp_8[0U] = (0x0040U | 
                                         ((0x00f80000U 
                                           & (vlSelfRef.inst 
                                              << 0x0000000eU)) 
                                          | (0x0003e000U 
                                             & (vlSelfRef.inst 
                                                << 3U))));
                        __Vtemp_8[1U] = 0x00000605U;
                        __Vtemp_8[2U] = 0U;
                        __Vtemp_8[3U] = 0U;
                        __Vtemp_8[4U] = 0U;
                        __Vtemp_8[5U] = 0U;
                        __Vtemp_8[6U] = 6U;
                        __Vtemp_8[7U] = 0U;
                        __Vtemp_8[8U] = 8U;
                        __Vtemp_8[9U] = 0U;
                    }
                } else {
                    VL_ASSIGN_W(295, __Vtemp_8, Vdecode_test_top__ConstPool__CONST_h2f095bee_0);
                }
            } else {
                if ((IData)((0x00006c00U == (0xfffffc00U 
                                             & vlSelfRef.inst)))) {
                    __Vtemp_13[0U] = (1U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                            << 0x00000011U));
                    __Vtemp_13[1U] = 0x00000186U;
                    __Vtemp_13[2U] = 0U;
                    __Vtemp_13[3U] = 0U;
                    __Vtemp_13[4U] = 0U;
                    __Vtemp_13[5U] = 0xc000002cU;
                    __Vtemp_13[6U] = 1U;
                    __Vtemp_13[7U] = 0x08000000U;
                    __Vtemp_13[8U] = 2U;
                    __Vtemp_13[9U] = 0U;
                } else if ((0U != (IData)(vlSelfRef.status_prv))) {
                    VL_ASSIGN_W(293, __Vtemp_13, Vdecode_test_top__ConstPool__CONST_h0cc0a684_0);
                } else {
                    __Vtemp_17[1U] = (0x00000180U | (IData)(
                                                            (((0U 
                                                               == 
                                                               (0x0000001fU 
                                                                & (vlSelfRef.inst 
                                                                   >> 5U)))
                                                               ? 
                                                              (5ULL 
                                                               | (0x3fffffffff800000ULL 
                                                                  & ((QData)((IData)(
                                                                                (0x0000001fU 
                                                                                & vlSelfRef.inst))) 
                                                                     << 0x00000017U)))
                                                               : 
                                                              ((1U 
                                                                == 
                                                                (0x0000001fU 
                                                                 & (vlSelfRef.inst 
                                                                    >> 5U)))
                                                                ? 
                                                               (0x0000000200000000ULL 
                                                                | (((QData)((IData)(
                                                                                (0x0000001fU 
                                                                                & vlSelfRef.inst))) 
                                                                    << 0x00000017U) 
                                                                   | (QData)((IData)(
                                                                                (1U 
                                                                                | (0x003e0000U 
                                                                                & (vlSelfRef.inst 
                                                                                << 0x00000011U)))))))
                                                                : 
                                                               (((QData)((IData)(
                                                                                (0x00000800U 
                                                                                | (0x0000001fU 
                                                                                & vlSelfRef.inst)))) 
                                                                 << 0x00000017U) 
                                                                | (QData)((IData)(
                                                                                ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                                                << 0x0000000bU)))))) 
                                                             >> 0x00000020U)));
                    __Vtemp_13[0U] = (IData)(((0U == 
                                               (0x0000001fU 
                                                & (vlSelfRef.inst 
                                                   >> 5U)))
                                               ? (5ULL 
                                                  | (0x3fffffffff800000ULL 
                                                     & ((QData)((IData)(
                                                                        (0x0000001fU 
                                                                         & vlSelfRef.inst))) 
                                                        << 0x00000017U)))
                                               : ((1U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.inst 
                                                       >> 5U)))
                                                   ? 
                                                  (0x0000000200000000ULL 
                                                   | (((QData)((IData)(
                                                                       (0x0000001fU 
                                                                        & vlSelfRef.inst))) 
                                                       << 0x00000017U) 
                                                      | (QData)((IData)(
                                                                        (1U 
                                                                         | (0x003e0000U 
                                                                            & (vlSelfRef.inst 
                                                                               << 0x00000011U)))))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (0x00000800U 
                                                                     | (0x0000001fU 
                                                                        & vlSelfRef.inst)))) 
                                                    << 0x00000017U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                                      << 0x0000000bU)))))));
                    __Vtemp_13[1U] = __Vtemp_17[1U];
                    __Vtemp_13[2U] = 0U;
                    __Vtemp_13[3U] = 0U;
                    __Vtemp_13[4U] = (0xc0000000U & 
                                      (vlSelfRef.inst 
                                       << 0x00000014U));
                    __Vtemp_13[5U] = (0xc0000000U | 
                                      (0x00000fffU 
                                       & (vlSelfRef.inst 
                                          >> 0x0000000cU)));
                    __Vtemp_13[6U] = 1U;
                    __Vtemp_13[7U] = 0x08000000U;
                    __Vtemp_13[8U] = 2U;
                    __Vtemp_13[9U] = 0U;
                }
                __Vtemp_8[0U] = (__Vtemp_13[0U] << 2U);
                __Vtemp_8[1U] = ((__Vtemp_13[0U] >> 0x0000001eU) 
                                 | (__Vtemp_13[1U] 
                                    << 2U));
                __Vtemp_8[2U] = ((__Vtemp_13[1U] >> 0x0000001eU) 
                                 | (__Vtemp_13[2U] 
                                    << 2U));
                __Vtemp_8[3U] = ((__Vtemp_13[2U] >> 0x0000001eU) 
                                 | (__Vtemp_13[3U] 
                                    << 2U));
                __Vtemp_8[4U] = ((__Vtemp_13[3U] >> 0x0000001eU) 
                                 | (__Vtemp_13[4U] 
                                    << 2U));
                __Vtemp_8[5U] = ((__Vtemp_13[4U] >> 0x0000001eU) 
                                 | (__Vtemp_13[5U] 
                                    << 2U));
                __Vtemp_8[6U] = ((__Vtemp_13[5U] >> 0x0000001eU) 
                                 | (__Vtemp_13[6U] 
                                    << 2U));
                __Vtemp_8[7U] = ((__Vtemp_13[6U] >> 0x0000001eU) 
                                 | (__Vtemp_13[7U] 
                                    << 2U));
                __Vtemp_8[8U] = ((__Vtemp_13[7U] >> 0x0000001eU) 
                                 | (__Vtemp_13[8U] 
                                    << 2U));
                __Vtemp_8[9U] = ((__Vtemp_13[8U] >> 0x0000001eU) 
                                 | (__Vtemp_13[9U] 
                                    << 2U));
            }
            __Vtemp_7[0U] = (__Vtemp_8[0U] << 5U);
            __Vtemp_7[1U] = ((__Vtemp_8[0U] >> 0x0000001bU) 
                             | (__Vtemp_8[1U] << 5U));
            __Vtemp_7[2U] = ((__Vtemp_8[1U] >> 0x0000001bU) 
                             | (__Vtemp_8[2U] << 5U));
            __Vtemp_7[3U] = ((__Vtemp_8[2U] >> 0x0000001bU) 
                             | (__Vtemp_8[3U] << 5U));
            __Vtemp_7[4U] = ((__Vtemp_8[3U] >> 0x0000001bU) 
                             | (__Vtemp_8[4U] << 5U));
            __Vtemp_7[5U] = ((__Vtemp_8[4U] >> 0x0000001bU) 
                             | (__Vtemp_8[5U] << 5U));
            __Vtemp_7[6U] = ((__Vtemp_8[5U] >> 0x0000001bU) 
                             | (__Vtemp_8[6U] << 5U));
            __Vtemp_7[7U] = ((__Vtemp_8[6U] >> 0x0000001bU) 
                             | (__Vtemp_8[7U] << 5U));
            __Vtemp_7[8U] = ((__Vtemp_8[7U] >> 0x0000001bU) 
                             | (__Vtemp_8[8U] << 5U));
            __Vtemp_7[9U] = ((__Vtemp_8[8U] >> 0x0000001bU) 
                             | (__Vtemp_8[9U] << 5U));
        } else {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((0x08000000U & vlSelfRef.inst)) {
                    __Vtemp_20[0U] = 0U;
                    __Vtemp_20[1U] = 0U;
                    __Vtemp_20[2U] = 0U;
                    __Vtemp_20[3U] = 0x10000000U;
                    __Vtemp_20[4U] = 1U;
                } else {
                    __Vtemp_20[0U] = 0U;
                    __Vtemp_20[1U] = 0U;
                    __Vtemp_20[2U] = 0U;
                    __Vtemp_20[3U] = 0x90000000U;
                    __Vtemp_20[4U] = 0U;
                }
                __Vtemp_19[0U] = (IData)((0x0000000000000280ULL 
                                          | ((QData)((IData)(
                                                             (0x0000001fU 
                                                              & vlSelfRef.inst))) 
                                             << 0x0000001eU)));
                __Vtemp_19[1U] = ((__Vtemp_20[0U] << 4U) 
                                  | (IData)(((0x0000000000000280ULL 
                                              | ((QData)((IData)(
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.inst))) 
                                                 << 0x0000001eU)) 
                                             >> 0x00000020U)));
                __Vtemp_19[2U] = ((__Vtemp_20[0U] >> 0x0000001cU) 
                                  | (__Vtemp_20[1U] 
                                     << 4U));
                __Vtemp_19[3U] = ((__Vtemp_20[1U] >> 0x0000001cU) 
                                  | (__Vtemp_20[2U] 
                                     << 4U));
                __Vtemp_19[4U] = ((__Vtemp_20[2U] >> 0x0000001cU) 
                                  | (__Vtemp_20[3U] 
                                     << 4U));
                __Vtemp_19[5U] = (((IData)((0x0000000300000000ULL 
                                            | (QData)((IData)(
                                                              (0x000fffffU 
                                                               & (vlSelfRef.inst 
                                                                  >> 5U)))))) 
                                   << 5U) | ((__Vtemp_20[3U] 
                                              >> 0x0000001cU) 
                                             | (__Vtemp_20[4U] 
                                                << 4U)));
                __Vtemp_19[6U] = (((IData)((0x0000000300000000ULL 
                                            | (QData)((IData)(
                                                              (0x000fffffU 
                                                               & (vlSelfRef.inst 
                                                                  >> 5U)))))) 
                                   >> 0x0000001bU) 
                                  | ((IData)(((0x0000000300000000ULL 
                                               | (QData)((IData)(
                                                                 (0x000fffffU 
                                                                  & (vlSelfRef.inst 
                                                                     >> 5U))))) 
                                              >> 0x00000020U)) 
                                     << 5U));
            } else {
                if ((0U == (3U & (vlSelfRef.inst >> 0x00000012U)))) {
                    __Vtemp_23[0U] = (8U | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                            << 4U));
                    __Vtemp_23[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                       >> 0x0000001cU) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                         << 4U));
                    __Vtemp_23[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                       >> 0x0000001cU) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[2U] 
                                         << 4U));
                } else if ((1U == (3U & (vlSelfRef.inst 
                                         >> 0x00000012U)))) {
                    __Vtemp_23[0U] = (9U | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                            << 4U));
                    __Vtemp_23[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                       >> 0x0000001cU) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                         << 4U));
                    __Vtemp_23[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                       >> 0x0000001cU) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[2U] 
                                         << 4U));
                } else {
                    if ((2U == (3U & (vlSelfRef.inst 
                                      >> 0x00000012U)))) {
                        __Vtemp_24[0U] = (5U | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                                << 3U));
                        __Vtemp_24[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                           >> 0x0000001dU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                             << 3U));
                        __Vtemp_24[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                           >> 0x0000001dU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[2U] 
                                             << 3U));
                    } else {
                        __Vtemp_24[0U] = (IData)((0x01ffffffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U])) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])))));
                        __Vtemp_24[1U] = (0x1a000000U 
                                          | (IData)(
                                                    ((0x01ffffffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])))) 
                                                     >> 0x00000020U)));
                        __Vtemp_24[2U] = 0x02000000U;
                    }
                    __Vtemp_23[0U] = (__Vtemp_24[0U] 
                                      << 1U);
                    __Vtemp_23[1U] = ((__Vtemp_24[0U] 
                                       >> 0x0000001fU) 
                                      | (__Vtemp_24[1U] 
                                         << 1U));
                    __Vtemp_23[2U] = ((__Vtemp_24[1U] 
                                       >> 0x0000001fU) 
                                      | (__Vtemp_24[2U] 
                                         << 1U));
                }
                __Vtemp_19[0U] = __Vtemp_23[0U];
                __Vtemp_19[1U] = __Vtemp_23[1U];
                __Vtemp_19[2U] = __Vtemp_23[2U];
                __Vtemp_19[3U] = 0U;
                __Vtemp_19[4U] = 0U;
                __Vtemp_19[5U] = (1U | ((IData)((0x0000000500000000ULL 
                                                 | (QData)((IData)(
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.inst 
                                                                       >> 0x0000000aU)))))) 
                                        << 5U));
                __Vtemp_19[6U] = (((IData)((0x0000000500000000ULL 
                                            | (QData)((IData)(
                                                              (0x0000001fU 
                                                               & (vlSelfRef.inst 
                                                                  >> 0x0000000aU)))))) 
                                   >> 0x0000001bU) 
                                  | ((IData)(((0x0000000500000000ULL 
                                               | (QData)((IData)(
                                                                 (0x0000001fU 
                                                                  & (vlSelfRef.inst 
                                                                     >> 0x0000000aU))))) 
                                              >> 0x00000020U)) 
                                     << 5U));
            }
            __Vtemp_7[0U] = __Vtemp_19[0U];
            __Vtemp_7[1U] = __Vtemp_19[1U];
            __Vtemp_7[2U] = __Vtemp_19[2U];
            __Vtemp_7[3U] = __Vtemp_19[3U];
            __Vtemp_7[4U] = __Vtemp_19[4U];
            __Vtemp_7[5U] = __Vtemp_19[5U];
            __Vtemp_7[6U] = __Vtemp_19[6U];
            __Vtemp_7[7U] = 0x20000000U;
            __Vtemp_7[8U] = 0x00000200U;
            __Vtemp_7[9U] = 0U;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
            = (__Vtemp_7[0U] << 0x00000011U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
            = ((__Vtemp_7[0U] >> 0x0000000fU) | (__Vtemp_7[1U] 
                                                 << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
            = ((__Vtemp_7[1U] >> 0x0000000fU) | (__Vtemp_7[2U] 
                                                 << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
            = ((__Vtemp_7[2U] >> 0x0000000fU) | (__Vtemp_7[3U] 
                                                 << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
            = ((__Vtemp_7[3U] >> 0x0000000fU) | (__Vtemp_7[4U] 
                                                 << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
            = ((__Vtemp_7[4U] >> 0x0000000fU) | (__Vtemp_7[5U] 
                                                 << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
            = ((__Vtemp_7[5U] >> 0x0000000fU) | (__Vtemp_7[6U] 
                                                 << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
            = ((__Vtemp_7[6U] >> 0x0000000fU) | (__Vtemp_7[7U] 
                                                 << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
            = ((__Vtemp_7[7U] >> 0x0000000fU) | (__Vtemp_7[8U] 
                                                 << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U] 
            = ((__Vtemp_7[8U] >> 0x0000000fU) | (__Vtemp_7[9U] 
                                                 << 0x00000011U));
    } else {
        if ((2U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((0x00200000U & vlSelfRef.inst)) {
                    if ((0x00100000U & vlSelfRef.inst)) {
                        __Vtemp_28[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                        __Vtemp_28[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                        __Vtemp_28[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                        __Vtemp_28[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                        __Vtemp_28[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                        __Vtemp_28[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                        __Vtemp_28[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                        __Vtemp_28[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                        __Vtemp_28[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                    } else if ((0x00080000U & vlSelfRef.inst)) {
                        __Vtemp_28[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                        __Vtemp_28[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                        __Vtemp_28[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                        __Vtemp_28[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                        __Vtemp_28[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                        __Vtemp_28[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                        __Vtemp_28[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                        __Vtemp_28[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                        __Vtemp_28[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                    } else if ((0x00040000U & vlSelfRef.inst)) {
                        __Vtemp_28[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                        __Vtemp_28[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                        __Vtemp_28[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                        __Vtemp_28[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                        __Vtemp_28[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                        __Vtemp_28[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                        __Vtemp_28[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                        __Vtemp_28[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                        __Vtemp_28[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                    } else if ((0x00020000U & vlSelfRef.inst)) {
                        __Vtemp_28[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                        __Vtemp_28[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                        __Vtemp_28[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                        __Vtemp_28[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                        __Vtemp_28[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                        __Vtemp_28[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                        __Vtemp_28[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                        __Vtemp_28[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                        __Vtemp_28[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                    } else {
                        __Vtemp_28[0U] = (IData)(((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                                   << 4U) 
                                                  | (QData)((IData)(
                                                                    ((0x00010000U 
                                                                      & vlSelfRef.inst)
                                                                      ? 
                                                                     ((0x00008000U 
                                                                       & vlSelfRef.inst)
                                                                       ? 6U
                                                                       : 4U)
                                                                      : 
                                                                     ((0x00008000U 
                                                                       & vlSelfRef.inst)
                                                                       ? 5U
                                                                       : 3U))))));
                        __Vtemp_28[1U] = (0x00008000U 
                                          | (IData)(
                                                    (((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                                       << 4U) 
                                                      | (QData)((IData)(
                                                                        ((0x00010000U 
                                                                          & vlSelfRef.inst)
                                                                          ? 
                                                                         ((0x00008000U 
                                                                           & vlSelfRef.inst)
                                                                           ? 6U
                                                                           : 4U)
                                                                          : 
                                                                         ((0x00008000U 
                                                                           & vlSelfRef.inst)
                                                                           ? 5U
                                                                           : 3U))))) 
                                                     >> 0x00000020U)));
                        __Vtemp_28[2U] = 0U;
                        __Vtemp_28[3U] = 0U;
                        __Vtemp_28[4U] = 0U;
                        __Vtemp_28[5U] = 0U;
                        __Vtemp_28[6U] = 0x000000c0U;
                        __Vtemp_28[7U] = 0U;
                        __Vtemp_28[8U] = 0x00000102U;
                    }
                    __Vtemp_27[0U] = __Vtemp_28[0U];
                    __Vtemp_27[1U] = __Vtemp_28[1U];
                    __Vtemp_27[2U] = __Vtemp_28[2U];
                    __Vtemp_27[3U] = __Vtemp_28[3U];
                    __Vtemp_27[4U] = __Vtemp_28[4U];
                    __Vtemp_27[5U] = __Vtemp_28[5U];
                    __Vtemp_27[6U] = __Vtemp_28[6U];
                    __Vtemp_27[7U] = __Vtemp_28[7U];
                    __Vtemp_27[8U] = (0x000001ffU & __Vtemp_28[8U]);
                } else if ((0x00100000U & vlSelfRef.inst)) {
                    if ((0x00080000U & vlSelfRef.inst)) {
                        if ((0x00040000U & vlSelfRef.inst)) {
                            if ((0x00020000U & vlSelfRef.inst)) {
                                __Vtemp_31[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                                __Vtemp_31[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                                __Vtemp_31[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                                __Vtemp_31[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                                __Vtemp_31[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                                __Vtemp_31[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                                __Vtemp_31[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                                __Vtemp_31[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                                __Vtemp_31[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                            } else if ((0x00010000U 
                                        & vlSelfRef.inst)) {
                                if ((0x00008000U & vlSelfRef.inst)) {
                                    __Vtemp_32[0U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                                              >> 1U));
                                    __Vtemp_32[1U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                              >> 1U));
                                    __Vtemp_32[2U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                                              >> 1U));
                                    __Vtemp_32[3U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                                              >> 1U));
                                    __Vtemp_32[4U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                                              >> 1U));
                                    __Vtemp_32[5U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                                              >> 1U));
                                    __Vtemp_32[6U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                                              >> 1U));
                                    __Vtemp_32[7U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                                              >> 1U));
                                    __Vtemp_32[8U] 
                                        = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                                           >> 1U);
                                } else {
                                    __Vtemp_32[0U] 
                                        = (IData)((1ULL 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                                      << 3U)));
                                    __Vtemp_32[1U] 
                                        = (0x00004000U 
                                           | (IData)(
                                                     ((1ULL 
                                                       | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                                          << 3U)) 
                                                      >> 0x00000020U)));
                                    __Vtemp_32[2U] = 0U;
                                    __Vtemp_32[3U] = 0U;
                                    __Vtemp_32[4U] = 0U;
                                    __Vtemp_32[5U] = 0U;
                                    __Vtemp_32[6U] = 0x00000060U;
                                    __Vtemp_32[7U] = 0x80000000U;
                                    __Vtemp_32[8U] = 0x00000080U;
                                }
                                __Vtemp_31[0U] = (__Vtemp_32[0U] 
                                                  << 1U);
                                __Vtemp_31[1U] = ((__Vtemp_32[0U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_32[1U] 
                                                     << 1U));
                                __Vtemp_31[2U] = ((__Vtemp_32[1U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_32[2U] 
                                                     << 1U));
                                __Vtemp_31[3U] = ((__Vtemp_32[2U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_32[3U] 
                                                     << 1U));
                                __Vtemp_31[4U] = ((__Vtemp_32[3U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_32[4U] 
                                                     << 1U));
                                __Vtemp_31[5U] = ((__Vtemp_32[4U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_32[5U] 
                                                     << 1U));
                                __Vtemp_31[6U] = ((__Vtemp_32[5U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_32[6U] 
                                                     << 1U));
                                __Vtemp_31[7U] = ((__Vtemp_32[6U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_32[7U] 
                                                     << 1U));
                                __Vtemp_31[8U] = ((__Vtemp_32[7U] 
                                                   >> 0x0000001fU) 
                                                  | (0x000001feU 
                                                     & (__Vtemp_32[8U] 
                                                        << 1U)));
                            } else {
                                __Vtemp_31[0U] = (IData)(
                                                         (((QData)((IData)(
                                                                           (0x00fffffeU 
                                                                            & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                                                << 0x00000015U) 
                                                                               | (0x001ffffeU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
                                                                                >> 0x0000000bU)))))) 
                                                           << 0x00000017U) 
                                                          | (QData)((IData)(
                                                                            ((0x007ffff0U 
                                                                              & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                << 4U)) 
                                                                             | (1U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.inst 
                                                                                >> 0x0000000fU))))))))));
                                __Vtemp_31[1U] = (0x00008000U 
                                                  | (IData)(
                                                            ((((QData)((IData)(
                                                                               (0x00fffffeU 
                                                                                & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                                                << 0x00000015U) 
                                                                                | (0x001ffffeU 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
                                                                                >> 0x0000000bU)))))) 
                                                               << 0x00000017U) 
                                                              | (QData)((IData)(
                                                                                ((0x007ffff0U 
                                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                                                << 4U)) 
                                                                                | (1U 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.inst 
                                                                                >> 0x0000000fU))))))))) 
                                                             >> 0x00000020U)));
                                __Vtemp_31[2U] = 0U;
                                __Vtemp_31[3U] = 0U;
                                __Vtemp_31[4U] = 0U;
                                __Vtemp_31[5U] = 0U;
                                __Vtemp_31[6U] = 0x000000c0U;
                                __Vtemp_31[7U] = 0U;
                                __Vtemp_31[8U] = 0x00000101U;
                            }
                            __Vtemp_27[0U] = __Vtemp_31[0U];
                            __Vtemp_27[1U] = __Vtemp_31[1U];
                            __Vtemp_27[2U] = __Vtemp_31[2U];
                            __Vtemp_27[3U] = __Vtemp_31[3U];
                            __Vtemp_27[4U] = __Vtemp_31[4U];
                            __Vtemp_27[5U] = __Vtemp_31[5U];
                            __Vtemp_27[6U] = __Vtemp_31[6U];
                            __Vtemp_27[7U] = __Vtemp_31[7U];
                            __Vtemp_27[8U] = (0x000001ffU 
                                              & __Vtemp_31[8U]);
                        } else {
                            if ((0x00020000U & vlSelfRef.inst)) {
                                __Vtemp_37[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[0U];
                                __Vtemp_37[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[1U];
                                __Vtemp_37[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[2U];
                                __Vtemp_37[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[3U];
                                __Vtemp_37[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[4U];
                                __Vtemp_37[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[5U];
                                __Vtemp_37[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[6U];
                                __Vtemp_37[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[7U];
                                __Vtemp_37[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[8U];
                            } else if ((0x00010000U 
                                        & vlSelfRef.inst)) {
                                __Vtemp_37[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[0U];
                                __Vtemp_37[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[1U];
                                __Vtemp_37[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[2U];
                                __Vtemp_37[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[3U];
                                __Vtemp_37[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[4U];
                                __Vtemp_37[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[5U];
                                __Vtemp_37[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[6U];
                                __Vtemp_37[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[7U];
                                __Vtemp_37[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[8U];
                            } else if ((0x00008000U 
                                        & vlSelfRef.inst)) {
                                __Vtemp_37[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[0U];
                                __Vtemp_37[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[1U];
                                __Vtemp_37[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[2U];
                                __Vtemp_37[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[3U];
                                __Vtemp_37[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[4U];
                                __Vtemp_37[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[5U];
                                __Vtemp_37[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[6U];
                                __Vtemp_37[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[7U];
                                __Vtemp_37[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[8U];
                            } else {
                                __Vtemp_37[0U] = (5U 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] 
                                                     << 3U));
                                __Vtemp_37[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] 
                                                     << 3U));
                                __Vtemp_37[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] 
                                                     << 3U));
                                __Vtemp_37[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] 
                                                     << 3U));
                                __Vtemp_37[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] 
                                                     << 3U));
                                __Vtemp_37[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] 
                                                     << 3U));
                                __Vtemp_37[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] 
                                                     << 3U));
                                __Vtemp_37[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] 
                                                     << 3U));
                                __Vtemp_37[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[8U] 
                                                     << 3U));
                            }
                            __Vtemp_27[0U] = (__Vtemp_37[0U] 
                                              << 1U);
                            __Vtemp_27[1U] = ((__Vtemp_37[0U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_37[1U] 
                                                 << 1U));
                            __Vtemp_27[2U] = ((__Vtemp_37[1U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_37[2U] 
                                                 << 1U));
                            __Vtemp_27[3U] = ((__Vtemp_37[2U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_37[3U] 
                                                 << 1U));
                            __Vtemp_27[4U] = ((__Vtemp_37[3U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_37[4U] 
                                                 << 1U));
                            __Vtemp_27[5U] = ((__Vtemp_37[4U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_37[5U] 
                                                 << 1U));
                            __Vtemp_27[6U] = ((__Vtemp_37[5U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_37[6U] 
                                                 << 1U));
                            __Vtemp_27[7U] = ((__Vtemp_37[6U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_37[7U] 
                                                 << 1U));
                            __Vtemp_27[8U] = ((__Vtemp_37[7U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_37[8U] 
                                                 << 1U));
                        }
                    } else if ((0x00040000U & vlSelfRef.inst)) {
                        if ((0x00020000U & vlSelfRef.inst)) {
                            if ((0x00010000U & vlSelfRef.inst)) {
                                __Vtemp_27[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                                   << 0x00000018U) 
                                                  | ((0x007ffff0U 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                         << 4U)) 
                                                     | ((0x00008000U 
                                                         & vlSelfRef.inst)
                                                         ? 9U
                                                         : 8U)));
                                __Vtemp_27[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                                   >> 8U) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                                     << 0x00000018U));
                                __Vtemp_27[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                                   >> 8U) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                                     << 0x00000018U));
                                __Vtemp_27[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                                   >> 8U) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                                     << 0x00000018U));
                                __Vtemp_27[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                                   >> 8U) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] 
                                                     << 0x00000018U));
                                __Vtemp_27[5U] = 0U;
                                __Vtemp_27[6U] = 0x000000c0U;
                                __Vtemp_27[7U] = 0x20000000U;
                                __Vtemp_27[8U] = 0x00000200U;
                            } else {
                                __Vtemp_27[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                                __Vtemp_27[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                                __Vtemp_27[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                                __Vtemp_27[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                                __Vtemp_27[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                                __Vtemp_27[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                                __Vtemp_27[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                                __Vtemp_27[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                                __Vtemp_27[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                            }
                        } else {
                            __Vtemp_27[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                               << 0x00000018U) 
                                              | ((0x007ffff0U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                     << 4U)) 
                                                 | ((0x00010000U 
                                                     & vlSelfRef.inst)
                                                     ? 
                                                    ((0x00008000U 
                                                      & vlSelfRef.inst)
                                                      ? 6U
                                                      : 5U)
                                                     : 
                                                    ((0x00008000U 
                                                      & vlSelfRef.inst)
                                                      ? 4U
                                                      : 7U))));
                            __Vtemp_27[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                                 << 0x00000018U));
                            __Vtemp_27[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                                 << 0x00000018U));
                            __Vtemp_27[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                                 << 0x00000018U));
                            __Vtemp_27[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] 
                                                 << 0x00000018U));
                            __Vtemp_27[5U] = 0U;
                            __Vtemp_27[6U] = 0x000000c0U;
                            __Vtemp_27[7U] = 0x20000000U;
                            __Vtemp_27[8U] = 0x00000200U;
                        }
                    } else if ((0x00020000U & vlSelfRef.inst)) {
                        if ((0x00010000U & vlSelfRef.inst)) {
                            __Vtemp_27[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                            __Vtemp_27[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                            __Vtemp_27[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                            __Vtemp_27[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                            __Vtemp_27[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                            __Vtemp_27[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                            __Vtemp_27[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                            __Vtemp_27[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                            __Vtemp_27[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                        } else {
                            __Vtemp_27[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                               << 0x00000018U) 
                                              | ((0x007ffff0U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                     << 4U)) 
                                                 | ((0x00008000U 
                                                     & vlSelfRef.inst)
                                                     ? 3U
                                                     : 2U)));
                            __Vtemp_27[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                                 << 0x00000018U));
                            __Vtemp_27[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                                 << 0x00000018U));
                            __Vtemp_27[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                                 << 0x00000018U));
                            __Vtemp_27[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] 
                                                 << 0x00000018U));
                            __Vtemp_27[5U] = 0U;
                            __Vtemp_27[6U] = 0x000000c0U;
                            __Vtemp_27[7U] = 0x20000000U;
                            __Vtemp_27[8U] = 0x00000200U;
                        }
                    } else if ((0x00010000U & vlSelfRef.inst)) {
                        if ((0x00008000U & vlSelfRef.inst)) {
                            __Vtemp_27[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                            __Vtemp_27[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                            __Vtemp_27[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                            __Vtemp_27[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                            __Vtemp_27[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                            __Vtemp_27[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                            __Vtemp_27[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                            __Vtemp_27[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                            __Vtemp_27[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                        } else {
                            __Vtemp_27[0U] = (1U | 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] 
                                               << 4U));
                            __Vtemp_27[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] 
                                                 << 4U));
                            __Vtemp_27[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] 
                                                 << 4U));
                            __Vtemp_27[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] 
                                                 << 4U));
                            __Vtemp_27[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] 
                                                 << 4U));
                            __Vtemp_27[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] 
                                                 << 4U));
                            __Vtemp_27[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] 
                                                 << 4U));
                            __Vtemp_27[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] 
                                                 << 4U));
                            __Vtemp_27[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[8U] 
                                                 << 4U));
                        }
                    } else {
                        if ((0x00008000U & vlSelfRef.inst)) {
                            __Vtemp_44[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                                                 >> 4U));
                            __Vtemp_44[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                                 >> 4U));
                            __Vtemp_44[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                                                 >> 4U));
                            __Vtemp_44[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                                                 >> 4U));
                            __Vtemp_44[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                                                 >> 4U));
                            __Vtemp_44[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                                                 >> 4U));
                            __Vtemp_44[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                                                 >> 4U));
                            __Vtemp_44[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                                                 >> 4U));
                            __Vtemp_44[8U] = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                                              >> 4U);
                        } else {
                            __Vtemp_44[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U];
                            __Vtemp_44[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U];
                            __Vtemp_44[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U];
                            __Vtemp_44[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U];
                            __Vtemp_44[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U];
                            __Vtemp_44[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U];
                            __Vtemp_44[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U];
                            __Vtemp_44[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U];
                            __Vtemp_44[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[8U];
                        }
                        __Vtemp_27[0U] = (__Vtemp_44[0U] 
                                          << 4U);
                        __Vtemp_27[1U] = ((__Vtemp_44[0U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_44[1U] 
                                             << 4U));
                        __Vtemp_27[2U] = ((__Vtemp_44[1U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_44[2U] 
                                             << 4U));
                        __Vtemp_27[3U] = ((__Vtemp_44[2U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_44[3U] 
                                             << 4U));
                        __Vtemp_27[4U] = ((__Vtemp_44[3U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_44[4U] 
                                             << 4U));
                        __Vtemp_27[5U] = ((__Vtemp_44[4U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_44[5U] 
                                             << 4U));
                        __Vtemp_27[6U] = ((__Vtemp_44[5U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_44[6U] 
                                             << 4U));
                        __Vtemp_27[7U] = ((__Vtemp_44[6U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_44[7U] 
                                             << 4U));
                        __Vtemp_27[8U] = ((__Vtemp_44[7U] 
                                           >> 0x0000001cU) 
                                          | (0x000003f0U 
                                             & (__Vtemp_44[8U] 
                                                << 4U)));
                    }
                } else {
                    __Vtemp_27[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                    __Vtemp_27[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                    __Vtemp_27[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                    __Vtemp_27[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                    __Vtemp_27[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                    __Vtemp_27[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                    __Vtemp_27[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                    __Vtemp_27[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                    __Vtemp_27[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                }
                __Vtemp_26[0U] = (__Vtemp_27[0U] << 0x00000011U);
                __Vtemp_26[1U] = ((__Vtemp_27[0U] >> 0x0000000fU) 
                                  | (__Vtemp_27[1U] 
                                     << 0x00000011U));
                __Vtemp_26[2U] = ((__Vtemp_27[1U] >> 0x0000000fU) 
                                  | (__Vtemp_27[2U] 
                                     << 0x00000011U));
                __Vtemp_26[3U] = ((__Vtemp_27[2U] >> 0x0000000fU) 
                                  | (__Vtemp_27[3U] 
                                     << 0x00000011U));
                __Vtemp_26[4U] = ((__Vtemp_27[3U] >> 0x0000000fU) 
                                  | (__Vtemp_27[4U] 
                                     << 0x00000011U));
                __Vtemp_26[5U] = ((__Vtemp_27[4U] >> 0x0000000fU) 
                                  | (__Vtemp_27[5U] 
                                     << 0x00000011U));
                __Vtemp_26[6U] = ((__Vtemp_27[5U] >> 0x0000000fU) 
                                  | (__Vtemp_27[6U] 
                                     << 0x00000011U));
                __Vtemp_26[7U] = ((__Vtemp_27[6U] >> 0x0000000fU) 
                                  | (__Vtemp_27[7U] 
                                     << 0x00000011U));
                __Vtemp_26[8U] = ((__Vtemp_27[7U] >> 0x0000000fU) 
                                  | (__Vtemp_27[8U] 
                                     << 0x00000011U));
            } else {
                if ((0x01000000U & vlSelfRef.inst)) {
                    if ((0x00800000U & vlSelfRef.inst)) {
                        __Vtemp_47[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] 
                                           << 0x00000015U) 
                                          | ((0x00400000U 
                                              & vlSelfRef.inst)
                                              ? 0x000c0000U
                                              : 0x000a0000U));
                        __Vtemp_47[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] 
                                             << 0x00000015U));
                        __Vtemp_47[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                             << 0x00000015U));
                        __Vtemp_47[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                             << 0x00000015U));
                        __Vtemp_47[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                             << 0x00000015U));
                        __Vtemp_47[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                             << 0x00000015U));
                        __Vtemp_47[6U] = (0x00400000U 
                                          | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                              >> 0x0000000bU) 
                                             | (0x00200000U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[6U] 
                                                   << 0x00000015U))));
                    } else {
                        if ((0x00400000U & vlSelfRef.inst)) {
                            __Vtemp_52[0U] = (1U | 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] 
                                               << 2U));
                            __Vtemp_52[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] 
                                                 << 2U));
                            __Vtemp_52[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                                 << 2U));
                            __Vtemp_52[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                                 << 2U));
                            __Vtemp_52[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                                 << 2U));
                            __Vtemp_52[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                                 << 2U));
                            __Vtemp_52[6U] = (8U | 
                                              ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                                >> 0x0000001eU) 
                                               | (4U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[6U] 
                                                     << 2U))));
                        } else {
                            __Vtemp_52[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[0U];
                            __Vtemp_52[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[1U];
                            __Vtemp_52[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[2U];
                            __Vtemp_52[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[3U];
                            __Vtemp_52[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[4U];
                            __Vtemp_52[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[5U];
                            __Vtemp_52[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[6U];
                        }
                        __Vtemp_47[0U] = (__Vtemp_52[0U] 
                                          << 0x00000013U);
                        __Vtemp_47[1U] = ((__Vtemp_52[0U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_52[1U] 
                                             << 0x00000013U));
                        __Vtemp_47[2U] = ((__Vtemp_52[1U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_52[2U] 
                                             << 0x00000013U));
                        __Vtemp_47[3U] = ((__Vtemp_52[2U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_52[3U] 
                                             << 0x00000013U));
                        __Vtemp_47[4U] = ((__Vtemp_52[3U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_52[4U] 
                                             << 0x00000013U));
                        __Vtemp_47[5U] = ((__Vtemp_52[4U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_52[5U] 
                                             << 0x00000013U));
                        __Vtemp_47[6U] = ((__Vtemp_52[5U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_52[6U] 
                                             << 0x00000013U));
                    }
                } else {
                    if ((0x00800000U & vlSelfRef.inst)) {
                        if ((0x00400000U & vlSelfRef.inst)) {
                            __Vtemp_59[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[1U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[0U] 
                                                 >> 2U));
                            __Vtemp_59[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[2U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[1U] 
                                                 >> 2U));
                            __Vtemp_59[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[3U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[2U] 
                                                 >> 2U));
                            __Vtemp_59[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[4U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[3U] 
                                                 >> 2U));
                            __Vtemp_59[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[5U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[4U] 
                                                 >> 2U));
                            __Vtemp_59[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[6U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[5U] 
                                                 >> 2U));
                        } else {
                            __Vtemp_59[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U];
                            __Vtemp_59[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U];
                            __Vtemp_59[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U];
                            __Vtemp_59[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U];
                            __Vtemp_59[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U];
                            __Vtemp_59[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[5U];
                        }
                        __Vtemp_57[0U] = (__Vtemp_59[0U] 
                                          << 4U);
                        __Vtemp_57[1U] = ((__Vtemp_59[0U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_59[1U] 
                                             << 4U));
                        __Vtemp_57[2U] = ((__Vtemp_59[1U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_59[2U] 
                                             << 4U));
                        __Vtemp_57[3U] = ((__Vtemp_59[2U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_59[3U] 
                                             << 4U));
                        __Vtemp_57[4U] = ((__Vtemp_59[3U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_59[4U] 
                                             << 4U));
                        __Vtemp_57[5U] = ((__Vtemp_59[4U] 
                                           >> 0x0000001cU) 
                                          | (0x7ffffff0U 
                                             & (__Vtemp_59[5U] 
                                                << 4U)));
                    } else {
                        __Vtemp_57[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U] 
                                           << 4U) | 
                                          ((0x00400000U 
                                            & vlSelfRef.inst)
                                            ? 3U : 2U));
                        __Vtemp_57[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U] 
                                             << 4U));
                        __Vtemp_57[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U] 
                                             << 4U));
                        __Vtemp_57[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U] 
                                             << 4U));
                        __Vtemp_57[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U] 
                                             << 4U));
                        __Vtemp_57[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[5U] 
                                             << 4U));
                    }
                    __Vtemp_47[0U] = (__Vtemp_57[0U] 
                                      << 0x00000011U);
                    __Vtemp_47[1U] = ((__Vtemp_57[0U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_57[1U] 
                                         << 0x00000011U));
                    __Vtemp_47[2U] = ((__Vtemp_57[1U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_57[2U] 
                                         << 0x00000011U));
                    __Vtemp_47[3U] = ((__Vtemp_57[2U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_57[3U] 
                                         << 0x00000011U));
                    __Vtemp_47[4U] = ((__Vtemp_57[3U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_57[4U] 
                                         << 0x00000011U));
                    __Vtemp_47[5U] = ((__Vtemp_57[4U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_57[5U] 
                                         << 0x00000011U));
                    __Vtemp_47[6U] = (__Vtemp_57[5U] 
                                      >> 0x0000000fU);
                }
                __Vtemp_26[0U] = __Vtemp_47[0U];
                __Vtemp_26[1U] = __Vtemp_47[1U];
                __Vtemp_26[2U] = __Vtemp_47[2U];
                __Vtemp_26[3U] = __Vtemp_47[3U];
                __Vtemp_26[4U] = __Vtemp_47[4U];
                __Vtemp_26[5U] = __Vtemp_47[5U];
                __Vtemp_26[6U] = __Vtemp_47[6U];
                __Vtemp_26[7U] = 0U;
                __Vtemp_26[8U] = 0x04004000U;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((vlSelfRef.inst >> 0x0000001fU)) {
                    __Vtemp_63[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U];
                    __Vtemp_63[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U];
                    __Vtemp_63[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U];
                    __Vtemp_63[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U];
                    __Vtemp_63[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U];
                    __Vtemp_63[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U];
                    __Vtemp_63[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U];
                    __Vtemp_63[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[7U];
                } else if ((0x40000000U & vlSelfRef.inst)) {
                    if ((0x20000000U & vlSelfRef.inst)) {
                        if ((0x10000000U & vlSelfRef.inst)) {
                            __Vtemp_63[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U];
                            __Vtemp_63[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U];
                            __Vtemp_63[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U];
                            __Vtemp_63[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U];
                            __Vtemp_63[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U];
                            __Vtemp_63[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U];
                            __Vtemp_63[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U];
                            __Vtemp_63[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[7U];
                        } else {
                            __Vtemp_63[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U];
                            __Vtemp_63[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[1U];
                            __Vtemp_63[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[2U];
                            __Vtemp_63[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[3U];
                            __Vtemp_63[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[4U];
                            __Vtemp_63[5U] = (0x80000000U 
                                              | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[5U]);
                            __Vtemp_63[6U] = (0x02010000U 
                                              | (((0x08000000U 
                                                   & vlSelfRef.inst)
                                                   ? 
                                                  ((0x04000000U 
                                                    & vlSelfRef.inst)
                                                    ? 4U
                                                    : 6U)
                                                   : 
                                                  ((0x04000000U 
                                                    & vlSelfRef.inst)
                                                    ? 3U
                                                    : 5U)) 
                                                 << 0x0000001dU));
                            __Vtemp_63[7U] = (((0x08000000U 
                                                & vlSelfRef.inst)
                                                ? (
                                                   (0x04000000U 
                                                    & vlSelfRef.inst)
                                                    ? 4U
                                                    : 6U)
                                                : (
                                                   (0x04000000U 
                                                    & vlSelfRef.inst)
                                                    ? 3U
                                                    : 5U)) 
                                              >> 3U);
                        }
                    } else if ((0x10000000U & vlSelfRef.inst)) {
                        if ((0x08000000U & vlSelfRef.inst)) {
                            __Vtemp_63[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U];
                            __Vtemp_63[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[1U];
                            __Vtemp_63[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[2U];
                            __Vtemp_63[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[3U];
                            __Vtemp_63[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[4U];
                            __Vtemp_63[5U] = (0x80000000U 
                                              | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[5U]);
                            __Vtemp_63[6U] = (0x02010000U 
                                              | (((0x04000000U 
                                                   & vlSelfRef.inst)
                                                   ? 4U
                                                   : 8U) 
                                                 << 0x0000001bU));
                            __Vtemp_63[7U] = (((0x04000000U 
                                                & vlSelfRef.inst)
                                                ? 4U
                                                : 8U) 
                                              >> 5U);
                        } else {
                            if ((0x04000000U & vlSelfRef.inst)) {
                                __Vtemp_67[0U] = (0x00080000U 
                                                  | (0x00001ffeU 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] 
                                                        >> 4U)));
                                __Vtemp_67[1U] = 0U;
                                __Vtemp_67[2U] = 0U;
                                __Vtemp_67[3U] = 0U;
                                __Vtemp_67[4U] = 0x02600000U;
                            } else {
                                __Vtemp_67[0U] = (0x00001fffU 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] 
                                                     >> 4U));
                                __Vtemp_67[1U] = 0U;
                                __Vtemp_67[2U] = 0U;
                                __Vtemp_67[3U] = 0U;
                                __Vtemp_67[4U] = 0U;
                            }
                            __Vtemp_63[0U] = (5U | 
                                              (__Vtemp_67[0U] 
                                               << 4U));
                            __Vtemp_63[1U] = ((__Vtemp_67[0U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_67[1U] 
                                                 << 4U));
                            __Vtemp_63[2U] = ((__Vtemp_67[1U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_67[2U] 
                                                 << 4U));
                            __Vtemp_63[3U] = ((__Vtemp_67[2U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_67[3U] 
                                                 << 4U));
                            __Vtemp_63[4U] = ((((0x03ff0000U 
                                                 & (vlSelfRef.inst 
                                                    << 0x00000010U)) 
                                                | (0x0000ffffU 
                                                   & (vlSelfRef.inst 
                                                      >> 0x0000000aU))) 
                                               << 0x0000001eU) 
                                              | ((__Vtemp_67[3U] 
                                                  >> 0x0000001cU) 
                                                 | (__Vtemp_67[4U] 
                                                    << 4U)));
                            __Vtemp_63[5U] = (((0x03ff0000U 
                                                & (vlSelfRef.inst 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000aU))) 
                                              >> 2U);
                            __Vtemp_63[6U] = 0xe2008001U;
                            __Vtemp_63[7U] = 0U;
                        }
                    } else {
                        if ((0x08000000U & vlSelfRef.inst)) {
                            if ((0x04000000U & vlSelfRef.inst)) {
                                __Vtemp_70[0U] = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                   << 0x0000000fU) 
                                                  | (0x00007ff8U 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] 
                                                        >> 2U)));
                                __Vtemp_70[1U] = 0U;
                                __Vtemp_70[2U] = 0U;
                                __Vtemp_70[3U] = 0U;
                                __Vtemp_70[4U] = (0x09800000U 
                                                  | (0xf0000000U 
                                                     & (vlSelfRef.inst 
                                                        << 0x00000012U)));
                                __Vtemp_70[5U] = (0x20000000U 
                                                  | (0x00000fffU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x0000000eU)));
                                __Vtemp_70[6U] = 0x41001000U;
                            } else {
                                __Vtemp_70[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[0U];
                                __Vtemp_70[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[1U];
                                __Vtemp_70[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[2U];
                                __Vtemp_70[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[3U];
                                __Vtemp_70[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[4U];
                                __Vtemp_70[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[5U];
                                __Vtemp_70[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[6U];
                            }
                        } else {
                            __Vtemp_70[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[0U];
                            __Vtemp_70[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[1U];
                            __Vtemp_70[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[2U];
                            __Vtemp_70[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[3U];
                            __Vtemp_70[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[4U];
                            __Vtemp_70[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[5U];
                            __Vtemp_70[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[6U];
                        }
                        __Vtemp_63[0U] = (1U | (__Vtemp_70[0U] 
                                                << 2U));
                        __Vtemp_63[1U] = ((__Vtemp_70[0U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_70[1U] 
                                             << 2U));
                        __Vtemp_63[2U] = ((__Vtemp_70[1U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_70[2U] 
                                             << 2U));
                        __Vtemp_63[3U] = ((__Vtemp_70[2U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_70[3U] 
                                             << 2U));
                        __Vtemp_63[4U] = ((__Vtemp_70[3U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_70[4U] 
                                             << 2U));
                        __Vtemp_63[5U] = ((__Vtemp_70[4U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_70[5U] 
                                             << 2U));
                        __Vtemp_63[6U] = ((__Vtemp_70[5U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_70[6U] 
                                             << 2U));
                        __Vtemp_63[7U] = (__Vtemp_70[6U] 
                                          >> 0x0000001eU);
                    }
                } else {
                    __Vtemp_63[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U];
                    __Vtemp_63[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U];
                    __Vtemp_63[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U];
                    __Vtemp_63[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U];
                    __Vtemp_63[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U];
                    __Vtemp_63[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U];
                    __Vtemp_63[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U];
                    __Vtemp_63[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[7U];
                }
                __Vtemp_62[0U] = __Vtemp_63[0U];
                __Vtemp_62[1U] = __Vtemp_63[1U];
                __Vtemp_62[2U] = __Vtemp_63[2U];
                __Vtemp_62[3U] = __Vtemp_63[3U];
                __Vtemp_62[4U] = __Vtemp_63[4U];
                __Vtemp_62[5U] = __Vtemp_63[5U];
                __Vtemp_62[6U] = __Vtemp_63[6U];
                __Vtemp_62[7U] = (0x00400002U | __Vtemp_63[7U]);
                __Vtemp_62[8U] = 4U;
            } else {
                if ((0x10U == (vlSelfRef.inst >> 0x00000019U))) {
                    if ((0x01000000U & vlSelfRef.inst)) {
                        __Vtemp_74[0U] = (IData)((0x0000620000000000ULL 
                                                  | (((QData)((IData)(
                                                                      (0x00ffffffU 
                                                                       & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U] 
                                                                           << 0x0000000fU) 
                                                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[0U] 
                                                                             >> 0x00000011U))))) 
                                                      << 0x00000011U) 
                                                     | (QData)((IData)(
                                                                       ((0x0000f800U 
                                                                         & (vlSelfRef.inst 
                                                                            << 0x0000000bU)) 
                                                                        | (0x000007feU 
                                                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[0U])))))));
                        __Vtemp_74[1U] = ((0xfff80000U 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U]) 
                                          | (IData)(
                                                    ((0x0000620000000000ULL 
                                                      | (((QData)((IData)(
                                                                          (0x00ffffffU 
                                                                           & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U] 
                                                                               << 0x0000000fU) 
                                                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[0U] 
                                                                                >> 0x00000011U))))) 
                                                          << 0x00000011U) 
                                                         | (QData)((IData)(
                                                                           ((0x0000f800U 
                                                                             & (vlSelfRef.inst 
                                                                                << 0x0000000bU)) 
                                                                            | (0x000007feU 
                                                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[0U])))))) 
                                                     >> 0x00000020U)));
                        __Vtemp_74[2U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[2U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[2U]));
                        __Vtemp_74[3U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[3U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[3U]));
                        __Vtemp_74[4U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[4U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[4U]));
                        __Vtemp_74[5U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U]));
                        __Vtemp_74[6U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[6U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[6U]));
                        __Vtemp_74[7U] = (0x01000000U 
                                          | ((0x0007ffffU 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[7U]) 
                                             | (0x00f80000U 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[7U])));
                    } else {
                        __Vtemp_74[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[0U];
                        __Vtemp_74[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U];
                        __Vtemp_74[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[2U];
                        __Vtemp_74[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[3U];
                        __Vtemp_74[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[4U];
                        __Vtemp_74[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U];
                        __Vtemp_74[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[6U];
                        __Vtemp_74[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[7U];
                    }
                } else {
                    __Vtemp_74[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[0U];
                    __Vtemp_74[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[1U];
                    __Vtemp_74[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[2U];
                    __Vtemp_74[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[3U];
                    __Vtemp_74[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
                                       << 0x0000001eU) 
                                      | (0x3fffffffU 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[4U]));
                    __Vtemp_74[5U] = ((0x3f000000U 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[5U]) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
                                         >> 2U));
                    __Vtemp_74[6U] = ((IData)((0x00ffffffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[7U])) 
                                                   << 0x0000001fU) 
                                                  | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[6U])) 
                                                     >> 1U)))) 
                                      << 1U);
                    __Vtemp_74[7U] = (((IData)((0x00ffffffffffffffULL 
                                                & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[7U])) 
                                                    << 0x0000001fU) 
                                                   | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[6U])) 
                                                      >> 1U)))) 
                                       >> 0x0000001fU) 
                                      | ((IData)(((0x00ffffffffffffffULL 
                                                   & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[7U])) 
                                                       << 0x0000001fU) 
                                                      | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[6U])) 
                                                         >> 1U))) 
                                                  >> 0x00000020U)) 
                                         << 1U));
                }
                __Vtemp_62[0U] = __Vtemp_74[0U];
                __Vtemp_62[1U] = __Vtemp_74[1U];
                __Vtemp_62[2U] = __Vtemp_74[2U];
                __Vtemp_62[3U] = __Vtemp_74[3U];
                __Vtemp_62[4U] = __Vtemp_74[4U];
                __Vtemp_62[5U] = __Vtemp_74[5U];
                __Vtemp_62[6U] = __Vtemp_74[6U];
                __Vtemp_62[7U] = __Vtemp_74[7U];
                __Vtemp_62[8U] = 1U;
            }
            __Vtemp_26[0U] = (__Vtemp_62[0U] << 0x00000018U);
            __Vtemp_26[1U] = ((__Vtemp_62[0U] >> 8U) 
                              | (__Vtemp_62[1U] << 0x00000018U));
            __Vtemp_26[2U] = ((__Vtemp_62[1U] >> 8U) 
                              | (__Vtemp_62[2U] << 0x00000018U));
            __Vtemp_26[3U] = ((__Vtemp_62[2U] >> 8U) 
                              | (__Vtemp_62[3U] << 0x00000018U));
            __Vtemp_26[4U] = ((__Vtemp_62[3U] >> 8U) 
                              | (__Vtemp_62[4U] << 0x00000018U));
            __Vtemp_26[5U] = ((__Vtemp_62[4U] >> 8U) 
                              | (__Vtemp_62[5U] << 0x00000018U));
            __Vtemp_26[6U] = ((__Vtemp_62[5U] >> 8U) 
                              | (__Vtemp_62[6U] << 0x00000018U));
            __Vtemp_26[7U] = ((__Vtemp_62[6U] >> 8U) 
                              | (__Vtemp_62[7U] << 0x00000018U));
            __Vtemp_26[8U] = ((__Vtemp_62[7U] >> 8U) 
                              | (__Vtemp_62[8U] << 0x00000018U));
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
            = __Vtemp_26[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
            = __Vtemp_26[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
            = __Vtemp_26[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
            = __Vtemp_26[3U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
            = __Vtemp_26[4U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
            = __Vtemp_26[5U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
            = __Vtemp_26[6U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
            = __Vtemp_26[7U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
            = __Vtemp_26[8U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U] = 0U;
    }
}
