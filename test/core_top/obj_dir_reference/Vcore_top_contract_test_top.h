// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCORE_TOP_CONTRACT_TEST_TOP_H_
#define VERILATED_VCORE_TOP_CONTRACT_TEST_TOP_H_  // guard

#include "verilated.h"

class Vcore_top_contract_test_top__Syms;
class Vcore_top_contract_test_top___024root;
#include "Vcore_top_contract_test_top_loom_types.h"


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vcore_top_contract_test_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcore_top_contract_test_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst_n,0,0);
    VL_OUT8(&imem_req_valid,0,0);
    VL_IN8(&imem_req_ready,0,0);
    VL_IN8(&imem_resp_valid,0,0);
    VL_OUT8(&imem_resp_ready,0,0);
    VL_OUT8(&dmem_req_valid,0,0);
    VL_IN8(&dmem_req_ready,0,0);
    VL_OUT8(&dmem_req_is_store,0,0);
    VL_OUT8(&dmem_req_mask,3,0);
    VL_OUT8(&dmem_req_size,1,0);
    VL_OUT8(&dmem_req_idx,5,0);
    VL_IN8(&dmem_resp_valid,0,0);
    VL_IN8(&dmem_resp_is_store,0,0);
    VL_IN8(&dmem_resp_idx,5,0);
    VL_IN8(&hw_irq,7,0);
    VL_IN8(&ipi_irq,0,0);
    VL_OUT8(&commit_valid,1,0);
    VL_OUT16(&commit_ldst,9,0);
    VL_OUT8(&exception_valid,0,0);
    VL_OUT(&imem_req_addr,31,0);
    VL_INW(&imem_resp_insts,127,0,4);
    VL_OUT(&dmem_req_addr,31,0);
    VL_OUT(&dmem_req_data,31,0);
    VL_IN(&dmem_resp_data,31,0);
    VL_OUT64(&commit_pc,63,0);
    VL_OUT64(&commit_inst,63,0);
    VL_OUT(&exception_pc,31,0);
    VL_OUT(&exception_inst,31,0);
    VL_OUT(&exception_cause,31,0);
    VL_OUT(&exception_badvaddr,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vcore_top_contract_test_top_loom_types* const __PVT__loom_types;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcore_top_contract_test_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcore_top_contract_test_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcore_top_contract_test_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcore_top_contract_test_top();
  private:
    VL_UNCOPYABLE(Vcore_top_contract_test_top);  ///< Copying not allowed

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
