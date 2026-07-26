#include "Vcore_interrupt_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <map>
#include <string>
#include <vector>

static constexpr int CORE_WIDTH = 2;
static constexpr uint32_t RESET_PC = 0x1c000000;
static constexpr uint32_t HANDLER_PC = 0x1c001000;
static constexpr uint32_t NOP = 0x03400000;
static constexpr uint32_t ERTN = 0x06483800;

static constexpr unsigned CSR_CRMD = 0x000;
static constexpr unsigned CSR_PRMD = 0x001;
static constexpr unsigned CSR_ECFG = 0x004;
static constexpr unsigned CSR_ESTAT = 0x005;
static constexpr unsigned CSR_ERA = 0x006;
static constexpr unsigned CSR_BADI = 0x008;
static constexpr unsigned CSR_EENTRY = 0x00c;

static constexpr unsigned CRMD_DA = 1U << 3;
static constexpr unsigned CRMD_IE = 1U << 2;
static constexpr unsigned HW_IRQ0_LIE = 1U << 2;
static constexpr unsigned ECODE_INT = 0;

static constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t lu12i_w(unsigned rd, unsigned imm20) {
    return 0x14000000U | ((imm20 & 0xfffffU) << 5) |
           (rd & 0x1fU);
}

static constexpr uint32_t ori(unsigned rd, unsigned rj, unsigned imm12) {
    return 0x03800000U | ((imm12 & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t csr(unsigned rd, unsigned rj,
                              unsigned addr) {
    return 0x04000000U | ((addr & 0x3fffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t csrrd(unsigned rd, unsigned addr) {
    return csr(rd, 0, addr);
}

static constexpr uint32_t csrwr(unsigned rd, unsigned addr) {
    return csr(rd, 1, addr);
}

static bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

static bool check_eq(const std::string& name, uint32_t actual,
                     uint32_t expected) {
    if (actual == expected)
        return true;
    std::fprintf(stderr, "FAIL: %s: got=0x%08x expected=0x%08x\n",
                 name.c_str(), actual, expected);
    return false;
}

static unsigned packed_field(const VlWide<5>& value, int index,
                             int width) {
    unsigned bit = static_cast<unsigned>(index * width);
    unsigned word = bit / 32;
    unsigned shift = bit % 32;
    uint64_t chunk = value[word];
    if (shift + width > 32)
        chunk |= static_cast<uint64_t>(value[word + 1]) << 32;
    return static_cast<unsigned>(
        (chunk >> shift) & ((uint64_t{1} << width) - 1));
}

static unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) & ((1U << width) - 1U);
}

static uint32_t packed_word(uint64_t value, int index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

struct CommitRecord {
    int cycle;
    uint32_t pc;
    uint32_t inst;
};

struct RedirectRecord {
    int cycle;
    uint32_t pc;
    unsigned flush_typ;
};

struct RunResult {
    bool finished = false;
    bool pending_seen = false;
    unsigned pending_bits = 0;
    bool irq_asserted = false;
    bool irq_asserted_with_younger_uops = false;
    int irq_assert_cycle = -1;
    unsigned irq_assert_rob_occupancy = 0;
    unsigned committed_before_irq = 0;
    int handler_cycle = -1;
    std::vector<CommitRecord> commits;
    std::vector<CommitRecord> commits_before_handler;
    std::vector<RedirectRecord> redirects;
    std::array<uint32_t, 32> last_write{};
    std::array<unsigned, 32> write_count{};
    unsigned final_plv = 0;
    bool final_ie = false;
    uint32_t final_era = 0;
    uint32_t final_eentry = 0;
};

using Program = std::map<uint32_t, uint32_t>;

struct IrqControl {
    uint8_t initial_hw_irq = 0;
    bool clear_at_handler = false;
    uint32_t trigger_begin_pc = 0;
    uint32_t trigger_end_pc = 0;
    unsigned trigger_after_commits = 0;
};

static void tick(Vcore_interrupt_test_top* dut) {
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

static void reset(Vcore_interrupt_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    dut->hw_irq = 0;
    dut->ipi_irq = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

static bool drive_fetch(Vcore_interrupt_test_top* dut,
                        const Program& program) {
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    uint32_t first_pc = dut->debug_pc;
    for (int lane = 0; lane < CORE_WIDTH; ++lane) {
        auto it = program.find(first_pc + 4U * lane);
        if (it == program.end())
            continue;
        dut->fe_valid |= 1U << lane;
        dut->fe_insts[lane] = it->second;
    }

    dut->eval();
    return dut->fe_ready && dut->fe_valid != 0;
}

static bool has_instruction_at(const Program& program, uint32_t pc) {
    return program.find(pc) != program.end();
}

static RunResult run_program(Vcore_interrupt_test_top* dut,
                             const Program& program,
                             const IrqControl& irq) {
    reset(dut);
    dut->hw_irq = irq.initial_hw_irq;
    dut->eval();

    RunResult result;
    int last_activity = 0;
    bool clear_irq_after_tick = false;
    unsigned completed_trigger_commits = 0;

    for (int cycle = 0; cycle < 2000; ++cycle) {
        if (drive_fetch(dut, program))
            last_activity = cycle;

        if (dut->interrupt_pending) {
            result.pending_seen = true;
            result.pending_bits |= dut->interrupt_pending_bits;
        }

        unsigned commit_mask = dut->commit_valids;
        unsigned trigger_commits_this_cycle = 0;
        unsigned commits_this_cycle = 0;
        for (int lane = 0; lane < CORE_WIDTH; ++lane) {
            if (!(commit_mask & (1U << lane)))
                continue;
            ++commits_this_cycle;
            CommitRecord commit{
                cycle,
                packed_word(dut->commit_pcs, lane),
                packed_word(dut->commit_insts, lane),
            };
            result.commits.push_back(commit);
            if (result.handler_cycle < 0)
                result.commits_before_handler.push_back(commit);
            if (commit.pc >= irq.trigger_begin_pc &&
                commit.pc < irq.trigger_end_pc)
                ++trigger_commits_this_cycle;
            last_activity = cycle;
        }

        bool delayed_irq =
            irq.trigger_after_commits != 0 &&
            !result.irq_asserted &&
            completed_trigger_commits >= irq.trigger_after_commits;
        if (delayed_irq &&
            dut->rob_occupancy > commits_this_cycle) {
            result.irq_asserted = true;
            result.irq_assert_cycle = cycle;
            result.irq_assert_rob_occupancy = dut->rob_occupancy;
            result.committed_before_irq = completed_trigger_commits;
            result.irq_asserted_with_younger_uops = true;
            dut->hw_irq = 1;
            dut->eval();
            last_activity = cycle;
        }

        unsigned write_mask = dut->rf_write_valid;
        for (int port = 0; port < 5; ++port) {
            if (!(write_mask & (1U << port)))
                continue;
            unsigned ldst =
                packed_field(dut->rf_write_ldst, port, 5);
            if (ldst == 0)
                continue;
            ++result.write_count[ldst];
            result.last_write[ldst] =
                packed_field(dut->rf_write_data, port, 32);
            last_activity = cycle;
        }

        if (dut->redirect_valid) {
            result.redirects.push_back({
                cycle,
                dut->redirect_pc,
                dut->redirect_flush_typ,
            });
            if (dut->redirect_pc == HANDLER_PC &&
                result.handler_cycle < 0) {
                result.handler_cycle = cycle;
                if (irq.clear_at_handler)
                    clear_irq_after_tick = true;
            }
            last_activity = cycle;
        }

        tick(dut);
        completed_trigger_commits += trigger_commits_this_cycle;
        if (clear_irq_after_tick) {
            dut->hw_irq = 0;
            dut->eval();
            clear_irq_after_tick = false;
        }

        bool source_finished =
            !has_instruction_at(program, dut->debug_pc);
        if (source_finished && dut->rob_empty &&
            cycle - last_activity > 20) {
            result.finished = true;
            break;
        }
    }

    result.final_plv = dut->csr_current_plv;
    result.final_ie = dut->csr_current_ie;
    result.final_era = dut->csr_era;
    result.final_eentry = dut->csr_eentry;

    dut->fe_valid = 0;
    dut->hw_irq = 0;
    dut->ipi_irq = 0;
    dut->eval();
    return result;
}

static bool has_redirect(const RunResult& result, uint32_t pc) {
    for (const auto& redirect : result.redirects) {
        if (redirect.pc == pc)
            return true;
    }
    return false;
}

static unsigned redirect_count(const RunResult& result, uint32_t pc) {
    unsigned count = 0;
    for (const auto& redirect : result.redirects) {
        if (redirect.pc == pc)
            ++count;
    }
    return count;
}

static bool has_redirect_after(const RunResult& result, uint32_t pc,
                               int cycle) {
    for (const auto& redirect : result.redirects) {
        if (redirect.pc == pc && redirect.cycle > cycle)
            return true;
    }
    return false;
}

static unsigned commit_count(const std::vector<CommitRecord>& commits,
                             uint32_t pc) {
    unsigned count = 0;
    for (const auto& commit : commits) {
        if (commit.pc == pc)
            ++count;
    }
    return count;
}

static void add_eentry_setup(Program* program) {
    (*program)[RESET_PC + 0] =
        lu12i_w(10, HANDLER_PC >> 12);
    (*program)[RESET_PC + 4] =
        ori(10, 10, HANDLER_PC & 0xfff);
    (*program)[RESET_PC + 8] =
        csrwr(10, CSR_EENTRY);
}

static bool test_global_interrupt_mask(Vcore_interrupt_test_top* dut) {
    Program program;
    add_eentry_setup(&program);
    program[RESET_PC + 12] = addi_w(11, 0, HW_IRQ0_LIE);
    program[RESET_PC + 16] = csrwr(11, CSR_ECFG);
    program[RESET_PC + 20] = addi_w(1, 0, 7);
    program[RESET_PC + 24] = addi_w(2, 0, 9);
    program[RESET_PC + 28] = NOP;

    RunResult result =
        run_program(dut, program, {.initial_hw_irq = 1});
    bool passed = true;
    passed &= check("IE=0 run reaches quiescence", result.finished);
    passed &= check("IE=0 keeps interrupt non-pending",
                    !result.pending_seen);
    passed &= check("IE=0 does not redirect to EENTRY",
                    !has_redirect(result, HANDLER_PC));
    passed &= check_eq("IE=0 older body result", result.last_write[1], 7);
    passed &= check_eq("IE=0 younger body result", result.last_write[2], 9);

    if (passed)
        std::printf("PASS: global interrupt mask\n");
    return passed;
}

static bool test_local_interrupt_mask(Vcore_interrupt_test_top* dut) {
    Program program;
    add_eentry_setup(&program);
    program[RESET_PC + 12] =
        addi_w(12, 0, CRMD_DA | CRMD_IE);
    program[RESET_PC + 16] = csrwr(12, CSR_CRMD);
    program[RESET_PC + 20] = addi_w(1, 0, 11);
    program[RESET_PC + 24] = addi_w(2, 0, 13);
    program[RESET_PC + 28] = NOP;

    RunResult result =
        run_program(dut, program, {.initial_hw_irq = 1});
    bool passed = true;
    passed &= check("ECFG=0 run reaches quiescence", result.finished);
    passed &= check("ECFG=0 keeps interrupt non-pending",
                    !result.pending_seen);
    passed &= check("ECFG=0 does not redirect to EENTRY",
                    !has_redirect(result, HANDLER_PC));
    passed &= check_eq("ECFG=0 older body result", result.last_write[1], 11);
    passed &= check_eq("ECFG=0 younger body result", result.last_write[2], 13);

    if (passed)
        std::printf("PASS: local interrupt mask\n");
    return passed;
}

static bool test_precise_interrupt_and_ertn(
    Vcore_interrupt_test_top* dut) {
    Program program;
    add_eentry_setup(&program);
    program[RESET_PC + 12] = addi_w(11, 0, HW_IRQ0_LIE);
    program[RESET_PC + 16] = csrwr(11, CSR_ECFG);
    program[RESET_PC + 20] =
        addi_w(12, 0, CRMD_DA | CRMD_IE);
    program[RESET_PC + 24] = csrwr(12, CSR_CRMD);

    const uint32_t body_start = RESET_PC + 28;
    const unsigned body_instructions = 12;
    for (unsigned i = 0; i < body_instructions; ++i) {
        unsigned source = i == 0 ? 0 : i;
        program[body_start + 4U * i] =
            addi_w(1 + i, source, 1);
    }

    program[HANDLER_PC + 0] = csrrd(20, CSR_ERA);
    program[HANDLER_PC + 4] = csrrd(21, CSR_ESTAT);
    program[HANDLER_PC + 8] = csrrd(22, CSR_CRMD);
    program[HANDLER_PC + 12] = csrrd(23, CSR_PRMD);
    program[HANDLER_PC + 16] = csrrd(24, CSR_BADI);
    program[HANDLER_PC + 20] = ERTN;

    uint32_t body_end = body_start + 4U * body_instructions;
    RunResult result = run_program(
        dut, program,
        {
            .initial_hw_irq = 0,
            .clear_at_handler = true,
            .trigger_begin_pc = body_start,
            .trigger_end_pc = body_end,
            .trigger_after_commits = 2,
        });
    bool passed = true;
    passed &= check("delayed IRQ is asserted", result.irq_asserted);
    passed &= check("IRQ arrives after body instructions commit",
                    result.committed_before_irq >= 2);
    passed &= check("IRQ arrives with younger uops still in ROB",
                    result.irq_asserted_with_younger_uops);
    passed &= check("enabled IRQ reaches CSR pending",
                    result.pending_seen);
    passed &= check("enabled IRQ reports hardware line 0",
                    (result.pending_bits & HW_IRQ0_LIE) != 0);
    passed &= check("enabled IRQ redirects exactly once to EENTRY",
                    redirect_count(result, HANDLER_PC) == 1);

    if (result.handler_cycle < 0) {
        std::fprintf(
            stderr,
            "INT diagnostic: CSR interrupt_pending asserted, but "
            "boom_core produced no EENTRY redirect\n");
        return false;
    }

    passed &= check("interrupt/ERTN run reaches quiescence",
                    result.finished);
    passed &= check_eq("interrupt handler reads ESTAT.ECODE",
                       (result.last_write[21] >> 16) & 0x3f,
                       ECODE_INT);
    passed &= check_eq("interrupt handler sees CRMD.PLV/IE cleared",
                       result.last_write[22] & 0x7, 0);
    passed &= check_eq("interrupt handler reads saved PRMD.PPLV/PIE",
                       result.last_write[23] & 0x7, CRMD_IE);
    passed &= check_eq("interrupt does not overwrite BADI",
                       result.last_write[24], 0);

    uint32_t era = result.last_write[20];
    bool era_in_body =
        era >= body_start && era < body_end && (era & 3U) == 0;
    passed &= check("interrupt ERA is a main-program boundary",
                    era_in_body);

    if (era_in_body) {
        for (uint32_t pc = body_start; pc < body_end; pc += 4) {
            unsigned before =
                commit_count(result.commits_before_handler, pc);
            unsigned total = commit_count(result.commits, pc);
            if (pc < era)
                passed &= check("instruction older than ERA commits before IRQ",
                                before == 1);
            else
                passed &= check("instruction at/after ERA waits for ERTN",
                                before == 0);
            passed &= check("main instruction commits exactly once",
                            total == 1);
        }
        passed &= check("ERTN redirects back to ERA",
                        has_redirect_after(
                            result, era, result.handler_cycle));
    }

    passed &= check("ERTN instruction commits",
                    commit_count(result.commits, HANDLER_PC + 20) == 1);
    passed &= check_eq("ERTN restores PLV0", result.final_plv, 0);
    passed &= check("ERTN restores interrupt enable", result.final_ie);

    if (passed)
        std::printf("PASS: precise interrupt and ERTN round trip\n");
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_interrupt_test_top;

    bool passed = true;
    passed &= test_global_interrupt_mask(dut);
    passed &= test_local_interrupt_mask(dut);
    passed &= test_precise_interrupt_and_ertn(dut);

    dut->final();
    delete dut;

    if (passed)
        std::printf("PASS: core_interrupt\n");
    return passed ? 0 : 1;
}
