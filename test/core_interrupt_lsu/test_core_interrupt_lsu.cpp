#include "Vcore_interrupt_lsu_test_top.h"
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
static constexpr unsigned CSR_ECFG = 0x004;
static constexpr unsigned CSR_ERA = 0x006;
static constexpr unsigned CSR_EENTRY = 0x00c;

static constexpr unsigned CRMD_DA = 1U << 3;
static constexpr unsigned CRMD_IE = 1U << 2;
static constexpr unsigned HW_IRQ0_LIE = 1U << 2;

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

static constexpr uint32_t ld_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28800000U, rd, rj, imm12);
}

static constexpr uint32_t st_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29800000U, rd, rj, imm12);
}

static constexpr uint32_t beq(unsigned rj, unsigned rd,
                              unsigned byte_offset) {
    return 0x58000000U |
           (((byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
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

struct Request {
    bool is_store = false;
    uint32_t addr = 0;
    uint32_t data = 0;
    unsigned mask = 0;
    unsigned size = 0;
    unsigned idx = 0;
    unsigned ldst = 0;
    unsigned rob_idx = 0;
    int cycle = -1;
};

struct Response {
    int due_cycle = 0;
    bool is_store = false;
    uint32_t data = 0;
    unsigned idx = 0;
};

struct Trace {
    std::vector<uint32_t> commits;
    std::vector<Request> requests;
    std::array<unsigned, 32> write_count{};
    std::array<uint32_t, 32> last_write{};
};

class DmemModel {
public:
    static constexpr unsigned MEMORY_SIZE = 4096;

    std::array<uint8_t, MEMORY_SIZE> bytes{};
    std::vector<Response> responses;
    int load_latency = 3;
    int store_latency = 3;
    int driven_response = -1;

    void clear() {
        bytes.fill(0);
        responses.clear();
        load_latency = 3;
        store_latency = 3;
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

    bool drive_response(Vcore_interrupt_lsu_test_top* dut,
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
            request.cycle +
                (request.is_store ? store_latency : load_latency),
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

static void tick(Vcore_interrupt_lsu_test_top* dut) {
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

static void reset(Vcore_interrupt_lsu_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    dut->hw_irq = 0;
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

static void drive_fetch(Vcore_interrupt_lsu_test_top* dut,
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
}

static Request sample_request(
    Vcore_interrupt_lsu_test_top* dut, int cycle) {
    return {
        static_cast<bool>(dut->dmem_req_is_store),
        dut->dmem_req_addr,
        dut->dmem_req_data,
        static_cast<unsigned>(dut->dmem_req_mask),
        static_cast<unsigned>(dut->dmem_req_size),
        static_cast<unsigned>(dut->dmem_req_idx),
        static_cast<unsigned>(dut->dmem_req_ldst),
        static_cast<unsigned>(dut->dmem_req_rob_idx),
        cycle,
    };
}

static void observe(Vcore_interrupt_lsu_test_top* dut,
                    Trace* trace) {
    for (int lane = 0; lane < CORE_WIDTH; ++lane) {
        if (dut->commit_valids & (1U << lane))
            trace->commits.push_back(
                packed_word(dut->commit_pcs, lane));
    }

    unsigned write_mask = dut->rf_write_valid;
    for (int port = 0; port < 5; ++port) {
        if (!(write_mask & (1U << port)))
            continue;
        unsigned ldst =
            packed_field(dut->rf_write_ldst, port, 5);
        if (ldst == 0)
            continue;
        ++trace->write_count[ldst];
        trace->last_write[ldst] =
            packed_field(dut->rf_write_data, port, 32);
    }
}

static unsigned commit_count(const Trace& trace, uint32_t pc) {
    unsigned count = 0;
    for (uint32_t commit_pc : trace.commits)
        count += commit_pc == pc;
    return count;
}

static unsigned request_count(const Trace& trace, bool is_store) {
    unsigned count = 0;
    for (const Request& request : trace.requests)
        count += request.is_store == is_store;
    return count;
}

static void add_interrupt_setup(Program* program) {
    (*program)[RESET_PC + 0] = addi_w(1, 0, 0x100);
    (*program)[RESET_PC + 4] = addi_w(2, 0, 0x321);
    (*program)[RESET_PC + 8] =
        lu12i_w(10, HANDLER_PC >> 12);
    (*program)[RESET_PC + 12] =
        ori(10, 10, HANDLER_PC & 0xfff);
    (*program)[RESET_PC + 16] = csrwr(10, CSR_EENTRY);
    (*program)[RESET_PC + 20] =
        addi_w(11, 0, HW_IRQ0_LIE);
    (*program)[RESET_PC + 24] = csrwr(11, CSR_ECFG);
    (*program)[RESET_PC + 28] =
        addi_w(12, 0, CRMD_DA | CRMD_IE);
    (*program)[RESET_PC + 32] = csrwr(12, CSR_CRMD);
}

static void add_nonreturning_handler(Program* program) {
    (*program)[HANDLER_PC + 0] = csrrd(20, CSR_ERA);
    (*program)[HANDLER_PC + 4] = addi_w(21, 0, 1);
    (*program)[HANDLER_PC + 8] = NOP;
}

static bool test_interrupt_kills_uncommitted_memory(
    Vcore_interrupt_lsu_test_top* dut) {
    const uint32_t load_pc = RESET_PC + 36;
    const uint32_t store_pc = RESET_PC + 40;

    Program program;
    add_interrupt_setup(&program);
    program[load_pc] = ld_w(3, 1, 4);
    program[store_pc] = st_w(2, 1, 0);
    program[RESET_PC + 44] = addi_w(4, 0, 1);
    add_nonreturning_handler(&program);

    DmemModel memory;
    memory.clear();
    memory.load_latency = 60;
    memory.write_word(0x100, 0xdeadbeef);
    memory.write_word(0x104, 0xcafebabe);

    reset(dut);
    Trace trace;
    bool load_accepted = false;
    bool irq_asserted = false;
    bool interrupt_taken = false;
    bool handler_seen = false;
    bool late_response_seen = false;
    int handler_cycle = -1;
    int response_cycle = -1;
    int last_activity = 0;

    for (int cycle = 0; cycle < 1000; ++cycle) {
        dut->dmem_req_ready = 1;
        bool drove_response = memory.drive_response(dut, cycle);
        drive_fetch(dut, program);

        if (!irq_asserted && load_accepted &&
            dut->stq_uncommitted_ready) {
            irq_asserted = true;
            dut->hw_irq = 1;
            dut->eval();
            interrupt_taken = dut->interrupt_taken;
            last_activity = cycle;
        }

        if (dut->redirect_valid &&
            dut->redirect_pc == HANDLER_PC) {
            handler_seen = true;
            handler_cycle = cycle;
            last_activity = cycle;
        }

        observe(dut, &trace);

        bool request_fire =
            dut->dmem_req_valid && dut->dmem_req_ready;
        if (request_fire) {
            Request request = sample_request(dut, cycle);
            trace.requests.push_back(request);
            memory.accept(request);
            load_accepted |= !request.is_store;
            last_activity = cycle;
        }

        if (drove_response) {
            late_response_seen = true;
            response_cycle = cycle;
            last_activity = cycle;
        }

        tick(dut);
        memory.consume_response(drove_response);

        if (handler_seen && dut->hw_irq != 0) {
            dut->hw_irq = 0;
            dut->eval();
        }

        if (handler_seen && late_response_seen &&
            dut->rob_empty && dut->ldq_empty && dut->stq_empty &&
            memory.responses.empty() &&
            cycle - last_activity > 20) {
            break;
        }
    }

    bool passed = true;
    passed &= check("uncommitted-memory IRQ is asserted",
                    irq_asserted);
    passed &= check("uncommitted-memory IRQ is taken",
                    interrupt_taken);
    passed &= check("uncommitted-memory handler is reached",
                    handler_seen);
    passed &= check("IRQ trigger sees a completed uncommitted store",
                    load_accepted && irq_asserted);
    passed &= check("only the old load reaches DMem",
                    request_count(trace, false) == 1);
    passed &= check("uncommitted younger store never reaches DMem",
                    request_count(trace, true) == 0);
    passed &= check_eq("uncommitted younger store has no side effect",
                       memory.read_word(0x100), 0xdeadbeef);
    passed &= check("pre-interrupt load never commits",
                    commit_count(trace, load_pc) == 0);
    passed &= check("pre-interrupt store never commits",
                    commit_count(trace, store_pc) == 0);
    passed &= check("late load response is delivered after handler entry",
                    late_response_seen &&
                    response_cycle > handler_cycle);
    passed &= check("late load response cannot write r3",
                    trace.write_count[3] == 0);
    passed &= check_eq("interrupt ERA is the oldest rolled-back load",
                       trace.last_write[20], load_pc);
    passed &= check("interrupt-memory test drains both queues",
                    dut->ldq_empty && dut->stq_empty);

    if (passed) {
        std::printf(
            "PASS: interrupt kills uncommitted store and late load\n");
    }
    return passed;
}

static bool test_committed_store_survives_interrupt(
    Vcore_interrupt_lsu_test_top* dut) {
    const uint32_t store_pc = RESET_PC + 36;

    Program program;
    add_interrupt_setup(&program);
    program[store_pc] = st_w(2, 1, 0);
    program[RESET_PC + 40] = addi_w(4, 0, 1);
    program[RESET_PC + 44] = NOP;
    add_nonreturning_handler(&program);

    DmemModel memory;
    memory.clear();
    memory.store_latency = 5;
    memory.write_word(0x100, 0xdeadbeef);

    reset(dut);
    Trace trace;
    bool store_commit_seen = false;
    bool irq_asserted = false;
    bool interrupt_taken = false;
    bool handler_seen = false;
    int irq_cycle = -1;
    int handler_cycle = -1;
    int last_activity = 0;

    for (int cycle = 0; cycle < 1000; ++cycle) {
        dut->dmem_req_ready = handler_seen;
        bool drove_response = memory.drive_response(dut, cycle);
        drive_fetch(dut, program);

        if (!irq_asserted && store_commit_seen &&
            dut->stq_committed_valid) {
            irq_asserted = true;
            irq_cycle = cycle;
            dut->hw_irq = 1;
            dut->eval();
            interrupt_taken = dut->interrupt_taken;
            last_activity = cycle;
        }

        if (dut->redirect_valid &&
            dut->redirect_pc == HANDLER_PC) {
            handler_seen = true;
            handler_cycle = cycle;
            last_activity = cycle;
        }

        for (int lane = 0; lane < CORE_WIDTH; ++lane) {
            if ((dut->commit_valids & (1U << lane)) &&
                packed_word(dut->commit_pcs, lane) == store_pc) {
                store_commit_seen = true;
            }
        }
        observe(dut, &trace);

        bool request_fire =
            dut->dmem_req_valid && dut->dmem_req_ready;
        if (request_fire) {
            Request request = sample_request(dut, cycle);
            trace.requests.push_back(request);
            memory.accept(request);
            last_activity = cycle;
        }
        if (drove_response)
            last_activity = cycle;

        tick(dut);
        memory.consume_response(drove_response);

        if (handler_seen && dut->hw_irq != 0) {
            dut->hw_irq = 0;
            dut->eval();
        }

        if (handler_seen && dut->rob_empty && dut->stq_empty &&
            memory.responses.empty() &&
            cycle - last_activity > 20) {
            break;
        }
    }

    int store_request_cycle = -1;
    for (const Request& request : trace.requests) {
        if (request.is_store)
            store_request_cycle = request.cycle;
    }

    bool passed = true;
    passed &= check("committed-store instruction commits once",
                    commit_count(trace, store_pc) == 1);
    passed &= check("committed-store IRQ is asserted after commit",
                    irq_asserted && irq_cycle >= 0);
    passed &= check("committed-store IRQ is taken",
                    interrupt_taken);
    passed &= check("committed-store handler is reached",
                    handler_seen);
    passed &= check("committed store reaches DMem exactly once",
                    request_count(trace, true) == 1);
    passed &= check("committed store drains after interrupt entry",
                    store_request_cycle > handler_cycle);
    passed &= check_eq("committed store side effect is preserved",
                       memory.read_word(0x100), 0x321);
    passed &= check("committed store eventually leaves STQ",
                    dut->stq_empty);

    if (passed)
        std::printf("PASS: committed store survives interrupt flush\n");
    return passed;
}

static bool test_branch_redirect_precedes_interrupt(
    Vcore_interrupt_lsu_test_top* dut) {
    const uint32_t branch_pc = RESET_PC + 36;
    const uint32_t target_pc = branch_pc + 8;

    Program program;
    add_interrupt_setup(&program);
    program[branch_pc] = beq(0, 0, 8);
    program[branch_pc + 4] = addi_w(6, 0, 0x66);
    program[target_pc] = addi_w(7, 0, 7);
    program[target_pc + 4] = NOP;
    add_nonreturning_handler(&program);

    DmemModel memory;
    memory.clear();

    reset(dut);
    Trace trace;
    bool branch_kill_seen = false;
    bool pending_in_kill_cycle = false;
    bool interrupt_taken_in_kill_cycle = false;
    bool branch_redirect_seen = false;
    bool handler_seen = false;
    int kill_cycle = -1;
    int branch_redirect_cycle = -1;
    int handler_cycle = -1;
    int last_activity = 0;

    for (int cycle = 0; cycle < 1000; ++cycle) {
        dut->dmem_req_ready = 1;
        bool drove_response = memory.drive_response(dut, cycle);
        drive_fetch(dut, program);

        if (!branch_kill_seen && dut->br_kill) {
            branch_kill_seen = true;
            kill_cycle = cycle;
            dut->hw_irq = 1;
            dut->eval();
            pending_in_kill_cycle = dut->interrupt_pending;
            interrupt_taken_in_kill_cycle = dut->interrupt_taken;
            last_activity = cycle;
        }

        if (dut->redirect_valid && dut->redirect_pc == target_pc) {
            branch_redirect_seen = true;
            branch_redirect_cycle = cycle;
            last_activity = cycle;
        }

        if (dut->redirect_valid &&
            dut->redirect_pc == HANDLER_PC) {
            handler_seen = true;
            handler_cycle = cycle;
            last_activity = cycle;
        }

        observe(dut, &trace);

        if (dut->dmem_req_valid && dut->dmem_req_ready) {
            Request request = sample_request(dut, cycle);
            trace.requests.push_back(request);
            memory.accept(request);
        }

        tick(dut);
        memory.consume_response(drove_response);

        if (handler_seen && dut->hw_irq != 0) {
            dut->hw_irq = 0;
            dut->eval();
        }

        if (handler_seen && dut->rob_empty &&
            cycle - last_activity > 20) {
            break;
        }
    }

    bool passed = true;
    passed &= check("branch b1 kill is observed", branch_kill_seen);
    passed &= check("IRQ is pending in branch b1 cycle",
                    pending_in_kill_cycle);
    passed &= check("b1 blocks interrupt acceptance",
                    !interrupt_taken_in_kill_cycle);
    passed &= check("b2 redirects after b1 kill",
                    branch_redirect_seen &&
                    branch_redirect_cycle > kill_cycle);
    passed &= check("pending interrupt is taken after branch redirect",
                    handler_seen && handler_cycle > branch_redirect_cycle);
    passed &= check("wrong-path instruction does not commit",
                    commit_count(trace, branch_pc + 4) == 0);
    passed &= check("branch/IRQ test emits no memory requests",
                    trace.requests.empty());

    if (passed)
        std::printf("PASS: branch redirect precedes pending interrupt\n");
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_interrupt_lsu_test_top;

    bool passed = true;
    passed &= test_interrupt_kills_uncommitted_memory(dut);
    passed &= test_committed_store_survives_interrupt(dut);
    passed &= test_branch_redirect_precedes_interrupt(dut);

    dut->final();
    delete dut;

    if (passed)
        std::printf("PASS: core_interrupt_lsu\n");
    return passed ? 0 : 1;
}
