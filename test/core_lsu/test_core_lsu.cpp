#include "Vcore_lsu_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <functional>
#include <vector>

static constexpr int CORE_WIDTH = 2;
static constexpr uint32_t RESET_PC = 0x1c000000;
static constexpr uint32_t NOP = 0x03400000;

static constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U | ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t lu12i_w(unsigned rd, unsigned imm20) {
    return 0x14000000U | ((imm20 & 0xfffffU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t ori(unsigned rd, unsigned rj, unsigned imm12) {
    return 0x03800000U | ((imm12 & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t mem_i12(uint32_t opcode, unsigned rd,
                                  unsigned rj, int imm12) {
    return opcode | ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t ld_b(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28000000U, rd, rj, imm12);
}

static constexpr uint32_t ld_h(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28400000U, rd, rj, imm12);
}

static constexpr uint32_t ld_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28800000U, rd, rj, imm12);
}

static constexpr uint32_t st_b(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29000000U, rd, rj, imm12);
}

static constexpr uint32_t st_h(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29400000U, rd, rj, imm12);
}

static constexpr uint32_t st_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29800000U, rd, rj, imm12);
}

static constexpr uint32_t ld_bu(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x2a000000U, rd, rj, imm12);
}

static constexpr uint32_t ld_hu(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x2a400000U, rd, rj, imm12);
}

static constexpr uint32_t beq(unsigned rj, unsigned rd,
                              unsigned byte_offset) {
    return 0x58000000U | (((byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) & ((1U << width) - 1U);
}

static bool check(const char* name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name);
    return condition;
}

struct FetchEvent {
    bool accepted = false;
    int first = -1;
};

struct Request {
    bool is_store = false;
    uint32_t addr = 0;
    uint32_t data = 0;
    unsigned mask = 0;
    unsigned size = 0;
    unsigned idx = 0;
    unsigned ldst = 0;
    unsigned rob_idx = 0;
    bool mem_signed = false;
    int accepted_cycle = -1;
};

struct Response {
    int due_cycle = 0;
    bool is_store = false;
    uint32_t data = 0;
    unsigned idx = 0;
};

class DmemModel {
public:
    static constexpr unsigned MEMORY_SIZE = 4096;

    std::array<uint8_t, MEMORY_SIZE> bytes{};
    std::vector<Response> responses;
    std::vector<Request> accepted;
    int load_response_latency = 3;
    int store_response_latency = 3;
    bool ready = true;
    int driven_response = -1;

    void clear() {
        bytes.fill(0);
        responses.clear();
        accepted.clear();
        load_response_latency = 3;
        store_response_latency = 3;
        ready = true;
        driven_response = -1;
    }

    uint32_t read_word(uint32_t addr) const {
        uint32_t base = addr & ~3U;
        uint32_t value = 0;
        for (unsigned byte = 0; byte < 4; ++byte)
            value |= static_cast<uint32_t>(
                         bytes[(base + byte) % MEMORY_SIZE])
                     << (8 * byte);
        return value;
    }

    void write_word(uint32_t addr, uint32_t value) {
        uint32_t base = addr & ~3U;
        for (unsigned byte = 0; byte < 4; ++byte)
            bytes[(base + byte) % MEMORY_SIZE] =
                static_cast<uint8_t>(value >> (8 * byte));
    }

    bool drive_response(Vcore_lsu_test_top* dut, int cycle) {
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

    void accept_request(const Request& request, int cycle) {
        Request accepted_request = request;
        accepted_request.accepted_cycle = cycle;
        accepted.push_back(accepted_request);

        uint32_t response_data = 0;
        if (request.is_store) {
            uint32_t base = request.addr & ~3U;
            for (unsigned byte = 0; byte < 4; ++byte) {
                if (request.mask & (1U << byte)) {
                    bytes[(base + byte) % MEMORY_SIZE] =
                        static_cast<uint8_t>(request.data >> (8 * byte));
                }
            }
        } else {
            response_data = read_word(request.addr);
        }

        responses.push_back({
            cycle + (request.is_store ?
                store_response_latency : load_response_latency),
            request.is_store,
            response_data,
            request.idx,
        });
    }

    void consume_response(bool drove_response) {
        if (drove_response) {
            responses.erase(responses.begin() + driven_response);
            driven_response = -1;
        }
    }
};

struct ObservedState {
    int commits = 0;
    int last_accept_cycle = 0;
    bool saw_program_end = false;
    std::array<unsigned, 32> write_count{};
    std::array<uint32_t, 32> last_write{};
    std::array<unsigned, 64> committed_store_tags{};
    int mispredicts = 0;
    int first_mispredict_cycle = -1;
};

static void reset(Vcore_lsu_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_is_store = 0;
    dut->dmem_resp_data = 0;
    dut->dmem_resp_idx = 0;
    for (int cycle = 0; cycle < 10; ++cycle) {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
    }
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
}

static FetchEvent drive_fetch(Vcore_lsu_test_top* dut,
                              const std::vector<uint32_t>& program) {
    FetchEvent event;
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;
    dut->eval();

    if (!dut->fe_ready)
        return event;

    event.first = static_cast<int>((dut->debug_pc - RESET_PC) >> 2);
    for (int lane = 0; lane < CORE_WIDTH; ++lane) {
        int index = event.first + lane;
        if (event.first >= 0 && index < static_cast<int>(program.size())) {
            dut->fe_valid |= 1U << lane;
            dut->fe_insts[lane] = program[index];
        }
    }
    event.accepted = dut->fe_valid != 0;
    dut->eval();
    return event;
}

static Request sample_request(Vcore_lsu_test_top* dut) {
    return {
        static_cast<bool>(dut->dmem_req_is_store),
        dut->dmem_req_addr,
        dut->dmem_req_data,
        static_cast<unsigned>(dut->dmem_req_mask),
        static_cast<unsigned>(dut->dmem_req_size),
        static_cast<unsigned>(dut->dmem_req_idx),
        static_cast<unsigned>(dut->dmem_req_ldst),
        static_cast<unsigned>(dut->dmem_req_rob_idx),
        static_cast<bool>(dut->dmem_req_mem_signed),
    };
}

static void observe_cycle(Vcore_lsu_test_top* dut,
                          const FetchEvent& fetch,
                          const std::vector<uint32_t>& program,
                          int cycle, ObservedState* state) {
    if (fetch.accepted) {
        state->last_accept_cycle = cycle;
        if (fetch.first + CORE_WIDTH >= static_cast<int>(program.size()))
            state->saw_program_end = true;
    }

    unsigned commit_mask = dut->commit_valids;
    state->commits += __builtin_popcount(commit_mask);

    if (dut->br_mispredict) {
        ++state->mispredicts;
        if (state->first_mispredict_cycle < 0)
            state->first_mispredict_cycle = cycle;
    }
    for (int lane = 0; lane < CORE_WIDTH; ++lane) {
        if (!(commit_mask & (1U << lane)) ||
            !(dut->commit_uses_stq & (1U << lane))) {
            continue;
        }
        unsigned tag = packed_field(dut->commit_stq_idx, lane, 6);
        ++state->committed_store_tags[tag];
    }

    unsigned write_mask = dut->rf_write_valid;
    for (int port = 0; port < 5; ++port) {
        if (!(write_mask & (1U << port)))
            continue;
        unsigned ldst = packed_field(dut->rf_write_ldst, port, 5);
        if (ldst == 0)
            continue;
        ++state->write_count[ldst];
        state->last_write[ldst] = dut->rf_write_data[port];
    }
}

using ReadyPolicy =
    std::function<bool(int, Vcore_lsu_test_top*, const ObservedState&)>;
using RequestObserver =
    std::function<void(int, const Request&, bool, const ObservedState&)>;

struct RunResult {
    bool finished = false;
    bool store_before_commit = false;
    ObservedState observed;
};

static RunResult run_program(
    Vcore_lsu_test_top* dut,
    const std::vector<uint32_t>& program,
    DmemModel* memory,
    const ReadyPolicy& ready_policy = {},
    const RequestObserver& request_observer = {}) {
    reset(dut);
    RunResult result;

    for (int cycle = 0; cycle < 2000; ++cycle) {
        memory->ready = ready_policy ?
            ready_policy(cycle, dut, result.observed) : true;
        dut->dmem_req_ready = memory->ready;
        bool drove_response = memory->drive_response(dut, cycle);
        FetchEvent fetch = drive_fetch(dut, program);

        // Sample writeback and commit in the cycle in which the upcoming
        // rising edge consumes them. A load response can disappear
        // combinationally immediately after that edge.
        observe_cycle(dut, fetch, program, cycle, &result.observed);

        bool request_valid = dut->dmem_req_valid;
        Request request = sample_request(dut);
        bool request_fire = request_valid && dut->dmem_req_ready;
        if (request_observer)
            request_observer(cycle, request, request_valid, result.observed);

        if (request_fire) {
            if (request.is_store &&
                result.observed.committed_store_tags[request.idx] == 0) {
                result.store_before_commit = true;
            }
            memory->accept_request(request, cycle);
        }

        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
        memory->consume_response(drove_response);

        if (result.observed.saw_program_end && dut->rob_empty &&
            dut->ldq_empty && dut->stq_empty && memory->responses.empty() &&
            cycle - result.observed.last_accept_cycle > 20) {
            result.finished = true;
            break;
        }
    }

    dut->fe_valid = 0;
    dut->dmem_resp_valid = 0;
    dut->eval();
    return result;
}

static bool test_word_load(Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x104, 0x89abcdef);

    const std::vector<uint32_t> program = {
        addi_w(1, 0, 0x100),
        ld_w(2, 1, 4),
        addi_w(3, 2, 1),
        NOP,
    };
    RunResult result = run_program(dut, program, &memory);

    int loads = 0;
    for (const Request& request : memory.accepted)
        loads += !request.is_store;

    bool passed = true;
    passed &= check("word load reaches quiescence", result.finished);
    passed &= check("word load commits every instruction",
                    result.observed.commits == static_cast<int>(program.size()));
    passed &= check("word load sends one DMem request", loads == 1);
    passed &= check("word load result",
                    result.observed.last_write[2] == 0x89abcdef);
    passed &= check("word load wakes dependent ALU",
                    result.observed.last_write[3] == 0x89abcdf0);
    passed &= check("word load request address",
                    !memory.accepted.empty() &&
                    memory.accepted[0].addr == 0x104);
    passed &= check("word load request size",
                    !memory.accepted.empty() &&
                    memory.accepted[0].size == 2);

    if (passed)
        std::printf("PASS: core word load\n");
    return passed;
}

static bool test_store_masks(Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0xaabbccdd);

    const std::vector<uint32_t> program = {
        addi_w(1, 0, 0x100),
        lu12i_w(2, 0x12345),
        ori(2, 2, 0x678),
        st_b(2, 1, 1),
        st_h(2, 1, 2),
        st_w(2, 1, 4),
        NOP,
    };
    RunResult result = run_program(dut, program, &memory);

    std::vector<Request> stores;
    for (const Request& request : memory.accepted) {
        if (request.is_store)
            stores.push_back(request);
    }

    bool passed = true;
    passed &= check("store masks reach quiescence", result.finished);
    passed &= check("stores issue only after ROB commit",
                    !result.store_before_commit);
    passed &= check("three stores reach DMem", stores.size() == 3);
    if (stores.size() == 3) {
        passed &= check("st.b address", stores[0].addr == 0x101);
        passed &= check("st.b mask", stores[0].mask == 0x2);
        passed &= check("st.b shifted data",
                        stores[0].data == 0x34567800);
        passed &= check("st.h address", stores[1].addr == 0x102);
        passed &= check("st.h mask", stores[1].mask == 0xc);
        passed &= check("st.h shifted data",
                        stores[1].data == 0x56780000);
        passed &= check("st.w address", stores[2].addr == 0x104);
        passed &= check("st.w mask", stores[2].mask == 0xf);
        passed &= check("st.w data", stores[2].data == 0x12345678);
    }
    passed &= check("partial stores update selected bytes",
                    memory.read_word(0x100) == 0x567878dd);
    passed &= check("word store updates complete word",
                    memory.read_word(0x104) == 0x12345678);

    if (passed)
        std::printf("PASS: core store masks and commit ordering\n");
    return passed;
}

static bool test_load_extensions(Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0x80017f80);

    const std::vector<uint32_t> program = {
        addi_w(1, 0, 0x100),
        ld_b(3, 1, 0),
        ld_bu(4, 1, 0),
        ld_h(5, 1, 2),
        ld_hu(6, 1, 2),
        ld_w(7, 1, 0),
        NOP,
    };
    RunResult result = run_program(dut, program, &memory);

    std::array<bool, 32> saw_load{};
    std::array<unsigned, 32> load_size{};
    std::array<bool, 32> load_signed{};
    for (const Request& request : memory.accepted) {
        if (request.is_store)
            continue;
        saw_load[request.ldst] = true;
        load_size[request.ldst] = request.size;
        load_signed[request.ldst] = request.mem_signed;
    }

    bool passed = true;
    passed &= check("load extensions reach quiescence", result.finished);
    passed &= check("ld.b request is signed byte",
                    saw_load[3] && load_size[3] == 0 && load_signed[3]);
    passed &= check("ld.bu request is unsigned byte",
                    saw_load[4] && load_size[4] == 0 && !load_signed[4]);
    passed &= check("ld.h request is signed half",
                    saw_load[5] && load_size[5] == 1 && load_signed[5]);
    passed &= check("ld.hu request is unsigned half",
                    saw_load[6] && load_size[6] == 1 && !load_signed[6]);
    passed &= check("ld.w request is signed word",
                    saw_load[7] && load_size[7] == 2 && load_signed[7]);
    passed &= check("ld.b sign extension",
                    result.observed.last_write[3] == 0xffffff80);
    passed &= check("ld.bu zero extension",
                    result.observed.last_write[4] == 0x00000080);
    passed &= check("ld.h sign extension",
                    result.observed.last_write[5] == 0xffff8001);
    passed &= check("ld.hu zero extension",
                    result.observed.last_write[6] == 0x00008001);
    passed &= check("ld.w full value",
                    result.observed.last_write[7] == 0x80017f80);

    if (passed)
        std::printf("PASS: core load extensions\n");
    return passed;
}

static bool test_load_backpressure(Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0x10203040);

    const std::vector<uint32_t> program = {
        addi_w(1, 0, 0x100),
        ld_w(2, 1, 0),
        NOP,
    };

    int first_blocked_cycle = -1;
    int blocked_cycles = 0;
    bool stable = true;
    Request held_request;

    ReadyPolicy ready_policy =
        [&](int cycle, Vcore_lsu_test_top*, const ObservedState&) {
            return first_blocked_cycle >= 0 &&
                   cycle - first_blocked_cycle >= 5;
        };
    RequestObserver request_observer =
        [&](int cycle, const Request& request, bool valid,
            const ObservedState&) {
            if (!valid)
                return;
            if (first_blocked_cycle < 0) {
                first_blocked_cycle = cycle;
                held_request = request;
            }
            if (cycle - first_blocked_cycle < 5) {
                ++blocked_cycles;
                stable &= request.is_store == held_request.is_store;
                stable &= request.addr == held_request.addr;
                stable &= request.data == held_request.data;
                stable &= request.mask == held_request.mask;
                stable &= request.size == held_request.size;
                stable &= request.idx == held_request.idx;
                stable &= request.rob_idx == held_request.rob_idx;
            }
        };

    RunResult result = run_program(
        dut, program, &memory, ready_policy, request_observer);

    bool passed = true;
    passed &= check("backpressured load reaches quiescence", result.finished);
    passed &= check("backpressured request appears",
                    first_blocked_cycle >= 0);
    passed &= check("request remains valid for five blocked cycles",
                    blocked_cycles >= 5);
    passed &= check("request fields remain stable under backpressure", stable);
    passed &= check("backpressured load writes once",
                    result.observed.write_count[2] == 1);
    passed &= check("backpressured load result",
                    result.observed.last_write[2] == 0x10203040);

    if (passed)
        std::printf("PASS: core DMem backpressure\n");
    return passed;
}

static bool test_store_to_load_forwarding(Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0xdeadbeef);

    const std::vector<uint32_t> program = {
        addi_w(1, 0, 0x100),
        addi_w(2, 0, 0x321),
        st_w(2, 1, 0),
        ld_w(3, 1, 0),
        addi_w(4, 3, 1),
        NOP,
    };

    ReadyPolicy ready_policy =
        [](int, Vcore_lsu_test_top*, const ObservedState& observed) {
            return observed.write_count[3] != 0 &&
                   observed.write_count[4] != 0;
        };
    RunResult result = run_program(
        dut, program, &memory, ready_policy);

    int loads = 0;
    int stores = 0;
    for (const Request& request : memory.accepted) {
        loads += !request.is_store;
        stores += request.is_store;
    }

    bool passed = true;
    passed &= check("forwarding reaches quiescence", result.finished);
    passed &= check("forwarded load writes stored value",
                    result.observed.last_write[3] == 0x321);
    passed &= check("forwarded load wakes dependent ALU",
                    result.observed.last_write[4] == 0x322);
    passed &= check("forwarded load does not access DMem", loads == 0);
    passed &= check("older store drains exactly once", stores == 1);
    passed &= check("forwarding store issues after commit",
                    !result.store_before_commit);
    passed &= check("forwarding store reaches memory",
                    memory.read_word(0x100) == 0x321);

    if (passed)
        std::printf("PASS: core store-to-load forwarding\n");
    return passed;
}

static bool test_wrong_path_store(Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0xdeadbeef);

    const std::vector<uint32_t> program = {
        addi_w(1, 0, 0x100),
        addi_w(2, 0, 0x321),
        beq(0, 0, 8),
        st_w(2, 1, 0),
        ld_w(3, 1, 0),
        NOP,
    };
    RunResult result = run_program(dut, program, &memory);

    int loads = 0;
    int stores = 0;
    for (const Request& request : memory.accepted) {
        loads += !request.is_store;
        stores += request.is_store;
    }

    bool passed = true;
    passed &= check("wrong-path store reaches quiescence", result.finished);
    passed &= check("wrong-path store sees one misprediction",
                    result.observed.mispredicts == 1);
    passed &= check("wrong-path store never reaches DMem", stores == 0);
    passed &= check("target load reaches DMem once", loads == 1);
    passed &= check("wrong-path store leaves memory unchanged",
                    memory.read_word(0x100) == 0xdeadbeef);
    passed &= check("target load observes original memory",
                    result.observed.last_write[3] == 0xdeadbeef);
    passed &= check("wrong-path store never commits",
                    result.observed.commits ==
                        static_cast<int>(program.size()) - 1);

    if (passed)
        std::printf("PASS: core wrong-path store suppression\n");
    return passed;
}

static bool test_older_store_survives_recovery(
    Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.load_response_latency = 3;
    memory.store_response_latency = 40;
    memory.write_word(0x100, 0xdeadbeef);
    memory.write_word(0x104, 0xcafebabe);
    memory.write_word(0x108, 0x00000001);

    const std::vector<uint32_t> program = {
        addi_w(1, 0, 0x100),
        addi_w(2, 0, 0x111),
        st_w(2, 1, 0),
        ld_w(6, 1, 8),
        beq(6, 6, 8),
        st_w(2, 1, 4),
        ld_w(4, 1, 0),
        ld_w(5, 1, 4),
        NOP,
    };
    RunResult result = run_program(dut, program, &memory);

    std::vector<Request> stores;
    for (const Request& request : memory.accepted) {
        if (request.is_store)
            stores.push_back(request);
    }

    bool ack_crosses_recovery =
        stores.size() == 1 &&
        result.observed.first_mispredict_cycle >= 0 &&
        stores[0].accepted_cycle + memory.store_response_latency >
            result.observed.first_mispredict_cycle;

    bool passed = true;
    passed &= check("older store recovery reaches quiescence",
                    result.finished);
    passed &= check("older store recovery sees one misprediction",
                    result.observed.mispredicts == 1);
    passed &= check("only the older store reaches DMem",
                    stores.size() == 1 && stores[0].addr == 0x100);
    passed &= check("older store ack arrives after branch recovery",
                    ack_crosses_recovery);
    passed &= check("older committed store updates memory",
                    memory.read_word(0x100) == 0x111);
    passed &= check("younger wrong-path store has no side effect",
                    memory.read_word(0x104) == 0xcafebabe);
    passed &= check("target observes the older store",
                    result.observed.last_write[4] == 0x111);
    passed &= check("target observes untouched wrong-path address",
                    result.observed.last_write[5] == 0xcafebabe);

    if (passed)
        std::printf("PASS: core older store recovery\n");
    return passed;
}

static bool test_ldq_pressure(Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();

    constexpr int LOAD_COUNT = 20;
    const uint32_t base_addr = 0x100;
    std::vector<uint32_t> program;
    program.push_back(addi_w(1, 0, base_addr));
    for (int i = 0; i < LOAD_COUNT; ++i) {
        memory.write_word(base_addr + 4 * i, 0x10000000U + i);
        program.push_back(ld_w(0, 1, 4 * i));
    }
    program.push_back(NOP);

    bool release = false;
    int stall_cycles = 0;
    ReadyPolicy ready_policy =
        [&](int, Vcore_lsu_test_top*, const ObservedState&) {
            return release;
        };
    RequestObserver request_observer =
        [&](int, const Request&, bool, const ObservedState&) {
            if (dut->rn2_mask != 0 && !dut->lsu_dispatch_ready) {
                ++stall_cycles;
                if (stall_cycles >= 5)
                    release = true;
            }
        };

    RunResult result = run_program(
        dut, program, &memory, ready_policy, request_observer);

    std::array<unsigned, LOAD_COUNT> address_count{};
    int loads = 0;
    int stores = 0;
    for (const Request& request : memory.accepted) {
        if (request.is_store) {
            ++stores;
            continue;
        }
        ++loads;
        if (request.addr >= base_addr &&
            request.addr < base_addr + 4 * LOAD_COUNT &&
            ((request.addr - base_addr) & 3U) == 0) {
            ++address_count[(request.addr - base_addr) / 4];
        }
    }

    bool exactly_once = true;
    for (unsigned count : address_count)
        exactly_once &= count == 1;

    if (loads != LOAD_COUNT || !exactly_once) {
        std::fprintf(stderr,
                     "LDQ pressure detail: loads=%d stores=%d commits=%d "
                     "stall_cycles=%d\n",
                     loads, stores, result.observed.commits, stall_cycles);
        for (int i = 0; i < LOAD_COUNT; ++i) {
            if (address_count[i] != 1) {
                std::fprintf(stderr,
                             "  addr=0x%08x count=%u\n",
                             base_addr + 4 * i, address_count[i]);
            }
        }
        for (const Request& request : memory.accepted) {
            std::fprintf(stderr,
                         "  req %s addr=0x%08x idx=%u rob=%u cycle=%d\n",
                         request.is_store ? "store" : "load",
                         request.addr, request.idx, request.rob_idx,
                         request.accepted_cycle);
        }
    }

    bool passed = true;
    passed &= check("LDQ pressure reaches quiescence", result.finished);
    passed &= check("LDQ full backpressures dispatch for five cycles",
                    stall_cycles >= 5);
    passed &= check("LDQ pressure accepts every load once",
                    loads == LOAD_COUNT && exactly_once);
    passed &= check("LDQ pressure emits no stores", stores == 0);

    if (passed)
        std::printf("PASS: core LDQ pressure recovery\n");
    return passed;
}

static bool test_partial_dispatch_with_full_ldq(
    Vcore_lsu_test_top* dut) {
    constexpr int LDQ_CAPACITY = 16;
    constexpr unsigned ALU_LDST = 20;
    constexpr unsigned LOAD_LDST = 21;

    std::vector<uint32_t> program;
    for (int i = 0; i < LDQ_CAPACITY; ++i)
        program.push_back(ld_w(0, 0, 4 * i));
    program.push_back(addi_w(ALU_LDST, 0, 1));
    program.push_back(ld_w(LOAD_LDST, 0, 0x80));

    reset(dut);
    bool saw_blocked_mixed_packet = false;
    unsigned mixed_dis_fire = 0;
    unsigned retained_mask = 0;

    for (int cycle = 0; cycle < 500; ++cycle) {
        dut->dmem_req_ready = 0;
        dut->dmem_resp_valid = 0;
        dut->dmem_resp_is_store = 0;
        dut->dmem_resp_data = 0;
        dut->dmem_resp_idx = 0;
        drive_fetch(dut, program);

        bool is_mixed_packet =
            dut->rn2_mask == 0x3 &&
            dut->rn2_uses_ldq == 0x2 &&
            packed_field(dut->rn2_ldst, 0, 5) == ALU_LDST &&
            packed_field(dut->rn2_ldst, 1, 5) == LOAD_LDST;
        if (is_mixed_packet && !dut->lsu_dispatch_ready) {
            saw_blocked_mixed_packet = true;
            mixed_dis_fire = dut->dis_fire;

            dut->clk = 1;
            dut->eval();
            dut->clk = 0;
            dut->eval();
            retained_mask = dut->rn2_mask;
            break;
        }

        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
    }

    if (saw_blocked_mixed_packet &&
        (mixed_dis_fire != 0x1 || retained_mask != 0x2)) {
        std::fprintf(
            stderr,
            "partial dispatch detail: dis_fire=0x%x retained_mask=0x%x\n",
            mixed_dis_fire, retained_mask);
    }

    bool passed = true;
    passed &= check("full LDQ exposes ALU/load mixed Rename2 packet",
                    saw_blocked_mixed_packet);
    passed &= check("older ALU fires while younger load is blocked",
                    mixed_dis_fire == 0x1);
    passed &= check("partial dispatch retains only the blocked load",
                    retained_mask == 0x2);

    if (passed)
        std::printf("PASS: core partial dispatch under LDQ pressure\n");
    return passed;
}

static bool test_stq_pressure(Vcore_lsu_test_top* dut) {
    DmemModel memory;
    memory.clear();

    constexpr int STORE_COUNT = 20;
    const uint32_t base_addr = 0x100;
    std::vector<uint32_t> program;
    program.push_back(addi_w(1, 0, base_addr));
    for (int i = 0; i < STORE_COUNT; ++i) {
        memory.write_word(base_addr + 4 * i, 0xffffffff);
        program.push_back(st_w(0, 1, 4 * i));
    }
    program.push_back(NOP);

    bool release = false;
    int stall_cycles = 0;
    ReadyPolicy ready_policy =
        [&](int, Vcore_lsu_test_top*, const ObservedState&) {
            return release;
        };
    RequestObserver request_observer =
        [&](int, const Request&, bool, const ObservedState&) {
            if (dut->rn2_mask != 0 && !dut->lsu_dispatch_ready) {
                ++stall_cycles;
                if (stall_cycles >= 5)
                    release = true;
            }
        };

    RunResult result = run_program(
        dut, program, &memory, ready_policy, request_observer);

    std::array<unsigned, STORE_COUNT> address_count{};
    int loads = 0;
    int stores = 0;
    bool request_format_valid = true;
    for (const Request& request : memory.accepted) {
        if (!request.is_store) {
            ++loads;
            continue;
        }
        ++stores;
        request_format_valid &= request.mask == 0xf;
        request_format_valid &= request.data == 0;
        if (request.addr >= base_addr &&
            request.addr < base_addr + 4 * STORE_COUNT &&
            ((request.addr - base_addr) & 3U) == 0) {
            ++address_count[(request.addr - base_addr) / 4];
        }
    }

    bool exactly_once = true;
    bool memory_updated = true;
    for (int i = 0; i < STORE_COUNT; ++i) {
        exactly_once &= address_count[i] == 1;
        memory_updated &= memory.read_word(base_addr + 4 * i) == 0;
    }

    if (stores != STORE_COUNT || !exactly_once || !memory_updated) {
        std::fprintf(stderr,
                     "STQ pressure detail: loads=%d stores=%d commits=%d "
                     "stall_cycles=%d\n",
                     loads, stores, result.observed.commits, stall_cycles);
        for (int i = 0; i < STORE_COUNT; ++i) {
            uint32_t addr = base_addr + 4 * i;
            if (address_count[i] != 1 || memory.read_word(addr) != 0) {
                std::fprintf(stderr,
                             "  addr=0x%08x count=%u data=0x%08x\n",
                             addr, address_count[i],
                             memory.read_word(addr));
            }
        }
        for (const Request& request : memory.accepted) {
            std::fprintf(stderr,
                         "  req %s addr=0x%08x idx=%u rob=%u cycle=%d\n",
                         request.is_store ? "store" : "load",
                         request.addr, request.idx, request.rob_idx,
                         request.accepted_cycle);
        }
        for (int tag = 0; tag < 2 * STORE_COUNT; ++tag) {
            if (result.observed.committed_store_tags[tag] != 0) {
                std::fprintf(
                    stderr, "  committed STQ tag=%d count=%u\n", tag,
                    result.observed.committed_store_tags[tag]);
            }
        }
    }

    bool passed = true;
    passed &= check("STQ pressure reaches quiescence", result.finished);
    passed &= check("STQ full backpressures dispatch for five cycles",
                    stall_cycles >= 5);
    passed &= check("STQ pressure accepts every store once",
                    stores == STORE_COUNT && exactly_once);
    passed &= check("STQ pressure emits no loads", loads == 0);
    passed &= check("STQ pressure preserves request format",
                    request_format_valid);
    passed &= check("STQ pressure updates every word", memory_updated);
    passed &= check("STQ pressure stores issue after commit",
                    !result.store_before_commit);

    if (passed)
        std::printf("PASS: core STQ pressure recovery\n");
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_lsu_test_top;

    bool passed = true;
    passed &= test_word_load(dut);
    passed &= test_store_masks(dut);
    passed &= test_load_extensions(dut);
    passed &= test_load_backpressure(dut);
    passed &= test_store_to_load_forwarding(dut);
    passed &= test_wrong_path_store(dut);
    passed &= test_older_store_survives_recovery(dut);
    passed &= test_ldq_pressure(dut);
    passed &= test_partial_dispatch_with_full_ldq(dut);
    passed &= test_stq_pressure(dut);

    dut->final();
    delete dut;

    if (passed)
        std::printf("PASS: core_lsu\n");
    return passed ? 0 : 1;
}
