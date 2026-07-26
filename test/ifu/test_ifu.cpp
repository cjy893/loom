#include "Vifu_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>

static constexpr int FETCH_WIDTH = 4;
static constexpr uint32_t RESET_PC = 0x1c000000U;
static constexpr uint32_t FETCH_BYTES = FETCH_WIDTH * sizeof(uint32_t);

using Bundle = std::array<uint32_t, FETCH_WIDTH>;

static void tick(Vifu_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

static void reset(Vifu_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->redirect_valid = 0;
    dut->redirect_pc = 0;
    dut->imem_req_ready = 0;
    dut->imem_resp_valid = 0;
    dut->fetch_ready = 0;
    for (int lane = 0; lane < FETCH_WIDTH; ++lane)
        dut->imem_resp_insts[lane] = 0;

    for (int cycle = 0; cycle < 4; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

static bool check(const char* name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name);
    return condition;
}

static bool expect_request(Vifu_test_top* dut, uint32_t expected_addr,
                           int max_cycles = 8) {
    for (int cycle = 0; cycle < max_cycles; ++cycle) {
        dut->eval();
        if (dut->imem_req_valid) {
            if (dut->imem_req_addr != expected_addr) {
                std::fprintf(stderr,
                             "FAIL: request address got=0x%08x expected=0x%08x\n",
                             dut->imem_req_addr, expected_addr);
                return false;
            }
            return true;
        }
        tick(dut);
    }

    std::fprintf(stderr, "FAIL: request 0x%08x did not appear\n",
                 expected_addr);
    return false;
}

static bool accept_request(Vifu_test_top* dut, uint32_t expected_addr) {
    dut->imem_req_ready = 1;
    dut->eval();

    bool passed = true;
    passed &= check("request is valid when accepted", dut->imem_req_valid);
    if (dut->imem_req_addr != expected_addr) {
        std::fprintf(stderr,
                     "FAIL: accepted request got=0x%08x expected=0x%08x\n",
                     dut->imem_req_addr, expected_addr);
        passed = false;
    }

    tick(dut);
    dut->imem_req_ready = 0;
    dut->eval();
    return passed;
}

static bool send_response(Vifu_test_top* dut, const Bundle& bundle,
                          int max_cycles = 8) {
    for (int lane = 0; lane < FETCH_WIDTH; ++lane)
        dut->imem_resp_insts[lane] = bundle[lane];
    dut->imem_resp_valid = 1;

    for (int cycle = 0; cycle < max_cycles; ++cycle) {
        dut->eval();
        if (dut->imem_resp_ready) {
            tick(dut);
            dut->imem_resp_valid = 0;
            dut->eval();
            return true;
        }
        tick(dut);
    }

    dut->imem_resp_valid = 0;
    dut->eval();
    return check("IFU accepts the outstanding memory response", false);
}

static void pulse_redirect(Vifu_test_top* dut, uint32_t target) {
    dut->redirect_pc = target;
    dut->redirect_valid = 1;
    dut->eval();
    tick(dut);
    dut->redirect_valid = 0;
    dut->eval();
}

struct FetchSnapshot {
    uint32_t valid = 0;
    std::array<uint32_t, FETCH_WIDTH> pc{};
    std::array<uint32_t, FETCH_WIDTH> inst{};
};

static FetchSnapshot snapshot_fetch(Vifu_test_top* dut) {
    dut->eval();
    FetchSnapshot snapshot;
    snapshot.valid = dut->fetch_valid;
    for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
        snapshot.pc[lane] = dut->fetch_pc[lane];
        snapshot.inst[lane] = dut->fetch_insts[lane];
    }
    return snapshot;
}

static bool same_fetch(const FetchSnapshot& lhs,
                       const FetchSnapshot& rhs) {
    if (lhs.valid != rhs.valid)
        return false;
    for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
        if ((lhs.valid & (1U << lane)) == 0)
            continue;
        if (lhs.pc[lane] != rhs.pc[lane] ||
            lhs.inst[lane] != rhs.inst[lane])
            return false;
    }
    return true;
}

static bool expect_fetch(Vifu_test_top* dut, uint32_t expected_valid,
                         uint32_t first_pc, const Bundle& source,
                         int source_offset) {
    dut->eval();
    bool passed = true;
    if (dut->fetch_valid != expected_valid) {
        std::fprintf(stderr,
                     "FAIL: fetch valid got=0x%x expected=0x%x\n",
                     dut->fetch_valid, expected_valid);
        passed = false;
    }

    for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
        if ((expected_valid & (1U << lane)) == 0)
            continue;

        const uint32_t expected_pc = first_pc + lane * 4U;
        const uint32_t expected_inst = source[source_offset + lane];
        if (dut->fetch_pc[lane] != expected_pc) {
            std::fprintf(stderr,
                         "FAIL: fetch lane%d pc got=0x%08x expected=0x%08x\n",
                         lane, dut->fetch_pc[lane], expected_pc);
            passed = false;
        }
        if (dut->fetch_insts[lane] != expected_inst) {
            std::fprintf(stderr,
                         "FAIL: fetch lane%d inst got=0x%08x expected=0x%08x\n",
                         lane, dut->fetch_insts[lane], expected_inst);
            passed = false;
        }
    }
    return passed;
}

static void accept_fetch(Vifu_test_top* dut) {
    dut->fetch_ready = 1;
    dut->eval();
    tick(dut);
    dut->fetch_ready = 0;
    dut->eval();
}

static bool run_reset_and_sequential(Vifu_test_top* dut) {
    static constexpr Bundle FIRST = {
        0x02800401U, 0x02800802U, 0x00100823U, 0x03400000U
    };

    reset(dut);
    bool passed = true;
    passed &= expect_request(dut, RESET_PC);

    const uint32_t held_addr = dut->imem_req_addr;
    for (int cycle = 0; cycle < 4; ++cycle) {
        tick(dut);
        passed &= check("request valid is held during backpressure",
                        dut->imem_req_valid);
        passed &= check("request address is stable during backpressure",
                        dut->imem_req_addr == held_addr);
    }

    passed &= accept_request(dut, RESET_PC);
    passed &= send_response(dut, FIRST);
    passed &= expect_fetch(dut, 0xfU, RESET_PC, FIRST, 0);

    const FetchSnapshot stalled = snapshot_fetch(dut);
    for (int cycle = 0; cycle < 4; ++cycle) {
        tick(dut);
        passed &= check("fetch packet is stable during backend backpressure",
                        same_fetch(stalled, snapshot_fetch(dut)));
    }

    accept_fetch(dut);
    passed &= expect_request(dut, RESET_PC + FETCH_BYTES);

    if (passed)
        std::printf("PASS: IFU reset, sequential fetch, and backpressure\n");
    return passed;
}

static bool run_redirect_while_request_stalled(Vifu_test_top* dut) {
    static constexpr uint32_t FIRST_TARGET = RESET_PC + 0x44U;
    static constexpr uint32_t FINAL_TARGET = RESET_PC + 0x88U;
    static constexpr uint32_t FINAL_BASE = RESET_PC + 0x80U;
    static constexpr Bundle STALE = {
        0x11111111U, 0x22222222U, 0x33333333U, 0x44444444U
    };
    static constexpr Bundle TARGET = {
        0xaaaaaaaaU, 0xbbbbbbbbU, 0x02801c0aU, 0x03400000U
    };

    reset(dut);
    bool passed = true;
    passed &= expect_request(dut, RESET_PC);

    pulse_redirect(dut, FIRST_TARGET);
    passed &= check("stalled request remains valid across redirect",
                    dut->imem_req_valid);
    passed &= check("stalled request payload remains stable across redirect",
                    dut->imem_req_addr == RESET_PC);

    pulse_redirect(dut, FINAL_TARGET);
    passed &= check("second redirect does not mutate stalled request",
                    dut->imem_req_valid &&
                    dut->imem_req_addr == RESET_PC);

    passed &= accept_request(dut, RESET_PC);
    passed &= send_response(dut, STALE);
    passed &= check("response from pre-redirect request is discarded",
                    dut->fetch_valid == 0);

    passed &= expect_request(dut, FINAL_BASE);
    passed &= accept_request(dut, FINAL_BASE);
    passed &= send_response(dut, TARGET);
    passed &= expect_fetch(dut, 0x3U, FINAL_TARGET, TARGET, 2);

    accept_fetch(dut);
    passed &= expect_request(dut, FINAL_BASE + FETCH_BYTES);

    if (passed)
        std::printf("PASS: IFU stalled request and latest redirect\n");
    return passed;
}

static bool run_redirect_with_pending_response(Vifu_test_top* dut) {
    static constexpr uint32_t TARGET_PC = RESET_PC + 0x40U;
    static constexpr Bundle STALE = {
        0x10000001U, 0x10000002U, 0x10000003U, 0x10000004U
    };
    static constexpr Bundle TARGET = {
        0x02800405U, 0x02800806U, 0x001018a7U, 0x03400000U
    };

    reset(dut);
    bool passed = true;
    passed &= expect_request(dut, RESET_PC);
    passed &= accept_request(dut, RESET_PC);

    pulse_redirect(dut, TARGET_PC);
    passed &= check("single-outstanding IFU waits for stale response",
                    !dut->imem_req_valid);

    passed &= send_response(dut, STALE);
    passed &= check("pending stale response never reaches backend",
                    dut->fetch_valid == 0);

    passed &= expect_request(dut, TARGET_PC);
    passed &= accept_request(dut, TARGET_PC);
    passed &= send_response(dut, TARGET);
    passed &= expect_fetch(dut, 0xfU, TARGET_PC, TARGET, 0);

    if (passed)
        std::printf("PASS: IFU discards pending stale response\n");
    return passed;
}

static bool run_redirect_flushes_fetch_buffer(Vifu_test_top* dut) {
    static constexpr uint32_t TARGET_PC = RESET_PC + 0x28U;
    static constexpr uint32_t TARGET_BASE = RESET_PC + 0x20U;
    static constexpr Bundle WRONG_PATH = {
        0x29800001U, 0x29800002U, 0x29800003U, 0x29800004U
    };
    static constexpr Bundle TARGET = {
        0xdead0000U, 0xdead0001U, 0x02802409U, 0x03400000U
    };

    reset(dut);
    bool passed = true;
    passed &= accept_request(dut, RESET_PC);
    passed &= send_response(dut, WRONG_PATH);
    passed &= expect_fetch(dut, 0xfU, RESET_PC, WRONG_PATH, 0);

    pulse_redirect(dut, TARGET_PC);
    passed &= check("redirect invalidates stalled wrong-path fetch packet",
                    dut->fetch_valid == 0);

    passed &= expect_request(dut, TARGET_BASE);
    passed &= accept_request(dut, TARGET_BASE);
    passed &= send_response(dut, TARGET);
    passed &= expect_fetch(dut, 0x3U, TARGET_PC, TARGET, 2);

    if (passed)
        std::printf("PASS: IFU redirect flushes buffered wrong path\n");
    return passed;
}

static bool run_adef_fault_hold(Vifu_test_top* dut) {
    static constexpr uint32_t ADEF_PC = 0x227f9789U;
    static constexpr uint32_t HANDLER_PC = 0x1c008000U;
    static constexpr Bundle WRONG_PATH = {
        0x02800401U, 0x02800802U, 0x00100823U, 0x03400000U
    };

    reset(dut);
    bool passed = true;
    passed &= accept_request(dut, RESET_PC);
    passed &= send_response(dut, WRONG_PATH);

    pulse_redirect(dut, ADEF_PC);
    passed &= check("ADEF does not issue an instruction-memory request",
                    !dut->imem_req_valid);

    tick(dut);
    dut->eval();
    passed &= check("ADEF produces one synthetic fetch lane",
                    dut->fetch_valid == 0x1U);
    passed &= check("ADEF preserves the exact misaligned PC",
                    dut->fetch_pc[0] == ADEF_PC);
    passed &= check("ADEF synthetic instruction is zero",
                    dut->fetch_insts[0] == 0);

    const FetchSnapshot stalled = snapshot_fetch(dut);
    for (int cycle = 0; cycle < 3; ++cycle) {
        tick(dut);
        passed &= check("ADEF packet is stable under backpressure",
                        same_fetch(stalled, snapshot_fetch(dut)));
        passed &= check("ADEF still suppresses memory requests",
                        !dut->imem_req_valid);
    }

    accept_fetch(dut);
    for (int cycle = 0; cycle < 3; ++cycle) {
        tick(dut);
        passed &= check("accepted ADEF is not emitted twice",
                        dut->fetch_valid == 0);
        passed &= check("IFU holds requests until exception redirect",
                        !dut->imem_req_valid);
    }

    pulse_redirect(dut, HANDLER_PC);
    passed &= expect_request(dut, HANDLER_PC);

    if (passed)
        std::printf("PASS: IFU ADEF synthesis and fault hold\n");
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vifu_test_top;

    bool passed = true;
    passed &= run_reset_and_sequential(dut);
    passed &= run_redirect_while_request_stalled(dut);
    passed &= run_redirect_with_pending_response(dut);
    passed &= run_redirect_flushes_fetch_buffer(dut);
    passed &= run_adef_fault_hold(dut);

    dut->final();
    delete dut;

    if (!passed)
        return 1;

    std::printf("PASS: ifu\n");
    return 0;
}
