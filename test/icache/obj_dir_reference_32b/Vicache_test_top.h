// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VICACHE_TEST_TOP_H_
#define VERILATED_VICACHE_TEST_TOP_H_  // guard

#include "verilated.h"

class Vicache_test_top__Syms;
class Vicache_test_top___024root;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vicache_test_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vicache_test_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_IN8(&req_valid,0,0);
    VL_OUT8(&req_ready,0,0);
    VL_IN8(&req_cacheable,0,0);
    VL_OUT8(&resp_valid,0,0);
    VL_IN8(&resp_ready,0,0);
    VL_IN8(&maint_valid,0,0);
    VL_OUT8(&maint_ready,0,0);
    VL_IN8(&maint_mode,1,0);
    VL_IN8(&maint_all,0,0);
    VL_OUT8(&maint_done,0,0);
    VL_OUT8(&mem_req_valid,0,0);
    VL_IN8(&mem_req_ready,0,0);
    VL_OUT8(&mem_req_len,3,0);
    VL_IN8(&mem_resp_valid,0,0);
    VL_OUT8(&mem_resp_ready,0,0);
    VL_IN8(&mem_resp_last,0,0);
    VL_IN(&req_paddr,31,0);
    VL_OUTW(&resp_insts,127,0,4);
    VL_IN(&maint_vaddr,31,0);
    VL_IN(&maint_paddr,31,0);
    VL_OUT(&mem_req_addr,31,0);
    VL_IN(&mem_resp_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vicache_test_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vicache_test_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vicache_test_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vicache_test_top();
  private:
    VL_UNCOPYABLE(Vicache_test_top);  ///< Copying not allowed

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
