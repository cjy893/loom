// LA32 (LoongArch32) reference interpreter for differential testing.
//
// Mirrors the architectural behavior of the RTL core:
//   - csr/csr_file.sv   : CSR read/write masks, reset values, exception
//                         entry/ERTN, timer countdown + timer interrupt,
//                         software interrupt, interrupt arbitration.
//   - exu/decode.sv     : instruction decode space (which encodings raise
//                         INE) and div-by-zero / overflow semantics.
//   - test/core_elf/test_core_elf.cpp : CONFREG peripheral model
//                         (NUM/SWITCH/SW_INTER/SIMU_FLAG/TIMER).
#pragma once

#include <cstdint>
#include <string>

#include "elf_image.h"

class La32Ref {
public:
    // LoongArch exception codes (common/consts_pkg.sv).
    static constexpr uint32_t ECODE_INT = 0x00;
    static constexpr uint32_t ECODE_ADE = 0x08;
    static constexpr uint32_t ECODE_ALE = 0x09;
    static constexpr uint32_t ECODE_SYS = 0x0b;
    static constexpr uint32_t ECODE_BRK = 0x0c;
    static constexpr uint32_t ECODE_INE = 0x0d;
    static constexpr uint32_t ECODE_IPE = 0x0e;

    // CSR addresses used by the NSCSCC functional tests.
    static constexpr unsigned CSR_CRMD = 0x000;
    static constexpr unsigned CSR_PRMD = 0x001;
    static constexpr unsigned CSR_EUEN = 0x002;
    static constexpr unsigned CSR_ECFG = 0x004;
    static constexpr unsigned CSR_ESTAT = 0x005;
    static constexpr unsigned CSR_ERA = 0x006;
    static constexpr unsigned CSR_BADV = 0x007;
    static constexpr unsigned CSR_BADI = 0x008;
    static constexpr unsigned CSR_EENTRY = 0x00c;
    static constexpr unsigned CSR_SAVE0 = 0x030;
    static constexpr unsigned CSR_TID = 0x040;
    static constexpr unsigned CSR_TCFG = 0x041;
    static constexpr unsigned CSR_TVAL = 0x042;
    static constexpr unsigned CSR_CNTC = 0x043;
    static constexpr unsigned CSR_TICLR = 0x044;

    struct StepResult {
        uint32_t pc = 0;        // pc of the instruction this step ran
        uint32_t inst = 0;      // fetched instruction word (0 for irq step)
        uint32_t next_pc = 0;   // architectural pc after the step
        bool gpr_write = false; // an architectural GPR was written (rd != r0)
        unsigned rd = 0;
        uint32_t wdata = 0;
        bool is_load = false;
        bool is_store = false;
        uint32_t mem_addr = 0;
        uint32_t mem_data = 0;  // store data (or raw load value)
        unsigned mem_size = 0;  // access size in bytes
        bool exception = false; // an exception (incl. interrupt) was taken
        uint32_t ecode = 0;
        uint32_t esubcode = 0;
        bool is_ertn = false;
        // Result value is not architecturally stable across models
        // (rdcnt*, csrrd of TVAL/counter, loads from the TIMER MMIO
        // register): differential compares must skip the data.
        bool data_unstable = false;
        // Source operands (for harness-side taint tracking; 32 = none).
        unsigned src1 = 32;
        unsigned src2 = 32;
        // Set for csrrd/csrwr/csrxchg (csr_addr = accessed CSR).
        bool is_csr_op = false;
        unsigned csr_addr = 0;
    };

    bool load_elf(const std::string& path, std::string* error);
    void reset();

    StepResult step();

    uint32_t pc() const { return pc_; }
    uint32_t gpr(unsigned index) const {
        return index < 32 ? gpr_[index] : 0;
    }
    uint32_t csr_read(unsigned address) const;
    uint64_t steps() const { return steps_; }
    const ElfImage& image() const { return image_; }

    // CONFREG NUM monitor (set when a store hits 0xbfaff050).
    bool num_written() const { return num_written_; }
    uint32_t num_value() const { return num_value_; }
    void clear_num_written() { num_written_ = false; }

    // Test hooks (unit checks / future lockstep driver).
    void set_pc(uint32_t value) { pc_ = value; }
    void set_gpr(unsigned index, uint32_t value);
    void poke_word(uint32_t address, uint32_t value);

    // Differential-testing hooks.
    // In external mode the countdown still runs (TVAL stays plausible) but
    // the timer interrupt is only raised via force_timer_irq(), so the
    // reference can be synchronized to the RTL's interrupt boundary.
    void set_timer_irq_external(bool external) {
        timer_irq_external_ = external;
    }
    void force_timer_irq() { timer_irq_ = true; }
    bool interrupt_pending_now() const { return interrupt_pending(); }

private:
    static constexpr uint32_t NUM_ADDRESS = 0xbfaff050U;
    static constexpr uint32_t SWITCH_ADDRESS = 0xbfaff060U;
    static constexpr uint32_t SW_INTER_ADDRESS = 0xbfaff090U;
    static constexpr uint32_t SIMU_FLAG_ADDRESS = 0xbfafff20U;
    static constexpr uint32_t TIMER_ADDRESS = 0xbfafe000U;

    static uint32_t sext(uint32_t value, unsigned bits) {
        uint32_t shift = 32 - bits;
        return static_cast<uint32_t>(
            static_cast<int32_t>(value << shift) >> shift);
    }

    static uint32_t arch_write_mask(unsigned address);
    static uint32_t merge_write(uint32_t old_value, uint32_t new_value,
                                uint32_t operand_mask, uint32_t arch_mask) {
        uint32_t mask = operand_mask & arch_mask;
        return (old_value & ~mask) | (new_value & mask);
    }

    void csr_write(unsigned address, uint32_t wdata, uint32_t wmask);
    uint32_t estat_value() const;
    bool interrupt_pending() const;
    void timer_tick();
    void raise_exception(StepResult& result, uint32_t ecode,
                         uint32_t esubcode, uint32_t badvaddr);
    void execute(StepResult& result, uint32_t inst);
    void ine(StepResult& result);

    uint8_t mem_read_byte(uint32_t address) const;
    uint32_t mem_read_word(uint32_t address) const;
    void mem_write(uint32_t address, uint32_t data, unsigned size);

    ElfImage image_;
    uint32_t gpr_[32] = {};
    uint32_t pc_ = 0;
    uint64_t steps_ = 0;

    // CSR state (mirrors csr_file.sv registers).
    uint32_t crmd_ = 0;
    uint32_t prmd_ = 0;
    uint32_t euen_ = 0;
    uint32_t ecfg_ = 0;
    uint32_t estat_ = 0;  // storage bits: IS[1:0], Ecode[21:16], EsubCode[30:22]
    uint32_t era_ = 0;
    uint32_t badv_ = 0;
    uint32_t badi_ = 0;
    uint32_t eentry_ = 0;
    uint32_t tlbidx_ = 0;
    uint32_t tlbehi_ = 0;
    uint32_t tlbelo0_ = 0;
    uint32_t tlbelo1_ = 0;
    uint32_t asid_ = 0;
    uint32_t pgdl_ = 0;
    uint32_t pgdh_ = 0;
    uint32_t save_[4] = {};
    uint32_t tid_ = 0;
    uint32_t tcfg_ = 0;
    uint32_t tval_ = 0;
    uint32_t cntc_ = 0;
    uint32_t llbctl_ = 0;
    uint32_t tlbrentry_ = 0;
    uint32_t dmw0_ = 0;
    uint32_t dmw1_ = 0;
    bool timer_irq_ = false;
    bool timer_armed_ = false;
    bool timer_irq_external_ = false;

    bool num_written_ = false;
    uint32_t num_value_ = 0;
};
