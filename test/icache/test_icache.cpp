#include "Vicache_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <random>
#include <string>

namespace {

constexpr int FETCH_WIDTH = 4;
constexpr int FETCH_BYTES = FETCH_WIDTH * 4;
#ifndef TEST_LINE_BYTES
#define TEST_LINE_BYTES 64
#endif
constexpr int LINE_BYTES = TEST_LINE_BYTES;
constexpr int LINE_BEATS = LINE_BYTES / 4;
constexpr int FETCHES_PER_LINE = LINE_BYTES / FETCH_BYTES;
constexpr int NUM_SETS = 4;

static_assert(LINE_BYTES >= FETCH_BYTES);
static_assert((LINE_BYTES & (LINE_BYTES - 1)) == 0);
static_assert((LINE_BYTES % FETCH_BYTES) == 0);

uint32_t align_down(uint32_t value, uint32_t alignment) {
    return value & ~(alignment - 1u);
}

uint32_t memory_word(uint32_t address) {
    return 0x5a00'0000u ^ (address * 0x9e37'79b1u);
}

enum class MissExpectation {
    Hit,
    Miss,
    Either,
};

struct MemoryRequest {
    uint32_t address = 0;
    uint8_t len = 0;
};

class Testbench {
  public:
    explicit Testbench(Vicache_test_top* dut) : dut_(dut) {}

    void tick() {
        dut_->clk = 0;
        dut_->eval();
        ++time_;
        dut_->clk = 1;
        dut_->eval();
        ++time_;
        dut_->clk = 0;
        dut_->eval();
    }

    void clear_inputs() {
        dut_->req_valid = 0;
        dut_->req_paddr = 0;
        dut_->req_cacheable = 0;
        dut_->resp_ready = 0;

        dut_->maint_valid = 0;
        dut_->maint_mode = 0;
        dut_->maint_all = 0;
        dut_->maint_vaddr = 0;
        dut_->maint_paddr = 0;

        dut_->mem_req_ready = 0;
        dut_->mem_resp_valid = 0;
        dut_->mem_resp_data = 0;
        dut_->mem_resp_last = 0;
    }

    void reset() {
        clear_inputs();
        dut_->rst_n = 0;
        tick();
        tick();
        dut_->rst_n = 1;
        tick();

        check("reset accepts an IFU request", dut_->req_ready == 1);
        check("reset has no IFU response", dut_->resp_valid == 0);
        check("reset has no memory request", dut_->mem_req_valid == 0);
        check("reset accepts maintenance", dut_->maint_ready == 1);
        check("reset has no maintenance completion",
              dut_->maint_done == 0);
    }

    void accept_request(uint32_t address, bool cacheable) {
        dut_->req_paddr = address;
        dut_->req_cacheable = cacheable;
        dut_->req_valid = 1;

        bool accepted = false;
        for (int cycle = 0; cycle < 32; ++cycle) {
            dut_->eval();
            if (dut_->req_ready) {
                tick();
                accepted = true;
                break;
            }
            tick();
        }
        check("IFU request eventually accepted", accepted);

        dut_->req_valid = 0;
        dut_->req_paddr = address ^ 0x00ff'fff0u;
        dut_->req_cacheable = !cacheable;
        dut_->eval();
    }

    MemoryRequest accept_memory_request(int stall_cycles,
                                        bool cacheable,
                                        uint32_t request_address) {
        bool observed = false;
        for (int cycle = 0; cycle < 64; ++cycle) {
            dut_->eval();
            if (dut_->mem_req_valid) {
                observed = true;
                break;
            }
            check("miss does not produce an early IFU response",
                  dut_->resp_valid == 0);
            tick();
        }
        check("miss emits a lower-memory request", observed);

        MemoryRequest request{
            dut_->mem_req_addr,
            static_cast<uint8_t>(dut_->mem_req_len),
        };
        const uint32_t expected_address = align_down(
            request_address, cacheable ? LINE_BYTES : FETCH_BYTES);
        const uint8_t expected_len =
            static_cast<uint8_t>(cacheable ? LINE_BEATS - 1
                                           : FETCH_WIDTH - 1);

        check_equal("memory request address", request.address,
                    expected_address);
        check_equal("memory request burst length", request.len,
                    expected_len);

        for (int cycle = 0; cycle < stall_cycles; ++cycle) {
            check("memory request remains valid under backpressure",
                  dut_->mem_req_valid == 1);
            check_equal("backpressured memory address", dut_->mem_req_addr,
                        request.address);
            check_equal("backpressured memory length", dut_->mem_req_len,
                        request.len);
            tick();
        }

        dut_->mem_req_ready = 1;
        dut_->eval();
        check("memory request is visible in its handshake cycle",
              dut_->mem_req_valid == 1);
        tick();
        dut_->mem_req_ready = 0;
        dut_->eval();
        return request;
    }

    void send_memory_beat(const MemoryRequest& request, int beat,
                          int gap_cycles) {
        dut_->mem_resp_valid = 0;
        for (int cycle = 0; cycle < gap_cycles; ++cycle) {
            check("cache waits for a delayed memory beat",
                  dut_->mem_resp_ready == 1);
            tick();
        }

        const uint32_t data = memory_word(request.address + beat * 4u);
        const bool last = beat == request.len;
        dut_->mem_resp_valid = 1;
        dut_->mem_resp_data = data;
        dut_->mem_resp_last = last;

        bool accepted = false;
        for (int cycle = 0; cycle < 32; ++cycle) {
            dut_->eval();
            if (dut_->mem_resp_ready) {
                tick();
                accepted = true;
                break;
            }

            check_equal("backpressured memory response data",
                        dut_->mem_resp_data, data);
            check_equal("backpressured memory response last",
                        dut_->mem_resp_last, last);
            tick();
        }
        check("memory response beat eventually accepted", accepted);

        dut_->mem_resp_valid = 0;
        dut_->mem_resp_data = 0;
        dut_->mem_resp_last = 0;
        dut_->eval();
    }

    void serve_memory(const MemoryRequest& request, unsigned gap_seed) {
        for (int beat = 0; beat <= request.len; ++beat) {
            const int gap = static_cast<int>((gap_seed + beat * 3u) % 3u);
            send_memory_beat(request, beat, gap);
        }
    }

    bool wait_for_response_or_memory() {
        for (int cycle = 0; cycle < 64; ++cycle) {
            dut_->eval();
            if (dut_->mem_req_valid)
                return true;
            if (dut_->resp_valid)
                return false;
            tick();
        }

        check("request reaches either memory or IFU response", false);
        return false;
    }

    void wait_for_response() {
        bool observed = false;
        for (int cycle = 0; cycle < 64; ++cycle) {
            dut_->eval();
            if (dut_->resp_valid) {
                observed = true;
                break;
            }
            tick();
        }
        check("IFU response eventually becomes valid", observed);
    }

    std::array<uint32_t, FETCH_WIDTH> response_snapshot() const {
        std::array<uint32_t, FETCH_WIDTH> result{};
        for (int lane = 0; lane < FETCH_WIDTH; ++lane)
            result[lane] = dut_->resp_insts[lane];
        return result;
    }

    void check_response(uint32_t request_address) {
        check("IFU response is valid", dut_->resp_valid == 1);
        const uint32_t fetch_base = align_down(request_address, FETCH_BYTES);
        for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
            check_equal("IFU response instruction lane",
                        dut_->resp_insts[lane],
                        memory_word(fetch_base + lane * 4u));
        }
    }

    void consume_response(uint32_t request_address, int stall_cycles) {
        wait_for_response();
        check_response(request_address);
        const auto snapshot = response_snapshot();

        for (int cycle = 0; cycle < stall_cycles; ++cycle) {
            check("IFU response stays valid under backpressure",
                  dut_->resp_valid == 1);
            check("blocking cache rejects another request while responding",
                  dut_->req_ready == 0);
            for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
                check_equal("backpressured IFU response lane",
                            dut_->resp_insts[lane], snapshot[lane]);
            }
            tick();
        }

        dut_->resp_ready = 1;
        dut_->eval();
        check("IFU response is visible in its handshake cycle",
              dut_->resp_valid == 1);
        tick();
        dut_->resp_ready = 0;
        dut_->eval();
        check("IFU response retires after handshake", dut_->resp_valid == 0);
        check("cache accepts a new request after response retirement",
              dut_->req_ready == 1);
    }

    bool transact(uint32_t address, bool cacheable,
                  MissExpectation expectation,
                  int memory_request_stall = 0,
                  unsigned response_gap_seed = 0,
                  int response_stall = 0) {
        accept_request(address, cacheable);

        if (expectation == MissExpectation::Hit) {
            check("cache hit responds directly from lookup",
                  dut_->resp_valid == 1);
            check("cache hit does not request lower memory",
                  dut_->mem_req_valid == 0);
        }

        const bool missed = wait_for_response_or_memory();

        if (expectation == MissExpectation::Miss)
            check("transaction is expected to miss", missed);
        if (expectation == MissExpectation::Hit)
            check("transaction is expected to hit", !missed);

        if (missed) {
            const MemoryRequest request = accept_memory_request(
                memory_request_stall, cacheable, address);
            serve_memory(request, response_gap_seed);
        } else {
            check("hit emits no lower-memory request",
                  dut_->mem_req_valid == 0);
        }

        consume_response(address, response_stall);
        return missed;
    }

    void maintain(uint8_t mode, bool all, uint32_t vaddr,
                  uint32_t paddr) {
        dut_->maint_mode = mode;
        dut_->maint_all = all;
        dut_->maint_vaddr = vaddr;
        dut_->maint_paddr = paddr;
        dut_->maint_valid = 1;

        bool accepted = false;
        for (int cycle = 0; cycle < 32; ++cycle) {
            dut_->eval();
            if (dut_->maint_ready) {
                tick();
                accepted = true;
                break;
            }
            tick();
        }
        check("maintenance eventually accepted", accepted);

        dut_->maint_valid = 0;
        dut_->maint_mode = 0;
        dut_->maint_all = 0;
        dut_->maint_vaddr = 0;
        dut_->maint_paddr = 0;
        dut_->eval();
        check("accepted maintenance produces completion",
              dut_->maint_done == 1);
        tick();
        check("maintenance completion is a pulse",
              dut_->maint_done == 0);
    }

    void check(const std::string& name, bool condition) {
        ++checks_;
        if (!condition) {
            ++failures_;
            std::printf("FAIL: %s at t=%llu\n", name.c_str(),
                        static_cast<unsigned long long>(time_));
        }
    }

    template <typename Actual, typename Expected>
    void check_equal(const std::string& name, Actual actual,
                     Expected expected) {
        ++checks_;
        const uint64_t actual_value = static_cast<uint64_t>(actual);
        const uint64_t expected_value = static_cast<uint64_t>(expected);
        if (actual_value != expected_value) {
            ++failures_;
            std::printf(
                "FAIL: %s actual=0x%llx expected=0x%llx at t=%llu\n",
                name.c_str(),
                static_cast<unsigned long long>(actual_value),
                static_cast<unsigned long long>(expected_value),
                static_cast<unsigned long long>(time_));
        }
    }

    int checks() const { return checks_; }
    int failures() const { return failures_; }

  private:
    Vicache_test_top* dut_;
    uint64_t time_ = 0;
    int checks_ = 0;
    int failures_ = 0;
};

void test_refill_hit_and_offsets(Testbench& tb) {
    tb.reset();

    tb.transact(0x0000'1000u, true, MissExpectation::Miss, 3, 1, 2);
    tb.transact(0x0000'1010u, true, MissExpectation::Hit, 0, 0, 3);
    tb.transact(0x0000'1000u + LINE_BYTES - FETCH_BYTES, true,
                MissExpectation::Hit);
    tb.transact(0x0000'1000u, true, MissExpectation::Hit);

    std::printf("PASS: cacheable refill, hit, and line offsets\n");
}

void test_uncached_bypass(Testbench& tb) {
    tb.reset();

    constexpr uint32_t address = 0x0000'3010u;
    tb.transact(address, false, MissExpectation::Miss, 2, 2, 1);
    tb.transact(address, false, MissExpectation::Miss, 1, 1, 0);
    tb.transact(address, true, MissExpectation::Miss, 2, 0, 0);
    tb.transact(address, true, MissExpectation::Hit);

    std::printf("PASS: uncached bypass does not allocate\n");
}

void test_maintenance_modes(Testbench& tb) {
    tb.reset();

    constexpr uint32_t first = 0x0000'2000u;
    constexpr uint32_t set_stride = NUM_SETS * LINE_BYTES;
    constexpr uint32_t second = first + set_stride;
    constexpr uint32_t unrelated = 0x0000'3400u;

    tb.transact(first, true, MissExpectation::Miss);
    tb.transact(second, true, MissExpectation::Miss);

    // Mode 0 uses the VA set and low way bits. The unrelated PA must not
    // redirect the operation to another line.
    tb.maintain(0, false, first | 0u, unrelated);
    tb.transact(first, true, MissExpectation::Miss);
    tb.transact(second, true, MissExpectation::Hit);

    tb.reset();
    tb.transact(first, true, MissExpectation::Miss);
    tb.transact(second, true, MissExpectation::Miss);
    tb.maintain(1, false, first | 1u, unrelated);
    tb.transact(first, true, MissExpectation::Hit);
    tb.transact(second, true, MissExpectation::Miss);

    tb.reset();
    tb.transact(first, true, MissExpectation::Miss);
    tb.transact(second, true, MissExpectation::Miss);
    // Mode 2 ignores VA way selection and invalidates the PA tag hit.
    tb.maintain(2, false, first | 1u, first + 12u);
    tb.transact(first, true, MissExpectation::Miss);
    tb.transact(second, true, MissExpectation::Hit);

    tb.maintain(2, true, 0, 0);
    tb.transact(first, true, MissExpectation::Miss);
    tb.transact(second, true, MissExpectation::Miss);

    std::printf("PASS: indexed, hit-based, and whole-cache maintenance\n");
}

void test_two_way_replacement(Testbench& tb) {
    tb.reset();

    constexpr uint32_t first = 0x0000'4000u;
    constexpr uint32_t set_stride = NUM_SETS * LINE_BYTES;
    constexpr uint32_t second = first + set_stride;
    constexpr uint32_t third = second + set_stride;

    tb.transact(first, true, MissExpectation::Miss);
    tb.transact(second, true, MissExpectation::Miss);
    tb.transact(first, true, MissExpectation::Hit);
    tb.transact(second, true, MissExpectation::Hit);
    tb.transact(third, true, MissExpectation::Miss);
    tb.transact(third, true, MissExpectation::Hit);

    const bool first_missed =
        tb.transact(first, true, MissExpectation::Either);
    if (!first_missed)
        tb.transact(second, true, MissExpectation::Miss);

    std::printf("PASS: two-way same-set replacement\n");
}

void test_randomized_backpressure(Testbench& tb) {
    tb.reset();

    constexpr std::array<uint32_t, NUM_SETS> lines{
        0x0000'5000u,
        0x0000'5000u + LINE_BYTES,
        0x0000'5000u + 2 * LINE_BYTES,
        0x0000'5000u + 3 * LINE_BYTES,
    };
    std::array<bool, NUM_SETS> valid{};
    std::mt19937 random(0x1ca3'2026u);

    for (int operation = 0; operation < 48; ++operation) {
        const unsigned index = random() % lines.size();

        if (operation != 0 && operation % 11 == 0) {
            tb.maintain(2, false, 0, lines[index]);
            valid[index] = false;
        }

        if (operation % 7 == 6) {
            const uint32_t address =
                0x0000'6000u + uint32_t(random() % 8u) * FETCH_BYTES;
            tb.transact(address, false, MissExpectation::Miss,
                        random() % 4u, random(), random() % 4u);
            continue;
        }

        const uint32_t address = lines[index] +
            uint32_t(random() % FETCHES_PER_LINE) * FETCH_BYTES;
        const MissExpectation expectation = valid[index]
            ? MissExpectation::Hit
            : MissExpectation::Miss;
        tb.transact(address, true, expectation,
                    random() % 4u, random(), random() % 4u);
        valid[index] = true;
    }

    std::printf("PASS: deterministic randomized backpressure\n");
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vicache_test_top;
    Testbench tb(dut);

    test_refill_hit_and_offsets(tb);
    test_uncached_bypass(tb);
    test_maintenance_modes(tb);
    test_two_way_replacement(tb);
    test_randomized_backpressure(tb);

    const int failures = tb.failures();
    if (failures == 0) {
        std::printf("PASS: icache (%d checks)\n", tb.checks());
    } else {
        std::printf("FAIL: icache (%d failures, %d checks)\n",
                    failures, tb.checks());
    }

    dut->final();
    delete dut;
    return failures == 0 ? 0 : 1;
}
