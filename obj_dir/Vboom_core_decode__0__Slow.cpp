// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

extern const VlWide<30>/*959:0*/ Vboom_core__ConstPool__CONST_hf4acfd33_0;
extern const VlUnpacked<CData/*3:0*/, 15> Vboom_core__ConstPool__TABLE_hce4956f2_0;
extern const VlWide<8>/*255:0*/ Vboom_core__ConstPool__CONST_h00a12171_0;
extern const VlWide<8>/*255:0*/ Vboom_core__ConstPool__CONST_h66b95865_0;

VL_ATTR_COLD void Vboom_core_decode___stl_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0(Vboom_core_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vboom_core_decode___stl_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__0\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtemp_1;
    VlWide<8>/*255:0*/ __Vtemp_2;
    VlWide<10>/*319:0*/ __Vtemp_10;
    VlWide<10>/*319:0*/ __Vtemp_11;
    VlWide<8>/*255:0*/ __Vtemp_12;
    VlWide<7>/*223:0*/ __Vtemp_22;
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<9>/*287:0*/ __Vtemp_28;
    VlWide<9>/*287:0*/ __Vtemp_29;
    VlWide<8>/*255:0*/ __Vtemp_30;
    VlWide<9>/*287:0*/ __Vtemp_33;
    VlWide<8>/*255:0*/ __Vtemp_34;
    VlWide<9>/*287:0*/ __Vtemp_45;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_54;
    VlWide<9>/*287:0*/ __Vtemp_57;
    VlWide<7>/*223:0*/ __Vtemp_58;
    VlWide<8>/*255:0*/ __Vtemp_68;
    // Body
    __Vtemp_1 = VL_MATCHMASKED_I(32, vlSymsp->TOP.fe_insts[0U], Vboom_core__ConstPool__CONST_hf4acfd33_0);
    vlSelfRef.__PVT__instr_type = Vboom_core__ConstPool__TABLE_hce4956f2_0
        [__Vtemp_1];
    if ((8U & (IData)(vlSelfRef.__PVT__instr_type))) {
        if ((4U & (IData)(vlSelfRef.__PVT__instr_type))) {
            __Vtemp_2[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[0U];
            __Vtemp_2[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[1U];
            __Vtemp_2[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[2U];
            __Vtemp_2[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[3U];
            __Vtemp_2[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[4U];
            __Vtemp_2[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[5U];
            __Vtemp_2[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[6U];
            __Vtemp_2[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[7U];
        } else if ((2U & (IData)(vlSelfRef.__PVT__instr_type))) {
            __Vtemp_2[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[0U];
            __Vtemp_2[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[1U];
            __Vtemp_2[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[2U];
            __Vtemp_2[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[3U];
            __Vtemp_2[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[4U];
            __Vtemp_2[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[5U];
            __Vtemp_2[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[6U];
            __Vtemp_2[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_180[7U];
        } else if ((1U & (IData)(vlSelfRef.__PVT__instr_type))) {
            __Vtemp_2[0U] = (IData)((0x000000c000000000ULL 
                                     | (QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_61))));
            __Vtemp_2[1U] = ((((0x00010000U & vlSymsp->TOP.fe_insts[0U])
                                ? 9U : 0x0000000bU) 
                              << 0x00000012U) | (IData)(
                                                        ((0x000000c000000000ULL 
                                                          | (QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_61))) 
                                                         >> 0x00000020U)));
            __Vtemp_2[2U] = (0x00040000U | (((0x00010000U 
                                              & vlSymsp->TOP.fe_insts[0U])
                                              ? 9U : 0x0000000bU) 
                                            >> 0x0000000eU));
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = 0U;
            __Vtemp_2[5U] = 0xc0000000U;
            __Vtemp_2[6U] = 0x00020000U;
            __Vtemp_2[7U] = 0U;
        } else {
            __Vtemp_2[0U] = ((0x3e000000U & (((0U == 
                                               (0x0000001fU 
                                                & (vlSymsp->TOP.fe_insts[0U] 
                                                   >> 5U)))
                                               ? vlSymsp->TOP.fe_insts[0U]
                                               : ((vlSymsp->TOP.fe_insts[0U] 
                                                   << 0x0000001bU) 
                                                  | (vlSymsp->TOP.fe_insts[0U] 
                                                     >> 5U))) 
                                             << 0x00000019U)) 
                             | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_83 
                                << 7U));
            __Vtemp_2[1U] = 0x00000080U;
            __Vtemp_2[2U] = 0U;
            __Vtemp_2[3U] = 0U;
            __Vtemp_2[4U] = (0x0a000000U | (0x20000000U 
                                            & (vlSymsp->TOP.fe_insts[0U] 
                                               << 0x00000013U)));
            __Vtemp_2[5U] = 0xe0000000U;
            __Vtemp_2[6U] = 0U;
            __Vtemp_2[7U] = 0x80000000U;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
            = (__Vtemp_2[0U] << 0x00000016U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
            = ((__Vtemp_2[0U] >> 0x0000000aU) | (__Vtemp_2[1U] 
                                                 << 0x00000016U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] 
            = ((__Vtemp_2[1U] >> 0x0000000aU) | (__Vtemp_2[2U] 
                                                 << 0x00000016U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] 
            = ((__Vtemp_2[2U] >> 0x0000000aU) | (__Vtemp_2[3U] 
                                                 << 0x00000016U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] 
            = ((__Vtemp_2[3U] >> 0x0000000aU) | (__Vtemp_2[4U] 
                                                 << 0x00000016U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[5U] 
            = ((__Vtemp_2[4U] >> 0x0000000aU) | (__Vtemp_2[5U] 
                                                 << 0x00000016U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[6U] 
            = ((__Vtemp_2[5U] >> 0x0000000aU) | (__Vtemp_2[6U] 
                                                 << 0x00000016U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[7U] 
            = ((__Vtemp_2[6U] >> 0x0000000aU) | (__Vtemp_2[7U] 
                                                 << 0x00000016U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[8U] 
            = (__Vtemp_2[7U] >> 0x0000000aU);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[9U] = 0U;
    } else if ((4U & (IData)(vlSelfRef.__PVT__instr_type))) {
        if ((2U & (IData)(vlSelfRef.__PVT__instr_type))) {
            if ((1U & (IData)(vlSelfRef.__PVT__instr_type))) {
                if ((0x06483800U == vlSymsp->TOP.fe_insts[0U])) {
                    VL_ASSIGN_W(253, __Vtemp_12, Vboom_core__ConstPool__CONST_h00a12171_0);
                } else if ((0x0018U == (vlSymsp->TOP.fe_insts[0U] 
                                        >> 0x00000016U))) {
                    __Vtemp_12[0U] = 3U;
                    __Vtemp_12[1U] = 0U;
                    __Vtemp_12[2U] = 0U;
                    __Vtemp_12[3U] = (0x00040000U | 
                                      (0xff800000U 
                                       & (vlSymsp->TOP.fe_insts[0U] 
                                          << 0x0000000dU)));
                    __Vtemp_12[4U] = (7U & (vlSymsp->TOP.fe_insts[0U] 
                                            >> 0x00000013U));
                    __Vtemp_12[5U] = 0U;
                    __Vtemp_12[6U] = 0x02008000U;
                    __Vtemp_12[7U] = 0U;
                } else {
                    VL_ASSIGN_W(253, __Vtemp_12, Vboom_core__ConstPool__CONST_h66b95865_0);
                }
                __Vtemp_11[0U] = (IData)((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_61)));
                __Vtemp_11[1U] = ((__Vtemp_12[0U] << 6U) 
                                  | (IData)(((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_61)) 
                                             >> 0x00000020U)));
                __Vtemp_11[2U] = ((__Vtemp_12[0U] >> 0x0000001aU) 
                                  | (__Vtemp_12[1U] 
                                     << 6U));
                __Vtemp_11[3U] = ((__Vtemp_12[1U] >> 0x0000001aU) 
                                  | (__Vtemp_12[2U] 
                                     << 6U));
                __Vtemp_11[4U] = ((__Vtemp_12[2U] >> 0x0000001aU) 
                                  | (__Vtemp_12[3U] 
                                     << 6U));
                __Vtemp_11[5U] = ((__Vtemp_12[3U] >> 0x0000001aU) 
                                  | (__Vtemp_12[4U] 
                                     << 6U));
                __Vtemp_11[6U] = ((__Vtemp_12[4U] >> 0x0000001aU) 
                                  | (__Vtemp_12[5U] 
                                     << 6U));
                __Vtemp_11[7U] = ((__Vtemp_12[5U] >> 0x0000001aU) 
                                  | (__Vtemp_12[6U] 
                                     << 6U));
                __Vtemp_11[8U] = ((__Vtemp_12[6U] >> 0x0000001aU) 
                                  | (__Vtemp_12[7U] 
                                     << 6U));
                __Vtemp_11[9U] = (__Vtemp_12[7U] >> 0x0000001aU);
            } else {
                __Vtemp_11[0U] = (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_29) 
                                   << 0x00000013U) 
                                  | (0x0003e000U & 
                                     (vlSymsp->TOP.fe_insts[0U] 
                                      << 3U)));
                __Vtemp_11[1U] = (0x000000c0U | (((1U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSymsp->TOP.fe_insts[0U] 
                                                       >> 5U)))
                                                   ? 1U
                                                   : 2U) 
                                                 & (- (IData)(
                                                              (0U 
                                                               != 
                                                               (0x0000001fU 
                                                                & (vlSymsp->TOP.fe_insts[0U] 
                                                                   >> 5U)))))));
                __Vtemp_11[2U] = 0U;
                __Vtemp_11[3U] = 0U;
                __Vtemp_11[4U] = (0xe0000000U & (vlSymsp->TOP.fe_insts[0U] 
                                                 << 0x00000013U));
                __Vtemp_11[5U] = (0xe0000000U | (0x000007ffU 
                                                 & (vlSymsp->TOP.fe_insts[0U] 
                                                    >> 0x0000000dU)));
                __Vtemp_11[6U] = 0U;
                __Vtemp_11[7U] = 0x82000000U;
                __Vtemp_11[8U] = 0U;
                __Vtemp_11[9U] = 0U;
            }
            __Vtemp_10[0U] = (__Vtemp_11[0U] << 5U);
            __Vtemp_10[1U] = ((__Vtemp_11[0U] >> 0x0000001bU) 
                              | (__Vtemp_11[1U] << 5U));
            __Vtemp_10[2U] = ((__Vtemp_11[1U] >> 0x0000001bU) 
                              | (__Vtemp_11[2U] << 5U));
            __Vtemp_10[3U] = ((__Vtemp_11[2U] >> 0x0000001bU) 
                              | (__Vtemp_11[3U] << 5U));
            __Vtemp_10[4U] = ((__Vtemp_11[3U] >> 0x0000001bU) 
                              | (__Vtemp_11[4U] << 5U));
            __Vtemp_10[5U] = ((__Vtemp_11[4U] >> 0x0000001bU) 
                              | (__Vtemp_11[5U] << 5U));
            __Vtemp_10[6U] = ((__Vtemp_11[5U] >> 0x0000001bU) 
                              | (__Vtemp_11[6U] << 5U));
            __Vtemp_10[7U] = ((__Vtemp_11[6U] >> 0x0000001bU) 
                              | (__Vtemp_11[7U] << 5U));
            __Vtemp_10[8U] = ((__Vtemp_11[7U] >> 0x0000001bU) 
                              | (__Vtemp_11[8U] << 5U));
            __Vtemp_10[9U] = ((__Vtemp_11[8U] >> 0x0000001bU) 
                              | (__Vtemp_11[9U] << 5U));
        } else {
            if ((1U & (IData)(vlSelfRef.__PVT__instr_type))) {
                if ((0x08000000U & vlSymsp->TOP.fe_insts[0U])) {
                    __Vtemp_23[0U] = 0U;
                    __Vtemp_23[1U] = 0U;
                    __Vtemp_23[2U] = 0U;
                    __Vtemp_23[3U] = 0x22000000U;
                } else {
                    __Vtemp_23[0U] = 0U;
                    __Vtemp_23[1U] = 0U;
                    __Vtemp_23[2U] = 0U;
                    __Vtemp_23[3U] = 0x12000000U;
                }
                __Vtemp_22[0U] = (IData)((((QData)((IData)(
                                                           (0x0000001fU 
                                                            & vlSymsp->TOP.fe_insts[0U]))) 
                                           << 0x0000001eU) 
                                          | (QData)((IData)(
                                                            (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_83 
                                                             << 0x0000000cU)))));
                __Vtemp_22[1U] = ((__Vtemp_23[0U] << 4U) 
                                  | (IData)(((((QData)((IData)(
                                                               (0x0000001fU 
                                                                & vlSymsp->TOP.fe_insts[0U]))) 
                                               << 0x0000001eU) 
                                              | (QData)((IData)(
                                                                (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_83 
                                                                 << 0x0000000cU)))) 
                                             >> 0x00000020U)));
                __Vtemp_22[2U] = ((__Vtemp_23[0U] >> 0x0000001cU) 
                                  | (__Vtemp_23[1U] 
                                     << 4U));
                __Vtemp_22[3U] = ((__Vtemp_23[1U] >> 0x0000001cU) 
                                  | (__Vtemp_23[2U] 
                                     << 4U));
                __Vtemp_22[4U] = ((__Vtemp_23[2U] >> 0x0000001cU) 
                                  | (__Vtemp_23[3U] 
                                     << 4U));
                __Vtemp_22[5U] = (((IData)((0x0000000300000000ULL 
                                            | (QData)((IData)(
                                                              (0x000fffffU 
                                                               & (vlSymsp->TOP.fe_insts[0U] 
                                                                  >> 5U)))))) 
                                   << 2U) | (__Vtemp_23[3U] 
                                             >> 0x0000001cU));
                __Vtemp_22[6U] = (((IData)((0x0000000300000000ULL 
                                            | (QData)((IData)(
                                                              (0x000fffffU 
                                                               & (vlSymsp->TOP.fe_insts[0U] 
                                                                  >> 5U)))))) 
                                   >> 0x0000001eU) 
                                  | ((IData)(((0x0000000300000000ULL 
                                               | (QData)((IData)(
                                                                 (0x000fffffU 
                                                                  & (vlSymsp->TOP.fe_insts[0U] 
                                                                     >> 5U))))) 
                                              >> 0x00000020U)) 
                                     << 2U));
            } else {
                if ((2U == (3U & (vlSymsp->TOP.fe_insts[0U] 
                                  >> 0x00000012U)))) {
                    __Vtemp_26[0U] = (8U | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[0U] 
                                            << 4U));
                    __Vtemp_26[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[0U] 
                                       >> 0x0000001cU) 
                                      | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[1U] 
                                         << 4U));
                    __Vtemp_26[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[1U] 
                                       >> 0x0000001cU) 
                                      | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[2U] 
                                         << 4U));
                } else if ((1U == (3U & (vlSymsp->TOP.fe_insts[0U] 
                                         >> 0x00000012U)))) {
                    __Vtemp_26[0U] = (9U | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[0U] 
                                            << 4U));
                    __Vtemp_26[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[0U] 
                                       >> 0x0000001cU) 
                                      | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[1U] 
                                         << 4U));
                    __Vtemp_26[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[1U] 
                                       >> 0x0000001cU) 
                                      | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[2U] 
                                         << 4U));
                } else {
                    if ((0U == (3U & (vlSymsp->TOP.fe_insts[0U] 
                                      >> 0x00000012U)))) {
                        __Vtemp_27[0U] = (5U | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[0U] 
                                                << 3U));
                        __Vtemp_27[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[0U] 
                                           >> 0x0000001dU) 
                                          | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[1U] 
                                             << 3U));
                        __Vtemp_27[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[1U] 
                                           >> 0x0000001dU) 
                                          | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_64[2U] 
                                             << 3U));
                    } else {
                        __Vtemp_27[0U] = (IData)((0x003fffffffffffffULL 
                                                  & (((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_182[1U])) 
                                                      << 0x00000020U) 
                                                     | (QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_182[0U])))));
                        __Vtemp_27[1U] = (0x00800000U 
                                          | (IData)(
                                                    ((0x003fffffffffffffULL 
                                                      & (((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_182[1U])) 
                                                          << 0x00000020U) 
                                                         | (QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_182[0U])))) 
                                                     >> 0x00000020U)));
                        __Vtemp_27[2U] = 0x00400000U;
                    }
                    __Vtemp_26[0U] = (__Vtemp_27[0U] 
                                      << 1U);
                    __Vtemp_26[1U] = ((__Vtemp_27[0U] 
                                       >> 0x0000001fU) 
                                      | (__Vtemp_27[1U] 
                                         << 1U));
                    __Vtemp_26[2U] = ((__Vtemp_27[1U] 
                                       >> 0x0000001fU) 
                                      | (__Vtemp_27[2U] 
                                         << 1U));
                }
                __Vtemp_22[0U] = __Vtemp_26[0U];
                __Vtemp_22[1U] = __Vtemp_26[1U];
                __Vtemp_22[2U] = __Vtemp_26[2U];
                __Vtemp_22[3U] = 0U;
                __Vtemp_22[4U] = 0U;
                __Vtemp_22[5U] = 0U;
                __Vtemp_22[6U] = 0x00000018U;
            }
            __Vtemp_10[0U] = __Vtemp_22[0U];
            __Vtemp_10[1U] = __Vtemp_22[1U];
            __Vtemp_10[2U] = __Vtemp_22[2U];
            __Vtemp_10[3U] = __Vtemp_22[3U];
            __Vtemp_10[4U] = __Vtemp_22[4U];
            __Vtemp_10[5U] = __Vtemp_22[5U];
            __Vtemp_10[6U] = __Vtemp_22[6U];
            __Vtemp_10[7U] = 0x02000000U;
            __Vtemp_10[8U] = 0x00000020U;
            __Vtemp_10[9U] = 0U;
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
            = (__Vtemp_10[0U] << 0x00000011U);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
            = ((__Vtemp_10[0U] >> 0x0000000fU) | (__Vtemp_10[1U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] 
            = ((__Vtemp_10[1U] >> 0x0000000fU) | (__Vtemp_10[2U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] 
            = ((__Vtemp_10[2U] >> 0x0000000fU) | (__Vtemp_10[3U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] 
            = ((__Vtemp_10[3U] >> 0x0000000fU) | (__Vtemp_10[4U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[5U] 
            = ((__Vtemp_10[4U] >> 0x0000000fU) | (__Vtemp_10[5U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[6U] 
            = ((__Vtemp_10[5U] >> 0x0000000fU) | (__Vtemp_10[6U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[7U] 
            = ((__Vtemp_10[6U] >> 0x0000000fU) | (__Vtemp_10[7U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[8U] 
            = ((__Vtemp_10[7U] >> 0x0000000fU) | (__Vtemp_10[8U] 
                                                  << 0x00000011U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[9U] 
            = ((__Vtemp_10[8U] >> 0x0000000fU) | (__Vtemp_10[9U] 
                                                  << 0x00000011U));
    } else {
        if ((2U & (IData)(vlSelfRef.__PVT__instr_type))) {
            if ((1U & (IData)(vlSelfRef.__PVT__instr_type))) {
                if ((0x00200000U & vlSymsp->TOP.fe_insts[0U])) {
                    if ((0x00100000U & vlSymsp->TOP.fe_insts[0U])) {
                        __Vtemp_30[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[0U];
                        __Vtemp_30[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[1U];
                        __Vtemp_30[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[2U];
                        __Vtemp_30[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[3U];
                        __Vtemp_30[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[4U];
                        __Vtemp_30[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[5U];
                        __Vtemp_30[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[6U];
                        __Vtemp_30[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[7U];
                    } else if ((0x00080000U & vlSymsp->TOP.fe_insts[0U])) {
                        __Vtemp_30[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[0U];
                        __Vtemp_30[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[1U];
                        __Vtemp_30[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[2U];
                        __Vtemp_30[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[3U];
                        __Vtemp_30[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[4U];
                        __Vtemp_30[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[5U];
                        __Vtemp_30[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[6U];
                        __Vtemp_30[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[7U];
                    } else if ((0x00040000U & vlSymsp->TOP.fe_insts[0U])) {
                        __Vtemp_30[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[0U];
                        __Vtemp_30[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[1U];
                        __Vtemp_30[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[2U];
                        __Vtemp_30[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[3U];
                        __Vtemp_30[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[4U];
                        __Vtemp_30[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[5U];
                        __Vtemp_30[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[6U];
                        __Vtemp_30[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[7U];
                    } else if ((0x00020000U & vlSymsp->TOP.fe_insts[0U])) {
                        __Vtemp_30[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[0U];
                        __Vtemp_30[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[1U];
                        __Vtemp_30[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[2U];
                        __Vtemp_30[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[3U];
                        __Vtemp_30[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[4U];
                        __Vtemp_30[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[5U];
                        __Vtemp_30[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[6U];
                        __Vtemp_30[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[7U];
                    } else {
                        __Vtemp_30[0U] = (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_53);
                        __Vtemp_30[1U] = (0x00000080U 
                                          | (IData)(
                                                    (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_53 
                                                     >> 0x00000020U)));
                        __Vtemp_30[2U] = 0U;
                        __Vtemp_30[3U] = 0U;
                        __Vtemp_30[4U] = 0U;
                        __Vtemp_30[5U] = 0xc0000000U;
                        __Vtemp_30[6U] = 0U;
                        __Vtemp_30[7U] = 0x81000000U;
                    }
                    __Vtemp_29[0U] = (__Vtemp_30[0U] 
                                      << 5U);
                    __Vtemp_29[1U] = ((__Vtemp_30[0U] 
                                       >> 0x0000001bU) 
                                      | (__Vtemp_30[1U] 
                                         << 5U));
                    __Vtemp_29[2U] = ((__Vtemp_30[1U] 
                                       >> 0x0000001bU) 
                                      | (__Vtemp_30[2U] 
                                         << 5U));
                    __Vtemp_29[3U] = ((__Vtemp_30[2U] 
                                       >> 0x0000001bU) 
                                      | (__Vtemp_30[3U] 
                                         << 5U));
                    __Vtemp_29[4U] = ((__Vtemp_30[3U] 
                                       >> 0x0000001bU) 
                                      | (__Vtemp_30[4U] 
                                         << 5U));
                    __Vtemp_29[5U] = ((__Vtemp_30[4U] 
                                       >> 0x0000001bU) 
                                      | (__Vtemp_30[5U] 
                                         << 5U));
                    __Vtemp_29[6U] = ((__Vtemp_30[5U] 
                                       >> 0x0000001bU) 
                                      | (__Vtemp_30[6U] 
                                         << 5U));
                    __Vtemp_29[7U] = ((__Vtemp_30[6U] 
                                       >> 0x0000001bU) 
                                      | (__Vtemp_30[7U] 
                                         << 5U));
                    __Vtemp_29[8U] = (__Vtemp_30[7U] 
                                      >> 0x0000001bU);
                } else if ((0x00100000U & vlSymsp->TOP.fe_insts[0U])) {
                    if ((0x00080000U & vlSymsp->TOP.fe_insts[0U])) {
                        if ((0x00040000U & vlSymsp->TOP.fe_insts[0U])) {
                            if ((0x00020000U & vlSymsp->TOP.fe_insts[0U])) {
                                __Vtemp_34[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[0U];
                                __Vtemp_34[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[1U];
                                __Vtemp_34[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[2U];
                                __Vtemp_34[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[3U];
                                __Vtemp_34[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[4U];
                                __Vtemp_34[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[5U];
                                __Vtemp_34[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[6U];
                                __Vtemp_34[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[7U];
                            } else if ((0x00010000U 
                                        & vlSymsp->TOP.fe_insts[0U])) {
                                if ((0x00008000U & vlSymsp->TOP.fe_insts[0U])) {
                                    __Vtemp_34[0U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[0U];
                                    __Vtemp_34[1U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[1U];
                                    __Vtemp_34[2U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[2U];
                                    __Vtemp_34[3U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[3U];
                                    __Vtemp_34[4U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[4U];
                                    __Vtemp_34[5U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[5U];
                                    __Vtemp_34[6U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[6U];
                                    __Vtemp_34[7U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_27[7U];
                                } else {
                                    __Vtemp_34[0U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[0U];
                                    __Vtemp_34[1U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[1U];
                                    __Vtemp_34[2U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[2U];
                                    __Vtemp_34[3U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[3U];
                                    __Vtemp_34[4U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[4U];
                                    __Vtemp_34[5U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[5U];
                                    __Vtemp_34[6U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[6U];
                                    __Vtemp_34[7U] 
                                        = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[7U];
                                }
                            } else {
                                __Vtemp_34[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[0U];
                                __Vtemp_34[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[1U];
                                __Vtemp_34[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[2U];
                                __Vtemp_34[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[3U];
                                __Vtemp_34[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[4U];
                                __Vtemp_34[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[5U];
                                __Vtemp_34[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[6U];
                                __Vtemp_34[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_99[7U];
                            }
                            __Vtemp_33[0U] = (__Vtemp_34[0U] 
                                              << 4U);
                            __Vtemp_33[1U] = ((__Vtemp_34[0U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_34[1U] 
                                                 << 4U));
                            __Vtemp_33[2U] = ((__Vtemp_34[1U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_34[2U] 
                                                 << 4U));
                            __Vtemp_33[3U] = ((__Vtemp_34[2U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_34[3U] 
                                                 << 4U));
                            __Vtemp_33[4U] = ((__Vtemp_34[3U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_34[4U] 
                                                 << 4U));
                            __Vtemp_33[5U] = ((__Vtemp_34[4U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_34[5U] 
                                                 << 4U));
                            __Vtemp_33[6U] = ((__Vtemp_34[5U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_34[6U] 
                                                 << 4U));
                            __Vtemp_33[7U] = ((__Vtemp_34[6U] 
                                               >> 0x0000001cU) 
                                              | (__Vtemp_34[7U] 
                                                 << 4U));
                            __Vtemp_33[8U] = (__Vtemp_34[7U] 
                                              >> 0x0000001cU);
                        } else if ((0x00020000U & vlSymsp->TOP.fe_insts[0U])) {
                            __Vtemp_33[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[0U];
                            __Vtemp_33[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[1U];
                            __Vtemp_33[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[2U];
                            __Vtemp_33[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[3U];
                            __Vtemp_33[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[4U];
                            __Vtemp_33[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[5U];
                            __Vtemp_33[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[6U];
                            __Vtemp_33[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[7U];
                            __Vtemp_33[8U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[8U];
                        } else if ((0x00010000U & vlSymsp->TOP.fe_insts[0U])) {
                            __Vtemp_33[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[0U];
                            __Vtemp_33[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[1U];
                            __Vtemp_33[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[2U];
                            __Vtemp_33[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[3U];
                            __Vtemp_33[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[4U];
                            __Vtemp_33[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[5U];
                            __Vtemp_33[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[6U];
                            __Vtemp_33[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[7U];
                            __Vtemp_33[8U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[8U];
                        } else if ((0x00008000U & vlSymsp->TOP.fe_insts[0U])) {
                            __Vtemp_33[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[0U];
                            __Vtemp_33[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[1U];
                            __Vtemp_33[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[2U];
                            __Vtemp_33[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[3U];
                            __Vtemp_33[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[4U];
                            __Vtemp_33[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[5U];
                            __Vtemp_33[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[6U];
                            __Vtemp_33[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[7U];
                            __Vtemp_33[8U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_66[8U];
                        } else {
                            __Vtemp_33[0U] = (5U | 
                                              (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                               << 3U));
                            __Vtemp_33[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                               >> 0x0000001dU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                                 << 3U));
                            __Vtemp_33[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                               >> 0x0000001dU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                                 << 3U));
                            __Vtemp_33[3U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                               >> 0x0000001dU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                                 << 3U));
                            __Vtemp_33[4U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                               >> 0x0000001dU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                                 << 3U));
                            __Vtemp_33[5U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                               >> 0x0000001dU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                                 << 3U));
                            __Vtemp_33[6U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                               >> 0x0000001dU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                                 << 3U));
                            __Vtemp_33[7U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                               >> 0x0000001dU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[7U] 
                                                 << 3U));
                            __Vtemp_33[8U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[7U] 
                                               >> 0x0000001dU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[8U] 
                                                 << 3U));
                        }
                        __Vtemp_29[0U] = (__Vtemp_33[0U] 
                                          << 1U);
                        __Vtemp_29[1U] = ((__Vtemp_33[0U] 
                                           >> 0x0000001fU) 
                                          | (__Vtemp_33[1U] 
                                             << 1U));
                        __Vtemp_29[2U] = ((__Vtemp_33[1U] 
                                           >> 0x0000001fU) 
                                          | (__Vtemp_33[2U] 
                                             << 1U));
                        __Vtemp_29[3U] = ((__Vtemp_33[2U] 
                                           >> 0x0000001fU) 
                                          | (__Vtemp_33[3U] 
                                             << 1U));
                        __Vtemp_29[4U] = ((__Vtemp_33[3U] 
                                           >> 0x0000001fU) 
                                          | (__Vtemp_33[4U] 
                                             << 1U));
                        __Vtemp_29[5U] = ((__Vtemp_33[4U] 
                                           >> 0x0000001fU) 
                                          | (__Vtemp_33[5U] 
                                             << 1U));
                        __Vtemp_29[6U] = ((__Vtemp_33[5U] 
                                           >> 0x0000001fU) 
                                          | (__Vtemp_33[6U] 
                                             << 1U));
                        __Vtemp_29[7U] = ((__Vtemp_33[6U] 
                                           >> 0x0000001fU) 
                                          | (__Vtemp_33[7U] 
                                             << 1U));
                        __Vtemp_29[8U] = ((__Vtemp_33[7U] 
                                           >> 0x0000001fU) 
                                          | (__Vtemp_33[8U] 
                                             << 1U));
                    } else if ((0x00040000U & vlSymsp->TOP.fe_insts[0U])) {
                        if ((0x00020000U & vlSymsp->TOP.fe_insts[0U])) {
                            if ((0x00010000U & vlSymsp->TOP.fe_insts[0U])) {
                                __Vtemp_29[0U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                                   << 4U) 
                                                  | ((0x00008000U 
                                                      & vlSymsp->TOP.fe_insts[0U])
                                                      ? 8U
                                                      : 9U));
                                __Vtemp_29[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                                   >> 0x0000001cU) 
                                                  | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                                     << 4U));
                                __Vtemp_29[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                                   >> 0x0000001cU) 
                                                  | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                                     << 4U));
                                __Vtemp_29[3U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                                   >> 0x0000001cU) 
                                                  | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                                     << 4U));
                                __Vtemp_29[4U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                                   >> 0x0000001cU) 
                                                  | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                                     << 4U));
                                __Vtemp_29[5U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                                   >> 0x0000001cU) 
                                                  | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                                     << 4U));
                                __Vtemp_29[6U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                                   >> 0x0000001cU) 
                                                  | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                                     << 4U));
                                __Vtemp_29[7U] = (0x02000000U 
                                                  | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                                      >> 0x0000001cU) 
                                                     | (0x01fffff0U 
                                                        & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[7U] 
                                                           << 4U))));
                                __Vtemp_29[8U] = 0x00000020U;
                            } else {
                                __Vtemp_29[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[0U];
                                __Vtemp_29[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[1U];
                                __Vtemp_29[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[2U];
                                __Vtemp_29[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[3U];
                                __Vtemp_29[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[4U];
                                __Vtemp_29[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[5U];
                                __Vtemp_29[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[6U];
                                __Vtemp_29[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[7U];
                                __Vtemp_29[8U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[8U];
                            }
                        } else {
                            __Vtemp_29[0U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                               << 4U) 
                                              | ((0x00010000U 
                                                  & vlSymsp->TOP.fe_insts[0U])
                                                  ? 
                                                 ((0x00008000U 
                                                   & vlSymsp->TOP.fe_insts[0U])
                                                   ? 6U
                                                   : 5U)
                                                  : 
                                                 ((0x00008000U 
                                                   & vlSymsp->TOP.fe_insts[0U])
                                                   ? 4U
                                                   : 7U)));
                            __Vtemp_29[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                                 << 4U));
                            __Vtemp_29[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                                 << 4U));
                            __Vtemp_29[3U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                                 << 4U));
                            __Vtemp_29[4U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                                 << 4U));
                            __Vtemp_29[5U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                                 << 4U));
                            __Vtemp_29[6U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                                 << 4U));
                            __Vtemp_29[7U] = (0x02000000U 
                                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                                  >> 0x0000001cU) 
                                                 | (0x01fffff0U 
                                                    & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[7U] 
                                                       << 4U))));
                            __Vtemp_29[8U] = 0x00000020U;
                        }
                    } else if ((0x00020000U & vlSymsp->TOP.fe_insts[0U])) {
                        if ((0x00010000U & vlSymsp->TOP.fe_insts[0U])) {
                            __Vtemp_29[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[0U];
                            __Vtemp_29[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[1U];
                            __Vtemp_29[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[2U];
                            __Vtemp_29[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[3U];
                            __Vtemp_29[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[4U];
                            __Vtemp_29[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[5U];
                            __Vtemp_29[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[6U];
                            __Vtemp_29[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[7U];
                            __Vtemp_29[8U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[8U];
                        } else {
                            __Vtemp_29[0U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                               << 4U) 
                                              | ((0x00008000U 
                                                  & vlSymsp->TOP.fe_insts[0U])
                                                  ? 3U
                                                  : 2U));
                            __Vtemp_29[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                                 << 4U));
                            __Vtemp_29[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                                 << 4U));
                            __Vtemp_29[3U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                                 << 4U));
                            __Vtemp_29[4U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                                 << 4U));
                            __Vtemp_29[5U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                                 << 4U));
                            __Vtemp_29[6U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                                 << 4U));
                            __Vtemp_29[7U] = (0x02000000U 
                                              | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                                  >> 0x0000001cU) 
                                                 | (0x01fffff0U 
                                                    & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[7U] 
                                                       << 4U))));
                            __Vtemp_29[8U] = 0x00000020U;
                        }
                    } else if ((0x00010000U & vlSymsp->TOP.fe_insts[0U])) {
                        if ((0x00008000U & vlSymsp->TOP.fe_insts[0U])) {
                            __Vtemp_29[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[0U];
                            __Vtemp_29[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[1U];
                            __Vtemp_29[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[2U];
                            __Vtemp_29[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[3U];
                            __Vtemp_29[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[4U];
                            __Vtemp_29[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[5U];
                            __Vtemp_29[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[6U];
                            __Vtemp_29[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[7U];
                            __Vtemp_29[8U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[8U];
                        } else {
                            __Vtemp_29[0U] = (1U | 
                                              (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                               << 4U));
                            __Vtemp_29[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                                 << 4U));
                            __Vtemp_29[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                                 << 4U));
                            __Vtemp_29[3U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                                 << 4U));
                            __Vtemp_29[4U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                                 << 4U));
                            __Vtemp_29[5U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                                 << 4U));
                            __Vtemp_29[6U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                                 << 4U));
                            __Vtemp_29[7U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[7U] 
                                                 << 4U));
                            __Vtemp_29[8U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[7U] 
                                               >> 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[8U] 
                                                 << 4U));
                        }
                    } else {
                        if ((0x00008000U & vlSymsp->TOP.fe_insts[0U])) {
                            __Vtemp_45[0U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[1U] 
                                               << 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[0U] 
                                                 >> 4U));
                            __Vtemp_45[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[2U] 
                                               << 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[1U] 
                                                 >> 4U));
                            __Vtemp_45[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[3U] 
                                               << 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[2U] 
                                                 >> 4U));
                            __Vtemp_45[3U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[4U] 
                                               << 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[3U] 
                                                 >> 4U));
                            __Vtemp_45[4U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[5U] 
                                               << 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[4U] 
                                                 >> 4U));
                            __Vtemp_45[5U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[6U] 
                                               << 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[5U] 
                                                 >> 4U));
                            __Vtemp_45[6U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[7U] 
                                               << 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[6U] 
                                                 >> 4U));
                            __Vtemp_45[7U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[8U] 
                                               << 0x0000001cU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[7U] 
                                                 >> 4U));
                            __Vtemp_45[8U] = (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[8U] 
                                              >> 4U);
                        } else {
                            __Vtemp_45[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[0U];
                            __Vtemp_45[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[1U];
                            __Vtemp_45[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[2U];
                            __Vtemp_45[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[3U];
                            __Vtemp_45[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[4U];
                            __Vtemp_45[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[5U];
                            __Vtemp_45[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[6U];
                            __Vtemp_45[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[7U];
                            __Vtemp_45[8U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_42[8U];
                        }
                        __Vtemp_29[0U] = (__Vtemp_45[0U] 
                                          << 4U);
                        __Vtemp_29[1U] = ((__Vtemp_45[0U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_45[1U] 
                                             << 4U));
                        __Vtemp_29[2U] = ((__Vtemp_45[1U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_45[2U] 
                                             << 4U));
                        __Vtemp_29[3U] = ((__Vtemp_45[2U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_45[3U] 
                                             << 4U));
                        __Vtemp_29[4U] = ((__Vtemp_45[3U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_45[4U] 
                                             << 4U));
                        __Vtemp_29[5U] = ((__Vtemp_45[4U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_45[5U] 
                                             << 4U));
                        __Vtemp_29[6U] = ((__Vtemp_45[5U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_45[6U] 
                                             << 4U));
                        __Vtemp_29[7U] = ((__Vtemp_45[6U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_45[7U] 
                                             << 4U));
                        __Vtemp_29[8U] = ((__Vtemp_45[7U] 
                                           >> 0x0000001cU) 
                                          | (0x00000030U 
                                             & (__Vtemp_45[8U] 
                                                << 4U)));
                    }
                } else {
                    __Vtemp_29[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[0U];
                    __Vtemp_29[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[1U];
                    __Vtemp_29[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[2U];
                    __Vtemp_29[3U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[3U];
                    __Vtemp_29[4U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[4U];
                    __Vtemp_29[5U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[5U];
                    __Vtemp_29[6U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[6U];
                    __Vtemp_29[7U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[7U];
                    __Vtemp_29[8U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_22[8U];
                }
                __Vtemp_28[0U] = (__Vtemp_29[0U] << 0x00000011U);
                __Vtemp_28[1U] = ((__Vtemp_29[0U] >> 0x0000000fU) 
                                  | (__Vtemp_29[1U] 
                                     << 0x00000011U));
                __Vtemp_28[2U] = ((__Vtemp_29[1U] >> 0x0000000fU) 
                                  | (__Vtemp_29[2U] 
                                     << 0x00000011U));
                __Vtemp_28[3U] = ((__Vtemp_29[2U] >> 0x0000000fU) 
                                  | (__Vtemp_29[3U] 
                                     << 0x00000011U));
                __Vtemp_28[4U] = ((__Vtemp_29[3U] >> 0x0000000fU) 
                                  | (__Vtemp_29[4U] 
                                     << 0x00000011U));
                __Vtemp_28[5U] = ((__Vtemp_29[4U] >> 0x0000000fU) 
                                  | (__Vtemp_29[5U] 
                                     << 0x00000011U));
                __Vtemp_28[6U] = ((__Vtemp_29[5U] >> 0x0000000fU) 
                                  | (__Vtemp_29[6U] 
                                     << 0x00000011U));
                __Vtemp_28[7U] = ((__Vtemp_29[6U] >> 0x0000000fU) 
                                  | (__Vtemp_29[7U] 
                                     << 0x00000011U));
                __Vtemp_28[8U] = ((__Vtemp_29[7U] >> 0x0000000fU) 
                                  | (__Vtemp_29[8U] 
                                     << 0x00000011U));
            } else {
                if ((0x01000000U & vlSymsp->TOP.fe_insts[0U])) {
                    if ((0x00800000U & vlSymsp->TOP.fe_insts[0U])) {
                        __Vtemp_50[0U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[0U] 
                                           << 0x00000015U) 
                                          | ((0x00400000U 
                                              & vlSymsp->TOP.fe_insts[0U])
                                              ? 0x000c0000U
                                              : 0x000a0000U));
                        __Vtemp_50[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[0U] 
                                           >> 0x0000000bU) 
                                          | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[1U] 
                                             << 0x00000015U));
                        __Vtemp_50[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[1U] 
                                           >> 0x0000000bU) 
                                          | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[2U] 
                                             << 0x00000015U));
                        __Vtemp_50[3U] = (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[2U] 
                                          >> 0x0000000bU);
                    } else {
                        if ((0x00400000U & vlSymsp->TOP.fe_insts[0U])) {
                            __Vtemp_51[0U] = (1U | 
                                              (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[0U] 
                                               << 2U));
                            __Vtemp_51[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[0U] 
                                               >> 0x0000001eU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[1U] 
                                                 << 2U));
                            __Vtemp_51[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[1U] 
                                               >> 0x0000001eU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[2U] 
                                                 << 2U));
                        } else {
                            __Vtemp_51[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_186[0U];
                            __Vtemp_51[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_186[1U];
                            __Vtemp_51[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_186[2U];
                        }
                        __Vtemp_50[0U] = (__Vtemp_51[0U] 
                                          << 0x00000013U);
                        __Vtemp_50[1U] = ((__Vtemp_51[0U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_51[1U] 
                                             << 0x00000013U));
                        __Vtemp_50[2U] = ((__Vtemp_51[1U] 
                                           >> 0x0000000dU) 
                                          | (__Vtemp_51[2U] 
                                             << 0x00000013U));
                        __Vtemp_50[3U] = (__Vtemp_51[2U] 
                                          >> 0x0000000dU);
                    }
                } else {
                    if ((0x00800000U & vlSymsp->TOP.fe_insts[0U])) {
                        if ((0x00400000U & vlSymsp->TOP.fe_insts[0U])) {
                            __Vtemp_54[0U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_186[1U] 
                                               << 0x0000001eU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_186[0U] 
                                                 >> 2U));
                            __Vtemp_54[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_186[2U] 
                                               << 0x0000001eU) 
                                              | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_186[1U] 
                                                 >> 2U));
                            __Vtemp_54[2U] = (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_186[2U] 
                                              >> 2U);
                        } else {
                            __Vtemp_54[0U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[0U];
                            __Vtemp_54[1U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[1U];
                            __Vtemp_54[2U] = vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[2U];
                        }
                        __Vtemp_52[0U] = (__Vtemp_54[0U] 
                                          << 4U);
                        __Vtemp_52[1U] = ((__Vtemp_54[0U] 
                                           >> 0x0000001cU) 
                                          | (__Vtemp_54[1U] 
                                             << 4U));
                        __Vtemp_52[2U] = ((__Vtemp_54[1U] 
                                           >> 0x0000001cU) 
                                          | (0x00fffff0U 
                                             & (__Vtemp_54[2U] 
                                                << 4U)));
                    } else {
                        __Vtemp_52[0U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[0U] 
                                           << 4U) | 
                                          ((0x00400000U 
                                            & vlSymsp->TOP.fe_insts[0U])
                                            ? 3U : 2U));
                        __Vtemp_52[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[0U] 
                                           >> 0x0000001cU) 
                                          | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[1U] 
                                             << 4U));
                        __Vtemp_52[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[1U] 
                                           >> 0x0000001cU) 
                                          | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_43[2U] 
                                             << 4U));
                    }
                    __Vtemp_50[0U] = (__Vtemp_52[0U] 
                                      << 0x00000011U);
                    __Vtemp_50[1U] = ((__Vtemp_52[0U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_52[1U] 
                                         << 0x00000011U));
                    __Vtemp_50[2U] = ((__Vtemp_52[1U] 
                                       >> 0x0000000fU) 
                                      | (__Vtemp_52[2U] 
                                         << 0x00000011U));
                    __Vtemp_50[3U] = (__Vtemp_52[2U] 
                                      >> 0x0000000fU);
                }
                __Vtemp_28[0U] = __Vtemp_50[0U];
                __Vtemp_28[1U] = __Vtemp_50[1U];
                __Vtemp_28[2U] = __Vtemp_50[2U];
                __Vtemp_28[3U] = __Vtemp_50[3U];
                __Vtemp_28[4U] = 0U;
                __Vtemp_28[5U] = (0x00004000U | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85 
                                                 << 0x00000013U));
                __Vtemp_28[6U] = (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85 
                                  >> 0x0000000dU);
                __Vtemp_28[7U] = 0U;
                __Vtemp_28[8U] = 0x00400400U;
            }
        } else {
            if ((1U & (IData)(vlSelfRef.__PVT__instr_type))) {
                if ((1U & ((3U == (3U & (vlSymsp->TOP.fe_insts[0U] 
                                         >> 0x0000001bU))) 
                           | (vlSymsp->TOP.fe_insts[0U] 
                              >> 0x0000001dU)))) {
                    __Vtemp_58[0U] = 0U;
                    __Vtemp_58[1U] = 0U;
                    __Vtemp_58[2U] = 0U;
                    __Vtemp_58[3U] = 0U;
                    __Vtemp_58[4U] = (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_87 
                                      << 4U);
                    __Vtemp_58[5U] = 0x40200020U;
                    __Vtemp_58[6U] = (((0x20000000U 
                                        & vlSymsp->TOP.fe_insts[0U])
                                        ? ((0x04000000U 
                                            & vlSymsp->TOP.fe_insts[0U])
                                            ? ((0x08000000U 
                                                & vlSymsp->TOP.fe_insts[0U])
                                                ? 6U
                                                : 4U)
                                            : ((0x08000000U 
                                                & vlSymsp->TOP.fe_insts[0U])
                                                ? 5U
                                                : 3U))
                                        : ((0x04000000U 
                                            & vlSymsp->TOP.fe_insts[0U])
                                            ? 1U : 2U)) 
                                      << 2U);
                } else if ((0U != (3U & (vlSymsp->TOP.fe_insts[0U] 
                                         >> 0x0000001cU)))) {
                    __Vtemp_58[0U] = (0x0000001fU & vlSymsp->TOP.fe_insts[0U]);
                    __Vtemp_58[1U] = 0U;
                    __Vtemp_58[2U] = 0U;
                    __Vtemp_58[3U] = 0U;
                    __Vtemp_58[4U] = (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_87 
                                      << 4U);
                    __Vtemp_58[5U] = 0x80080040U;
                    __Vtemp_58[6U] = 0x00000020U;
                } else {
                    __Vtemp_58[0U] = (1U & (- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP.fe_insts[0U] 
                                                          >> 0x0000001aU)))));
                    __Vtemp_58[1U] = 0U;
                    __Vtemp_58[2U] = 0U;
                    __Vtemp_58[3U] = 0U;
                    __Vtemp_58[4U] = ((0x3ff00000U 
                                       & (vlSymsp->TOP.fe_insts[0U] 
                                          << 0x00000014U)) 
                                      | (0x000ffff0U 
                                         & (vlSymsp->TOP.fe_insts[0U] 
                                            >> 6U)));
                    __Vtemp_58[5U] = 0x40100040U;
                    __Vtemp_58[6U] = 0x0000001cU;
                }
                __Vtemp_57[0U] = ((__Vtemp_58[0U] << 0x00000019U) 
                                  | (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_183) 
                                      << 0x0000000dU) 
                                     | (0x00001f80U 
                                        & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_83 
                                           << 7U))));
                __Vtemp_57[1U] = ((__Vtemp_58[0U] >> 7U) 
                                  | (__Vtemp_58[1U] 
                                     << 0x00000019U));
                __Vtemp_57[2U] = ((__Vtemp_58[1U] >> 7U) 
                                  | (__Vtemp_58[2U] 
                                     << 0x00000019U));
                __Vtemp_57[3U] = ((__Vtemp_58[2U] >> 7U) 
                                  | (__Vtemp_58[3U] 
                                     << 0x00000019U));
                __Vtemp_57[4U] = ((__Vtemp_58[3U] >> 7U) 
                                  | (__Vtemp_58[4U] 
                                     << 0x00000019U));
                __Vtemp_57[5U] = ((__Vtemp_58[4U] >> 7U) 
                                  | (__Vtemp_58[5U] 
                                     << 0x00000019U));
                __Vtemp_57[6U] = (0x80000000U | ((__Vtemp_58[5U] 
                                                  >> 7U) 
                                                 | (__Vtemp_58[6U] 
                                                    << 0x00000019U)));
                __Vtemp_57[7U] = 0x00100000U;
                __Vtemp_57[8U] = 1U;
            } else {
                if ((0x10U == (vlSymsp->TOP.fe_insts[0U] 
                               >> 0x00000019U))) {
                    __Vtemp_68[0U] = (IData)((((QData)((IData)(
                                                               (0x00002140U 
                                                                | ((0x00004000U 
                                                                    & ((~ 
                                                                        (vlSymsp->TOP.fe_insts[0U] 
                                                                         >> 0x00000018U)) 
                                                                       << 0x0000000eU)) 
                                                                   | ((0x00000400U 
                                                                       & ((~ 
                                                                           (vlSymsp->TOP.fe_insts[0U] 
                                                                            >> 0x00000018U)) 
                                                                          << 0x0000000aU)) 
                                                                      | (0x00000200U 
                                                                         & (vlSymsp->TOP.fe_insts[0U] 
                                                                            >> 0x0000000fU))))))) 
                                               << 0x0000001fU) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_29) 
                                                                  << 0x00000013U) 
                                                                 | (0x0003e000U 
                                                                    & ((vlSymsp->TOP.fe_insts[0U] 
                                                                        << 0x0000000dU) 
                                                                       & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.fe_insts[0U] 
                                                                                >> 0x00000018U)))) 
                                                                          << 7U))))))));
                    __Vtemp_68[1U] = (IData)(((((QData)((IData)(
                                                                (0x00002140U 
                                                                 | ((0x00004000U 
                                                                     & ((~ 
                                                                         (vlSymsp->TOP.fe_insts[0U] 
                                                                          >> 0x00000018U)) 
                                                                        << 0x0000000eU)) 
                                                                    | ((0x00000400U 
                                                                        & ((~ 
                                                                            (vlSymsp->TOP.fe_insts[0U] 
                                                                             >> 0x00000018U)) 
                                                                           << 0x0000000aU)) 
                                                                       | (0x00000200U 
                                                                          & (vlSymsp->TOP.fe_insts[0U] 
                                                                             >> 0x0000000fU))))))) 
                                                << 0x0000001fU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_29) 
                                                                   << 0x00000013U) 
                                                                  | (0x0003e000U 
                                                                     & ((vlSymsp->TOP.fe_insts[0U] 
                                                                         << 0x0000000dU) 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP.fe_insts[0U] 
                                                                                >> 0x00000018U)))) 
                                                                           << 7U))))))) 
                                              >> 0x00000020U));
                    __Vtemp_68[2U] = 0U;
                    __Vtemp_68[3U] = 0U;
                    __Vtemp_68[4U] = (0x01000000U | 
                                      (((0x03ffc000U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP.fe_insts[0U] 
                                                           >> 0x00000017U)))) 
                                            << 0x0000000eU)) 
                                        | (0x00003fffU 
                                           & (vlSymsp->TOP.fe_insts[0U] 
                                              >> 0x0000000aU))) 
                                       << 0x0000001dU));
                    __Vtemp_68[5U] = (((0x03ffc000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP.fe_insts[0U] 
                                                          >> 0x00000017U)))) 
                                           << 0x0000000eU)) 
                                       | (0x00003fffU 
                                          & (vlSymsp->TOP.fe_insts[0U] 
                                             >> 0x0000000aU))) 
                                      >> 3U);
                    __Vtemp_68[6U] = 0x00080000U;
                    __Vtemp_68[7U] = 0x00200000U;
                } else {
                    __Vtemp_68[0U] = (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[0U] 
                                      << 6U);
                    __Vtemp_68[1U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[0U] 
                                       >> 0x0000001aU) 
                                      | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[1U] 
                                         << 6U));
                    __Vtemp_68[2U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[1U] 
                                       >> 0x0000001aU) 
                                      | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[2U] 
                                         << 6U));
                    __Vtemp_68[3U] = ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[2U] 
                                       >> 0x0000001aU) 
                                      | (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[3U] 
                                         << 6U));
                    __Vtemp_68[4U] = (((IData)((((QData)((IData)(
                                                                 (0x0000003fU 
                                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[5U] 
                                                                     >> 0x00000011U)))) 
                                                 << 0x0000001aU) 
                                                | (QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85)))) 
                                       << 0x0000001dU) 
                                      | ((vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[3U] 
                                          >> 0x0000001aU) 
                                         | (0x1fffffc0U 
                                            & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[4U] 
                                               << 6U))));
                    __Vtemp_68[5U] = (((IData)((((QData)((IData)(
                                                                 (0x0000003fU 
                                                                  & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[5U] 
                                                                     >> 0x00000011U)))) 
                                                 << 0x0000001aU) 
                                                | (QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85)))) 
                                       >> 3U) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            (0x0000003fU 
                                                                             & (vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[5U] 
                                                                                >> 0x00000011U)))) 
                                                            << 0x0000001aU) 
                                                           | (QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_85))) 
                                                          >> 0x00000020U)) 
                                                 << 0x0000001dU));
                    __Vtemp_68[6U] = (IData)((0x007fffffffffffffULL 
                                              & (((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[7U])) 
                                                  << 0x00000026U) 
                                                 | (((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[6U])) 
                                                     << 6U) 
                                                    | ((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[5U])) 
                                                       >> 0x0000001aU)))));
                    __Vtemp_68[7U] = (IData)(((0x007fffffffffffffULL 
                                               & (((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[7U])) 
                                                   << 0x00000026U) 
                                                  | (((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[6U])) 
                                                      << 6U) 
                                                     | ((QData)((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_57[5U])) 
                                                        >> 0x0000001aU)))) 
                                              >> 0x00000020U));
                }
                __Vtemp_57[0U] = __Vtemp_68[0U];
                __Vtemp_57[1U] = __Vtemp_68[1U];
                __Vtemp_57[2U] = __Vtemp_68[2U];
                __Vtemp_57[3U] = __Vtemp_68[3U];
                __Vtemp_57[4U] = __Vtemp_68[4U];
                __Vtemp_57[5U] = __Vtemp_68[5U];
                __Vtemp_57[6U] = __Vtemp_68[6U];
                __Vtemp_57[7U] = (0x40000000U | __Vtemp_68[7U]);
                __Vtemp_57[8U] = 0U;
            }
            __Vtemp_28[0U] = (__Vtemp_57[0U] << 0x00000016U);
            __Vtemp_28[1U] = ((__Vtemp_57[0U] >> 0x0000000aU) 
                              | (__Vtemp_57[1U] << 0x00000016U));
            __Vtemp_28[2U] = ((__Vtemp_57[1U] >> 0x0000000aU) 
                              | (__Vtemp_57[2U] << 0x00000016U));
            __Vtemp_28[3U] = ((__Vtemp_57[2U] >> 0x0000000aU) 
                              | (__Vtemp_57[3U] << 0x00000016U));
            __Vtemp_28[4U] = ((__Vtemp_57[3U] >> 0x0000000aU) 
                              | (__Vtemp_57[4U] << 0x00000016U));
            __Vtemp_28[5U] = ((__Vtemp_57[4U] >> 0x0000000aU) 
                              | (__Vtemp_57[5U] << 0x00000016U));
            __Vtemp_28[6U] = ((__Vtemp_57[5U] >> 0x0000000aU) 
                              | (__Vtemp_57[6U] << 0x00000016U));
            __Vtemp_28[7U] = ((__Vtemp_57[6U] >> 0x0000000aU) 
                              | (__Vtemp_57[7U] << 0x00000016U));
            __Vtemp_28[8U] = ((__Vtemp_57[7U] >> 0x0000000aU) 
                              | (__Vtemp_57[8U] << 0x00000016U));
        }
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
            = __Vtemp_28[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
            = __Vtemp_28[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U] 
            = __Vtemp_28[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U] 
            = __Vtemp_28[3U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[4U] 
            = __Vtemp_28[4U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[5U] 
            = __Vtemp_28[5U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[6U] 
            = __Vtemp_28[6U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[7U] 
            = __Vtemp_28[7U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[8U] 
            = __Vtemp_28[8U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[9U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = ((IData)(vlSymsp->TOP.boom_core__DOT__brmask__DOT__br_mask_q) 
                                                 | ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[7U] 
                                                                   >> 0x00000015U)))) 
                                                    & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_96)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_170 = ((3U 
                                                   | ((0U 
                                                       != 
                                                       (0x0000003fU 
                                                        & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                           >> 0x0000000fU))) 
                                                      << 2U)) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_fire)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168 = (0x0000001fU 
                                                  & ((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                      >> 0x0000000fU) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_fire))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 = (((0x00007c00U 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                      >> 5U)) 
                                                  | ((0x000003e0U 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                         << 2U)) 
                                                     | (0x0000001fU 
                                                        & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                           >> 9U)))) 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_fire)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171 = ((
                                                   (0U 
                                                    != 
                                                    (0x0000003fU 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                        >> 0x0000000fU))) 
                                                   & (2U 
                                                      != 
                                                      (3U 
                                                       & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U] 
                                                          >> 0x0000001bU)))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_fire)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_101 = (3U 
                                                  & (((4U 
                                                       & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))
                                                       ? 
                                                      (1U 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                                                                         >> 1U))))))
                                                       : 2U) 
                                                     | (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25) 
                                                                       >> 3U)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159 = ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
                                                       >> 0x0000000aU)))
                                                   ? 0U
                                                   : vlSymsp->TOP.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
                                                      >> 0x0000000aU))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70 = ((0U 
                                                  == 
                                                  (0x0000001fU 
                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32))
                                                  ? 0U
                                                  : vlSymsp->TOP.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                 [(0x0000001fU 
                                                   & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32)]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160 = ((0U 
                                                   == 
                                                   (0x0000001fU 
                                                    & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
                                                       >> 5U)))
                                                   ? 0U
                                                   : vlSymsp->TOP.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                  [
                                                  (0x0000001fU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_32 
                                                      >> 5U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161 = (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160) 
                                                   << 6U) 
                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 = ((QData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_161)) 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_fire))))));
}

extern const VlWide<24>/*767:0*/ Vboom_core__ConstPool__CONST_h4465c659_0;

VL_ATTR_COLD void Vboom_core_decode___stl_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__1(Vboom_core_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vboom_core_decode___stl_sequent__TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst__1\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_156 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                >> 0x0000000aU)))))
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_172)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39) 
                                                           >> 0x0000000aU)))
                                                       ? 0U
                                                       : vlSymsp->TOP.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39) 
                                                          >> 0x0000000aU))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39) 
                                                                >> 5U)))))
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_172)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39) 
                                                           >> 5U)))
                                                       ? 0U
                                                       : vlSymsp->TOP.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & ((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39) 
                                                          >> 5U))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158 = (0x0000003fU 
                                                  & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171) 
                                                      & ((0U 
                                                          != 
                                                          (0x0000001fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168))) 
                                                         & ((0x0000001fU 
                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_168)) 
                                                            == 
                                                            (0x0000001fU 
                                                             & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39)))))
                                                      ? (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_172)
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39)))
                                                       ? 0U
                                                       : vlSymsp->TOP.boom_core__DOT__rename__DOT__maptable__DOT__map_q
                                                      [
                                                      (0x0000001fU 
                                                       & (IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_39))])));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164 = ((~ 
                                                   ((vlSymsp->TOP.boom_core__DOT__wakeups[71U] 
                                                     >> 0x0000001fU) 
                                                    & ((0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__wakeups[64U] 
                                                           >> 0x0000000fU)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(
                                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                   >> 6U)))))) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                       & ((0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                              >> 9U)) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (IData)(
                                                                     (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                      >> 6U)))))) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & (IData)(
                                                                        (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                         >> 6U)))))) 
                                                        & ((~ 
                                                            (((0x0000003fU 
                                                               & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                  >> 9U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (IData)(
                                                                         (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                          >> 6U)))) 
                                                             & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                           & ((~ 
                                                               (((0x0000003fU 
                                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                     >> 9U)) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (IData)(
                                                                            (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                             >> 6U)))) 
                                                                & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                              & ((~ 
                                                                  (((0x0000003fU 
                                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                        >> 9U)) 
                                                                    == 
                                                                    (0x0000003fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))) 
                                                                   & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                                 & (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_23) 
                                                                     & ((0U 
                                                                         != 
                                                                         (0x0000003fU 
                                                                          & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))) 
                                                                        & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24) 
                                                                           == 
                                                                           (0x0000003fU 
                                                                            & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))))) 
                                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171) 
                                                                        & ((0U 
                                                                            != 
                                                                            (0x0000003fU 
                                                                             & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))) 
                                                                           & ((0x0000003fU 
                                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_172)) 
                                                                              == 
                                                                              (0x0000003fU 
                                                                               & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))))) 
                                                                       | (((0x2fU 
                                                                            >= 
                                                                            (0x0000003fU 
                                                                             & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))) 
                                                                           && (1U 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U))))))) 
                                                                          & (0U 
                                                                             != 
                                                                             (0x0000003fU 
                                                                              & (IData)(
                                                                                (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                                >> 6U)))))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165 = ((~ 
                                                   ((vlSymsp->TOP.boom_core__DOT__wakeups[71U] 
                                                     >> 0x0000001fU) 
                                                    & ((0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__wakeups[64U] 
                                                           >> 0x0000000fU)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                       & ((0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                              >> 9U)) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))) 
                                                        & ((~ 
                                                            (((0x0000003fU 
                                                               & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                  >> 9U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))) 
                                                             & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                           & ((~ 
                                                               (((0x0000003fU 
                                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                     >> 9U)) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))) 
                                                                & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                              & ((~ 
                                                                  (((0x0000003fU 
                                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                        >> 9U)) 
                                                                    == 
                                                                    (0x0000003fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))) 
                                                                   & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                                 & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171) 
                                                                     & ((0U 
                                                                         != 
                                                                         (0x0000003fU 
                                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))) 
                                                                        & ((0x0000003fU 
                                                                            & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_172)) 
                                                                           == 
                                                                           (0x0000003fU 
                                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))) 
                                                                    | (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_23) 
                                                                        & ((0U 
                                                                            != 
                                                                            (0x0000003fU 
                                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))) 
                                                                           & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24) 
                                                                              == 
                                                                              (0x0000003fU 
                                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))) 
                                                                       | (((0x2fU 
                                                                            >= 
                                                                            (0x0000003fU 
                                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))) 
                                                                           && (1U 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28)))))) 
                                                                          & (0U 
                                                                             != 
                                                                             (0x0000003fU 
                                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28))))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55 = (0x00000fffU 
                                                 & ((2U 
                                                     & (IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_fire))
                                                     ? 
                                                    (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_157) 
                                                      << 6U) 
                                                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_158))
                                                     : (IData)(
                                                               (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_28 
                                                                >> 0x00000012U))));
    if ((1U & (IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_fire))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[0U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[1U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[2U] 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[3U] 
            = ((((0x0003f000U & (((IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                  & (- (IData)((0U 
                                                != 
                                                (0x0000003fU 
                                                 & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                    >> 0x0000000fU)))))) 
                                 << 0x0000000cU)) | 
                 (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                   << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160))) 
                << 0x0000001dU) | ((0x1ff80000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U]) 
                                   | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_165) 
                                       << 0x00000012U) 
                                      | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_164) 
                                          << 0x00000011U) 
                                         | ((0x00018000U 
                                             & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U]) 
                                            | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_159) 
                                                << 9U) 
                                               | (0x000001ffU 
                                                  & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[3U])))))));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[4U] 
            = ((0xffff8000U & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[4U]) 
               | (((0x0003f000U & (((IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__freelist__DOT__alloc_cand) 
                                    & (- (IData)((0U 
                                                  != 
                                                  (0x0000003fU 
                                                   & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13[1U] 
                                                      >> 0x0000000fU)))))) 
                                   << 0x0000000cU)) 
                   | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_70) 
                       << 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_160))) 
                  >> 3U));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[5U] 
            = ((0x00007fffU & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[5U]) 
               | (0xffff8000U & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[5U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[6U] 
            = ((0x00007fffU & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[6U]) 
               | (0xffff8000U & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[6U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[7U] 
            = ((0x00007fffU & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[7U]) 
               | (0xffff8000U & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[7U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[8U] 
            = ((0x00007fffU & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[8U]) 
               | (0xffff8000U & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[8U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[9U] 
            = ((0x00007fffU & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[9U]) 
               | (0xffff8000U & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[9U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[10U] 
            = ((0x00007fffU & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[10U]) 
               | (0xffff8000U & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[10U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[11U] 
            = ((0x00007fffU & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[11U]) 
               | (0x01ff8000U & vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_uops[11U]));
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[12U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[13U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[14U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[15U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[16U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[17U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[18U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[19U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[20U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[21U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[22U] = 0U;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[23U] = 0U;
    } else {
        VL_ASSIGN_W(754, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33, Vboom_core__ConstPool__CONST_h4465c659_0);
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_162 = ((~ 
                                                   ((vlSymsp->TOP.boom_core__DOT__wakeups[71U] 
                                                     >> 0x0000001fU) 
                                                    & ((0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__wakeups[64U] 
                                                           >> 0x0000000fU)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                           >> 6U))))) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                       & ((0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                              >> 9U)) 
                                                          == 
                                                          (0x0000003fU 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                              >> 6U))))) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                 >> 6U))))) 
                                                        & ((~ 
                                                            (((0x0000003fU 
                                                               & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                  >> 9U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                  >> 6U))) 
                                                             & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                           & ((~ 
                                                               (((0x0000003fU 
                                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                     >> 9U)) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                     >> 6U))) 
                                                                & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                              & ((~ 
                                                                  (((0x0000003fU 
                                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                        >> 9U)) 
                                                                    == 
                                                                    (0x0000003fU 
                                                                     & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                        >> 6U))) 
                                                                   & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                                 & (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_23) 
                                                                     & ((0U 
                                                                         != 
                                                                         (0x0000003fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                             >> 6U))) 
                                                                        & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24) 
                                                                           == 
                                                                           (0x0000003fU 
                                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                               >> 6U))))) 
                                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171) 
                                                                        & ((0U 
                                                                            != 
                                                                            (0x0000003fU 
                                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                                >> 6U))) 
                                                                           & ((0x0000003fU 
                                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_172)) 
                                                                              == 
                                                                              (0x0000003fU 
                                                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                                >> 6U))))) 
                                                                       | (((0x2fU 
                                                                            >= 
                                                                            (0x0000003fU 
                                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                                >> 6U))) 
                                                                           && (1U 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                                >> 6U)))))) 
                                                                          & (0U 
                                                                             != 
                                                                             (0x0000003fU 
                                                                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55) 
                                                                                >> 6U))))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_163 = ((~ 
                                                   ((vlSymsp->TOP.boom_core__DOT__wakeups[71U] 
                                                     >> 0x0000001fU) 
                                                    & ((0x0000003fU 
                                                        & (vlSymsp->TOP.boom_core__DOT__wakeups[64U] 
                                                           >> 0x0000000fU)) 
                                                       == 
                                                       (0x0000003fU 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))))) 
                                                  & ((~ 
                                                      ((IData)(vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__res_valid) 
                                                       & ((0x0000003fU 
                                                           & (vlSymsp->TOP.boom_core__DOT__unq_inst__DOT__pipe_uop[4U] 
                                                              >> 9U)) 
                                                          == 
                                                          (0x0000003fU 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))))) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.lsu_resp_valid) 
                                                          & ((0x0000003fU 
                                                              & (vlSymsp->TOP.lsu_resp[5U] 
                                                                 >> 0x00000010U)) 
                                                             == 
                                                             (0x0000003fU 
                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))))) 
                                                        & ((~ 
                                                            (((0x0000003fU 
                                                               & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                  >> 9U)) 
                                                              == 
                                                              (0x0000003fU 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))) 
                                                             & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__2__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                           & ((~ 
                                                               (((0x0000003fU 
                                                                  & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                     >> 9U)) 
                                                                 == 
                                                                 (0x0000003fU 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))) 
                                                                & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__1__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                              & ((~ 
                                                                  (((0x0000003fU 
                                                                     & (vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__rrd_uop[4U] 
                                                                        >> 9U)) 
                                                                    == 
                                                                    (0x0000003fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))) 
                                                                   & (IData)(vlSymsp->TOP.boom_core__DOT__gen_alu__BRA__0__KET____DOT__alu_inst__DOT__wakeup_valid))) 
                                                                 & (((IData)(vlSymsp->TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__VdfgRegularize_h6e95ff9d_0_23) 
                                                                     & ((0U 
                                                                         != 
                                                                         (0x0000003fU 
                                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))) 
                                                                        & ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_24) 
                                                                           == 
                                                                           (0x0000003fU 
                                                                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))))) 
                                                                    | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_171) 
                                                                        & ((0U 
                                                                            != 
                                                                            (0x0000003fU 
                                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))) 
                                                                           & ((0x0000003fU 
                                                                               & (IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_172)) 
                                                                              == 
                                                                              (0x0000003fU 
                                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))))) 
                                                                       | (((0x2fU 
                                                                            >= 
                                                                            (0x0000003fU 
                                                                             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))) 
                                                                           && (1U 
                                                                               & (IData)(
                                                                                (vlSymsp->TOP.boom_core__DOT__rename__DOT__busytable__DOT__busy_vec 
                                                                                >> 
                                                                                (0x0000003fU 
                                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55)))))) 
                                                                          & (0U 
                                                                             != 
                                                                             (0x0000003fU 
                                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55))))))))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_103 = ((
                                                   (1U 
                                                    == 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[8U] 
                                                        >> 0x00000014U)))
                                                    ? (IData)(vlSymsp->TOP.boom_core__DOT__mem_iq_dis_ready)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (0x0000000fU 
                                                      & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[8U] 
                                                         >> 0x00000014U)))
                                                     ? (IData)(vlSymsp->TOP.boom_core__DOT__alu_iq_dis_ready)
                                                     : 
                                                    ((IData)(vlSymsp->TOP.boom_core__DOT__unq_iq_dis_ready) 
                                                     & (0x00200000U 
                                                        == 
                                                        (0x00f00000U 
                                                         & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_33[8U]))))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(vlSymsp->TOP.boom_core__DOT__rename__DOT__dec_fire)))));
}

VL_ATTR_COLD void Vboom_core_decode___ctor_var_reset(Vboom_core_decode* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vboom_core_decode___ctor_var_reset\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->inst = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9812503827101699671ull);
    vlSelf->status_prv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10252264757765211525ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->uop, __VscopeHash, 8328343100126676325ull);
    vlSelf->__PVT__instr_type = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8594760943036222762ull);
    VL_ZERO_RESET_W(313, vlSelf->__VdfgRegularize_h6e95ff9d_0_13);
    VL_ZERO_RESET_W(313, vlSelf->__VdfgRegularize_h6e95ff9d_0_16);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_23 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    VL_ZERO_RESET_W(754, vlSelf->__VdfgRegularize_h6e95ff9d_0_33);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    VL_ZERO_RESET_W(377, vlSelf->__VdfgRegularize_h6e95ff9d_0_40);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_55 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_70 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_101 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_103 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_156 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_157 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_158 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_159 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_160 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_161 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_162 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_163 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_164 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_165 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_168 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_170 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_171 = 0;
}
