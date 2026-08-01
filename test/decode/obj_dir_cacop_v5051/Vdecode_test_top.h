// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDECODE_TEST_TOP_H_
#define VERILATED_VDECODE_TEST_TOP_H_  // guard

#include "verilated.h"

class Vdecode_test_top__Syms;
class Vdecode_test_top___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vdecode_test_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vdecode_test_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&status_prv,1,0);
    VL_OUT8(&iq_type,3,0);
    VL_OUT8(&ldst,5,0);
    VL_OUT8(&lsrc1,5,0);
    VL_OUT8(&lsrc2,5,0);
    VL_OUT8(&dst_rtype,1,0);
    VL_OUT8(&lsrc1_rtype,1,0);
    VL_OUT8(&lsrc2_rtype,1,0);
    VL_OUT8(&op1_sel,1,0);
    VL_OUT8(&op2_sel,2,0);
    VL_OUT8(&fcn_op,3,0);
    VL_OUT8(&imm_sel,2,0);
    VL_OUT8(&br_type,3,0);
    VL_OUT8(&allocate_brtag,0,0);
    VL_OUT8(&is_br,0,0);
    VL_OUT8(&is_b_bl,0,0);
    VL_OUT8(&is_jirl,0,0);
    VL_OUT8(&uses_ldq,0,0);
    VL_OUT8(&uses_stq,0,0);
    VL_OUT8(&mem_cmd,4,0);
    VL_OUT8(&mem_size,1,0);
    VL_OUT8(&mem_signed,0,0);
    VL_OUT8(&is_unique,0,0);
    VL_OUT8(&is_rdcnt,0,0);
    VL_OUT8(&is_ertn,0,0);
    VL_OUT8(&flush_on_commit,0,0);
    VL_OUT8(&csr_cmd,2,0);
    VL_OUT8(&tlb_cmd,2,0);
    VL_OUT8(&exception,0,0);
    VL_OUT8(&exc_adef,0,0);
    VL_OUT16(&fu_code,9,0);
    VL_IN(&inst,31,0);
    VL_IN(&pc,31,0);
    VL_OUT(&imm_packed,25,0);
    VL_OUT(&exc_cause,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vdecode_test_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vdecode_test_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vdecode_test_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vdecode_test_top();
  private:
    VL_UNCOPYABLE(Vdecode_test_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
