#include "Vcacop_ctrl_test_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <string>

namespace {

constexpr uint8_t CACHE_I = 0;
constexpr uint8_t MAINT_INVALIDATE = 0;
constexpr uint8_t MAINT_FLUSH = 2;

unsigned failures = 0;

void check(const std::string& name, bool condition) {
    if (!condition) {
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
        ++failures;
    }
}

template <typename Actual, typename Expected>
void check_equal(const std::string& name, Actual actual, Expected expected) {
    if (actual != static_cast<Actual>(expected)) {
        std::fprintf(stderr, "FAIL: %s: got 0x%llx, expected 0x%llx\n",
                     name.c_str(),
                     static_cast<unsigned long long>(actual),
                     static_cast<unsigned long long>(expected));
        ++failures;
    }
}

class Testbench {
public:
    Testbench() : dut_(new Vcacop_ctrl_test_top) {
        clear_inputs();
        dut_->clk = 0;
        dut_->rst_n = 0;
        dut_->eval();
    }

    ~Testbench() { delete dut_; }

    void reset() {
        clear_inputs();
        dut_->rst_n = 0;
        tick();
        tick();
        dut_->rst_n = 1;
        dut_->eval();

        check("reset accepts a request", dut_->req_ready == 1);
        check("reset has no response", dut_->resp_valid == 0);
        check("reset has no I-cache command",
              dut_->icache_maint_valid == 0);
        check("reset has no D-cache command",
              dut_->dcache_maint_valid == 0);
    }

    void issue(uint8_t code, uint8_t rob_idx, uint32_t vaddr,
               uint32_t paddr, bool xcpt = false, uint8_t xcpt_code = 0,
               uint32_t badvaddr = 0) {
        dut_->req_code = code;
        dut_->req_rob_idx = rob_idx;
        dut_->req_vaddr = vaddr;
        dut_->req_paddr = paddr;
        dut_->req_xcpt_valid = xcpt;
        dut_->req_xcpt_code = xcpt_code;
        dut_->req_badvaddr = badvaddr;
        dut_->req_valid = 1;
        dut_->eval();
        check("request is accepted while idle", dut_->req_ready == 1);
        tick();
        dut_->req_valid = 0;
        dut_->req_xcpt_valid = 0;
        dut_->eval();
    }

    void expect_command(uint8_t code, uint8_t rob_idx, uint32_t vaddr,
                        uint32_t paddr, bool same_cycle_done = false) {
        const uint8_t selector = code & 0x7U;
        const uint8_t mode = code >> 3;
        const bool is_icache = selector == CACHE_I;

        check("busy controller backpressures a second request",
              dut_->req_ready == 0);
        check("only selected cache receives command",
              is_icache
                  ? dut_->icache_maint_valid && !dut_->dcache_maint_valid
                  : dut_->dcache_maint_valid && !dut_->icache_maint_valid);

        if (is_icache) {
            check_equal("I-cache mode", dut_->icache_maint_mode, mode);
            check_equal("I-cache virtual address",
                        dut_->icache_maint_vaddr, vaddr);
            check_equal("I-cache physical address",
                        dut_->icache_maint_paddr, paddr);
        } else {
            check_equal("D-cache mode", dut_->dcache_maint_mode, mode);
            check_equal("D-cache operation", dut_->dcache_maint_op,
                        mode == 0 ? MAINT_INVALIDATE : MAINT_FLUSH);
            check_equal("D-cache virtual address",
                        dut_->dcache_maint_vaddr, vaddr);
            check_equal("D-cache physical address",
                        dut_->dcache_maint_paddr, paddr);
        }

        // Command payload must remain stable until the selected cache accepts.
        tick();
        tick();
        if (is_icache) {
            check("stalled I-cache command remains valid",
                  dut_->icache_maint_valid == 1);
            check_equal("stalled I-cache mode remains stable",
                        dut_->icache_maint_mode, mode);
            dut_->icache_maint_ready = 1;
            dut_->icache_maint_done = same_cycle_done;
        } else {
            check("stalled D-cache command remains valid",
                  dut_->dcache_maint_valid == 1);
            check_equal("stalled D-cache mode remains stable",
                        dut_->dcache_maint_mode, mode);
            check_equal("stalled D-cache operation remains stable",
                        dut_->dcache_maint_op,
                        mode == 0 ? MAINT_INVALIDATE : MAINT_FLUSH);
            dut_->dcache_maint_ready = 1;
            dut_->dcache_maint_done = same_cycle_done;
        }
        tick();

        dut_->icache_maint_ready = 0;
        dut_->dcache_maint_ready = 0;
        dut_->icache_maint_done = 0;
        dut_->dcache_maint_done = 0;
        dut_->eval();

        if (!same_cycle_done) {
            check("response waits for cache completion",
                  dut_->resp_valid == 0);
            if (is_icache)
                dut_->icache_maint_done = 1;
            else
                dut_->dcache_maint_done = 1;
            tick();
            dut_->icache_maint_done = 0;
            dut_->dcache_maint_done = 0;
            dut_->eval();
        }

        expect_response(rob_idx, false, 0, 0);
    }

    void expect_response(uint8_t rob_idx, bool xcpt, uint8_t xcpt_code,
                         uint32_t badvaddr) {
        check("controller produces a response", dut_->resp_valid == 1);
        check_equal("response ROB identity", dut_->resp_rob_idx, rob_idx);
        check_equal("response exception marker",
                    dut_->resp_xcpt_valid, xcpt);
        check_equal("response exception code",
                    dut_->resp_xcpt_code, xcpt_code);
        check_equal("response BADV", dut_->resp_badvaddr, badvaddr);

        // Response identity and exception metadata must survive backpressure.
        tick();
        tick();
        check("stalled response remains valid", dut_->resp_valid == 1);
        check_equal("stalled response keeps ROB identity",
                    dut_->resp_rob_idx, rob_idx);
        check_equal("stalled response keeps exception code",
                    dut_->resp_xcpt_code, xcpt_code);
        check_equal("stalled response keeps BADV",
                    dut_->resp_badvaddr, badvaddr);

        dut_->resp_ready = 1;
        tick();
        dut_->resp_ready = 0;
        dut_->eval();
        check("accepted response clears valid", dut_->resp_valid == 0);
        check("controller accepts the next request", dut_->req_ready == 1);
    }

    void cancel_stalled_command() {
        check("command exists before flush",
              dut_->icache_maint_valid || dut_->dcache_maint_valid);
        dut_->flush_pending = 1;
        dut_->eval();
        check("flush blocks new requests", dut_->req_ready == 0);
        tick();
        dut_->flush_pending = 0;
        dut_->eval();
        check("flush cancels an unaccepted command",
              !dut_->icache_maint_valid && !dut_->dcache_maint_valid);
        check("flush suppresses response", dut_->resp_valid == 0);
        check("controller recovers after flush", dut_->req_ready == 1);
    }

    Vcacop_ctrl_test_top* dut() { return dut_; }

private:
    void clear_inputs() {
        dut_->req_valid = 0;
        dut_->req_rob_idx = 0;
        dut_->req_code = 0;
        dut_->req_vaddr = 0;
        dut_->req_paddr = 0;
        dut_->req_xcpt_valid = 0;
        dut_->req_xcpt_code = 0;
        dut_->req_badvaddr = 0;
        dut_->resp_ready = 0;
        dut_->flush_pending = 0;
        dut_->icache_maint_ready = 0;
        dut_->icache_maint_done = 0;
        dut_->dcache_maint_ready = 0;
        dut_->dcache_maint_done = 0;
    }

    void tick() {
        dut_->clk = 0;
        dut_->eval();
        dut_->clk = 1;
        dut_->eval();
        dut_->clk = 0;
        dut_->eval();
    }

    Vcacop_ctrl_test_top* dut_;
};

void test_legal_operations(Testbench& tb) {
    constexpr uint32_t vaddr = 0x8123'4567U;
    constexpr uint32_t paddr = 0x0123'4567U;
    constexpr uint8_t legal_codes[] = {
        0x00, 0x01, // mode 0: index invalidate
        0x08, 0x09, // mode 1: index writeback-invalidate
        0x10, 0x11, // mode 2: hit writeback-invalidate
    };

    tb.reset();
    for (unsigned i = 0; i < sizeof(legal_codes); ++i) {
        const uint8_t rob_idx = static_cast<uint8_t>(9 + i);
        tb.issue(legal_codes[i], rob_idx, vaddr + i, paddr + i);
        tb.expect_command(legal_codes[i], rob_idx, vaddr + i, paddr + i,
                          i == 5);
    }
    std::puts("PASS: all six supported CACOP target/mode combinations");
}

void test_translation_rules(Testbench& tb) {
    constexpr uint32_t vaddr = 0x9234'5678U;
    constexpr uint32_t paddr = 0x0234'5678U;
    constexpr uint8_t TLBR = 0x3f;

    tb.reset();

    // Direct-index modes use VA index/way bits and must not consume a TLB
    // result, even if the unused translation inputs contain an exception.
    tb.issue(0x00, 20, vaddr, paddr, true, TLBR, vaddr);
    tb.expect_command(0x00, 20, vaddr, paddr);
    tb.issue(0x09, 21, vaddr, paddr, true, TLBR, vaddr);
    tb.expect_command(0x09, 21, vaddr, paddr);

    // Hit operations require a translated physical tag. Translation faults
    // complete the uop exceptionally without touching either cache.
    constexpr uint8_t translated_codes[] = {0x10, 0x11};
    for (uint8_t code : translated_codes) {
        tb.issue(code, static_cast<uint8_t>(22 + (code & 1U)),
                 vaddr, paddr, true, TLBR, vaddr);
        check("faulting mode 2 sends no I-cache command",
              tb.dut()->icache_maint_valid == 0);
        check("faulting mode 2 sends no D-cache command",
              tb.dut()->dcache_maint_valid == 0);
        tb.expect_response(static_cast<uint8_t>(22 + (code & 1U)),
                           true, TLBR, vaddr);
    }
    std::puts("PASS: direct-index bypass and mode-2 translation faults");
}

void test_unsupported_codes_are_nops(Testbench& tb) {
    tb.reset();
    unsigned tested = 0;
    for (uint8_t code = 0; code < 32; ++code) {
        const bool supported =
            (code >> 3) != 3 && ((code & 7U) == 0 || (code & 7U) == 1);
        if (supported)
            continue;

        const uint8_t rob_idx = static_cast<uint8_t>((code + 3U) & 0x3fU);
        tb.issue(code, rob_idx, 0xa000'0000U + code,
                 0x1000'0000U + code, true, 13, 0xa000'0000U + code);
        check("unsupported code sends no I-cache command",
              tb.dut()->icache_maint_valid == 0);
        check("unsupported code sends no D-cache command",
              tb.dut()->dcache_maint_valid == 0);
        tb.expect_response(rob_idx, false, 0, 0);
        ++tested;
    }
    check_equal("all unsupported CACOP encodings covered", tested, 26U);
    std::puts("PASS: unsupported cache selectors and mode 3 are NOPs");
}

void test_flush_recovery(Testbench& tb) {
    tb.reset();
    tb.issue(0x11, 31, 0x8000'1000U, 0x0000'1000U);
    tb.cancel_stalled_command();

    tb.issue(0x00, 32, 0x8000'2001U, 0x0000'2001U);
    tb.expect_command(0x00, 32, 0x8000'2001U, 0x0000'2001U);
    std::puts("PASS: flush recovery before cache-command acceptance");
}

} // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Testbench tb;

    test_legal_operations(tb);
    test_translation_rules(tb);
    test_unsupported_codes_are_nops(tb);
    test_flush_recovery(tb);

    if (failures != 0) {
        std::fprintf(stderr, "FAIL: cacop_ctrl: %u checks failed\n", failures);
        return 1;
    }

    std::puts("PASS: cacop_ctrl");
    return 0;
}
