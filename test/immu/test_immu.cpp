#include "Vimmu_test_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <string>

namespace {

constexpr uint8_t ECODE_PIF = 0x03;
constexpr uint8_t ECODE_PPI = 0x07;
constexpr uint8_t ECODE_TLBR = 0x3f;

constexpr uint32_t make_crmd(uint8_t plv, bool da, bool pg,
                             uint8_t datf = 0, uint8_t datm = 0) {
    return (uint32_t(plv) & 0x3u) |
           (uint32_t(da) << 3) |
           (uint32_t(pg) << 4) |
           ((uint32_t(datf) & 0x3u) << 5) |
           ((uint32_t(datm) & 0x3u) << 7);
}

constexpr uint32_t make_dmw(uint8_t vseg, uint8_t pseg, uint8_t mat,
                            bool plv0, bool plv3) {
    return ((uint32_t(vseg) & 0x7u) << 29) |
           ((uint32_t(pseg) & 0x7u) << 25) |
           ((uint32_t(mat) & 0x3u) << 4) |
           (uint32_t(plv3) << 3) |
           uint32_t(plv0);
}

uint32_t translated_paddr(uint32_t vaddr, uint32_t ppn, uint8_t ps) {
    const uint32_t offset_mask =
        ps == 31 ? 0x7fff'ffffu : ((uint32_t{1} << ps) - 1u);
    return ((ppn << 12) & ~offset_mask) | (vaddr & offset_mask);
}

struct ResponseSnapshot {
    uint32_t vaddr;
    uint32_t paddr;
    uint32_t badvaddr;
    uint8_t mat;
    uint8_t cacheable;
    uint8_t xcpt_valid;
    uint8_t xcpt_code;
};

class Testbench {
  public:
    explicit Testbench(Vimmu_test_top* dut) : dut_(dut) {}

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

    void reset() {
        clear_inputs();
        dut_->rst_n = 0;
        tick();
        tick();
        dut_->rst_n = 1;
        tick();

        check("reset exposes request readiness", dut_->req_ready == 1);
        check("reset has no TLB request", dut_->tlb_req_valid == 0);
        check("reset has no response", dut_->resp_valid == 0);
    }

    void clear_inputs() {
        dut_->flush = 0;
        dut_->req_valid = 0;
        dut_->req_vaddr = 0;
        dut_->csr_crmd = make_crmd(0, true, false);
        dut_->csr_asid = 0;
        dut_->csr_dmw0 = 0;
        dut_->csr_dmw1 = 0;
        dut_->tlb_req_ready = 1;
        dut_->tlb_resp_valid = 0;
        dut_->tlb_found = 0;
        dut_->tlb_ps = 12;
        dut_->tlb_ppn = 0;
        dut_->tlb_v = 0;
        dut_->tlb_d = 0;
        dut_->tlb_mat = 0;
        dut_->tlb_plv = 0;
        dut_->resp_ready = 0;
    }

    void accept_request(uint32_t vaddr, uint32_t crmd, uint32_t asid,
                        uint32_t dmw0 = 0, uint32_t dmw1 = 0) {
        dut_->req_vaddr = vaddr;
        dut_->csr_crmd = crmd;
        dut_->csr_asid = asid;
        dut_->csr_dmw0 = dmw0;
        dut_->csr_dmw1 = dmw1;
        dut_->req_valid = 1;
        dut_->eval();
        check("request is accepted only while ready", dut_->req_ready == 1);
        tick();
        dut_->req_valid = 0;
        dut_->eval();
        check("accepted request applies backpressure", dut_->req_ready == 0);
    }

    void enter_tlb_wait() {
        check("mapped request emits TLB query", dut_->tlb_req_valid == 1);
        tick();
        check("TLB query is a single-cycle pulse",
              dut_->tlb_req_valid == 0);
        check("mapped request waits for TLB response",
              dut_->resp_valid == 0);
    }

    void return_tlb(bool found, uint8_t ps, uint32_t ppn, bool valid,
                    uint8_t mat, uint8_t plv, bool dirty = true) {
        dut_->tlb_found = found;
        dut_->tlb_ps = ps;
        dut_->tlb_ppn = ppn;
        dut_->tlb_v = valid;
        dut_->tlb_d = dirty;
        dut_->tlb_mat = mat;
        dut_->tlb_plv = plv;
        dut_->tlb_resp_valid = 1;
        tick();
        dut_->tlb_resp_valid = 0;
        dut_->eval();
    }

    void wait_for_bypass_response() {
        check("bypass path does not query TLB",
              dut_->tlb_req_valid == 0);
        check("bypass response is registered", dut_->resp_valid == 0);
        tick();
        check("bypass response becomes valid", dut_->resp_valid == 1);
    }

    ResponseSnapshot snapshot() const {
        return {
            dut_->resp_vaddr,
            dut_->resp_paddr,
            dut_->resp_badvaddr,
            static_cast<uint8_t>(dut_->resp_mat),
            static_cast<uint8_t>(dut_->resp_cacheable),
            static_cast<uint8_t>(dut_->resp_xcpt_valid),
            static_cast<uint8_t>(dut_->resp_xcpt_code),
        };
    }

    void check_snapshot(const std::string& prefix,
                        const ResponseSnapshot& expected) {
        check(prefix + " keeps valid", dut_->resp_valid == 1);
        check_eq(prefix + " vaddr", dut_->resp_vaddr, expected.vaddr);
        check_eq(prefix + " paddr", dut_->resp_paddr, expected.paddr);
        check_eq(prefix + " badvaddr", dut_->resp_badvaddr,
                 expected.badvaddr);
        check_eq(prefix + " MAT", dut_->resp_mat, expected.mat);
        check_eq(prefix + " cacheable", dut_->resp_cacheable,
                 expected.cacheable);
        check_eq(prefix + " exception valid", dut_->resp_xcpt_valid,
                 expected.xcpt_valid);
        check_eq(prefix + " exception code", dut_->resp_xcpt_code,
                 expected.xcpt_code);
    }

    void consume_response() {
        dut_->resp_ready = 1;
        dut_->eval();
        check("response remains visible in handshake cycle",
              dut_->resp_valid == 1);
        tick();
        dut_->resp_ready = 0;
        dut_->eval();
        check("response retires after handshake", dut_->resp_valid == 0);
        check("next request is accepted after response",
              dut_->req_ready == 1);
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
    void check_eq(const std::string& name, Actual actual,
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

    int failures() const { return failures_; }
    int checks() const { return checks_; }

  private:
    Vimmu_test_top* dut_;
    uint64_t time_ = 0;
    int failures_ = 0;
    int checks_ = 0;
};

void test_direct_and_backpressure(Testbench& tb, Vimmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t vaddr = 0x1c00'0124;
    tb.accept_request(vaddr, make_crmd(0, true, false, 1), 0x155);
    tb.wait_for_bypass_response();

    const ResponseSnapshot expected{
        vaddr, vaddr, 0, 1, 1, 0, 0,
    };
    tb.check_snapshot("direct response", expected);

    for (int cycle = 0; cycle < 3; ++cycle) {
        tb.tick();
        tb.check_snapshot("backpressured response", expected);
        tb.check("backpressured response never reissues TLB",
                 dut->tlb_req_valid == 0);
    }

    tb.consume_response();
    std::printf("PASS: direct mode and response backpressure\n");
}

void test_dmw_paths(Testbench& tb, Vimmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t vaddr0 = 0x8000'1234;
    constexpr uint32_t dmw0 = make_dmw(4, 2, 1, true, false);
    constexpr uint32_t dmw1_same = make_dmw(4, 3, 2, true, false);

    tb.accept_request(vaddr0, make_crmd(0, false, true), 0x12,
                      dmw0, dmw1_same);
    tb.wait_for_bypass_response();
    tb.check_eq("DMW0 has priority over DMW1", dut->resp_paddr,
                0x4000'1234u);
    tb.check_eq("DMW0 MAT", dut->resp_mat, 1);
    tb.check("DMW0 cacheability", dut->resp_cacheable == 1);
    tb.check("DMW0 has no exception", dut->resp_xcpt_valid == 0);
    tb.consume_response();

    constexpr uint32_t vaddr1 = 0xa000'5678;
    constexpr uint32_t dmw1 = make_dmw(5, 1, 2, true, false);
    tb.accept_request(vaddr1, make_crmd(0, false, true), 0x34,
                      dmw0, dmw1);
    tb.wait_for_bypass_response();
    tb.check_eq("DMW1 physical segment", dut->resp_paddr,
                0x2000'5678u);
    tb.check_eq("DMW1 MAT", dut->resp_mat, 2);
    tb.check("non-CC DMW is not cacheable", dut->resp_cacheable == 0);
    tb.consume_response();

    std::printf("PASS: DMW bypass and priority\n");
}

void test_tlb_success_and_snapshot(Testbench& tb,
                                   Vimmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t vaddr4k = 0x4567'8abc;
    constexpr uint32_t asid = 0x2a5;
    constexpr uint32_t ppn4k = 0x12345;

    tb.accept_request(vaddr4k, make_crmd(0, false, true), asid);

    // Live CSR changes after acceptance must not alter this request.
    dut->csr_crmd = make_crmd(0, true, false, 2);
    dut->csr_asid = 0x011;
    dut->eval();
    tb.check("CSR snapshot preserves mapped mode", dut->tlb_req_valid == 1);
    tb.check_eq("TLB request preserves virtual address",
                dut->tlb_req_vaddr, vaddr4k);
    tb.check_eq("TLB request preserves ASID", dut->tlb_req_asid,
                asid);

    tb.enter_tlb_wait();
    tb.tick();
    tb.tick();
    tb.check("delayed TLB response does not repeat query",
             dut->tlb_req_valid == 0);
    tb.check("delayed TLB response does not fabricate response",
             dut->resp_valid == 0);

    tb.return_tlb(true, 12, ppn4k, true, 1, 0);
    tb.check("4KB translation produces response", dut->resp_valid == 1);
    tb.check_eq("4KB translated address", dut->resp_paddr,
                translated_paddr(vaddr4k, ppn4k, 12));
    tb.check_eq("4KB response retains virtual address",
                dut->resp_vaddr, vaddr4k);
    tb.check("4KB response is cacheable", dut->resp_cacheable == 1);
    tb.check("4KB response has no exception", dut->resp_xcpt_valid == 0);
    tb.consume_response();

    constexpr uint32_t vaddr4m = 0x4076'5430;
    constexpr uint32_t ppn4m = 0xabc00;
    tb.accept_request(vaddr4m, make_crmd(0, false, true), 0x077);
    tb.enter_tlb_wait();
    tb.return_tlb(true, 22, ppn4m, true, 2, 0);
    tb.check_eq("4MB translated address", dut->resp_paddr,
                translated_paddr(vaddr4m, ppn4m, 22));
    tb.check_eq("4MB MAT", dut->resp_mat, 2);
    tb.check("4MB non-CC response is not cacheable",
             dut->resp_cacheable == 0);
    tb.check("4MB response has no exception", dut->resp_xcpt_valid == 0);
    tb.consume_response();

    std::printf("PASS: TLB translations and CSR snapshot\n");
}

void test_tlb_request_backpressure(Testbench& tb,
                                   Vimmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t vaddr = 0x4567'8120;
    constexpr uint32_t asid = 0x2a5;
    constexpr uint32_t ppn = 0x23456;

    dut->tlb_req_ready = 0;
    tb.accept_request(vaddr, make_crmd(0, false, true), asid);

    for (int cycle = 0; cycle < 4; ++cycle) {
        tb.check("blocked TLB request remains valid",
                 dut->tlb_req_valid == 1);
        tb.check_eq("blocked TLB request keeps vaddr",
                    dut->tlb_req_vaddr, vaddr);
        tb.check_eq("blocked TLB request keeps ASID",
                    dut->tlb_req_asid, asid);
        tb.check("blocked TLB request has no response",
                 dut->resp_valid == 0);

        dut->csr_crmd = make_crmd(0, true, false, 2);
        dut->csr_asid = 0x011;
        tb.tick();
    }

    dut->tlb_req_ready = 1;
    dut->eval();
    tb.check("grant observes the held TLB request",
             dut->tlb_req_valid == 1);
    tb.tick();
    dut->tlb_req_ready = 0;
    dut->eval();
    tb.check("accepted TLB request stops retrying",
             dut->tlb_req_valid == 0);
    tb.check("accepted TLB request waits for response",
             dut->resp_valid == 0);

    tb.return_tlb(true, 12, ppn, true, 1, 0);
    tb.check("backpressured lookup produces response",
             dut->resp_valid == 1);
    tb.check_eq("backpressured lookup translated address",
                dut->resp_paddr,
                translated_paddr(vaddr, ppn, 12));
    tb.check_eq("backpressured lookup retains vaddr",
                dut->resp_vaddr, vaddr);
    tb.check("backpressured lookup has no exception",
             dut->resp_xcpt_valid == 0);
    tb.consume_response();

    std::printf("PASS: TLB request backpressure and retry\n");
}

void run_fault(Testbench& tb, Vimmu_test_top* dut,
               const char* name, uint32_t crmd, bool found, bool valid,
               uint8_t entry_plv, uint8_t expected_code) {
    static uint32_t sequence = 0;
    const uint32_t vaddr = 0x6000'1000u + (sequence++ << 12);

    tb.accept_request(vaddr, crmd, 0x188);
    tb.enter_tlb_wait();
    tb.return_tlb(found, 12, 0x34567, valid, 1, entry_plv);

    tb.check(std::string(name) + " produces response",
             dut->resp_valid == 1);
    tb.check(std::string(name) + " marks exception",
             dut->resp_xcpt_valid == 1);
    tb.check_eq(std::string(name) + " exception code",
                dut->resp_xcpt_code, expected_code);
    tb.check_eq(std::string(name) + " BADV", dut->resp_badvaddr,
                vaddr);
    tb.check_eq(std::string(name) + " retains request vaddr",
                dut->resp_vaddr, vaddr);
    tb.consume_response();
}

void test_fetch_exceptions(Testbench& tb, Vimmu_test_top* dut) {
    tb.reset();

    run_fault(tb, dut, "TLBR", make_crmd(0, false, true),
              false, false, 0, ECODE_TLBR);
    run_fault(tb, dut, "PIF", make_crmd(0, false, true),
              true, false, 0, ECODE_PIF);
    run_fault(tb, dut, "PPI", make_crmd(3, false, true),
              true, true, 0, ECODE_PPI);

    std::printf("PASS: fetch translation exceptions\n");
}

void test_flush_boundaries(Testbench& tb, Vimmu_test_top* dut) {
    tb.reset();

    // Cancel a mapped request before its query reaches the TLB clock edge.
    tb.accept_request(0x4000'1000, make_crmd(0, false, true), 0x101);
    tb.check("pre-flush lookup is visible", dut->tlb_req_valid == 1);
    dut->flush = 1;
    dut->eval();
    tb.check("flush suppresses lookup immediately",
             dut->tlb_req_valid == 0);
    tb.tick();
    dut->flush = 0;
    dut->eval();
    tb.check("flush-before-lookup returns to idle", dut->req_ready == 1);
    tb.check("flush-before-lookup has no response", dut->resp_valid == 0);

    // Cancel after the lookup pulse but before the response.
    tb.accept_request(0x4000'2000, make_crmd(0, false, true), 0x102);
    tb.enter_tlb_wait();
    dut->flush = 1;
    tb.tick();
    dut->flush = 0;
    dut->eval();
    tb.check("wait-state flush returns to idle", dut->req_ready == 1);

    dut->tlb_resp_valid = 1;
    dut->tlb_found = 1;
    dut->tlb_v = 1;
    dut->tlb_ps = 12;
    dut->tlb_ppn = 0x22222;
    dut->tlb_mat = 1;
    dut->tlb_plv = 0;
    tb.tick();
    dut->tlb_resp_valid = 0;
    dut->eval();
    tb.check("late killed TLB response is ignored", dut->resp_valid == 0);

    // A returning TLB response loses to a same-cycle flush.
    tb.accept_request(0x4000'3000, make_crmd(0, false, true), 0x103);
    tb.enter_tlb_wait();
    dut->tlb_resp_valid = 1;
    dut->tlb_found = 1;
    dut->tlb_v = 1;
    dut->tlb_ppn = 0x33333;
    dut->flush = 1;
    dut->eval();
    tb.check("flush suppresses same-cycle returning response",
             dut->resp_valid == 0);
    tb.tick();
    dut->tlb_resp_valid = 0;
    dut->flush = 0;
    dut->eval();
    tb.check("same-cycle response flush returns idle", dut->req_ready == 1);
    tb.check("same-cycle response flush leaves no response",
             dut->resp_valid == 0);

    // A response already held for the IFU must also be cancellable.
    tb.accept_request(0x1c00'0080,
                      make_crmd(0, true, false, 1), 0);
    tb.wait_for_bypass_response();
    dut->flush = 1;
    dut->eval();
    tb.check("flush suppresses held response immediately",
             dut->resp_valid == 0);
    tb.tick();
    dut->flush = 0;
    dut->eval();
    tb.check("held-response flush returns idle", dut->req_ready == 1);
    tb.check("held-response flush does not leak response",
             dut->resp_valid == 0);

    // Confirm the controller remains usable after all cancellation paths.
    tb.accept_request(0x1c00'0100,
                      make_crmd(0, true, false, 1), 0);
    tb.wait_for_bypass_response();
    tb.check_eq("post-flush request is not stale", dut->resp_paddr,
                0x1c00'0100u);
    tb.consume_response();

    std::printf("PASS: flush and stale-response boundaries\n");
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    auto* dut = new Vimmu_test_top;
    Testbench tb(dut);

    test_direct_and_backpressure(tb, dut);
    test_dmw_paths(tb, dut);
    test_tlb_success_and_snapshot(tb, dut);
    test_tlb_request_backpressure(tb, dut);
    test_fetch_exceptions(tb, dut);
    test_flush_boundaries(tb, dut);

    dut->final();
    delete dut;

    if (tb.failures() != 0) {
        std::printf("FAIL: immu failures=%d checks=%d\n",
                    tb.failures(), tb.checks());
        return 1;
    }

    std::printf("PASS: immu checks=%d\n", tb.checks());
    return 0;
}
