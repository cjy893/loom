// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vboom_core__pch.h"

Vboom_core__Syms::Vboom_core__Syms(VerilatedContext* contextp, const char* namep, Vboom_core* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(6296);
    // Setup sub module instances
    TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.ctor(this, "boom_core.gen_decode[0].decode_inst");
    TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.ctor(this, "boom_core.gen_decode[1].decode_inst");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst = &TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst;
    TOP.__PVT__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst = &TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.__Vconfigure(true);
    TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.__Vconfigure(false);
}

Vboom_core__Syms::~Vboom_core__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__boom_core__DOT__gen_decode__BRA__1__KET____DOT__decode_inst.dtor();
    TOP__boom_core__DOT__gen_decode__BRA__0__KET____DOT__decode_inst.dtor();
}
