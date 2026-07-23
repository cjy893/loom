// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboom_core.h for the primary calling header

#include "Vboom_core__pch.h"

VL_ATTR_COLD void Vboom_core_issue_slot___ctor_var_reset(Vboom_core_issue_slot* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vboom_core_issue_slot___ctor_var_reset\n"); );
    Vboom_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->request = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16104405464408049176ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->iss_uop, __VscopeHash, 6014080055895868135ull);
    vlSelf->in_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2339549897027650563ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->in_uop, __VscopeHash, 3343380101857548836ull);
    vlSelf->in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1122049356863891575ull);
    vlSelf->wakeup_valid = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1365023594416796541ull);
    vlSelf->wakeup_pdst = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 8685798821636643213ull);
    vlSelf->grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 741988092961692266ull);
    vlSelf->kill = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10303986350005360185ull);
    vlSelf->clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11731883408449213572ull);
    VL_SCOPED_RAND_RESET_W(458, vlSelf->brupdate, __VscopeHash, 7814892391684968899ull);
    vlSelf->__PVT__slot_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1010482398075811156ull);
    VL_SCOPED_RAND_RESET_W(377, vlSelf->__PVT__slot_uop, __VscopeHash, 318902613381652940ull);
    vlSelf->__PVT__killed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 627043590168114060ull);
}
