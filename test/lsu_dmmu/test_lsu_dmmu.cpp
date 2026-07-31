#include "Vlsu_dmmu_test_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <deque>
#include <string>

namespace {

constexpr uint8_t ECODE_PIL = 0x01;
constexpr uint8_t ECODE_PIS = 0x02;
constexpr uint8_t ECODE_PME = 0x04;
constexpr uint8_t ECODE_PPI = 0x07;

constexpr int kWaitCycles = 32;

constexpr uint32_t make_crmd(uint8_t plv, bool da, bool pg,
                             uint8_t datf = 0, uint8_t datm = 0) {
    return (uint32_t(plv) & 0x3u) |
           (uint32_t(da) << 3) |
           (uint32_t(pg) << 4) |
           ((uint32_t(datf) & 0x3u) << 5) |
           ((uint32_t(datm) & 0x3u) << 7);
}

uint32_t translated_paddr(uint32_t vaddr, uint32_t ppn, uint8_t ps) {
    const uint32_t offset_mask =
        ps == 31 ? 0x7fff'ffffu : ((uint32_t{1} << ps) - 1u);
    return ((ppn << 12) & ~offset_mask) | (vaddr & offset_mask);
}

class Testbench {
  public:
    explicit Testbench(Vlsu_dmmu_test_top* dut) : dut_(dut) {}

    void tick() {
        dut_->clk = 0;
        dut_->eval();
        ++time_;
        dut_->clk = 1;
        dut_->eval();
        ++time_;
        dut_->clk = 0;
        dut_->eval();

        if (dut_->tlb_req_valid) {
            tlb_requests_.push_back(
                {dut_->tlb_req_vaddr, dut_->tlb_req_asid});
        }
    }

    void clear_inputs() {
        dut_->dis_valid = 0;
        dut_->dis_fire = 0;
        dut_->dis_is_load = 0;
        dut_->dis_is_store = 0;
        dut_->dis_rob_idx = 0;
        dut_->dis_pdst = 0;
        dut_->dis_mem_size = 2;
        dut_->dis_mem_signed = 1;

        dut_->agen_valid = 0;
        dut_->agen_is_load = 0;
        dut_->agen_is_store = 0;
        dut_->agen_idx = 0;
        dut_->agen_rob_idx = 0;
        dut_->agen_pdst = 0;
        dut_->agen_mem_size = 2;
        dut_->agen_mem_signed = 1;
        dut_->agen_vaddr = 0;

        dut_->dgen_valid = 0;
        dut_->dgen_idx = 0;
        dut_->dgen_data = 0;

        dut_->commit_valid = 0;
        dut_->commit_is_load = 0;
        dut_->commit_is_store = 0;
        dut_->commit_idx = 0;
        dut_->rob_head_idx = 0;

        dut_->csr_crmd = make_crmd(0, true, false, 0, 1);
        dut_->csr_asid = 0;
        dut_->csr_dmw0 = 0;
        dut_->csr_dmw1 = 0;

        dut_->tlb_resp_valid = 0;
        dut_->tlb_found = 0;
        dut_->tlb_ps = 12;
        dut_->tlb_ppn = 0;
        dut_->tlb_v = 0;
        dut_->tlb_d = 0;
        dut_->tlb_mat = 0;
        dut_->tlb_plv = 0;

        dut_->xlate_xcpt_ready = 0;
        dut_->dcache_req_ready = 0;
        dut_->dcache_resp_valid = 0;
        dut_->dcache_resp_is_store = 0;
        dut_->dcache_resp_data = 0;
        dut_->dcache_resp_idx = 0;
        dut_->flush_pipeline = 0;
    }

    void reset() {
        tlb_requests_.clear();
        clear_inputs();
        dut_->rst_n = 0;
        tick();
        tick();
        dut_->rst_n = 1;
        tick();

        check("reset LDQ empty", dut_->ldq_empty == 1);
        check("reset STQ empty", dut_->stq_empty == 1);
        check("reset has no DCache request", dut_->dcache_req_valid == 0);
        check("reset has no translation exception",
              dut_->xlate_xcpt_valid == 0);
    }

    uint32_t allocate(bool store, uint32_t rob_idx, uint32_t pdst = 0,
                      uint8_t size = 2, bool is_signed = true) {
        dut_->dis_valid = 1;
        dut_->dis_is_load = store ? 0 : 1;
        dut_->dis_is_store = store ? 1 : 0;
        dut_->dis_rob_idx = rob_idx;
        dut_->dis_pdst = pdst;
        dut_->dis_mem_size = size;
        dut_->dis_mem_signed = is_signed;
        dut_->eval();

        check("LSQ allocation ready", dut_->dis_ready == 1);
        const uint32_t tag =
            store ? dut_->dis_stq_idx : dut_->dis_ldq_idx;

        dut_->dis_fire = 1;
        tick();
        dut_->dis_valid = 0;
        dut_->dis_fire = 0;
        dut_->dis_is_load = 0;
        dut_->dis_is_store = 0;
        dut_->eval();

        check(store ? "store allocation enters STQ"
                    : "load allocation enters LDQ",
              store ? dut_->stq_empty == 0 : dut_->ldq_empty == 0);
        return tag;
    }

    void submit_agen(bool store, uint32_t tag, uint32_t rob_idx,
                     uint32_t pdst, uint8_t size, bool is_signed,
                     uint32_t vaddr) {
        dut_->agen_is_load = store ? 0 : 1;
        dut_->agen_is_store = store ? 1 : 0;
        dut_->agen_idx = tag;
        dut_->agen_rob_idx = rob_idx;
        dut_->agen_pdst = pdst;
        dut_->agen_mem_size = size;
        dut_->agen_mem_signed = is_signed;
        dut_->agen_vaddr = vaddr;
        dut_->agen_valid = 1;
        tick();
        dut_->agen_valid = 0;
        dut_->agen_is_load = 0;
        dut_->agen_is_store = 0;
        dut_->eval();
    }

    void pulse_agen_while_busy(bool store, uint32_t tag,
                               uint32_t rob_idx, uint32_t pdst,
                               uint8_t size, bool is_signed,
                               uint32_t vaddr) {
        dut_->agen_is_load = store ? 0 : 1;
        dut_->agen_is_store = store ? 1 : 0;
        dut_->agen_idx = tag;
        dut_->agen_rob_idx = rob_idx;
        dut_->agen_pdst = pdst;
        dut_->agen_mem_size = size;
        dut_->agen_mem_signed = is_signed;
        dut_->agen_vaddr = vaddr;
        dut_->agen_valid = 1;
        tick();
        dut_->agen_valid = 0;
        dut_->agen_is_load = 0;
        dut_->agen_is_store = 0;
        dut_->eval();
    }

    void submit_store_data(uint32_t tag, uint32_t data) {
        dut_->dgen_idx = tag;
        dut_->dgen_data = data;
        dut_->dgen_valid = 1;
        tick();
        dut_->dgen_valid = 0;
        dut_->eval();
    }

    void commit(bool store, uint32_t tag) {
        dut_->commit_is_load = store ? 0 : 1;
        dut_->commit_is_store = store ? 1 : 0;
        dut_->commit_idx = tag;
        dut_->commit_valid = 1;
        tick();
        dut_->commit_valid = 0;
        dut_->commit_is_load = 0;
        dut_->commit_is_store = 0;
        dut_->eval();
    }

    void enter_tlb_wait(uint32_t vaddr, uint32_t asid) {
        const bool request_seen = wait_for_tlb_request(vaddr, asid);
        check("mapped AGEN emits TLB request", request_seen);
        if (!request_seen)
            return;
        tick();
        check("TLB request is a one-cycle pulse", dut_->tlb_req_valid == 0);
        check("no DCache request before TLB response",
              dut_->dcache_req_valid == 0);
    }

    void return_tlb(bool found, bool valid, bool dirty, uint8_t plv,
                    uint32_t ppn, uint8_t ps = 12, uint8_t mat = 1) {
        dut_->tlb_found = found;
        dut_->tlb_v = valid;
        dut_->tlb_d = dirty;
        dut_->tlb_plv = plv;
        dut_->tlb_ppn = ppn;
        dut_->tlb_ps = ps;
        dut_->tlb_mat = mat;
        dut_->tlb_resp_valid = 1;
        tick();
        dut_->tlb_resp_valid = 0;
        dut_->eval();
    }

    void wait_for_dcache_request(bool store) {
        for (int cycle = 0; cycle < kWaitCycles; ++cycle) {
            dut_->eval();
            if (dut_->dcache_req_valid &&
                dut_->dcache_req_is_store == store)
                return;
            tick();
        }
        check(store ? "store reaches DCache"
                    : "load reaches DCache", false);
    }

    void wait_for_store_clear(uint32_t rob_idx) {
        for (int cycle = 0; cycle < kWaitCycles; ++cycle) {
            dut_->eval();
            if (dut_->clr_bsy_valid &&
                dut_->clr_bsy_rob_idx == rob_idx)
                return;
            tick();
        }
        check("translated store clears ROB busy", false);
    }

    void wait_for_exception() {
        for (int cycle = 0; cycle < kWaitCycles; ++cycle) {
            dut_->eval();
            if (dut_->xlate_xcpt_valid)
                return;
            tick();
        }
        check("translation exception becomes visible", false);
    }

    bool wait_for_tlb_request(uint32_t vaddr, uint32_t asid) {
        for (int cycle = 0; cycle < kWaitCycles; ++cycle) {
            if (!tlb_requests_.empty()) {
                const TlbRequest request = tlb_requests_.front();
                tlb_requests_.pop_front();
                check_eq("buffered AGEN TLB vaddr",
                         request.vaddr, vaddr);
                check_eq("buffered AGEN TLB ASID",
                         request.asid, asid & 0x3ffu);
                return true;
            }
            tick();
        }
        return false;
    }

    bool wait_for_either_tlb_request(uint32_t first_vaddr,
                                     uint32_t second_vaddr,
                                     uint32_t asid,
                                     uint32_t& observed_vaddr) {
        for (int cycle = 0; cycle < kWaitCycles; ++cycle) {
            if (!tlb_requests_.empty()) {
                const TlbRequest request = tlb_requests_.front();
                tlb_requests_.pop_front();
                observed_vaddr = request.vaddr;
                check("buffered AGEN TLB request belongs to pending set",
                      observed_vaddr == first_vaddr ||
                      observed_vaddr == second_vaddr);
                check_eq("buffered AGEN TLB ASID",
                         request.asid, asid & 0x3ffu);
                return true;
            }
            tick();
        }
        return false;
    }

    void accept_dcache_request() {
        dut_->dcache_req_ready = 1;
        dut_->eval();
        check("DCache request visible in handshake cycle",
              dut_->dcache_req_valid == 1);
        tick();
        dut_->dcache_req_ready = 0;
        dut_->eval();
    }

    void return_dcache(bool store, uint32_t tag, uint32_t data = 0) {
        dut_->dcache_resp_is_store = store;
        dut_->dcache_resp_idx = tag;
        dut_->dcache_resp_data = data;
        dut_->dcache_resp_valid = 1;
        dut_->eval();
        tick();
        dut_->dcache_resp_valid = 0;
        dut_->eval();
    }

    void flush() {
        dut_->flush_pipeline = 1;
        dut_->eval();
        check("flush suppresses DCache request immediately",
              dut_->dcache_req_valid == 0);
        check("flush suppresses translation exception immediately",
              dut_->xlate_xcpt_valid == 0);
        tick();
        dut_->flush_pipeline = 0;
        dut_->eval();
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
    struct TlbRequest {
        uint32_t vaddr;
        uint32_t asid;
    };

    Vlsu_dmmu_test_top* dut_;
    std::deque<TlbRequest> tlb_requests_;
    uint64_t time_ = 0;
    int failures_ = 0;
    int checks_ = 0;
};

void test_direct_load(Testbench& tb, Vlsu_dmmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t rob = 3;
    constexpr uint32_t pdst = 9;
    constexpr uint32_t vaddr = 0x1c00'1040;
    constexpr uint32_t load_data = 0x89ab'cdef;
    const uint32_t tag = tb.allocate(false, rob, pdst);

    tb.submit_agen(false, tag, rob, pdst, 2, true, vaddr);
    tb.wait_for_dcache_request(false);
    tb.check_eq("direct load DCache paddr", dut->dcache_req_addr, vaddr);
    tb.check_eq("direct load DCache tag", dut->dcache_req_idx, tag);
    tb.check_eq("direct load DCache ROB", dut->dcache_req_rob_idx, rob);
    tb.check("direct load has no translation exception",
             dut->xlate_xcpt_valid == 0);

    tb.accept_dcache_request();
    dut->dcache_resp_is_store = 0;
    dut->dcache_resp_idx = tag;
    dut->dcache_resp_data = load_data;
    dut->dcache_resp_valid = 1;
    dut->eval();
    tb.check("load response writes back", dut->load_wb_valid == 1);
    tb.check_eq("load response data", dut->load_wb_data, load_data);
    tb.check_eq("load response ROB", dut->load_wb_rob_idx, rob);
    tb.check_eq("load response tag", dut->load_wb_ldq_idx, tag);
    tb.tick();
    dut->dcache_resp_valid = 0;
    dut->eval();

    tb.commit(false, tag);
    tb.check("direct load drains LDQ", dut->ldq_empty == 1);
    std::printf("PASS: direct load translation and writeback\n");
}

void test_store_precommit_translation(Testbench& tb,
                                      Vlsu_dmmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t rob = 7;
    constexpr uint32_t vaddr = 0x1c00'2082;
    constexpr uint32_t data = 0x0000'beef;
    const uint32_t tag = tb.allocate(true, rob, 0, 1);

    tb.submit_store_data(tag, data);
    tb.submit_agen(true, tag, rob, 0, 1, false, vaddr);
    tb.wait_for_store_clear(rob);

    for (int cycle = 0; cycle < 3; ++cycle) {
        tb.check("translated store has no pre-commit DCache side effect",
                 dut->dcache_req_valid == 0);
        tb.tick();
    }

    tb.commit(true, tag);
    tb.wait_for_dcache_request(true);
    tb.check_eq("store DCache physical address",
                dut->dcache_req_addr, vaddr);
    tb.check_eq("store DCache tag", dut->dcache_req_idx, tag);
    tb.check_eq("store DCache ROB", dut->dcache_req_rob_idx, rob);
    tb.check_eq("halfword store aligned data",
                dut->dcache_req_data, 0xbeef'0000u);
    tb.check_eq("halfword store byte mask", dut->dcache_req_mask, 0xcu);
    tb.check_eq("store size survives translation",
                dut->dcache_req_size, 1);

    const uint32_t held_addr = dut->dcache_req_addr;
    const uint32_t held_data = dut->dcache_req_data;
    const uint32_t held_mask = dut->dcache_req_mask;
    for (int cycle = 0; cycle < 3; ++cycle) {
        tb.tick();
        tb.check("backpressured store remains valid",
                 dut->dcache_req_valid == 1);
        tb.check_eq("backpressured store address stable",
                    dut->dcache_req_addr, held_addr);
        tb.check_eq("backpressured store data stable",
                    dut->dcache_req_data, held_data);
        tb.check_eq("backpressured store mask stable",
                    dut->dcache_req_mask, held_mask);
        tb.check_eq("backpressured store tag stable",
                    dut->dcache_req_idx, tag);
    }

    tb.accept_dcache_request();
    tb.return_dcache(true, tag);
    tb.check("store acknowledgement drains STQ", dut->stq_empty == 1);
    std::printf("PASS: pre-commit store translation and payload\n");
}

void test_mapped_load(Testbench& tb, Vlsu_dmmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t rob = 10;
    constexpr uint32_t pdst = 12;
    constexpr uint32_t vaddr = 0x4567'8abc;
    constexpr uint32_t ppn = 0x12345;
    constexpr uint32_t asid = 0x2a5;
    constexpr uint32_t data = 0x1020'3040;
    const uint32_t tag = tb.allocate(false, rob, pdst);

    dut->csr_crmd = make_crmd(0, false, true);
    dut->csr_asid = asid;
    tb.submit_agen(false, tag, rob, pdst, 2, true, vaddr);
    tb.enter_tlb_wait(vaddr, asid);

    for (int cycle = 0; cycle < 3; ++cycle) {
        tb.tick();
        tb.check("delayed TLB never leaks virtual address to DCache",
                 dut->dcache_req_valid == 0);
    }

    tb.return_tlb(true, true, true, 0, ppn);
    tb.wait_for_dcache_request(false);
    tb.check_eq("mapped load DCache physical address",
                dut->dcache_req_addr,
                translated_paddr(vaddr, ppn, 12));
    tb.check_eq("mapped load tag", dut->dcache_req_idx, tag);

    tb.accept_dcache_request();
    dut->dcache_resp_is_store = 0;
    dut->dcache_resp_idx = tag;
    dut->dcache_resp_data = data;
    dut->dcache_resp_valid = 1;
    dut->eval();
    tb.check("mapped load writes back", dut->load_wb_valid == 1);
    tb.check_eq("mapped load data", dut->load_wb_data, data);
    tb.tick();
    dut->dcache_resp_valid = 0;
    dut->eval();
    tb.commit(false, tag);

    std::printf("PASS: mapped load translation before DCache\n");
}

void test_agen_during_tlb_stall(Testbench& tb,
                                Vlsu_dmmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t first_rob = 22;
    constexpr uint32_t second_rob = 23;
    constexpr uint32_t third_rob = 24;
    constexpr uint32_t first_vaddr = 0x4100'1234;
    constexpr uint32_t second_vaddr = 0x4200'5678;
    constexpr uint32_t third_vaddr = 0x4300'1080;
    constexpr uint32_t first_ppn = 0x21000;
    constexpr uint32_t second_ppn = 0x22000;
    constexpr uint32_t third_ppn = 0x23000;
    constexpr uint32_t asid = 0x2d5;

    const uint32_t first_tag = tb.allocate(false, first_rob, 18);
    const uint32_t second_tag = tb.allocate(false, second_rob, 19);
    const uint32_t third_tag = tb.allocate(true, third_rob, 0);
    tb.submit_store_data(third_tag, 0xa5a5'5a5a);

    dut->csr_crmd = make_crmd(0, false, true);
    dut->csr_asid = asid;

    tb.submit_agen(false, first_tag, first_rob, 18, 2, true,
                   first_vaddr);
    tb.enter_tlb_wait(first_vaddr, asid);

    // MEM AGEN is a pulse-only interface today. The younger operation cannot
    // wait for DMMU ready and therefore needs a lossless integration buffer.
    tb.pulse_agen_while_busy(false, second_tag, second_rob, 19, 2, true,
                             second_vaddr);
    tb.pulse_agen_while_busy(true, third_tag, third_rob, 0, 2, false,
                             third_vaddr);

    tb.return_tlb(true, true, true, 0, first_ppn);
    tb.wait_for_dcache_request(false);
    tb.check_eq("older stalled translation keeps its tag",
                dut->dcache_req_idx, first_tag);
    tb.check_eq("older stalled translation keeps its paddr",
                dut->dcache_req_addr,
                translated_paddr(first_vaddr, first_ppn, 12));
    tb.accept_dcache_request();
    tb.return_dcache(false, first_tag, 0x1111'2222);
    tb.commit(false, first_tag);

    bool load_seen = false;
    bool store_seen = false;
    bool all_seen = true;

    for (int request = 0; request < 2; ++request) {
        uint32_t observed_vaddr = 0;
        const bool seen = tb.wait_for_either_tlb_request(
            second_vaddr, third_vaddr, asid, observed_vaddr);
        tb.check(request == 0
                     ? "busy DMMU does not drop first pending AGEN"
                     : "busy DMMU does not drop second pending AGEN",
                 seen);
        if (!seen) {
            all_seen = false;
            break;
        }

        tb.tick();
        if (observed_vaddr == second_vaddr) {
            tb.check("buffered load translation is not duplicated",
                     !load_seen);
            load_seen = true;
            tb.return_tlb(true, true, true, 0, second_ppn);
        } else if (observed_vaddr == third_vaddr) {
            tb.check("buffered store translation is not duplicated",
                     !store_seen);
            store_seen = true;
            tb.return_tlb(true, true, true, 0, third_ppn);
            tb.wait_for_store_clear(third_rob);
        } else {
            all_seen = false;
            break;
        }
    }

    tb.check("busy DMMU preserves pending load AGEN",
             !all_seen || load_seen);
    tb.check("busy DMMU preserves pending store AGEN",
             !all_seen || store_seen);

    if (all_seen && load_seen && store_seen) {
        tb.wait_for_dcache_request(false);
        tb.check_eq("buffered younger translation keeps its tag",
                    dut->dcache_req_idx, second_tag);
        tb.check_eq("buffered younger translation keeps its paddr",
                    dut->dcache_req_addr,
                    translated_paddr(second_vaddr, second_ppn, 12));
        tb.check("buffered store has no pre-commit side effect",
                 dut->dcache_req_is_store == 0);
        tb.accept_dcache_request();
        tb.return_dcache(false, second_tag, 0x3333'4444);
        tb.commit(false, second_tag);

        tb.commit(true, third_tag);
        tb.wait_for_dcache_request(true);
        tb.check_eq("buffered store keeps its tag",
                    dut->dcache_req_idx, third_tag);
        tb.check_eq("buffered store keeps its paddr",
                    dut->dcache_req_addr,
                    translated_paddr(third_vaddr, third_ppn, 12));
        tb.check_eq("buffered store keeps its data",
                    dut->dcache_req_data, 0xa5a5'5a5au);
        tb.accept_dcache_request();
        tb.return_dcache(true, third_tag);
        tb.check("buffered loads drain LDQ", dut->ldq_empty == 1);
        tb.check("buffered store drains STQ", dut->stq_empty == 1);
        std::printf("PASS: AGEN buffering during TLB stall\n");
    } else {
        tb.flush();
    }
}

void run_fault(Testbench& tb, Vlsu_dmmu_test_top* dut,
               const char* name, bool store, uint8_t request_plv,
               bool found, bool valid, bool dirty, uint8_t entry_plv,
               uint8_t expected_code, uint32_t sequence) {
    tb.reset();

    const uint32_t rob = 12 + sequence;
    const uint32_t vaddr = 0x6000'1000u + sequence * 0x2000u;
    const uint32_t tag = tb.allocate(store, rob, store ? 0 : 5);

    if (store)
        tb.submit_store_data(tag, 0x55aa'0000u + sequence);

    dut->csr_crmd = make_crmd(request_plv, false, true);
    dut->csr_asid = 0x188;
    tb.submit_agen(store, tag, rob, store ? 0 : 5, 2, true, vaddr);
    tb.enter_tlb_wait(vaddr, 0x188);
    tb.return_tlb(found, valid, dirty, entry_plv, 0x34567);
    tb.wait_for_exception();

    tb.check_eq(std::string(name) + " code",
                dut->xlate_xcpt_code, expected_code);
    tb.check_eq(std::string(name) + " BADV",
                dut->xlate_xcpt_badvaddr, vaddr);
    tb.check_eq(std::string(name) + " ROB",
                dut->xlate_xcpt_rob_idx, rob);
    tb.check_eq(std::string(name) + " tag",
                dut->xlate_xcpt_tag, tag);
    tb.check_eq(std::string(name) + " access",
                dut->xlate_xcpt_is_store, store);
    tb.check(std::string(name) + " occurs before store commit",
             !store || dut->stq_empty == 0);

    for (int cycle = 0; cycle < 3; ++cycle) {
        tb.check(std::string(name) + " never reaches DCache",
                 dut->dcache_req_valid == 0);
        tb.check(std::string(name) + " holds under exception backpressure",
                 dut->xlate_xcpt_valid == 1);
        tb.tick();
    }

    dut->xlate_xcpt_ready = 1;
    tb.tick();
    dut->xlate_xcpt_ready = 0;
    dut->eval();
    tb.check(std::string(name) + " retires exception handshake",
             dut->xlate_xcpt_valid == 0);

    tb.flush();
    tb.check(std::string(name) + " flushes LDQ", dut->ldq_empty == 1);
    tb.check(std::string(name) + " flushes STQ", dut->stq_empty == 1);
}

void test_translation_faults(Testbench& tb,
                             Vlsu_dmmu_test_top* dut) {
    run_fault(tb, dut, "load PIL", false, 0,
              true, false, true, 0, ECODE_PIL, 0);
    run_fault(tb, dut, "store PIS", true, 0,
              true, false, false, 0, ECODE_PIS, 1);
    run_fault(tb, dut, "store PME", true, 0,
              true, true, false, 0, ECODE_PME, 2);
    run_fault(tb, dut, "load PPI", false, 3,
              true, true, true, 0, ECODE_PPI, 3);

    std::printf("PASS: pre-commit translation exceptions\n");
}

void test_flush_and_recovery(Testbench& tb,
                             Vlsu_dmmu_test_top* dut) {
    tb.reset();

    constexpr uint32_t killed_vaddr = 0x5000'1000;
    const uint32_t killed_tag = tb.allocate(false, 20, 6);
    dut->csr_crmd = make_crmd(0, false, true);
    dut->csr_asid = 0x155;
    tb.submit_agen(false, killed_tag, 20, 6, 2, true, killed_vaddr);
    tb.enter_tlb_wait(killed_vaddr, 0x155);

    tb.flush();
    tb.check("translation flush drains LDQ", dut->ldq_empty == 1);

    dut->tlb_found = 1;
    dut->tlb_v = 1;
    dut->tlb_d = 1;
    dut->tlb_plv = 0;
    dut->tlb_ppn = 0x22222;
    dut->tlb_ps = 12;
    dut->tlb_mat = 1;
    dut->tlb_resp_valid = 1;
    tb.tick();
    dut->tlb_resp_valid = 0;
    dut->eval();
    tb.check("late killed translation produces no DCache request",
             dut->dcache_req_valid == 0);
    tb.check("late killed translation produces no exception",
             dut->xlate_xcpt_valid == 0);
    tb.check("late killed translation produces no writeback",
             dut->load_wb_valid == 0);

    constexpr uint32_t live_vaddr = 0x1c00'4000;
    const uint32_t live_tag = tb.allocate(false, 21, 7);
    dut->csr_crmd = make_crmd(0, true, false, 0, 1);
    tb.submit_agen(false, live_tag, 21, 7, 2, true, live_vaddr);
    tb.wait_for_dcache_request(false);
    tb.check_eq("post-flush request uses live address",
                dut->dcache_req_addr, live_vaddr);
    tb.check_eq("post-flush request uses live tag",
                dut->dcache_req_idx, live_tag);
    tb.accept_dcache_request();
    tb.return_dcache(false, live_tag, 0x7654'3210);
    tb.commit(false, live_tag);
    tb.check("post-flush load drains LDQ", dut->ldq_empty == 1);

    std::printf("PASS: translation flush and recovery\n");
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    auto* dut = new Vlsu_dmmu_test_top;
    Testbench tb(dut);

    test_direct_load(tb, dut);
    test_store_precommit_translation(tb, dut);
    test_mapped_load(tb, dut);
    test_agen_during_tlb_stall(tb, dut);
    test_translation_faults(tb, dut);
    test_flush_and_recovery(tb, dut);

    dut->final();
    delete dut;

    if (tb.failures() != 0) {
        std::printf("FAIL: lsu_dmmu failures=%d checks=%d\n",
                    tb.failures(), tb.checks());
        return 1;
    }

    std::printf("PASS: lsu_dmmu checks=%d\n", tb.checks());
    return 0;
}
