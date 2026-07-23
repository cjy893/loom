// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vboom_core.h for the primary calling header

#ifndef VERILATED_VBOOM_CORE_LOOM_TYPES_H_
#define VERILATED_VBOOM_CORE_LOOM_TYPES_H_  // guard

#include "verilated.h"
#include "Vboom_core_loom_types.h"


class Vboom_core__Syms;
struct Vboom_core_commit_signal_t__struct__0 {
    CData/*1:0*/ __PVT__valids;
    CData/*1:0*/ __PVT__arch_valids;
    VlWide<24>/*753:0*/ __PVT__uops;
    CData/*5:0*/ __PVT__fflags;
    QData/*63:0*/ __PVT__debug_insts;
    QData/*63:0*/ __PVT__debug_wdata;

    bool operator==(const Vboom_core_commit_signal_t__struct__0& rhs) const {
        return __PVT__valids == rhs.__PVT__valids
            && __PVT__arch_valids == rhs.__PVT__arch_valids
            && __PVT__uops == rhs.__PVT__uops
            && __PVT__fflags == rhs.__PVT__fflags
            && __PVT__debug_insts == rhs.__PVT__debug_insts
            && __PVT__debug_wdata == rhs.__PVT__debug_wdata;
    }
    bool operator!=(const Vboom_core_commit_signal_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vboom_core_commit_signal_t__struct__0& rhs) const {
        if (__PVT__valids < rhs.__PVT__valids) return true;
        if (rhs.__PVT__valids < __PVT__valids) return false;
        if (__PVT__arch_valids < rhs.__PVT__arch_valids) return true;
        if (rhs.__PVT__arch_valids < __PVT__arch_valids) return false;
        if (__PVT__uops < rhs.__PVT__uops) return true;
        if (rhs.__PVT__uops < __PVT__uops) return false;
        if (__PVT__fflags < rhs.__PVT__fflags) return true;
        if (rhs.__PVT__fflags < __PVT__fflags) return false;
        if (__PVT__debug_insts < rhs.__PVT__debug_insts) return true;
        if (rhs.__PVT__debug_insts < __PVT__debug_insts) return false;
        if (__PVT__debug_wdata < rhs.__PVT__debug_wdata) return true;
        if (rhs.__PVT__debug_wdata < __PVT__debug_wdata) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vboom_core_commit_signal_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vboom_core_loom_types final {
  public:

    // INTERNAL VARIABLES
    Vboom_core__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vboom_core_loom_types();
    ~Vboom_core_loom_types();
    void ctor(Vboom_core__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vboom_core_loom_types);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
