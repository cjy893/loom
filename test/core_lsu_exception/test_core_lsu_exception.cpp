#include "Vcore_lsu_exception_test_top.h"
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

static constexpr unsigned CSR_CRMD = 0x000;
static constexpr unsigned CSR_ESTAT = 0x005;
static constexpr unsigned CSR_ERA = 0x006;
static constexpr unsigned CSR_BADV = 0x007;
static constexpr unsigned CSR_BADI = 0x008;
static constexpr unsigned CSR_EENTRY = 0x00c;

static constexpr unsigned ECODE_ALE = 9;
static constexpr unsigned FT_XCPT = 1;

static constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t lu12i_w(unsigned rd, unsigned imm20) {
    return 0x14000000U | ((imm20 & 0xfffffU) << 5) |
           (rd & 0x1fU);
}

static constexpr uint32_t ori(unsigned rd, unsigned rj,
                              unsigned imm12) {
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

static constexpr uint32_t mem_i12(uint32_t opcode, unsigned rd,
                                  unsigned rj, int imm12) {
    return opcode |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t ld_h(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28400000U, rd, rj, imm12);
}

static constexpr uint32_t ld_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28800000U, rd, rj, imm12);
}

static constexpr uint32_t st_h(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29400000U, rd, rj, imm12);
}

static constexpr uint32_t st_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29800000U, rd, rj, imm12);
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
    std::fprintf(stderr,
                 "FAIL: %s: got=0x%08x expected=0x%08x\n",
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
    uint64_t mask =
        width == 32 ? 0xffffffffULL : ((uint64_t{1} << width) - 1);
    return static_cast<unsigned>((chunk >> shift) & mask);
}

static unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) &
           ((1U << width) - 1U);
}

static uint32_t packed_word(uint64_t value, int index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

using Program = std::map<uint32_t, uint32_t>;

struct CommitRecord {
    int cycle = -1;
    uint32_t pc = 0;
};

struct ExceptionRecord {
    int cycle = -1;
    uint32_t pc = 0;
    uint32_t inst = 0;
    uint32_t cause = 0;
    uint32_t badvaddr = 0;
};

struct RedirectRecord {
    int cycle = -1;
    uint32_t pc = 0;
    unsigned flush_typ = 0;
};

struct Request {
    int cycle = -1;
    bool is_store = false;
    uint32_t addr = 0;
    uint32_t data = 0;
    unsigned mask = 0;
    unsigned size = 0;
    unsigned idx = 0;
};

struct Response {
    int due_cycle = 0;
    bool is_store = false;
    uint32_t data = 0;
    unsigned idx = 0;
};

struct RunResult {
    bool finished = false;
    std::vector<CommitRecord> commits;
    std::vector<ExceptionRecord> exceptions;
    std::vector<RedirectRecord> redirects;
    std::vector<Request> requests;
    std::array<unsigned, 32> write_count{};
    std::array<uint32_t, 32> last_write{};
};

class DmemModel {
public:
    static constexpr unsigned MEMORY_SIZE = 4096;

    std::array<uint8_t, MEMORY_SIZE> bytes{};
    std::vector<Response> responses;
    int driven_response = -1;

    void clear() {
        bytes.fill(0);
        responses.clear();
        driven_response = -1;
    }

    uint32_t read_word(uint32_t addr) const {
        uint32_t base = addr & ~3U;
        uint32_t value = 0;
        for (unsigned byte = 0; byte < 4; ++byte) {
            value |= static_cast<uint32_t>(
                         bytes[(base + byte) % MEMORY_SIZE])
                     << (8 * byte);
        }
        return value;
    }

    void write_word(uint32_t addr, uint32_t value) {
        uint32_t base = addr & ~3U;
        for (unsigned byte = 0; byte < 4; ++byte) {
            bytes[(base + byte) % MEMORY_SIZE] =
                static_cast<uint8_t>(value >> (8 * byte));
        }
    }

    bool drive_response(Vcore_lsu_exception_test_top* dut,
                        int cycle) {
        dut->dmem_resp_valid = 0;
        dut->dmem_resp_is_store = 0;
        dut->dmem_resp_data = 0;
        dut->dmem_resp_idx = 0;
        driven_response = -1;

        for (int i = 0; i < static_cast<int>(responses.size()); ++i) {
            if (responses[i].due_cycle > cycle)
                continue;
            if (driven_response < 0 ||
                responses[i].due_cycle <
                    responses[driven_response].due_cycle) {
                driven_response = i;
            }
        }
        if (driven_response < 0)
            return false;

        const Response& response = responses[driven_response];
        dut->dmem_resp_valid = 1;
        dut->dmem_resp_is_store = response.is_store;
        dut->dmem_resp_data = response.data;
        dut->dmem_resp_idx = response.idx;
        return true;
    }

    void accept(const Request& request) {
        uint32_t response_data = 0;
        if (request.is_store) {
            uint32_t base = request.addr & ~3U;
            for (unsigned byte = 0; byte < 4; ++byte) {
                if (request.mask & (1U << byte)) {
                    bytes[(base + byte) % MEMORY_SIZE] =
                        static_cast<uint8_t>(
                            request.data >> (8 * byte));
                }
            }
        } else {
            response_data = read_word(request.addr);
        }

        responses.push_back({
            request.cycle + 3,
            request.is_store,
            response_data,
            request.idx,
        });
    }

    void consume_response(bool drove_response) {
        if (!drove_response)
            return;
        responses.erase(responses.begin() + driven_response);
        driven_response = -1;
    }
};

static void tick(Vcore_lsu_exception_test_top* dut) {
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

static void reset(Vcore_lsu_exception_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_is_store = 0;
    dut->dmem_resp_data = 0;
    dut->dmem_resp_idx = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

static bool has_instruction_at(const Program& program, uint32_t pc) {
    return program.find(pc) != program.end();
}

static bool drive_fetch(Vcore_lsu_exception_test_top* dut,
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

static Request sample_request(
    Vcore_lsu_exception_test_top* dut, int cycle) {
    return {
        cycle,
        static_cast<bool>(dut->dmem_req_is_store),
        dut->dmem_req_addr,
        dut->dmem_req_data,
        static_cast<unsigned>(dut->dmem_req_mask),
        static_cast<unsigned>(dut->dmem_req_size),
        static_cast<unsigned>(dut->dmem_req_idx),
    };
}

static RunResult run_program(Vcore_lsu_exception_test_top* dut,
                             const Program& program,
                             DmemModel* memory) {
    reset(dut);
    RunResult result;
    int last_activity = 0;

    for (int cycle = 0; cycle < 1200; ++cycle) {
        dut->dmem_req_ready = 1;
        bool drove_response = memory->drive_response(dut, cycle);
        if (drive_fetch(dut, program))
            last_activity = cycle;

        for (int lane = 0; lane < CORE_WIDTH; ++lane) {
            if (!(dut->commit_valids & (1U << lane)))
                continue;
            result.commits.push_back({
                cycle,
                packed_word(dut->commit_pcs, lane),
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
                dut->exception_badvaddr,
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

        bool request_fire =
            dut->dmem_req_valid && dut->dmem_req_ready;
        if (request_fire) {
            Request request = sample_request(dut, cycle);
            result.requests.push_back(request);
            memory->accept(request);
            last_activity = cycle;
        }
        if (drove_response)
            last_activity = cycle;

        tick(dut);
        memory->consume_response(drove_response);

        bool source_finished =
            !has_instruction_at(program, dut->debug_pc);
        if (source_finished && dut->rob_empty &&
            dut->ldq_empty && dut->stq_empty &&
            memory->responses.empty() &&
            cycle - last_activity > 20) {
            result.finished = true;
            break;
        }
    }

    dut->fe_valid = 0;
    dut->dmem_resp_valid = 0;
    dut->eval();
    return result;
}

static bool has_commit(const RunResult& result, uint32_t pc) {
    for (const CommitRecord& commit : result.commits) {
        if (commit.pc == pc)
            return true;
    }
    return false;
}

static int commit_cycle(const RunResult& result, uint32_t pc) {
    for (const CommitRecord& commit : result.commits) {
        if (commit.pc == pc)
            return commit.cycle;
    }
    return -1;
}

static bool has_redirect(const RunResult& result, uint32_t pc,
                         unsigned flush_typ) {
    for (const RedirectRecord& redirect : result.redirects) {
        if (redirect.pc == pc &&
            redirect.flush_typ == flush_typ) {
            return true;
        }
    }
    return false;
}

static void add_setup(Program* program) {
    (*program)[RESET_PC + 0] =
        lu12i_w(10, HANDLER_PC >> 12);
    (*program)[RESET_PC + 4] =
        ori(10, 10, HANDLER_PC & 0xfff);
    (*program)[RESET_PC + 8] = csrwr(10, CSR_EENTRY);
    (*program)[RESET_PC + 12] = addi_w(1, 0, 0x100);
    (*program)[RESET_PC + 16] = addi_w(2, 0, 0x321);
}

static void add_handler(Program* program) {
    (*program)[HANDLER_PC + 0] = csrrd(20, CSR_ERA);
    (*program)[HANDLER_PC + 4] = csrrd(21, CSR_ESTAT);
    (*program)[HANDLER_PC + 8] = csrrd(22, CSR_BADV);
    (*program)[HANDLER_PC + 12] = csrrd(23, CSR_BADI);
    (*program)[HANDLER_PC + 16] = csrrd(24, CSR_CRMD);
    (*program)[HANDLER_PC + 20] = NOP;
}

static void print_diagnostic(const char* tag,
                             const RunResult& result) {
    std::fprintf(
        stderr,
        "%s diagnostic: exceptions=%zu requests=%zu commits=%zu\n",
        tag, result.exceptions.size(), result.requests.size(),
        result.commits.size());
    for (const ExceptionRecord& exception : result.exceptions) {
        std::fprintf(
            stderr,
            "  xcpt cycle=%d pc=0x%08x inst=0x%08x "
            "cause=%u badv=0x%08x\n",
            exception.cycle, exception.pc, exception.inst,
            exception.cause, exception.badvaddr);
    }
    for (const Request& request : result.requests) {
        std::fprintf(
            stderr,
            "  dmem cycle=%d %s addr=0x%08x mask=0x%x size=%u\n",
            request.cycle,
            request.is_store ? "store" : "load",
            request.addr, request.mask, request.size);
    }
}

static bool test_ale(Vcore_lsu_exception_test_top* dut,
                     const char* tag, uint32_t fault_inst,
                     uint32_t fault_addr, bool is_store) {
    const uint32_t older_pc = RESET_PC + 20;
    const uint32_t fault_pc = RESET_PC + 24;
    const uint32_t younger_pc = RESET_PC + 28;

    Program program;
    add_setup(&program);
    program[older_pc] = addi_w(3, 0, 7);
    program[fault_pc] = fault_inst;
    program[younger_pc] = addi_w(5, 0, 99);
    add_handler(&program);

    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0xdeadbeef);

    RunResult result = run_program(dut, program, &memory);
    std::string prefix = tag;
    bool passed = true;

    passed &= check(prefix + " reaches handler quiescence",
                    result.finished &&
                    has_commit(result, HANDLER_PC + 20));
    passed &= check(prefix + " throws exactly one exception",
                    result.exceptions.size() == 1);
    if (!result.exceptions.empty()) {
        const ExceptionRecord& exception =
            result.exceptions.front();
        passed &= check_eq(prefix + " exception PC",
                           exception.pc, fault_pc);
        passed &= check_eq(prefix + " exception instruction",
                           exception.inst, fault_inst);
        passed &= check_eq(prefix + " exception cause",
                           exception.cause, ECODE_ALE);
        passed &= check_eq(prefix + " exception BADV payload",
                           exception.badvaddr, fault_addr);
        int older_cycle = commit_cycle(result, older_pc);
        passed &= check(prefix + " older instruction commits first",
                        older_cycle >= 0 &&
                        older_cycle < exception.cycle);
    }

    passed &= check(prefix + " redirects to EENTRY",
                    has_redirect(result, HANDLER_PC, FT_XCPT));
    passed &= check(prefix + " faulting instruction does not commit",
                    !has_commit(result, fault_pc));
    passed &= check(prefix + " younger instruction does not commit",
                    !has_commit(result, younger_pc));
    passed &= check(prefix + " emits no DMem request",
                    result.requests.empty());

    if (!is_store) {
        passed &= check(prefix + " load destination is not written",
                        result.write_count[4] == 0);
    } else {
        passed &= check_eq(prefix + " store has no side effect",
                           memory.read_word(0x100), 0xdeadbeef);
    }

    passed &= check_eq(prefix + " handler reads ERA",
                       result.last_write[20], fault_pc);
    passed &= check_eq(prefix + " handler reads ESTAT.ECODE",
                       (result.last_write[21] >> 16) & 0x3f,
                       ECODE_ALE);
    passed &= check_eq(prefix + " handler reads BADV",
                       result.last_write[22], fault_addr);
    passed &= check_eq(prefix + " handler reads BADI",
                       result.last_write[23], fault_inst);
    passed &= check_eq(prefix + " exception enters PLV0/IE0",
                       result.last_write[24] & 0x7, 0);

    if (!passed)
        print_diagnostic(tag, result);
    else
        std::printf("PASS: %s precise ALE exception\n", tag);
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_lsu_exception_test_top;

    bool passed = true;
    passed &= test_ale(
        dut, "misaligned ld.h", ld_h(4, 1, 1), 0x101, false);
    passed &= test_ale(
        dut, "misaligned ld.w", ld_w(4, 1, 2), 0x102, false);
    passed &= test_ale(
        dut, "misaligned st.h", st_h(2, 1, 1), 0x101, true);
    passed &= test_ale(
        dut, "misaligned st.w", st_w(2, 1, 2), 0x102, true);

    dut->final();
    delete dut;

    if (passed)
        std::printf("PASS: core_lsu_exception\n");
    return passed ? 0 : 1;
}
