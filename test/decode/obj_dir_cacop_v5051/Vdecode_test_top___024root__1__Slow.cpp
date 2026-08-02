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

VL_ATTR_COLD void Vdecode_test_top___024root___stl_sequent__TOP__1(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___stl_sequent__TOP__1\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<9>/*287:0*/ __Vtemp_17;
    VlWide<10>/*319:0*/ __Vtemp_23;
    VlWide<10>/*319:0*/ __Vtemp_24;
    VlWide<10>/*319:0*/ __Vtemp_29;
    VlWide<5>/*159:0*/ __Vtemp_33;
    VlWide<7>/*223:0*/ __Vtemp_35;
    VlWide<5>/*159:0*/ __Vtemp_36;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<9>/*287:0*/ __Vtemp_42;
    VlWide<9>/*287:0*/ __Vtemp_43;
    VlWide<9>/*287:0*/ __Vtemp_44;
    VlWide<9>/*287:0*/ __Vtemp_47;
    VlWide<9>/*287:0*/ __Vtemp_48;
    VlWide<9>/*287:0*/ __Vtemp_53;
    VlWide<9>/*287:0*/ __Vtemp_60;
    VlWide<7>/*223:0*/ __Vtemp_63;
    VlWide<7>/*223:0*/ __Vtemp_68;
    VlWide<6>/*191:0*/ __Vtemp_73;
    VlWide<6>/*191:0*/ __Vtemp_75;
    VlWide<9>/*287:0*/ __Vtemp_78;
    VlWide<8>/*255:0*/ __Vtemp_79;
    VlWide<5>/*159:0*/ __Vtemp_83;
    VlWide<7>/*223:0*/ __Vtemp_86;
    VlWide<8>/*255:0*/ __Vtemp_90;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] = (IData)(
                                                            (0x0000000000000040ULL 
                                                             | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                                                << 0x00000017U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] = (IData)(
                                                            ((0x0000000000000040ULL 
                                                              | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)) 
                                                                 << 0x00000017U)) 
                                                             >> 0x00000020U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] = 0x80000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[5U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] = 
        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
         << 0x0000000cU);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[2U] = 
        (0x007fffffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                        >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[2U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[3U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[5U] 
          << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[4U] 
                             >> 3U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
          << 1U) | (1U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[5U] 
                          >> 3U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
          << 0x00000014U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
                             >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] 
          << 0x00000014U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                             >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] 
          << 0x00000014U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] 
                             >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] 
          << 0x00000014U) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] 
                             >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] = 
        (0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] 
                        >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] = (IData)(
                                                           (0x03fffffffffff000ULL 
                                                            & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U])) 
                                                                << 0x0000002cU) 
                                                               | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U])) 
                                                                  << 0x0000000cU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] = 
        (0x34000000U | (IData)(((0x03fffffffffff000ULL 
                                 & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U])) 
                                     << 0x0000002cU) 
                                    | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U])) 
                                       << 0x0000000cU))) 
                                >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] = 0x04000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] = 0x000000c0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[5U];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[6U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[6U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[7U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
          << 0x0000001fU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                             >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[8U] = 
        (0x000001ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                        >> 1U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 = ((0x0007c000U 
                                                  & (vlSelfRef.inst 
                                                     << 4U)) 
                                                 | (0x00003fffU 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[0U] = (IData)(
                                                            (0x00ffffffffffffffULL 
                                                             & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U])) 
                                                                 << 0x0000001fU) 
                                                                | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])) 
                                                                   >> 1U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[1U] = 
        (0x0d000000U | (IData)(((0x00ffffffffffffffULL 
                                 & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U])) 
                                     << 0x0000001fU) 
                                    | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])) 
                                       >> 1U))) >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[2U] = 
        (0x01000000U | (0xfe000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                       << 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[3U] = 
        (((0x01fffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                          << 2U)) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                     >> 0x0000001eU)) 
         | (0xfe000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                           << 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[4U] = 
        (((0x01fffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                          << 2U)) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                     >> 0x0000001eU)) 
         | (0xfe000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                           << 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[5U] = 
        (((0x01fffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                          << 2U)) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                     >> 0x0000001eU)) 
         | (0xfe000000U & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                           << 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[6U] = 
        (0x0000000fU & ((0x01fffffcU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[6U] 
                                        << 2U)) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                                   >> 0x0000001eU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
          << 0x00000014U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
          >> 0x0000000cU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                             << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
          >> 0x0000000cU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                             << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
          >> 0x0000000cU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                             << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
          >> 0x0000000cU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] 
                             << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] = 0x0000000cU;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] = 0x02000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[8U] = 0x00000020U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (((QData)((IData)(
                                                                  (0x007fffffU 
                                                                   & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                                       << 0x00000014U) 
                                                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
                                                                         >> 0x0000000cU))))) 
                                                  << 0x00000014U) 
                                                 | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12)));
    if ((8U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
        if ((4U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
            VL_ASSIGN_W(317, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2, Vdecode_test_top__ConstPool__CONST_h90bb8da8_0);
        } else if ((2U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
            VL_ASSIGN_W(317, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2, Vdecode_test_top__ConstPool__CONST_h90bb8da8_0);
        } else {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((IData)((0x00020000U != (0x00028000U 
                                             & vlSelfRef.inst)))) {
                    VL_ASSIGN_W(267, __Vtemp_17, Vdecode_test_top__ConstPool__CONST_h7f9b92ff_0);
                } else if ((0x00010000U & vlSelfRef.inst)) {
                    VL_ASSIGN_W(267, __Vtemp_17, Vdecode_test_top__ConstPool__CONST_hd828b2ff_0);
                } else {
                    VL_ASSIGN_W(267, __Vtemp_17, Vdecode_test_top__ConstPool__CONST_h9b90e2ff_0);
                }
            } else if (((vlSelfRef.inst >> 0x0000000aU) 
                        & (0U != (0x0000001fU & (vlSelfRef.inst 
                                                 >> 5U))))) {
                VL_ASSIGN_W(267, __Vtemp_17, Vdecode_test_top__ConstPool__CONST_h0f7390c2_0);
            } else {
                __Vtemp_17[0U] = (IData)(((0U != (0x0000001fU 
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
                __Vtemp_17[1U] = (0x00008000U | (IData)(
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
                __Vtemp_17[2U] = 0U;
                __Vtemp_17[3U] = 0U;
                __Vtemp_17[4U] = 0U;
                __Vtemp_17[5U] = (0x0000000aU | (0x00000020U 
                                                 & (vlSelfRef.inst 
                                                    >> 5U)));
                __Vtemp_17[6U] = 0x001000e0U;
                __Vtemp_17[7U] = 0U;
                __Vtemp_17[8U] = 0x00000100U;
            }
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
                = (__Vtemp_17[0U] << 0x00000011U);
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
                = ((__Vtemp_17[0U] >> 0x0000000fU) 
                   | (__Vtemp_17[1U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
                = ((__Vtemp_17[1U] >> 0x0000000fU) 
                   | (__Vtemp_17[2U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
                = ((__Vtemp_17[2U] >> 0x0000000fU) 
                   | (__Vtemp_17[3U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
                = ((__Vtemp_17[3U] >> 0x0000000fU) 
                   | (__Vtemp_17[4U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
                = ((__Vtemp_17[4U] >> 0x0000000fU) 
                   | (__Vtemp_17[5U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
                = ((__Vtemp_17[5U] >> 0x0000000fU) 
                   | (__Vtemp_17[6U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
                = ((__Vtemp_17[6U] >> 0x0000000fU) 
                   | (__Vtemp_17[7U] << 0x00000011U));
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
                = ((__Vtemp_17[7U] >> 0x0000000fU) 
                   | (__Vtemp_17[8U] << 0x00000011U));
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
                            VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                        } else {
                            __Vtemp_24[0U] = (0x00000044U 
                                              | (0x00f80000U 
                                                 & (vlSelfRef.inst 
                                                    << 0x0000000eU)));
                            __Vtemp_24[1U] = 0x00000600U;
                            __Vtemp_24[2U] = 0U;
                            __Vtemp_24[3U] = 0U;
                            __Vtemp_24[4U] = 0x08000000U;
                            __Vtemp_24[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11;
                            __Vtemp_24[6U] = 0U;
                            __Vtemp_24[7U] = 0U;
                            __Vtemp_24[8U] = 8U;
                            __Vtemp_24[9U] = 0U;
                        }
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h1670bce2_0);
                    }
                } else if ((0x06483800U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h4a8a6736_0);
                    }
                } else if ((0x06482800U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h7b844236_0);
                    }
                } else if ((0x06482c00U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_hb59458f7_0);
                    }
                } else if ((0x06483000U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h401d02ed_0);
                    }
                } else if ((0x06483400U == vlSelfRef.inst)) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_hc8ddfb93_0);
                    }
                } else if (((0x00000c93U == (vlSelfRef.inst 
                                             >> 0x0000000fU)) 
                            & (6U >= (0x0000001fU & vlSelfRef.inst)))) {
                    if ((0U != (IData)(vlSelfRef.status_prv))) {
                        VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h5a67e08e_0);
                    } else {
                        __Vtemp_24[0U] = (0x0040U | 
                                          ((0x00f80000U 
                                            & (vlSelfRef.inst 
                                               << 0x0000000eU)) 
                                           | (0x0003e000U 
                                              & (vlSelfRef.inst 
                                                 << 3U))));
                        __Vtemp_24[1U] = 0x00000605U;
                        __Vtemp_24[2U] = 0U;
                        __Vtemp_24[3U] = 0U;
                        __Vtemp_24[4U] = 0U;
                        __Vtemp_24[5U] = 0U;
                        __Vtemp_24[6U] = 6U;
                        __Vtemp_24[7U] = 0U;
                        __Vtemp_24[8U] = 8U;
                        __Vtemp_24[9U] = 0U;
                    }
                } else {
                    VL_ASSIGN_W(295, __Vtemp_24, Vdecode_test_top__ConstPool__CONST_h2f095bee_0);
                }
            } else {
                if ((IData)((0x00006c00U == (0xfffffc00U 
                                             & vlSelfRef.inst)))) {
                    __Vtemp_29[0U] = (1U | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                            << 0x00000011U));
                    __Vtemp_29[1U] = 0x00000186U;
                    __Vtemp_29[2U] = 0U;
                    __Vtemp_29[3U] = 0U;
                    __Vtemp_29[4U] = 0U;
                    __Vtemp_29[5U] = 0xc000002cU;
                    __Vtemp_29[6U] = 1U;
                    __Vtemp_29[7U] = 0x08000000U;
                    __Vtemp_29[8U] = 2U;
                    __Vtemp_29[9U] = 0U;
                } else if ((0U != (IData)(vlSelfRef.status_prv))) {
                    VL_ASSIGN_W(293, __Vtemp_29, Vdecode_test_top__ConstPool__CONST_h0cc0a684_0);
                } else {
                    __Vtemp_33[1U] = (0x00000180U | (IData)(
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
                    __Vtemp_29[0U] = (IData)(((0U == 
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
                    __Vtemp_29[1U] = __Vtemp_33[1U];
                    __Vtemp_29[2U] = 0U;
                    __Vtemp_29[3U] = 0U;
                    __Vtemp_29[4U] = (0xc0000000U & 
                                      (vlSelfRef.inst 
                                       << 0x00000014U));
                    __Vtemp_29[5U] = (0xc0000000U | 
                                      (0x00000fffU 
                                       & (vlSelfRef.inst 
                                          >> 0x0000000cU)));
                    __Vtemp_29[6U] = 1U;
                    __Vtemp_29[7U] = 0x08000000U;
                    __Vtemp_29[8U] = 2U;
                    __Vtemp_29[9U] = 0U;
                }
                __Vtemp_24[0U] = (__Vtemp_29[0U] << 2U);
                __Vtemp_24[1U] = ((__Vtemp_29[0U] >> 0x0000001eU) 
                                  | (__Vtemp_29[1U] 
                                     << 2U));
                __Vtemp_24[2U] = ((__Vtemp_29[1U] >> 0x0000001eU) 
                                  | (__Vtemp_29[2U] 
                                     << 2U));
                __Vtemp_24[3U] = ((__Vtemp_29[2U] >> 0x0000001eU) 
                                  | (__Vtemp_29[3U] 
                                     << 2U));
                __Vtemp_24[4U] = ((__Vtemp_29[3U] >> 0x0000001eU) 
                                  | (__Vtemp_29[4U] 
                                     << 2U));
                __Vtemp_24[5U] = ((__Vtemp_29[4U] >> 0x0000001eU) 
                                  | (__Vtemp_29[5U] 
                                     << 2U));
                __Vtemp_24[6U] = ((__Vtemp_29[5U] >> 0x0000001eU) 
                                  | (__Vtemp_29[6U] 
                                     << 2U));
                __Vtemp_24[7U] = ((__Vtemp_29[6U] >> 0x0000001eU) 
                                  | (__Vtemp_29[7U] 
                                     << 2U));
                __Vtemp_24[8U] = ((__Vtemp_29[7U] >> 0x0000001eU) 
                                  | (__Vtemp_29[8U] 
                                     << 2U));
                __Vtemp_24[9U] = ((__Vtemp_29[8U] >> 0x0000001eU) 
                                  | (__Vtemp_29[9U] 
                                     << 2U));
            }
            __Vtemp_23[0U] = (__Vtemp_24[0U] << 5U);
            __Vtemp_23[1U] = ((__Vtemp_24[0U] >> 0x0000001bU) 
                              | (__Vtemp_24[1U] << 5U));
            __Vtemp_23[2U] = ((__Vtemp_24[1U] >> 0x0000001bU) 
                              | (__Vtemp_24[2U] << 5U));
            __Vtemp_23[3U] = ((__Vtemp_24[2U] >> 0x0000001bU) 
                              | (__Vtemp_24[3U] << 5U));
            __Vtemp_23[4U] = ((__Vtemp_24[3U] >> 0x0000001bU) 
                              | (__Vtemp_24[4U] << 5U));
            __Vtemp_23[5U] = ((__Vtemp_24[4U] >> 0x0000001bU) 
                              | (__Vtemp_24[5U] << 5U));
            __Vtemp_23[6U] = ((__Vtemp_24[5U] >> 0x0000001bU) 
                              | (__Vtemp_24[6U] << 5U));
            __Vtemp_23[7U] = ((__Vtemp_24[6U] >> 0x0000001bU) 
                              | (__Vtemp_24[7U] << 5U));
            __Vtemp_23[8U] = ((__Vtemp_24[7U] >> 0x0000001bU) 
                              | (__Vtemp_24[8U] << 5U));
            __Vtemp_23[9U] = ((__Vtemp_24[8U] >> 0x0000001bU) 
                              | (__Vtemp_24[9U] << 5U));
        } else {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((0x08000000U & vlSelfRef.inst)) {
                    __Vtemp_36[0U] = 0U;
                    __Vtemp_36[1U] = 0U;
                    __Vtemp_36[2U] = 0U;
                    __Vtemp_36[3U] = 0x10000000U;
                    __Vtemp_36[4U] = 1U;
                } else {
                    __Vtemp_36[0U] = 0U;
                    __Vtemp_36[1U] = 0U;
                    __Vtemp_36[2U] = 0U;
                    __Vtemp_36[3U] = 0x90000000U;
                    __Vtemp_36[4U] = 0U;
                }
                __Vtemp_35[0U] = (IData)((0x0000000000000280ULL 
                                          | ((QData)((IData)(
                                                             (0x0000001fU 
                                                              & vlSelfRef.inst))) 
                                             << 0x0000001eU)));
                __Vtemp_35[1U] = ((__Vtemp_36[0U] << 4U) 
                                  | (IData)(((0x0000000000000280ULL 
                                              | ((QData)((IData)(
                                                                 (0x0000001fU 
                                                                  & vlSelfRef.inst))) 
                                                 << 0x0000001eU)) 
                                             >> 0x00000020U)));
                __Vtemp_35[2U] = ((__Vtemp_36[0U] >> 0x0000001cU) 
                                  | (__Vtemp_36[1U] 
                                     << 4U));
                __Vtemp_35[3U] = ((__Vtemp_36[1U] >> 0x0000001cU) 
                                  | (__Vtemp_36[2U] 
                                     << 4U));
                __Vtemp_35[4U] = ((__Vtemp_36[2U] >> 0x0000001cU) 
                                  | (__Vtemp_36[3U] 
                                     << 4U));
                __Vtemp_35[5U] = (((IData)((0x0000000300000000ULL 
                                            | (QData)((IData)(
                                                              (0x000fffffU 
                                                               & (vlSelfRef.inst 
                                                                  >> 5U)))))) 
                                   << 5U) | ((__Vtemp_36[3U] 
                                              >> 0x0000001cU) 
                                             | (__Vtemp_36[4U] 
                                                << 4U)));
                __Vtemp_35[6U] = (((IData)((0x0000000300000000ULL 
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
                    __Vtemp_39[0U] = (8U | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                            << 4U));
                    __Vtemp_39[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                       >> 0x0000001cU) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                         << 4U));
                    __Vtemp_39[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                       >> 0x0000001cU) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[2U] 
                                         << 4U));
                } else if ((1U == (3U & (vlSelfRef.inst 
                                         >> 0x00000012U)))) {
                    __Vtemp_39[0U] = (9U | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                            << 4U));
                    __Vtemp_39[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                       >> 0x0000001cU) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                         << 4U));
                    __Vtemp_39[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                       >> 0x0000001cU) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[2U] 
                                         << 4U));
                } else {
                    if ((2U == (3U & (vlSelfRef.inst 
                                      >> 0x00000012U)))) {
                        __Vtemp_40[0U] = (5U | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                                << 3U));
                        __Vtemp_40[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[0U] 
                                           >> 0x0000001dU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                             << 3U));
                        __Vtemp_40[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[1U] 
                                           >> 0x0000001dU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18[2U] 
                                             << 3U));
                    } else {
                        __Vtemp_40[0U] = (IData)((0x01ffffffffffffffULL 
                                                  & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U])) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])))));
                        __Vtemp_40[1U] = (0x1a000000U 
                                          | (IData)(
                                                    ((0x01ffffffffffffffULL 
                                                      & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[1U])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_10[0U])))) 
                                                     >> 0x00000020U)));
                        __Vtemp_40[2U] = 0x02000000U;
                    }
                    __Vtemp_39[0U] = (__Vtemp_40[0U] 
                                      << 1U);
                    __Vtemp_39[1U] = ((__Vtemp_40[0U] 
                                       >> 0x0000001fU) 
                                      | (__Vtemp_40[1U] 
                                         << 1U));
                    __Vtemp_39[2U] = ((__Vtemp_40[1U] 
                                       >> 0x0000001fU) 
                                      | (__Vtemp_40[2U] 
                                         << 1U));
                }
                __Vtemp_35[0U] = __Vtemp_39[0U];
                __Vtemp_35[1U] = __Vtemp_39[1U];
                __Vtemp_35[2U] = __Vtemp_39[2U];
                __Vtemp_35[3U] = 0U;
                __Vtemp_35[4U] = 0U;
                __Vtemp_35[5U] = (1U | ((IData)((0x0000000500000000ULL 
                                                 | (QData)((IData)(
                                                                   (0x0000001fU 
                                                                    & (vlSelfRef.inst 
                                                                       >> 0x0000000aU)))))) 
                                        << 5U));
                __Vtemp_35[6U] = (((IData)((0x0000000500000000ULL 
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
            __Vtemp_23[0U] = __Vtemp_35[0U];
            __Vtemp_23[1U] = __Vtemp_35[1U];
            __Vtemp_23[2U] = __Vtemp_35[2U];
            __Vtemp_23[3U] = __Vtemp_35[3U];
            __Vtemp_23[4U] = __Vtemp_35[4U];
            __Vtemp_23[5U] = __Vtemp_35[5U];
            __Vtemp_23[6U] = __Vtemp_35[6U];
            __Vtemp_23[7U] = 0x20000000U;
            __Vtemp_23[8U] = 0x00000200U;
            __Vtemp_23[9U] = 0U;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
            = (__Vtemp_23[0U] << 0x00000011U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
            = ((__Vtemp_23[0U] >> 0x0000000fU) | (__Vtemp_23[1U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
            = ((__Vtemp_23[1U] >> 0x0000000fU) | (__Vtemp_23[2U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
            = ((__Vtemp_23[2U] >> 0x0000000fU) | (__Vtemp_23[3U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
            = ((__Vtemp_23[3U] >> 0x0000000fU) | (__Vtemp_23[4U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
            = ((__Vtemp_23[4U] >> 0x0000000fU) | (__Vtemp_23[5U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
            = ((__Vtemp_23[5U] >> 0x0000000fU) | (__Vtemp_23[6U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
            = ((__Vtemp_23[6U] >> 0x0000000fU) | (__Vtemp_23[7U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
            = ((__Vtemp_23[7U] >> 0x0000000fU) | (__Vtemp_23[8U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U] 
            = ((__Vtemp_23[8U] >> 0x0000000fU) | (__Vtemp_23[9U] 
                                                  << 0x00000011U));
    } else {
        if ((2U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((0x00200000U & vlSelfRef.inst)) {
                    if ((0x00100000U & vlSelfRef.inst)) {
                        __Vtemp_44[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                        __Vtemp_44[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                        __Vtemp_44[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                        __Vtemp_44[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                        __Vtemp_44[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                        __Vtemp_44[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                        __Vtemp_44[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                        __Vtemp_44[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                        __Vtemp_44[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                    } else if ((0x00080000U & vlSelfRef.inst)) {
                        __Vtemp_44[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                        __Vtemp_44[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                        __Vtemp_44[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                        __Vtemp_44[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                        __Vtemp_44[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                        __Vtemp_44[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                        __Vtemp_44[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                        __Vtemp_44[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                        __Vtemp_44[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                    } else if ((0x00040000U & vlSelfRef.inst)) {
                        __Vtemp_44[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                        __Vtemp_44[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                        __Vtemp_44[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                        __Vtemp_44[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                        __Vtemp_44[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                        __Vtemp_44[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                        __Vtemp_44[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                        __Vtemp_44[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                        __Vtemp_44[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                    } else if ((0x00020000U & vlSelfRef.inst)) {
                        __Vtemp_44[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                        __Vtemp_44[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                        __Vtemp_44[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                        __Vtemp_44[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                        __Vtemp_44[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                        __Vtemp_44[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                        __Vtemp_44[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                        __Vtemp_44[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                        __Vtemp_44[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                    } else {
                        __Vtemp_44[0U] = (IData)(((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
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
                        __Vtemp_44[1U] = (0x00008000U 
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
                        __Vtemp_44[2U] = 0U;
                        __Vtemp_44[3U] = 0U;
                        __Vtemp_44[4U] = 0U;
                        __Vtemp_44[5U] = 0U;
                        __Vtemp_44[6U] = 0x000000c0U;
                        __Vtemp_44[7U] = 0U;
                        __Vtemp_44[8U] = 0x00000102U;
                    }
                    __Vtemp_43[0U] = __Vtemp_44[0U];
                    __Vtemp_43[1U] = __Vtemp_44[1U];
                    __Vtemp_43[2U] = __Vtemp_44[2U];
                    __Vtemp_43[3U] = __Vtemp_44[3U];
                    __Vtemp_43[4U] = __Vtemp_44[4U];
                    __Vtemp_43[5U] = __Vtemp_44[5U];
                    __Vtemp_43[6U] = __Vtemp_44[6U];
                    __Vtemp_43[7U] = __Vtemp_44[7U];
                    __Vtemp_43[8U] = (0x000001ffU & __Vtemp_44[8U]);
                } else if ((0x00100000U & vlSelfRef.inst)) {
                    if ((0x00080000U & vlSelfRef.inst)) {
                        if ((0x00040000U & vlSelfRef.inst)) {
                            if ((0x00020000U & vlSelfRef.inst)) {
                                __Vtemp_47[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                                __Vtemp_47[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                                __Vtemp_47[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                                __Vtemp_47[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                                __Vtemp_47[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                                __Vtemp_47[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                                __Vtemp_47[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                                __Vtemp_47[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                                __Vtemp_47[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                            } else if ((0x00010000U 
                                        & vlSelfRef.inst)) {
                                if ((0x00008000U & vlSelfRef.inst)) {
                                    __Vtemp_48[0U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                                              >> 1U));
                                    __Vtemp_48[1U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                              >> 1U));
                                    __Vtemp_48[2U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                                              >> 1U));
                                    __Vtemp_48[3U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                                              >> 1U));
                                    __Vtemp_48[4U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                                              >> 1U));
                                    __Vtemp_48[5U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                                              >> 1U));
                                    __Vtemp_48[6U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                                              >> 1U));
                                    __Vtemp_48[7U] 
                                        = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                                            << 0x0000001fU) 
                                           | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                                              >> 1U));
                                    __Vtemp_48[8U] 
                                        = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                                           >> 1U);
                                } else {
                                    __Vtemp_48[0U] 
                                        = (IData)((1ULL 
                                                   | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                                      << 3U)));
                                    __Vtemp_48[1U] 
                                        = (0x00004000U 
                                           | (IData)(
                                                     ((1ULL 
                                                       | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 
                                                          << 3U)) 
                                                      >> 0x00000020U)));
                                    __Vtemp_48[2U] = 0U;
                                    __Vtemp_48[3U] = 0U;
                                    __Vtemp_48[4U] = 0U;
                                    __Vtemp_48[5U] = 0U;
                                    __Vtemp_48[6U] = 0x00000060U;
                                    __Vtemp_48[7U] = 0x80000000U;
                                    __Vtemp_48[8U] = 0x00000080U;
                                }
                                __Vtemp_47[0U] = (__Vtemp_48[0U] 
                                                  << 1U);
                                __Vtemp_47[1U] = ((__Vtemp_48[0U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_48[1U] 
                                                     << 1U));
                                __Vtemp_47[2U] = ((__Vtemp_48[1U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_48[2U] 
                                                     << 1U));
                                __Vtemp_47[3U] = ((__Vtemp_48[2U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_48[3U] 
                                                     << 1U));
                                __Vtemp_47[4U] = ((__Vtemp_48[3U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_48[4U] 
                                                     << 1U));
                                __Vtemp_47[5U] = ((__Vtemp_48[4U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_48[5U] 
                                                     << 1U));
                                __Vtemp_47[6U] = ((__Vtemp_48[5U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_48[6U] 
                                                     << 1U));
                                __Vtemp_47[7U] = ((__Vtemp_48[6U] 
                                                   >> 0x0000001fU) 
                                                  | (__Vtemp_48[7U] 
                                                     << 1U));
                                __Vtemp_47[8U] = ((__Vtemp_48[7U] 
                                                   >> 0x0000001fU) 
                                                  | (0x000001feU 
                                                     & (__Vtemp_48[8U] 
                                                        << 1U)));
                            } else {
                                __Vtemp_47[0U] = (IData)(
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
                                __Vtemp_47[1U] = (0x00008000U 
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
                                __Vtemp_47[2U] = 0U;
                                __Vtemp_47[3U] = 0U;
                                __Vtemp_47[4U] = 0U;
                                __Vtemp_47[5U] = 0U;
                                __Vtemp_47[6U] = 0x000000c0U;
                                __Vtemp_47[7U] = 0U;
                                __Vtemp_47[8U] = 0x00000101U;
                            }
                            __Vtemp_43[0U] = __Vtemp_47[0U];
                            __Vtemp_43[1U] = __Vtemp_47[1U];
                            __Vtemp_43[2U] = __Vtemp_47[2U];
                            __Vtemp_43[3U] = __Vtemp_47[3U];
                            __Vtemp_43[4U] = __Vtemp_47[4U];
                            __Vtemp_43[5U] = __Vtemp_47[5U];
                            __Vtemp_43[6U] = __Vtemp_47[6U];
                            __Vtemp_43[7U] = __Vtemp_47[7U];
                            __Vtemp_43[8U] = (0x000001ffU 
                                              & __Vtemp_47[8U]);
                        } else {
                            if ((0x00020000U & vlSelfRef.inst)) {
                                __Vtemp_53[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[0U];
                                __Vtemp_53[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[1U];
                                __Vtemp_53[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[2U];
                                __Vtemp_53[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[3U];
                                __Vtemp_53[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[4U];
                                __Vtemp_53[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[5U];
                                __Vtemp_53[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[6U];
                                __Vtemp_53[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[7U];
                                __Vtemp_53[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[8U];
                            } else if ((0x00010000U 
                                        & vlSelfRef.inst)) {
                                __Vtemp_53[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[0U];
                                __Vtemp_53[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[1U];
                                __Vtemp_53[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[2U];
                                __Vtemp_53[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[3U];
                                __Vtemp_53[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[4U];
                                __Vtemp_53[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[5U];
                                __Vtemp_53[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[6U];
                                __Vtemp_53[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[7U];
                                __Vtemp_53[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[8U];
                            } else if ((0x00008000U 
                                        & vlSelfRef.inst)) {
                                __Vtemp_53[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[0U];
                                __Vtemp_53[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[1U];
                                __Vtemp_53[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[2U];
                                __Vtemp_53[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[3U];
                                __Vtemp_53[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[4U];
                                __Vtemp_53[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[5U];
                                __Vtemp_53[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[6U];
                                __Vtemp_53[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[7U];
                                __Vtemp_53[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15[8U];
                            } else {
                                __Vtemp_53[0U] = (5U 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] 
                                                     << 3U));
                                __Vtemp_53[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] 
                                                     << 3U));
                                __Vtemp_53[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] 
                                                     << 3U));
                                __Vtemp_53[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] 
                                                     << 3U));
                                __Vtemp_53[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] 
                                                     << 3U));
                                __Vtemp_53[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] 
                                                     << 3U));
                                __Vtemp_53[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] 
                                                     << 3U));
                                __Vtemp_53[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] 
                                                     << 3U));
                                __Vtemp_53[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] 
                                                   >> 0x0000001dU) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[8U] 
                                                     << 3U));
                            }
                            __Vtemp_43[0U] = (__Vtemp_53[0U] 
                                              << 1U);
                            __Vtemp_43[1U] = ((__Vtemp_53[0U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_53[1U] 
                                                 << 1U));
                            __Vtemp_43[2U] = ((__Vtemp_53[1U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_53[2U] 
                                                 << 1U));
                            __Vtemp_43[3U] = ((__Vtemp_53[2U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_53[3U] 
                                                 << 1U));
                            __Vtemp_43[4U] = ((__Vtemp_53[3U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_53[4U] 
                                                 << 1U));
                            __Vtemp_43[5U] = ((__Vtemp_53[4U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_53[5U] 
                                                 << 1U));
                            __Vtemp_43[6U] = ((__Vtemp_53[5U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_53[6U] 
                                                 << 1U));
                            __Vtemp_43[7U] = ((__Vtemp_53[6U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_53[7U] 
                                                 << 1U));
                            __Vtemp_43[8U] = ((__Vtemp_53[7U] 
                                               >> 0x0000001fU) 
                                              | (__Vtemp_53[8U] 
                                                 << 1U));
                        }
                    } else if ((0x00040000U & vlSelfRef.inst)) {
                        if ((0x00020000U & vlSelfRef.inst)) {
                            if ((0x00010000U & vlSelfRef.inst)) {
                                __Vtemp_43[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                                   << 0x00000018U) 
                                                  | ((0x007ffff0U 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                         << 4U)) 
                                                     | ((0x00008000U 
                                                         & vlSelfRef.inst)
                                                         ? 9U
                                                         : 8U)));
                                __Vtemp_43[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                                   >> 8U) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                                     << 0x00000018U));
                                __Vtemp_43[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                                   >> 8U) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                                     << 0x00000018U));
                                __Vtemp_43[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                                   >> 8U) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                                     << 0x00000018U));
                                __Vtemp_43[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                                   >> 8U) 
                                                  | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] 
                                                     << 0x00000018U));
                                __Vtemp_43[5U] = 0U;
                                __Vtemp_43[6U] = 0x000000c0U;
                                __Vtemp_43[7U] = 0x20000000U;
                                __Vtemp_43[8U] = 0x00000200U;
                            } else {
                                __Vtemp_43[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                                __Vtemp_43[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                                __Vtemp_43[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                                __Vtemp_43[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                                __Vtemp_43[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                                __Vtemp_43[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                                __Vtemp_43[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                                __Vtemp_43[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                                __Vtemp_43[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                            }
                        } else {
                            __Vtemp_43[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
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
                            __Vtemp_43[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                                 << 0x00000018U));
                            __Vtemp_43[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                                 << 0x00000018U));
                            __Vtemp_43[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                                 << 0x00000018U));
                            __Vtemp_43[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] 
                                                 << 0x00000018U));
                            __Vtemp_43[5U] = 0U;
                            __Vtemp_43[6U] = 0x000000c0U;
                            __Vtemp_43[7U] = 0x20000000U;
                            __Vtemp_43[8U] = 0x00000200U;
                        }
                    } else if ((0x00020000U & vlSelfRef.inst)) {
                        if ((0x00010000U & vlSelfRef.inst)) {
                            __Vtemp_43[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                            __Vtemp_43[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                            __Vtemp_43[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                            __Vtemp_43[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                            __Vtemp_43[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                            __Vtemp_43[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                            __Vtemp_43[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                            __Vtemp_43[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                            __Vtemp_43[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                        } else {
                            __Vtemp_43[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                               << 0x00000018U) 
                                              | ((0x007ffff0U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12 
                                                     << 4U)) 
                                                 | ((0x00008000U 
                                                     & vlSelfRef.inst)
                                                     ? 3U
                                                     : 2U)));
                            __Vtemp_43[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[0U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                                 << 0x00000018U));
                            __Vtemp_43[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[1U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                                 << 0x00000018U));
                            __Vtemp_43[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[2U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                                 << 0x00000018U));
                            __Vtemp_43[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[3U] 
                                               >> 8U) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7[4U] 
                                                 << 0x00000018U));
                            __Vtemp_43[5U] = 0U;
                            __Vtemp_43[6U] = 0x000000c0U;
                            __Vtemp_43[7U] = 0x20000000U;
                            __Vtemp_43[8U] = 0x00000200U;
                        }
                    } else if ((0x00010000U & vlSelfRef.inst)) {
                        if ((0x00008000U & vlSelfRef.inst)) {
                            __Vtemp_43[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                            __Vtemp_43[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                            __Vtemp_43[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                            __Vtemp_43[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                            __Vtemp_43[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                            __Vtemp_43[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                            __Vtemp_43[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                            __Vtemp_43[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                            __Vtemp_43[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                        } else {
                            __Vtemp_43[0U] = (1U | 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] 
                                               << 4U));
                            __Vtemp_43[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] 
                                                 << 4U));
                            __Vtemp_43[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] 
                                                 << 4U));
                            __Vtemp_43[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] 
                                                 << 4U));
                            __Vtemp_43[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] 
                                                 << 4U));
                            __Vtemp_43[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] 
                                                 << 4U));
                            __Vtemp_43[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] 
                                                 << 4U));
                            __Vtemp_43[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] 
                                                 << 4U));
                            __Vtemp_43[8U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U] 
                                               >> 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[8U] 
                                                 << 4U));
                        }
                    } else {
                        if ((0x00008000U & vlSelfRef.inst)) {
                            __Vtemp_60[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U] 
                                                 >> 4U));
                            __Vtemp_60[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U] 
                                                 >> 4U));
                            __Vtemp_60[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U] 
                                                 >> 4U));
                            __Vtemp_60[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U] 
                                                 >> 4U));
                            __Vtemp_60[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U] 
                                                 >> 4U));
                            __Vtemp_60[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U] 
                                                 >> 4U));
                            __Vtemp_60[6U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U] 
                                                 >> 4U));
                            __Vtemp_60[7U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                                               << 0x0000001cU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U] 
                                                 >> 4U));
                            __Vtemp_60[8U] = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U] 
                                              >> 4U);
                        } else {
                            __Vtemp_60[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[0U];
                            __Vtemp_60[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[1U];
                            __Vtemp_60[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[2U];
                            __Vtemp_60[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[3U];
                            __Vtemp_60[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[4U];
                            __Vtemp_60[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[5U];
                            __Vtemp_60[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[6U];
                            __Vtemp_60[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[7U];
                            __Vtemp_60[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_17[8U];
                        }
                        __Vtemp_43[0U] = (__Vtemp_60[0U] 
                                          << 4U);
                        __Vtemp_43[1U] = ((__Vtemp_60[0U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_60[1U] 
                                             << 4U));
                        __Vtemp_43[2U] = ((__Vtemp_60[1U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_60[2U] 
                                             << 4U));
                        __Vtemp_43[3U] = ((__Vtemp_60[2U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_60[3U] 
                                             << 4U));
                        __Vtemp_43[4U] = ((__Vtemp_60[3U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_60[4U] 
                                             << 4U));
                        __Vtemp_43[5U] = ((__Vtemp_60[4U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_60[5U] 
                                             << 4U));
                        __Vtemp_43[6U] = ((__Vtemp_60[5U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_60[6U] 
                                             << 4U));
                        __Vtemp_43[7U] = ((__Vtemp_60[6U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_60[7U] 
                                             << 4U));
                        __Vtemp_43[8U] = ((__Vtemp_60[7U] 
                                           >> 0x0000001cU) 
                                          | (0x000003f0U 
                                             & (__Vtemp_60[8U] 
                                                << 4U)));
                    }
                } else {
                    __Vtemp_43[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[0U];
                    __Vtemp_43[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[1U];
                    __Vtemp_43[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[2U];
                    __Vtemp_43[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[3U];
                    __Vtemp_43[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[4U];
                    __Vtemp_43[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[5U];
                    __Vtemp_43[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[6U];
                    __Vtemp_43[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[7U];
                    __Vtemp_43[8U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1[8U];
                }
                __Vtemp_42[0U] = (__Vtemp_43[0U] << 0x00000011U);
                __Vtemp_42[1U] = ((__Vtemp_43[0U] >> 0x0000000fU) 
                                  | (__Vtemp_43[1U] 
                                     << 0x00000011U));
                __Vtemp_42[2U] = ((__Vtemp_43[1U] >> 0x0000000fU) 
                                  | (__Vtemp_43[2U] 
                                     << 0x00000011U));
                __Vtemp_42[3U] = ((__Vtemp_43[2U] >> 0x0000000fU) 
                                  | (__Vtemp_43[3U] 
                                     << 0x00000011U));
                __Vtemp_42[4U] = ((__Vtemp_43[3U] >> 0x0000000fU) 
                                  | (__Vtemp_43[4U] 
                                     << 0x00000011U));
                __Vtemp_42[5U] = ((__Vtemp_43[4U] >> 0x0000000fU) 
                                  | (__Vtemp_43[5U] 
                                     << 0x00000011U));
                __Vtemp_42[6U] = ((__Vtemp_43[5U] >> 0x0000000fU) 
                                  | (__Vtemp_43[6U] 
                                     << 0x00000011U));
                __Vtemp_42[7U] = ((__Vtemp_43[6U] >> 0x0000000fU) 
                                  | (__Vtemp_43[7U] 
                                     << 0x00000011U));
                __Vtemp_42[8U] = ((__Vtemp_43[7U] >> 0x0000000fU) 
                                  | (__Vtemp_43[8U] 
                                     << 0x00000011U));
            } else {
                if ((0x01000000U & vlSelfRef.inst)) {
                    if ((0x00800000U & vlSelfRef.inst)) {
                        __Vtemp_63[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] 
                                           << 0x00000015U) 
                                          | ((0x00400000U 
                                              & vlSelfRef.inst)
                                              ? 0x000c0000U
                                              : 0x000a0000U));
                        __Vtemp_63[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] 
                                             << 0x00000015U));
                        __Vtemp_63[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                             << 0x00000015U));
                        __Vtemp_63[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                             << 0x00000015U));
                        __Vtemp_63[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                             << 0x00000015U));
                        __Vtemp_63[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                           >> 0x0000000bU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                             << 0x00000015U));
                        __Vtemp_63[6U] = (0x00400000U 
                                          | ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                              >> 0x0000000bU) 
                                             | (0x00200000U 
                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[6U] 
                                                   << 0x00000015U))));
                    } else {
                        if ((0x00400000U & vlSelfRef.inst)) {
                            __Vtemp_68[0U] = (1U | 
                                              (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] 
                                               << 2U));
                            __Vtemp_68[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[0U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] 
                                                 << 2U));
                            __Vtemp_68[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[1U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                                 << 2U));
                            __Vtemp_68[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[2U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                                 << 2U));
                            __Vtemp_68[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[3U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                                 << 2U));
                            __Vtemp_68[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[4U] 
                                               >> 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                                 << 2U));
                            __Vtemp_68[6U] = (8U | 
                                              ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[5U] 
                                                >> 0x0000001eU) 
                                               | (4U 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24[6U] 
                                                     << 2U))));
                        } else {
                            __Vtemp_68[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[0U];
                            __Vtemp_68[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[1U];
                            __Vtemp_68[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[2U];
                            __Vtemp_68[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[3U];
                            __Vtemp_68[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[4U];
                            __Vtemp_68[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[5U];
                            __Vtemp_68[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[6U];
                        }
                        __Vtemp_63[0U] = (__Vtemp_68[0U] 
                                          << 0x00000013U);
                        __Vtemp_63[1U] = ((__Vtemp_68[0U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_68[1U] 
                                             << 0x00000013U));
                        __Vtemp_63[2U] = ((__Vtemp_68[1U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_68[2U] 
                                             << 0x00000013U));
                        __Vtemp_63[3U] = ((__Vtemp_68[2U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_68[3U] 
                                             << 0x00000013U));
                        __Vtemp_63[4U] = ((__Vtemp_68[3U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_68[4U] 
                                             << 0x00000013U));
                        __Vtemp_63[5U] = ((__Vtemp_68[4U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_68[5U] 
                                             << 0x00000013U));
                        __Vtemp_63[6U] = ((__Vtemp_68[5U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_68[6U] 
                                             << 0x00000013U));
                    }
                } else {
                    if ((0x00800000U & vlSelfRef.inst)) {
                        if ((0x00400000U & vlSelfRef.inst)) {
                            __Vtemp_75[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[1U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[0U] 
                                                 >> 2U));
                            __Vtemp_75[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[2U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[1U] 
                                                 >> 2U));
                            __Vtemp_75[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[3U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[2U] 
                                                 >> 2U));
                            __Vtemp_75[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[4U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[3U] 
                                                 >> 2U));
                            __Vtemp_75[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[5U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[4U] 
                                                 >> 2U));
                            __Vtemp_75[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[6U] 
                                               << 0x0000001eU) 
                                              | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_23[5U] 
                                                 >> 2U));
                        } else {
                            __Vtemp_75[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U];
                            __Vtemp_75[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U];
                            __Vtemp_75[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U];
                            __Vtemp_75[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U];
                            __Vtemp_75[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U];
                            __Vtemp_75[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[5U];
                        }
                        __Vtemp_73[0U] = (__Vtemp_75[0U] 
                                          << 4U);
                        __Vtemp_73[1U] = ((__Vtemp_75[0U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_75[1U] 
                                             << 4U));
                        __Vtemp_73[2U] = ((__Vtemp_75[1U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_75[2U] 
                                             << 4U));
                        __Vtemp_73[3U] = ((__Vtemp_75[2U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_75[3U] 
                                             << 4U));
                        __Vtemp_73[4U] = ((__Vtemp_75[3U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_75[4U] 
                                             << 4U));
                        __Vtemp_73[5U] = ((__Vtemp_75[4U] 
                                           >> 0x0000001cU) 
                                          | (0x7ffffff0U 
                                             & (__Vtemp_75[5U] 
                                                << 4U)));
                    } else {
                        __Vtemp_73[0U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U] 
                                           << 4U) | 
                                          ((0x00400000U 
                                            & vlSelfRef.inst)
                                            ? 3U : 2U));
                        __Vtemp_73[1U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[0U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U] 
                                             << 4U));
                        __Vtemp_73[2U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[1U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U] 
                                             << 4U));
                        __Vtemp_73[3U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[2U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U] 
                                             << 4U));
                        __Vtemp_73[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[3U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U] 
                                             << 4U));
                        __Vtemp_73[5U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[4U] 
                                           >> 0x0000001cU) 
                                          | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_14[5U] 
                                             << 4U));
                    }
                    __Vtemp_63[0U] = (__Vtemp_73[0U] 
                                      << 0x00000011U);
                    __Vtemp_63[1U] = ((__Vtemp_73[0U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_73[1U] 
                                         << 0x00000011U));
                    __Vtemp_63[2U] = ((__Vtemp_73[1U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_73[2U] 
                                         << 0x00000011U));
                    __Vtemp_63[3U] = ((__Vtemp_73[2U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_73[3U] 
                                         << 0x00000011U));
                    __Vtemp_63[4U] = ((__Vtemp_73[3U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_73[4U] 
                                         << 0x00000011U));
                    __Vtemp_63[5U] = ((__Vtemp_73[4U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_73[5U] 
                                         << 0x00000011U));
                    __Vtemp_63[6U] = (__Vtemp_73[5U] 
                                      >> 0x0000000fU);
                }
                __Vtemp_42[0U] = __Vtemp_63[0U];
                __Vtemp_42[1U] = __Vtemp_63[1U];
                __Vtemp_42[2U] = __Vtemp_63[2U];
                __Vtemp_42[3U] = __Vtemp_63[3U];
                __Vtemp_42[4U] = __Vtemp_63[4U];
                __Vtemp_42[5U] = __Vtemp_63[5U];
                __Vtemp_42[6U] = __Vtemp_63[6U];
                __Vtemp_42[7U] = 0U;
                __Vtemp_42[8U] = 0x04004000U;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type))) {
                if ((vlSelfRef.inst >> 0x0000001fU)) {
                    __Vtemp_79[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U];
                    __Vtemp_79[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U];
                    __Vtemp_79[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U];
                    __Vtemp_79[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U];
                    __Vtemp_79[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U];
                    __Vtemp_79[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U];
                    __Vtemp_79[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U];
                    __Vtemp_79[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[7U];
                } else if ((0x40000000U & vlSelfRef.inst)) {
                    if ((0x20000000U & vlSelfRef.inst)) {
                        if ((0x10000000U & vlSelfRef.inst)) {
                            __Vtemp_79[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U];
                            __Vtemp_79[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U];
                            __Vtemp_79[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U];
                            __Vtemp_79[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U];
                            __Vtemp_79[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U];
                            __Vtemp_79[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U];
                            __Vtemp_79[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U];
                            __Vtemp_79[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[7U];
                        } else {
                            __Vtemp_79[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U];
                            __Vtemp_79[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[1U];
                            __Vtemp_79[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[2U];
                            __Vtemp_79[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[3U];
                            __Vtemp_79[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[4U];
                            __Vtemp_79[5U] = (0x80000000U 
                                              | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[5U]);
                            __Vtemp_79[6U] = (0x02010000U 
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
                            __Vtemp_79[7U] = (((0x08000000U 
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
                            __Vtemp_79[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U];
                            __Vtemp_79[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[1U];
                            __Vtemp_79[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[2U];
                            __Vtemp_79[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[3U];
                            __Vtemp_79[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[4U];
                            __Vtemp_79[5U] = (0x80000000U 
                                              | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[5U]);
                            __Vtemp_79[6U] = (0x02010000U 
                                              | (((0x04000000U 
                                                   & vlSelfRef.inst)
                                                   ? 4U
                                                   : 8U) 
                                                 << 0x0000001bU));
                            __Vtemp_79[7U] = (((0x04000000U 
                                                & vlSelfRef.inst)
                                                ? 4U
                                                : 8U) 
                                              >> 5U);
                        } else {
                            if ((0x04000000U & vlSelfRef.inst)) {
                                __Vtemp_83[0U] = (0x00080000U 
                                                  | (0x00001ffeU 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] 
                                                        >> 4U)));
                                __Vtemp_83[1U] = 0U;
                                __Vtemp_83[2U] = 0U;
                                __Vtemp_83[3U] = 0U;
                                __Vtemp_83[4U] = 0x02600000U;
                            } else {
                                __Vtemp_83[0U] = (0x00001fffU 
                                                  & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] 
                                                     >> 4U));
                                __Vtemp_83[1U] = 0U;
                                __Vtemp_83[2U] = 0U;
                                __Vtemp_83[3U] = 0U;
                                __Vtemp_83[4U] = 0U;
                            }
                            __Vtemp_79[0U] = (5U | 
                                              (__Vtemp_83[0U] 
                                               << 4U));
                            __Vtemp_79[1U] = ((__Vtemp_83[0U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_83[1U] 
                                                 << 4U));
                            __Vtemp_79[2U] = ((__Vtemp_83[1U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_83[2U] 
                                                 << 4U));
                            __Vtemp_79[3U] = ((__Vtemp_83[2U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_83[3U] 
                                                 << 4U));
                            __Vtemp_79[4U] = ((((0x03ff0000U 
                                                 & (vlSelfRef.inst 
                                                    << 0x00000010U)) 
                                                | (0x0000ffffU 
                                                   & (vlSelfRef.inst 
                                                      >> 0x0000000aU))) 
                                               << 0x0000001eU) 
                                              | ((__Vtemp_83[3U] 
                                                  >> 0x0000001cU) 
                                                 | (__Vtemp_83[4U] 
                                                    << 4U)));
                            __Vtemp_79[5U] = (((0x03ff0000U 
                                                & (vlSelfRef.inst 
                                                   << 0x00000010U)) 
                                               | (0x0000ffffU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000aU))) 
                                              >> 2U);
                            __Vtemp_79[6U] = 0xe2008001U;
                            __Vtemp_79[7U] = 0U;
                        }
                    } else {
                        if ((0x08000000U & vlSelfRef.inst)) {
                            if ((0x04000000U & vlSelfRef.inst)) {
                                __Vtemp_86[0U] = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                   << 0x0000000fU) 
                                                  | (0x00007ff8U 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] 
                                                        >> 2U)));
                                __Vtemp_86[1U] = 0U;
                                __Vtemp_86[2U] = 0U;
                                __Vtemp_86[3U] = 0U;
                                __Vtemp_86[4U] = (0x09800000U 
                                                  | (0xf0000000U 
                                                     & (vlSelfRef.inst 
                                                        << 0x00000012U)));
                                __Vtemp_86[5U] = (0x20000000U 
                                                  | (0x00000fffU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x0000000eU)));
                                __Vtemp_86[6U] = 0x41001000U;
                            } else {
                                __Vtemp_86[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[0U];
                                __Vtemp_86[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[1U];
                                __Vtemp_86[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[2U];
                                __Vtemp_86[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[3U];
                                __Vtemp_86[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[4U];
                                __Vtemp_86[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[5U];
                                __Vtemp_86[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[6U];
                            }
                        } else {
                            __Vtemp_86[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[0U];
                            __Vtemp_86[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[1U];
                            __Vtemp_86[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[2U];
                            __Vtemp_86[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[3U];
                            __Vtemp_86[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[4U];
                            __Vtemp_86[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[5U];
                            __Vtemp_86[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[6U];
                        }
                        __Vtemp_79[0U] = (1U | (__Vtemp_86[0U] 
                                                << 2U));
                        __Vtemp_79[1U] = ((__Vtemp_86[0U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_86[1U] 
                                             << 2U));
                        __Vtemp_79[2U] = ((__Vtemp_86[1U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_86[2U] 
                                             << 2U));
                        __Vtemp_79[3U] = ((__Vtemp_86[2U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_86[3U] 
                                             << 2U));
                        __Vtemp_79[4U] = ((__Vtemp_86[3U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_86[4U] 
                                             << 2U));
                        __Vtemp_79[5U] = ((__Vtemp_86[4U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_86[5U] 
                                             << 2U));
                        __Vtemp_79[6U] = ((__Vtemp_86[5U] 
                                           >> 0x0000001eU) 
                                          | (__Vtemp_86[6U] 
                                             << 2U));
                        __Vtemp_79[7U] = (__Vtemp_86[6U] 
                                          >> 0x0000001eU);
                    }
                } else {
                    __Vtemp_79[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U];
                    __Vtemp_79[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U];
                    __Vtemp_79[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U];
                    __Vtemp_79[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U];
                    __Vtemp_79[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U];
                    __Vtemp_79[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U];
                    __Vtemp_79[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U];
                    __Vtemp_79[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[7U];
                }
                __Vtemp_78[0U] = __Vtemp_79[0U];
                __Vtemp_78[1U] = __Vtemp_79[1U];
                __Vtemp_78[2U] = __Vtemp_79[2U];
                __Vtemp_78[3U] = __Vtemp_79[3U];
                __Vtemp_78[4U] = __Vtemp_79[4U];
                __Vtemp_78[5U] = __Vtemp_79[5U];
                __Vtemp_78[6U] = __Vtemp_79[6U];
                __Vtemp_78[7U] = (0x00400002U | __Vtemp_79[7U]);
                __Vtemp_78[8U] = 4U;
            } else {
                if ((0x10U == (vlSelfRef.inst >> 0x00000019U))) {
                    if ((0x01000000U & vlSelfRef.inst)) {
                        __Vtemp_90[0U] = (IData)((0x0000620000000000ULL 
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
                        __Vtemp_90[1U] = ((0xfff80000U 
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
                        __Vtemp_90[2U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[2U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[2U]));
                        __Vtemp_90[3U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[3U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[3U]));
                        __Vtemp_90[4U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[4U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[4U]));
                        __Vtemp_90[5U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U]));
                        __Vtemp_90[6U] = ((0x0007ffffU 
                                           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[6U]) 
                                          | (0xfff80000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[6U]));
                        __Vtemp_90[7U] = (0x01000000U 
                                          | ((0x0007ffffU 
                                              & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[7U]) 
                                             | (0x00f80000U 
                                                & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[7U])));
                    } else {
                        __Vtemp_90[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[0U];
                        __Vtemp_90[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U];
                        __Vtemp_90[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[2U];
                        __Vtemp_90[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[3U];
                        __Vtemp_90[4U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[4U];
                        __Vtemp_90[5U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U];
                        __Vtemp_90[6U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[6U];
                        __Vtemp_90[7U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[7U];
                    }
                } else {
                    __Vtemp_90[0U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[0U];
                    __Vtemp_90[1U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[1U];
                    __Vtemp_90[2U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[2U];
                    __Vtemp_90[3U] = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[3U];
                    __Vtemp_90[4U] = ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
                                       << 0x0000001eU) 
                                      | (0x3fffffffU 
                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[4U]));
                    __Vtemp_90[5U] = ((0x3f000000U 
                                       & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[5U]) 
                                      | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 
                                         >> 2U));
                    __Vtemp_90[6U] = ((IData)((0x00ffffffffffffffULL 
                                               & (((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[7U])) 
                                                   << 0x0000001fU) 
                                                  | ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[6U])) 
                                                     >> 1U)))) 
                                      << 1U);
                    __Vtemp_90[7U] = (((IData)((0x00ffffffffffffffULL 
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
                __Vtemp_78[0U] = __Vtemp_90[0U];
                __Vtemp_78[1U] = __Vtemp_90[1U];
                __Vtemp_78[2U] = __Vtemp_90[2U];
                __Vtemp_78[3U] = __Vtemp_90[3U];
                __Vtemp_78[4U] = __Vtemp_90[4U];
                __Vtemp_78[5U] = __Vtemp_90[5U];
                __Vtemp_78[6U] = __Vtemp_90[6U];
                __Vtemp_78[7U] = __Vtemp_90[7U];
                __Vtemp_78[8U] = 1U;
            }
            __Vtemp_42[0U] = (__Vtemp_78[0U] << 0x00000018U);
            __Vtemp_42[1U] = ((__Vtemp_78[0U] >> 8U) 
                              | (__Vtemp_78[1U] << 0x00000018U));
            __Vtemp_42[2U] = ((__Vtemp_78[1U] >> 8U) 
                              | (__Vtemp_78[2U] << 0x00000018U));
            __Vtemp_42[3U] = ((__Vtemp_78[2U] >> 8U) 
                              | (__Vtemp_78[3U] << 0x00000018U));
            __Vtemp_42[4U] = ((__Vtemp_78[3U] >> 8U) 
                              | (__Vtemp_78[4U] << 0x00000018U));
            __Vtemp_42[5U] = ((__Vtemp_78[4U] >> 8U) 
                              | (__Vtemp_78[5U] << 0x00000018U));
            __Vtemp_42[6U] = ((__Vtemp_78[5U] >> 8U) 
                              | (__Vtemp_78[6U] << 0x00000018U));
            __Vtemp_42[7U] = ((__Vtemp_78[6U] >> 8U) 
                              | (__Vtemp_78[7U] << 0x00000018U));
            __Vtemp_42[8U] = ((__Vtemp_78[7U] >> 8U) 
                              | (__Vtemp_78[8U] << 0x00000018U));
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[0U] 
            = __Vtemp_42[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[1U] 
            = __Vtemp_42[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[2U] 
            = __Vtemp_42[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[3U] 
            = __Vtemp_42[3U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[4U] 
            = __Vtemp_42[4U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[5U] 
            = __Vtemp_42[5U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[6U] 
            = __Vtemp_42[6U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[7U] 
            = __Vtemp_42[7U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[8U] 
            = __Vtemp_42[8U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2[9U] = 0U;
    }
}
