#include "Vbranch_recovery_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <vector>

static constexpr int CORE_WIDTH = 2;
static constexpr uint32_t RESET_PC = 0x1c000000;
static constexpr uint32_t NOP = 0x03400000;

static constexpr uint32_t addi_w(unsigned rd, unsigned rj, unsigned imm12) {
    return 0x02800000U | ((imm12 & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t add_w(unsigned rd, unsigned rj, unsigned rk) {
    return 0x00100000U | ((rk & 0x1fU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t ld_w(unsigned rd, unsigned rj, unsigned imm12) {
    return 0x28800000U | ((imm12 & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t beq(unsigned rj, unsigned rd,
                              unsigned byte_offset) {
    return 0x58000000U | (((byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static void tick(Vbranch_recovery_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

static void reset(Vbranch_recovery_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;
    dut->lsu_resp_valid = 0;
    dut->lsu_resp_slot = 0;
    dut->lsu_resp_data = 0;
    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);
    dut->rst_n = 1;
    dut->eval();
}

struct FetchEvent {
    bool accepted = false;
    int first = -1;
    uint32_t pc = 0;
};

static FetchEvent drive_fetch(Vbranch_recovery_test_top* dut,
                              const std::vector<uint32_t>& program) {
    FetchEvent event;
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    if (!dut->fe_ready)
        return event;

    event.pc = dut->debug_pc;
    event.first = static_cast<int>((event.pc - RESET_PC) >> 2);
    for (int lane = 0; lane < CORE_WIDTH; ++lane) {
        int index = event.first + lane;
        if (event.first >= 0 &&
            index < static_cast<int>(program.size())) {
            dut->fe_valid |= 1U << lane;
            dut->fe_insts[lane] = program[index];
        }
    }
    event.accepted = dut->fe_valid != 0;
    return event;
}

struct ObservedState {
    int commits = 0;
    int mispredicts = 0;
    int last_accept_cycle = 0;
    bool saw_program_end = false;
    std::array<unsigned, 32> write_count{};
    std::array<uint32_t, 32> last_write{};
    std::array<unsigned, 32> commit_count{};
};

static unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) & ((1U << width) - 1U);
}

static void observe_cycle(Vbranch_recovery_test_top* dut,
                          const FetchEvent& fetch,
                          const std::vector<uint32_t>& program,
                          int cycle, ObservedState* state) {
    if (fetch.accepted) {
        state->last_accept_cycle = cycle;
        if (fetch.first + CORE_WIDTH >= static_cast<int>(program.size()))
            state->saw_program_end = true;
    }

    if (dut->br_mispredict)
        ++state->mispredicts;

    unsigned commit_mask = dut->commit_valids;
    state->commits += __builtin_popcount(commit_mask);
    if (commit_mask & 1U)
        ++state->commit_count[dut->commit_ldst_0];
    if (commit_mask & 2U)
        ++state->commit_count[dut->commit_ldst_1];

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

static bool check(const char* name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name);
    return condition;
}

static bool run_mapping_recovery(Vbranch_recovery_test_top* dut) {
    const std::vector<uint32_t> program = {
        addi_w(5, 0, 10),   // Older mapping: r5 = 10.
        beq(0, 0, 8),       // Taken; lane 0 allocation must remain visible.
        addi_w(5, 0, 99),   // Wrong path: overwrite r5.
        addi_w(6, 5, 1),    // Target: must read the older r5 mapping.
        addi_w(7, 6, 1),    // Busy-table/wakeup check after recovery.
        NOP,
    };

    reset(dut);
    ObservedState state;
    bool finished = false;

    for (int cycle = 0; cycle < 500; ++cycle) {
        dut->lsu_resp_valid = 0;
        FetchEvent fetch = drive_fetch(dut, program);
        tick(dut);
        observe_cycle(dut, fetch, program, cycle, &state);

        if (state.saw_program_end && dut->rob_empty && dut->fe_ready &&
            cycle - state.last_accept_cycle > 20) {
            finished = true;
            break;
        }
    }

    bool passed = true;
    passed &= check("mapping recovery reaches quiescence", finished);
    passed &= check("mapping recovery sees one misprediction",
                    state.mispredicts == 1);
    passed &= check("wrong-path writer never commits",
                    state.commit_count[5] == 1);
    passed &= check("target reads pre-branch mapping",
                    state.last_write[6] == 11);
    passed &= check("recovered dependency wakes and executes",
                    state.last_write[7] == 12);
    passed &= check("mapping recovery commit count", state.commits == 5);
    passed &= check("mapping recovery returns all 16 free registers",
                    __builtin_popcountll(dut->rename_free_vec) == 16);

    if (passed)
        std::printf("PASS: branch mapping/free-list recovery\n");
    return passed;
}

static bool run_repeated_mispredicts(Vbranch_recovery_test_top* dut) {
    static constexpr int BRANCHES = 24;
    std::vector<uint32_t> program;
    program.reserve(BRANCHES * 2 + 2);
    for (int i = 0; i < BRANCHES; ++i) {
        program.push_back(beq(0, 0, 8));
        program.push_back(addi_w(20 + (i % 12), 0,
                                 static_cast<unsigned>(i + 1)));
    }
    program.push_back(addi_w(10, 0, 7));
    program.push_back(NOP);

    reset(dut);
    ObservedState state;
    bool finished = false;
    int consecutive_rename_stalls = 0;
    int max_rename_stalls = 0;

    for (int cycle = 0; cycle < 2500; ++cycle) {
        dut->lsu_resp_valid = 0;
        FetchEvent fetch = drive_fetch(dut, program);
        tick(dut);
        observe_cycle(dut, fetch, program, cycle, &state);

        if (dut->ren_stalls) {
            ++consecutive_rename_stalls;
            if (consecutive_rename_stalls > max_rename_stalls)
                max_rename_stalls = consecutive_rename_stalls;
        } else {
            consecutive_rename_stalls = 0;
        }

        if (state.saw_program_end && dut->rob_empty && dut->fe_ready &&
            cycle - state.last_accept_cycle > 20) {
            finished = true;
            break;
        }
    }

    bool passed = true;
    passed &= check("repeated recovery reaches quiescence", finished);
    passed &= check("all repeated branches mispredict",
                    state.mispredicts == BRANCHES);
    passed &= check("repeated recovery commit count",
                    state.commits == BRANCHES + 2);
    passed &= check("repeated recovery reaches final instruction",
                    state.last_write[10] == 7);
    passed &= check("repeated recovery does not exhaust Rename",
                    max_rename_stalls == 0);
    passed &= check("repeated recovery has no physical-register leak",
                    __builtin_popcountll(dut->rename_free_vec) == 16);

    if (passed)
        std::printf("PASS: repeated mispredict recovery\n");
    return passed;
}

static bool run_late_lsu_response(Vbranch_recovery_test_top* dut) {
    const std::vector<uint32_t> program = {
        ld_w(1, 0, 0),      // Older load delays branch resolution.
        beq(1, 0, 8),       // Taken after load returns zero.
        ld_w(5, 0, 4),      // Wrong-path request, response is delayed.
        addi_w(6, 0, 7),    // First target allocation reuses wrong-path pdst.
        ld_w(9, 0, 8),      // Hold dependent add until corruption is injected.
        add_w(7, 6, 9),     // Must produce 8 if late response is rejected.
        NOP,
    };

    reset(dut);
    ObservedState state;
    bool finished = false;
    bool older_response_sent = false;
    bool late_response_sent = false;
    bool target_response_sent = false;
    bool target_r6_written = false;
    bool saw_late_rf_write = false;
    int late_response_cycle = -1;
    unsigned wrong_load_pdst = 0;
    unsigned target_load_pdst = 0;

    for (int cycle = 0; cycle < 1200; ++cycle) {
        dut->lsu_resp_valid = 0;

        // Wait until the sequential wrong path has issued both loads. The
        // request for r9 at slot 2 is also squashed and will be reissued after
        // the redirect.
        if (!older_response_sent && dut->lsu_req_count >= 3) {
            dut->lsu_resp_slot = 0;
            dut->lsu_resp_data = 0;
            dut->lsu_resp_valid = 1;
            older_response_sent = true;
        } else if (!late_response_sent && target_r6_written &&
                   dut->lsu_req_count >= 4) {
            dut->lsu_resp_slot = 1;
            dut->lsu_resp_data = 0xdeadbeefU;
            dut->lsu_resp_valid = 1;
            dut->eval();
            wrong_load_pdst = dut->selected_lsu_pdst;
            late_response_sent = true;
            late_response_cycle = cycle;
        } else if (late_response_sent && !target_response_sent &&
                   cycle > late_response_cycle + 1) {
            dut->lsu_resp_slot = 3;
            dut->lsu_resp_data = 1;
            dut->lsu_resp_valid = 1;
            target_response_sent = true;
        }

        FetchEvent fetch = drive_fetch(dut, program);
        tick(dut);

        unsigned write_mask = dut->rf_write_valid;
        for (int port = 0; port < 5; ++port) {
            if (!(write_mask & (1U << port)))
                continue;
            unsigned ldst = packed_field(dut->rf_write_ldst, port, 5);
            if (ldst == 6)
                target_r6_written = true;
        }
        if (late_response_sent && cycle == late_response_cycle &&
            (write_mask & (1U << 3)))
            saw_late_rf_write = true;

        observe_cycle(dut, fetch, program, cycle, &state);

        if (target_response_sent && state.saw_program_end &&
            dut->rob_empty && dut->fe_ready &&
            cycle - state.last_accept_cycle > 20) {
            finished = true;
            break;
        }
    }

    bool passed = true;
    passed &= check("late-response test captures both speculative loads",
                    older_response_sent && late_response_sent &&
                    target_response_sent);
    dut->lsu_resp_slot = 3;
    dut->lsu_resp_valid = 0;
    dut->eval();
    target_load_pdst = dut->selected_lsu_pdst;
    passed &= check("target reuses recovered wrong-path destination",
                    target_load_pdst != 0 &&
                    target_load_pdst == wrong_load_pdst);
    passed &= check("late wrong-path LSU response is suppressed",
                    !saw_late_rf_write);
    passed &= check("late response cannot corrupt target dependency",
                    state.last_write[7] == 8);
    passed &= check("late-response test reaches quiescence", finished);
    passed &= check("late-response commit count", state.commits == 6);

    if (!passed) {
        std::fprintf(stderr,
                     "INFO: lsu_reqs=%u target_load_pdst=%u "
                     "wrong_load_pdst=%u "
                     "r7=0x%08x commits=%d "
                     "mispredicts=%d free=%d\n",
                     static_cast<unsigned>(dut->lsu_req_count),
                     target_load_pdst, wrong_load_pdst,
                     state.last_write[7], state.commits,
                     state.mispredicts,
                     __builtin_popcountll(dut->rename_free_vec));
        for (unsigned slot = 0; slot < dut->lsu_req_count; ++slot) {
            dut->lsu_resp_slot = slot;
            dut->lsu_resp_valid = 0;
            dut->eval();
            std::fprintf(stderr,
                         "INFO: lsu_slot=%u ldst=r%u pdst=p%u br_mask=0x%x\n",
                         slot,
                         static_cast<unsigned>(dut->selected_lsu_ldst),
                         static_cast<unsigned>(dut->selected_lsu_pdst),
                         static_cast<unsigned>(dut->selected_lsu_br_mask));
        }
    }

    if (passed)
        std::printf("PASS: late wrong-path LSU response\n");
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vbranch_recovery_test_top;

    bool passed = true;
    passed &= run_mapping_recovery(dut);
    passed &= run_repeated_mispredicts(dut);
    passed &= run_late_lsu_response(dut);

    if (passed)
        std::printf("PASS: branch_recovery\n");

    delete dut;
    return passed ? 0 : 1;
}
