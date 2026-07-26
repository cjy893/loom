#include "Vcore_exception_test_top.h"
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
static constexpr uint32_t SYSCALL = 0x002b0011;
static constexpr uint32_t BREAK = 0x002a0000;
static constexpr uint32_t ILLEGAL = 0xffffffff;

static constexpr unsigned CSR_CRMD = 0x000;
static constexpr unsigned CSR_PRMD = 0x001;
static constexpr unsigned CSR_ESTAT = 0x005;
static constexpr unsigned CSR_ERA = 0x006;
static constexpr unsigned CSR_BADI = 0x008;
static constexpr unsigned CSR_EENTRY = 0x00c;

static constexpr unsigned ECODE_SYS = 11;
static constexpr unsigned ECODE_BRK = 12;
static constexpr unsigned ECODE_INE = 13;

static constexpr unsigned FT_NONE = 0;
static constexpr unsigned FT_XCPT = 1;
static constexpr unsigned FT_ERET = 3;

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

static constexpr uint32_t beq(unsigned rj, unsigned rd,
                              int byte_offset) {
    return 0x58000000U |
           ((static_cast<unsigned>(byte_offset >> 2) & 0xffffU) << 10) |
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

static_assert(csrrd(12, CSR_ERA) == 0x0400180cU);
static_assert(csrwr(12, CSR_ERA) == 0x0400182cU);

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

struct CommitRecord {
    int cycle;
    uint32_t pc;
    uint32_t inst;
    unsigned rob_idx;
};

struct ExceptionRecord {
    int cycle;
    uint32_t pc;
    uint32_t inst;
    uint32_t cause;
};

struct RedirectRecord {
    int cycle;
    uint32_t pc;
    unsigned flush_typ;
};

struct RunResult {
    bool finished = false;
    std::vector<CommitRecord> commits;
    std::vector<ExceptionRecord> exceptions;
    std::vector<RedirectRecord> redirects;
    std::array<uint32_t, 32> last_write{};
    std::array<unsigned, 32> write_count{};
    unsigned final_plv = 0;
    bool final_ie = false;
    uint32_t final_era = 0;
    uint32_t final_eentry = 0;
};

using Program = std::map<uint32_t, uint32_t>;

static void tick(Vcore_exception_test_top* dut) {
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

static void reset(Vcore_exception_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

static bool drive_fetch(Vcore_exception_test_top* dut,
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

static RunResult run_program(Vcore_exception_test_top* dut,
                             const Program& program,
                             int stop_after_exceptions = 0) {
    reset(dut);
    RunResult result;
    int last_activity = 0;

    for (int cycle = 0; cycle < 1500; ++cycle) {
        if (drive_fetch(dut, program))
            last_activity = cycle;

        unsigned commit_mask = dut->commit_valids;
        for (int lane = 0; lane < CORE_WIDTH; ++lane) {
            if (!(commit_mask & (1U << lane)))
                continue;
            result.commits.push_back({
                cycle,
                packed_word(dut->commit_pcs, lane),
                packed_word(dut->commit_insts, lane),
                packed_field(dut->commit_rob_idx, lane, 6),
            });
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

        if (dut->exception_valid) {
            result.exceptions.push_back({
                cycle,
                dut->exception_pc,
                dut->exception_inst,
                dut->exception_cause,
            });
            last_activity = cycle;
        }

        if (dut->redirect_valid) {
            result.redirects.push_back({
                cycle,
                dut->redirect_pc,
                dut->redirect_flush_typ,
            });
            last_activity = cycle;
        }

        tick(dut);

        if (stop_after_exceptions > 0 &&
            static_cast<int>(result.exceptions.size()) >=
                stop_after_exceptions)
            break;

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
    dut->eval();
    return result;
}

static bool has_commit(const RunResult& result, uint32_t pc) {
    for (const auto& commit : result.commits) {
        if (commit.pc == pc)
            return true;
    }
    return false;
}

static int commit_cycle(const RunResult& result, uint32_t pc) {
    for (const auto& commit : result.commits) {
        if (commit.pc == pc)
            return commit.cycle;
    }
    return -1;
}

static bool has_redirect(const RunResult& result, unsigned flush_typ,
                         uint32_t pc) {
    for (const auto& redirect : result.redirects) {
        if (redirect.flush_typ == flush_typ && redirect.pc == pc)
            return true;
    }
    return false;
}

static void add_exception_setup(Program* program) {
    (*program)[RESET_PC + 0] =
        lu12i_w(10, HANDLER_PC >> 12);
    (*program)[RESET_PC + 4] =
        ori(10, 10, HANDLER_PC & 0xfff);
    (*program)[RESET_PC + 8] =
        csrwr(10, CSR_EENTRY);

    // Enter user mode with interrupts enabled. Exception entry must save
    // PLV3/IE1 in PRMD and restore CRMD to PLV0/IE0.
    (*program)[RESET_PC + 12] = addi_w(11, 0, 0x0f);
    (*program)[RESET_PC + 16] = csrwr(11, CSR_CRMD);
}

static void add_exception_handler_reads(Program* program) {
    (*program)[HANDLER_PC + 0] = csrrd(20, CSR_ERA);
    (*program)[HANDLER_PC + 4] = csrrd(21, CSR_ESTAT);
    (*program)[HANDLER_PC + 8] = csrrd(22, CSR_BADI);
    (*program)[HANDLER_PC + 12] = csrrd(23, CSR_CRMD);
    (*program)[HANDLER_PC + 16] = csrrd(24, CSR_PRMD);
}

static bool test_synchronous_exception(
    Vcore_exception_test_top* dut, const char* tag, uint32_t fault_inst,
    unsigned expected_cause) {
    Program program;
    add_exception_setup(&program);

    uint32_t older_pc = RESET_PC + 20;
    uint32_t fault_pc = RESET_PC + 24;
    uint32_t younger_pc = RESET_PC + 28;
    program[older_pc] = addi_w(1, 0, 7);
    program[fault_pc] = fault_inst;
    program[younger_pc] = addi_w(2, 0, 99);
    add_exception_handler_reads(&program);

    RunResult result = run_program(dut, program);
    std::string prefix = tag;
    bool passed = true;

    passed &= check(prefix + " reaches handler quiescence",
                    result.finished);
    passed &= check(prefix + " throws exactly one exception",
                    result.exceptions.size() == 1);
    if (!result.exceptions.empty()) {
        const auto& exception = result.exceptions.front();
        passed &= check_eq(prefix + " exception PC",
                           exception.pc, fault_pc);
        passed &= check_eq(prefix + " exception instruction",
                           exception.inst, fault_inst);
        passed &= check_eq(prefix + " exception cause",
                           exception.cause, expected_cause);
        int older_commit_cycle = commit_cycle(result, older_pc);
        passed &= check(prefix + " older instruction commits first",
                        older_commit_cycle >= 0 &&
                        older_commit_cycle < exception.cycle);
    }

    passed &= check(prefix + " redirects to EENTRY",
                    has_redirect(result, FT_XCPT, HANDLER_PC));
    passed &= check_eq(prefix + " EENTRY state",
                       result.final_eentry, HANDLER_PC);
    passed &= check_eq(prefix + " ERA state",
                       result.final_era, fault_pc);
    passed &= check(prefix + " faulting instruction does not commit",
                    !has_commit(result, fault_pc));
    passed &= check(prefix + " younger instruction does not commit",
                    !has_commit(result, younger_pc));

    passed &= check_eq(prefix + " handler reads ERA",
                       result.last_write[20], fault_pc);
    passed &= check_eq(prefix + " handler reads ESTAT.ECODE",
                       (result.last_write[21] >> 16) & 0x3f,
                       expected_cause);
    passed &= check_eq(prefix + " handler reads BADI",
                       result.last_write[22], fault_inst);
    passed &= check_eq(prefix + " exception CRMD.PLV/IE",
                       result.last_write[23] & 0x7, 0);
    passed &= check_eq(prefix + " saved PRMD.PPLV/PIE",
                       result.last_write[24] & 0x7, 0x7);

    if (passed)
        std::printf("PASS: %s precise exception and CSR state\n", tag);
    return passed;
}

static bool test_wrong_path_exception(
    Vcore_exception_test_top* dut) {
    Program program;
    program[RESET_PC + 0] = addi_w(1, 0, 1);
    program[RESET_PC + 4] = addi_w(2, 0, 1);
    program[RESET_PC + 8] = beq(1, 2, 8);
    program[RESET_PC + 12] = ILLEGAL;
    program[RESET_PC + 16] = addi_w(3, 0, 9);
    program[RESET_PC + 20] = NOP;

    RunResult result = run_program(dut, program);
    bool passed = true;
    passed &= check("wrong-path exception reaches quiescence",
                    result.finished);
    passed &= check("wrong-path exception is killed",
                    result.exceptions.empty());
    passed &= check("wrong-path illegal instruction does not commit",
                    !has_commit(result, RESET_PC + 12));
    passed &= check("branch redirects to the target",
                    has_redirect(result, FT_NONE, RESET_PC + 16));
    passed &= check_eq("branch target executes",
                       result.last_write[3], 9);

    if (passed)
        std::printf("PASS: wrong-path exception suppression\n");
    return passed;
}

static bool test_exception_ertn_round_trip(
    Vcore_exception_test_top* dut) {
    Program program;
    add_exception_setup(&program);

    uint32_t fault_pc = RESET_PC + 20;
    uint32_t return_pc = fault_pc + 4;
    program[fault_pc] = SYSCALL;
    program[return_pc] = addi_w(5, 0, 9);
    program[return_pc + 4] = NOP;

    program[HANDLER_PC + 0] = csrrd(20, CSR_ERA);
    program[HANDLER_PC + 4] = addi_w(20, 20, 4);
    program[HANDLER_PC + 8] = csrwr(20, CSR_ERA);
    program[HANDLER_PC + 12] = ERTN;

    // A missing ERTN implementation turns ERTN into INE and re-enters the
    // handler. Stop at the second exception so the failure is immediate.
    RunResult result = run_program(dut, program, 2);
    bool passed = true;
    passed &= check("ERTN round trip reaches quiescence",
                    result.finished);
    if (result.exceptions.size() > 1) {
        const auto& unexpected = result.exceptions[1];
        std::fprintf(
            stderr,
            "ERTN diagnostic: second exception pc=0x%08x "
            "inst=0x%08x cause=%u\n",
            unexpected.pc, unexpected.inst, unexpected.cause);
    }
    passed &= check("ERTN round trip has only the original exception",
                    result.exceptions.size() == 1);
    passed &= check("ERTN redirects to updated ERA",
                    has_redirect(result, FT_ERET, return_pc));
    passed &= check("ERTN instruction commits",
                    has_commit(result, HANDLER_PC + 12));
    passed &= check_eq("ERTN resumes at the return instruction",
                       result.last_write[5], 9);
    passed &= check_eq("ERTN restores PLV3",
                       result.final_plv, 3);
    passed &= check("ERTN restores interrupt enable",
                    result.final_ie);

    if (passed)
        std::printf("PASS: exception and ERTN round trip\n");
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_exception_test_top;

    bool passed = true;
    passed &= test_synchronous_exception(
        dut, "syscall", SYSCALL, ECODE_SYS);
    passed &= test_synchronous_exception(
        dut, "break", BREAK, ECODE_BRK);
    passed &= test_synchronous_exception(
        dut, "illegal", ILLEGAL, ECODE_INE);
    passed &= test_wrong_path_exception(dut);
    passed &= test_exception_ertn_round_trip(dut);

    dut->final();
    delete dut;

    if (passed)
        std::printf("PASS: core_exception\n");
    return passed ? 0 : 1;
}
