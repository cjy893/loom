#include "Vcore_top_contract_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <deque>
#include <map>
#include <string>
#include <vector>

namespace {

constexpr int FETCH_WIDTH = 4;
constexpr int COMMIT_WIDTH = 2;
constexpr uint32_t RESET_PC = 0x1c000000U;
constexpr uint32_t HANDLER_PC = 0x1c001000U;
constexpr uint32_t DATA_BASE = 0x00000100U;
constexpr uint32_t NOP = 0x03400000U;
constexpr uint32_t SYSCALL = 0x002b0011U;

constexpr unsigned CSR_CRMD = 0x000;
constexpr unsigned CSR_ECFG = 0x004;
constexpr unsigned CSR_EENTRY = 0x00c;
constexpr unsigned ECODE_SYS = 11;

constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t lu12i_w(unsigned rd, unsigned imm20) {
    return 0x14000000U | ((imm20 & 0xfffffU) << 5) |
           (rd & 0x1fU);
}

constexpr uint32_t ori(unsigned rd, unsigned rj, unsigned imm12) {
    return 0x03800000U | ((imm12 & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t csr(unsigned rd, unsigned rj, unsigned addr) {
    return 0x04000000U | ((addr & 0x3fffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t csrwr(unsigned rd, unsigned addr) {
    return csr(rd, 1, addr);
}

constexpr uint32_t mem_i12(uint32_t opcode, unsigned rd,
                           unsigned rj, int imm12) {
    return opcode |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t ld_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28800000U, rd, rj, imm12);
}

constexpr uint32_t st_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29800000U, rd, rj, imm12);
}

constexpr uint32_t branch_i16(uint32_t opcode, unsigned rj,
                              unsigned rd, int byte_offset) {
    unsigned imm16 =
        static_cast<unsigned>(byte_offset >> 2) & 0xffffU;
    return opcode | (imm16 << 10) | ((rj & 0x1fU) << 5) |
           (rd & 0x1fU);
}

constexpr uint32_t beq(unsigned rj, unsigned rd, int byte_offset) {
    return branch_i16(0x58000000U, rj, rd, byte_offset);
}

constexpr uint32_t b(int byte_offset) {
    unsigned imm26 =
        static_cast<unsigned>(byte_offset >> 2) & 0x03ffffffU;
    return 0x50000000U | ((imm26 & 0xffffU) << 10) |
           (imm26 >> 16);
}

static_assert(beq(4, 5, 8) == 0x58000885U);
static_assert(csrwr(10, CSR_EENTRY) == 0x0400302aU);

using Program = std::map<uint32_t, uint32_t>;

uint32_t packed_word(uint64_t value, int lane) {
    return static_cast<uint32_t>(value >> (lane * 32));
}

bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

bool check_eq(const std::string& name, uint32_t actual,
              uint32_t expected) {
    if (actual == expected)
        return true;
    std::fprintf(stderr,
                 "FAIL: %s: got=0x%08x expected=0x%08x\n",
                 name.c_str(), actual, expected);
    return false;
}

void tick(Vcore_top_contract_test_top* dut) {
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void reset(Vcore_top_contract_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->imem_req_ready = 0;
    dut->imem_resp_valid = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_is_store = 0;
    dut->dmem_resp_data = 0;
    dut->dmem_resp_idx = 0;
    dut->hw_irq = 0;
    dut->ipi_irq = 0;
    for (int lane = 0; lane < FETCH_WIDTH; ++lane)
        dut->imem_resp_insts[lane] = NOP;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

class ImemModel {
public:
    ImemModel(const Program& program, bool stress)
        : program_(program), stress_(stress) {}

    void drive(Vcore_top_contract_test_top* dut, int cycle) {
        dut->imem_req_ready =
            !stress_ || (cycle >= 3 && cycle % 7 != 4);

        if (pending_ && !response_active_ && cycle >= due_cycle_)
            response_active_ = true;

        dut->imem_resp_valid = response_active_;
        for (int lane = 0; lane < FETCH_WIDTH; ++lane)
            dut->imem_resp_insts[lane] = response_[lane];
    }

    void advance(bool request_fire, uint32_t request_addr,
                 bool response_fire, int cycle) {
        if (response_fire) {
            response_active_ = false;
            pending_ = false;
        }

        if (!request_fire)
            return;

        if (pending_) {
            protocol_ok_ = false;
            return;
        }

        pending_ = true;
        due_cycle_ = cycle + 2;
        for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
            uint32_t pc = request_addr + 4U * lane;
            auto it = program_.find(pc);
            response_[lane] =
                it == program_.end() ? NOP : it->second;
        }
    }

    bool protocol_ok() const { return protocol_ok_; }

private:
    const Program& program_;
    bool stress_ = false;
    bool pending_ = false;
    bool response_active_ = false;
    bool protocol_ok_ = true;
    int due_cycle_ = 0;
    std::array<uint32_t, FETCH_WIDTH> response_{};
};

struct DmemResponse {
    int due_cycle = 0;
    bool is_store = false;
    uint32_t data = 0;
    unsigned idx = 0;
};

class DmemModel {
public:
    explicit DmemModel(bool stress) : stress_(stress) {
        bytes_.fill(0);
    }

    void initialize_word(uint32_t address, uint32_t data) {
        write(address, data, 0xf);
    }

    void drive(Vcore_top_contract_test_top* dut, int cycle) {
        dut->dmem_req_ready =
            !stress_ || (cycle >= 80 && cycle % 5 != 1);

        dut->dmem_resp_valid = 0;
        dut->dmem_resp_is_store = 0;
        dut->dmem_resp_data = 0;
        dut->dmem_resp_idx = 0;
        if (responses_.empty() ||
            responses_.front().due_cycle > cycle) {
            return;
        }

        const DmemResponse& response = responses_.front();
        dut->dmem_resp_valid = 1;
        dut->dmem_resp_is_store = response.is_store;
        dut->dmem_resp_data = response.data;
        dut->dmem_resp_idx = response.idx;
    }

    void accept(Vcore_top_contract_test_top* dut, int cycle) {
        uint32_t address = dut->dmem_req_addr;
        bool is_store = dut->dmem_req_is_store;
        uint32_t response_data = 0;

        if (is_store) {
            ++stores_;
            write(address, dut->dmem_req_data,
                  dut->dmem_req_mask);
        } else {
            ++loads_;
            response_data = read_word(address);
        }

        responses_.push_back({
            cycle + 3,
            is_store,
            response_data,
            static_cast<unsigned>(dut->dmem_req_idx),
        });
    }

    void consume_response(bool response_valid) {
        if (response_valid)
            responses_.pop_front();
    }

    uint32_t read_word(uint32_t address) const {
        uint32_t base = address & ~3U;
        uint32_t value = 0;
        for (unsigned byte = 0; byte < 4; ++byte) {
            value |=
                static_cast<uint32_t>(
                    bytes_[(base + byte) % bytes_.size()])
                << (8 * byte);
        }
        return value;
    }

    unsigned loads() const { return loads_; }
    unsigned stores() const { return stores_; }

private:
    void write(uint32_t address, uint32_t data, unsigned mask) {
        uint32_t base = address & ~3U;
        for (unsigned byte = 0; byte < 4; ++byte) {
            if (!(mask & (1U << byte)))
                continue;
            bytes_[(base + byte) % bytes_.size()] =
                static_cast<uint8_t>(data >> (8 * byte));
        }
    }

    bool stress_ = false;
    std::array<uint8_t, 4096> bytes_{};
    std::deque<DmemResponse> responses_;
    unsigned loads_ = 0;
    unsigned stores_ = 0;
};

class RequestStabilityMonitor {
public:
    void observe(Vcore_top_contract_test_top* dut) {
        if (hold_imem_) {
            protocol_ok_ &=
                dut->imem_req_valid &&
                dut->imem_req_addr == imem_addr_;
        }

        if (hold_dmem_) {
            protocol_ok_ &=
                dut->dmem_req_valid &&
                dut->dmem_req_is_store == dmem_is_store_ &&
                dut->dmem_req_addr == dmem_addr_ &&
                dut->dmem_req_data == dmem_data_ &&
                dut->dmem_req_mask == dmem_mask_ &&
                dut->dmem_req_size == dmem_size_ &&
                dut->dmem_req_idx == dmem_idx_;
        }

        hold_imem_ =
            dut->imem_req_valid && !dut->imem_req_ready;
        if (hold_imem_) {
            saw_imem_stall_ = true;
            imem_addr_ = dut->imem_req_addr;
        }

        hold_dmem_ =
            dut->dmem_req_valid && !dut->dmem_req_ready;
        if (hold_dmem_) {
            saw_dmem_stall_ = true;
            dmem_is_store_ = dut->dmem_req_is_store;
            dmem_addr_ = dut->dmem_req_addr;
            dmem_data_ = dut->dmem_req_data;
            dmem_mask_ = dut->dmem_req_mask;
            dmem_size_ = dut->dmem_req_size;
            dmem_idx_ = dut->dmem_req_idx;
        }
    }

    bool protocol_ok() const { return protocol_ok_; }
    bool saw_imem_stall() const { return saw_imem_stall_; }
    bool saw_dmem_stall() const { return saw_dmem_stall_; }

private:
    bool protocol_ok_ = true;
    bool hold_imem_ = false;
    bool hold_dmem_ = false;
    bool saw_imem_stall_ = false;
    bool saw_dmem_stall_ = false;
    uint32_t imem_addr_ = 0;
    bool dmem_is_store_ = false;
    uint32_t dmem_addr_ = 0;
    uint32_t dmem_data_ = 0;
    unsigned dmem_mask_ = 0;
    unsigned dmem_size_ = 0;
    unsigned dmem_idx_ = 0;
};

struct CommitRecord {
    int cycle = 0;
    uint32_t pc = 0;
    uint32_t inst = 0;
    unsigned ldst = 0;
};

struct ExceptionRecord {
    int cycle = 0;
    uint32_t pc = 0;
    uint32_t inst = 0;
    uint32_t cause = 0;
    uint32_t badvaddr = 0;
};

struct Scenario {
    Program program;
    uint32_t signature_addr = 0;
    uint32_t signature_value = 0;
    uint32_t initial_data_addr = 0;
    uint32_t initial_data_value = 0;
    uint32_t irq_trigger_pc = 0;
    bool stress = false;
};

struct RunResult {
    bool finished = false;
    bool protocol_ok = true;
    bool saw_imem_stall = false;
    bool saw_dmem_stall = false;
    bool irq_asserted = false;
    bool handler_fetch_seen = false;
    unsigned loads = 0;
    unsigned stores = 0;
    uint32_t data_word = 0;
    uint32_t signature_word = 0;
    uint32_t guard_word = 0;
    std::vector<CommitRecord> commits;
    std::vector<ExceptionRecord> exceptions;
};

RunResult run_scenario(Vcore_top_contract_test_top* dut,
                       const Scenario& scenario) {
    reset(dut);
    ImemModel imem(scenario.program, scenario.stress);
    DmemModel dmem(scenario.stress);
    if (scenario.initial_data_addr != 0) {
        dmem.initialize_word(scenario.initial_data_addr,
                             scenario.initial_data_value);
    }
    RequestStabilityMonitor stability;
    RunResult result;

    for (int cycle = 0; cycle < 4000; ++cycle) {
        imem.drive(dut, cycle);
        dmem.drive(dut, cycle);
        dut->eval();
        stability.observe(dut);

        bool imem_request_fire =
            dut->imem_req_valid && dut->imem_req_ready;
        uint32_t imem_request_addr = dut->imem_req_addr;
        bool imem_response_fire =
            dut->imem_resp_valid && dut->imem_resp_ready;
        bool dmem_request_fire =
            dut->dmem_req_valid && dut->dmem_req_ready;
        bool dmem_response_valid = dut->dmem_resp_valid;

        if (imem_request_fire &&
            dut->imem_req_addr == HANDLER_PC) {
            result.handler_fetch_seen = true;
            if (result.irq_asserted)
                dut->hw_irq = 0;
        }

        unsigned commit_mask = dut->commit_valid;
        for (int lane = 0; lane < COMMIT_WIDTH; ++lane) {
            if (!(commit_mask & (1U << lane)))
                continue;
            CommitRecord commit{
                cycle,
                packed_word(dut->commit_pc, lane),
                packed_word(dut->commit_inst, lane),
                static_cast<unsigned>(
                    (dut->commit_ldst >> (lane * 5)) & 0x1fU),
            };
            result.commits.push_back(commit);
            if (!result.irq_asserted &&
                scenario.irq_trigger_pc != 0 &&
                commit.pc == scenario.irq_trigger_pc) {
                result.irq_asserted = true;
                dut->hw_irq = 1;
            }
        }

        if (dut->exception_valid) {
            result.exceptions.push_back({
                cycle,
                dut->exception_pc,
                dut->exception_inst,
                dut->exception_cause,
                dut->exception_badvaddr,
            });
        }

        dut->eval();
        if (dmem_request_fire)
            dmem.accept(dut, cycle);
        tick(dut);

        dmem.consume_response(dmem_response_valid);
        imem.advance(imem_request_fire, imem_request_addr,
                     imem_response_fire, cycle);

        if (dmem.read_word(scenario.signature_addr) ==
            scenario.signature_value) {
            result.finished = true;
            break;
        }
    }

    result.protocol_ok =
        stability.protocol_ok() && imem.protocol_ok();
    result.saw_imem_stall = stability.saw_imem_stall();
    result.saw_dmem_stall = stability.saw_dmem_stall();
    result.loads = dmem.loads();
    result.stores = dmem.stores();
    result.data_word = dmem.read_word(DATA_BASE);
    result.signature_word =
        dmem.read_word(scenario.signature_addr);
    result.guard_word = dmem.read_word(DATA_BASE + 12);

    dut->hw_irq = 0;
    dut->ipi_irq = 0;
    dut->eval();
    return result;
}

bool has_commit(const RunResult& result, uint32_t pc) {
    for (const auto& commit : result.commits) {
        if (commit.pc == pc)
            return true;
    }
    return false;
}

Program basic_program() {
    Program program;
    program[RESET_PC + 0] = addi_w(1, 0, DATA_BASE);
    program[RESET_PC + 4] = addi_w(2, 0, 5);
    program[RESET_PC + 8] = st_w(2, 1, 0);
    program[RESET_PC + 12] = ld_w(3, 1, 0);
    program[RESET_PC + 16] = addi_w(4, 3, 7);
    program[RESET_PC + 20] = addi_w(5, 0, 12);
    program[RESET_PC + 24] = beq(4, 5, 8);
    program[RESET_PC + 28] = addi_w(6, 0, 0x33);
    program[RESET_PC + 32] = addi_w(6, 0, 0x5a);
    program[RESET_PC + 36] = ld_w(7, 1, 16);
    program[RESET_PC + 40] = addi_w(7, 7, 1);
    program[RESET_PC + 44] = st_w(7, 1, 4);
    program[RESET_PC + 48] = b(0);
    return program;
}

bool test_basic(Vcore_top_contract_test_top* dut, bool stress) {
    Scenario scenario{
        basic_program(),
        DATA_BASE + 4,
        0x21,
        DATA_BASE + 16,
        0x20,
        0,
        stress,
    };
    RunResult result = run_scenario(dut, scenario);
    std::string prefix = stress ? "backpressure" : "basic";
    bool passed = true;

    passed &= check(prefix + " reaches signature", result.finished);
    passed &= check(prefix + " interface protocol",
                    result.protocol_ok);
    passed &= check_eq(prefix + " store/load value",
                       result.data_word, 5);
    passed &= check_eq(prefix + " signature",
                       result.signature_word, 0x21);
    passed &= check(prefix + " issues a load", result.loads >= 1);
    passed &= check(prefix + " issues both stores",
                    result.stores >= 2);
    passed &= check(prefix + " commits branch target",
                    has_commit(result, RESET_PC + 32));
    passed &= check(prefix + " kills wrong-path instruction",
                    !has_commit(result, RESET_PC + 28));
    passed &= check(prefix + " has no exception",
                    result.exceptions.empty());

    if (stress) {
        passed &= check("backpressure stalls imem request",
                        result.saw_imem_stall);
        passed &= check("backpressure stalls dmem request",
                        result.saw_dmem_stall);
    }

    if (passed)
        std::printf("PASS: core_top %s execution\n",
                    stress ? "backpressure" : "basic");
    return passed;
}

Program exception_program() {
    Program program;
    program[RESET_PC + 0] =
        lu12i_w(10, HANDLER_PC >> 12);
    program[RESET_PC + 4] =
        ori(10, 10, HANDLER_PC & 0xfff);
    program[RESET_PC + 8] = csrwr(10, CSR_EENTRY);
    program[RESET_PC + 12] = addi_w(1, 0, DATA_BASE);
    program[RESET_PC + 16] = addi_w(2, 0, 0x33);
    program[RESET_PC + 20] = SYSCALL;
    program[RESET_PC + 24] = st_w(2, 1, 12);

    program[HANDLER_PC + 0] = addi_w(3, 0, 0x77);
    program[HANDLER_PC + 4] = st_w(3, 1, 8);
    program[HANDLER_PC + 8] = b(0);
    return program;
}

bool test_exception(Vcore_top_contract_test_top* dut) {
    Scenario scenario{
        exception_program(),
        DATA_BASE + 8,
        0x77,
        0,
        0,
        0,
        false,
    };
    RunResult result = run_scenario(dut, scenario);
    bool passed = true;

    passed &= check("exception reaches handler signature",
                    result.finished);
    passed &= check("exception interface protocol",
                    result.protocol_ok);
    passed &= check("exception fetches handler",
                    result.handler_fetch_seen);
    passed &= check("exception reports exactly one event",
                    result.exceptions.size() == 1);
    if (!result.exceptions.empty()) {
        const ExceptionRecord& exception =
            result.exceptions.front();
        passed &= check_eq("exception PC", exception.pc,
                           RESET_PC + 20);
        passed &= check_eq("exception instruction",
                           exception.inst, SYSCALL);
        passed &= check_eq("exception cause",
                           exception.cause, ECODE_SYS);
    }
    passed &= check("faulting instruction does not commit",
                    !has_commit(result, RESET_PC + 20));
    passed &= check("younger store does not commit",
                    !has_commit(result, RESET_PC + 24));
    passed &= check_eq("younger store has no side effect",
                       result.guard_word, 0);

    if (passed)
        std::printf("PASS: core_top precise exception boundary\n");
    return passed;
}

Program interrupt_program() {
    Program program;
    program[RESET_PC + 0] =
        lu12i_w(10, HANDLER_PC >> 12);
    program[RESET_PC + 4] =
        ori(10, 10, HANDLER_PC & 0xfff);
    program[RESET_PC + 8] = csrwr(10, CSR_EENTRY);
    program[RESET_PC + 12] = addi_w(11, 0, 1U << 2);
    program[RESET_PC + 16] = csrwr(11, CSR_ECFG);
    program[RESET_PC + 20] = addi_w(12, 0, 0x0c);
    program[RESET_PC + 24] = csrwr(12, CSR_CRMD);
    program[RESET_PC + 28] = addi_w(1, 0, 1);
    program[RESET_PC + 32] = addi_w(1, 1, 1);
    program[RESET_PC + 36] = b(-4);

    program[HANDLER_PC + 0] = addi_w(4, 0, DATA_BASE);
    program[HANDLER_PC + 4] = addi_w(5, 0, 0x66);
    program[HANDLER_PC + 8] = st_w(5, 4, 8);
    program[HANDLER_PC + 12] = b(0);
    return program;
}

bool test_interrupt(Vcore_top_contract_test_top* dut) {
    Scenario scenario{
        interrupt_program(),
        DATA_BASE + 8,
        0x66,
        0,
        0,
        RESET_PC + 32,
        false,
    };
    RunResult result = run_scenario(dut, scenario);
    bool passed = true;

    passed &= check("interrupt trigger instruction commits",
                    result.irq_asserted);
    passed &= check("interrupt reaches handler signature",
                    result.finished);
    passed &= check("interrupt interface protocol",
                    result.protocol_ok);
    passed &= check("interrupt fetches handler",
                    result.handler_fetch_seen);
    passed &= check_eq("interrupt handler signature",
                       result.signature_word, 0x66);

    if (passed)
        std::printf("PASS: core_top hardware interrupt boundary\n");
    return passed;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_top_contract_test_top;

    bool passed = true;
    passed &= test_basic(dut, false);
    passed &= test_basic(dut, true);
    passed &= test_exception(dut);
    passed &= test_interrupt(dut);

    delete dut;
    if (!passed)
        return 1;

    std::printf("PASS: core_top contract\n");
    return 0;
}
