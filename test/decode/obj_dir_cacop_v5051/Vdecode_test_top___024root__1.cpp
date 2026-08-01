// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecode_test_top.h for the primary calling header

#include "Vdecode_test_top__pch.h"

extern const VlWide<32>/*1023:0*/ Vdecode_test_top__ConstPool__CONST_h58f23bb5_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vdecode_test_top__ConstPool__TABLE_ha5affc86_0;

void Vdecode_test_top___024root___ico_sequent__TOP__0(Vdecode_test_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecode_test_top___024root___ico_sequent__TOP__0\n"); );
    Vdecode_test_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = VL_MATCHMASKED_I(32, vlSelfRef.inst, Vdecode_test_top__ConstPool__CONST_h58f23bb5_0);
    vlSelfRef.decode_test_top__DOT__dut__DOT__instr_type 
        = Vdecode_test_top__ConstPool__TABLE_ha5affc86_0
        [__Vtemp_1];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] = 
        (0x0015U | ((0xfffe0000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U]) 
                    | (0x0000f800U & (vlSelfRef.inst 
                                      << 0x0000000bU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] = 
        (0x0001ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U] = 0x00680000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U] = 0x00080000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U] = 0x80000000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U] = 1U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[7U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = ((0x03fff000U 
                                                  & ((- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.inst 
                                                                    >> 0x00000015U)))) 
                                                     << 0x0000000cU)) 
                                                 | (0x00000fffU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x0000000aU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((0x000007c0U 
                                                 & (vlSelfRef.inst 
                                                    << 6U)) 
                                                | (0x0000001fU 
                                                   & (vlSelfRef.inst 
                                                      >> 5U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[0U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U] 
          << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U] 
                             >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[1U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U] 
          << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[1U] 
                             >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[2U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U] 
          << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[2U] 
                             >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[3U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U] 
          << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[3U] 
                             >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[4U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U] 
          << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[4U] 
                             >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[5U] = 
        ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U] 
          << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[5U] 
                             >> 2U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28[6U] = 
        (0x7fffffffU & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[7U] 
                         << 0x0000001eU) | (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[6U] 
                                            >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U] = 
        ((0xff800000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U]) 
         | ((0x003e0000U & (vlSelfRef.inst << 0x0000000cU)) 
            | (0x0001fff8U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3[0U])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U] = 
        (0x007fffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[0U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[1U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[4U] = 
        (0xc0000000U & (vlSelfRef.inst << 0x00000014U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_27[5U] = 
        (0x00003fffU & (vlSelfRef.inst >> 0x0000000cU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[0U] = (IData)(
                                                           (0x0000254000000000ULL 
                                                            | (QData)((IData)(
                                                                              (1U 
                                                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                                                << 0x00000011U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U] = 
        ((0xfff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U]) 
         | (IData)(((0x0000254000000000ULL | (QData)((IData)(
                                                             (1U 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                                 << 0x00000011U))))) 
                    >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U] = 
        (0x0007ffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[1U]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[2U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[3U] = 0U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[4U] = 
        (0x02000000U | (0xc0000000U & (vlSelfRef.inst 
                                       << 0x00000014U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U] = 
        ((0xff000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U]) 
         | (((0x0007f000U & ((- (IData)((1U & (vlSelfRef.inst 
                                               >> 0x00000017U)))) 
                             << 0x0000000cU)) | (0x00000fffU 
                                                 & (vlSelfRef.inst 
                                                    >> 0x0000000cU))) 
            | (0x00f80000U & ((- (IData)((1U & (vlSelfRef.inst 
                                                >> 0x00000017U)))) 
                              << 0x0000000cU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U] = 
        (0x80000000U | (0x00ffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[5U]));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[6U] = 0x00200000U;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8[7U] = 0x00800000U;
    if ((0x01000000U & vlSelfRef.inst)) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[0U] 
            = (IData)((((QData)((IData)((0x00048000U 
                                         | (0x00600000U 
                                            & ((0x24U 
                                                >> 
                                                (6U 
                                                 & (vlSelfRef.inst 
                                                    >> 0x00000015U))) 
                                               << 0x00000015U))))) 
                        << 0x00000017U) | (QData)((IData)(
                                                          (0x0010U 
                                                           | ((0x003e0000U 
                                                               & (vlSelfRef.inst 
                                                                  << 0x0000000cU)) 
                                                              | (0x0000f800U 
                                                                 & (vlSelfRef.inst 
                                                                    << 0x0000000bU))))))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[1U] 
            = (0x00004000U | (IData)(((((QData)((IData)(
                                                        (0x00048000U 
                                                         | (0x00600000U 
                                                            & ((0x24U 
                                                                >> 
                                                                (6U 
                                                                 & (vlSelfRef.inst 
                                                                    >> 0x00000015U))) 
                                                               << 0x00000015U))))) 
                                        << 0x00000017U) 
                                       | (QData)((IData)(
                                                         (0x0010U 
                                                          | ((0x003e0000U 
                                                              & (vlSelfRef.inst 
                                                                 << 0x0000000cU)) 
                                                             | (0x0000f800U 
                                                                & (vlSelfRef.inst 
                                                                   << 0x0000000bU))))))) 
                                      >> 0x00000020U)));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[2U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[4U] = 0x02000000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[5U] = 0x80000000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[6U] = 1U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[7U] = 0x01800000U;
    } else {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[0U] 
            = (IData)((((QData)((IData)((0x2200U | 
                                         ((0x00018000U 
                                           & ((0x24U 
                                               >> (6U 
                                                   & (vlSelfRef.inst 
                                                      >> 0x00000015U))) 
                                              << 0x0000000fU)) 
                                          | (0x00004000U 
                                             & ((~ 
                                                 (vlSelfRef.inst 
                                                  >> 0x00000019U)) 
                                                << 0x0000000eU)))))) 
                        << 0x0000001dU) | (QData)((IData)(
                                                          (1U 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                              << 0x00000011U))))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[1U] 
            = (IData)(((((QData)((IData)((0x2200U | 
                                          ((0x00018000U 
                                            & ((0x24U 
                                                >> 
                                                (6U 
                                                 & (vlSelfRef.inst 
                                                    >> 0x00000015U))) 
                                               << 0x0000000fU)) 
                                           | (0x00004000U 
                                              & ((~ 
                                                  (vlSelfRef.inst 
                                                   >> 0x00000019U)) 
                                                 << 0x0000000eU)))))) 
                         << 0x0000001dU) | (QData)((IData)(
                                                           (1U 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4) 
                                                               << 0x00000011U))))) 
                       >> 0x00000020U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[2U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[3U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[4U] = 0x02000000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[5U] = 0x80000000U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[6U] = 1U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16[7U] = 0x00800000U;
    }
}
