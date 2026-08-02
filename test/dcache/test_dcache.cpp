#include "Vdcache_test_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <map>
#include <random>
#include <string>
#include <vector>

namespace {

constexpr int LINE_BYTES = 32;
constexpr int LINE_BEATS = LINE_BYTES / 4;
constexpr int NUM_SETS = 4;

constexpr uint8_t MAINT_INVALIDATE = 0;
constexpr uint8_t MAINT_CLEAN = 1;
constexpr uint8_t MAINT_FLUSH = 2;

uint32_t align_down(uint32_t value, uint32_t alignment) {
    return value & ~(alignment - 1U);
}

uint32_t default_word(uint32_t address) {
    return 0x6d00'0000U ^ (address * 0x9e37'79b1U);
}

uint32_t merge_word(uint32_t old_word, uint32_t new_word,
                    uint8_t mask) {
    uint32_t result = old_word;
    for (unsigned byte = 0; byte < 4; ++byte) {
        if (mask & (1U << byte)) {
            const uint32_t byte_mask = 0xffU << (byte * 8);
            result = (result & ~byte_mask) | (new_word & byte_mask);
        }
    }
    return result;
}

enum class Event {
    Response,
    ReadRequest,
    WriteRequest,
    MaintenanceDone,
    Timeout,
};

struct Request {
    uint32_t address;
    bool cacheable;
    bool store;
    uint32_t data;
    uint8_t mask;
    uint8_t tag;
};

struct WriteBurst {
    uint32_t address = 0;
    uint8_t len = 0;
    std::vector<uint32_t> data;
    std::vector<uint8_t> masks;
};

class Testbench {
  public:
    explicit Testbench(Vdcache_test_top* dut) : dut_(dut) {}

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
        dut_->req_is_store = 0;
        dut_->req_wdata = 0;
        dut_->req_wmask = 0;
        dut_->req_tag = 0;
        dut_->resp_ready = 0;

        dut_->maint_valid = 0;
        dut_->maint_op = 0;
        dut_->maint_mode = 0;
        dut_->maint_all = 0;
        dut_->maint_vaddr = 0;
        dut_->maint_paddr = 0;

        dut_->mem_read_req_ready = 0;
        dut_->mem_read_resp_valid = 0;
        dut_->mem_read_resp_data = 0;
        dut_->mem_read_resp_last = 0;

        dut_->mem_write_req_ready = 0;
        dut_->mem_write_data_ready = 0;
        dut_->mem_write_resp_valid = 0;
    }

    void reset() {
        clear_inputs();
        memory_bytes_.clear();
        read_requests_ = 0;
        write_requests_ = 0;
        writes_.clear();

        dut_->rst_n = 0;
        tick();
        tick();
        dut_->rst_n = 1;
        tick();

        check("reset accepts a CPU request", dut_->req_ready == 1);
        check("reset accepts maintenance", dut_->maint_ready == 1);
        check("reset has no CPU response", dut_->resp_valid == 0);
        check("reset has no read request", dut_->mem_read_req_valid == 0);
        check("reset has no write request", dut_->mem_write_req_valid == 0);
    }

    uint32_t read_word(uint32_t address) const {
        const uint32_t base = align_down(address, 4);
        uint32_t value = default_word(base);
        for (unsigned byte = 0; byte < 4; ++byte) {
            const auto it = memory_bytes_.find(base + byte);
            if (it == memory_bytes_.end())
                continue;
            const uint32_t mask = 0xffU << (byte * 8);
            value = (value & ~mask) |
                    (static_cast<uint32_t>(it->second) << (byte * 8));
        }
        return value;
    }

    void write_word(uint32_t address, uint32_t data, uint8_t mask) {
        const uint32_t base = align_down(address, 4);
        for (unsigned byte = 0; byte < 4; ++byte) {
            if (mask & (1U << byte)) {
                memory_bytes_[base + byte] =
                    static_cast<uint8_t>(data >> (byte * 8));
            }
        }
    }

    void accept_cpu_request(const Request& request) {
        dut_->req_valid = 1;
        dut_->req_paddr = request.address;
        dut_->req_cacheable = request.cacheable;
        dut_->req_is_store = request.store;
        dut_->req_wdata = request.data;
        dut_->req_wmask = request.mask;
        dut_->req_tag = request.tag;

        bool accepted = false;
        for (int cycle = 0; cycle < 64; ++cycle) {
            dut_->eval();
            if (dut_->req_ready) {
                tick();
                accepted = true;
                break;
            }
            tick();
        }
        check("CPU request eventually accepted", accepted);

        dut_->req_valid = 0;
        dut_->req_paddr = request.address ^ 0xffff'fff0U;
        dut_->req_cacheable = !request.cacheable;
        dut_->req_is_store = !request.store;
        dut_->req_wdata = ~request.data;
        dut_->req_wmask = request.mask ^ 0xfU;
        dut_->req_tag = request.tag ^ 0xffU;
        dut_->eval();
    }

    Event wait_event(int limit = 256) {
        for (int cycle = 0; cycle < limit; ++cycle) {
            dut_->eval();
            if (dut_->resp_valid)
                return Event::Response;
            if (dut_->mem_write_req_valid)
                return Event::WriteRequest;
            if (dut_->mem_read_req_valid)
                return Event::ReadRequest;
            if (dut_->maint_done)
                return Event::MaintenanceDone;
            tick();
        }
        check("cache eventually produces an observable event", false);
        return Event::Timeout;
    }

    void serve_read(uint32_t expected_address, uint8_t expected_len,
                    unsigned stall_seed = 0) {
        check("read request is valid", dut_->mem_read_req_valid == 1);
        check_equal("read request address", dut_->mem_read_req_addr,
                    expected_address);
        check_equal("read request length", dut_->mem_read_req_len,
                    expected_len);

        const uint32_t held_address = dut_->mem_read_req_addr;
        const uint8_t held_len = dut_->mem_read_req_len;
        const unsigned request_stalls = stall_seed % 4U;
        for (unsigned cycle = 0; cycle < request_stalls; ++cycle) {
            check("read request stays valid under backpressure",
                  dut_->mem_read_req_valid == 1);
            check_equal("read address stays stable", dut_->mem_read_req_addr,
                        held_address);
            check_equal("read length stays stable", dut_->mem_read_req_len,
                        held_len);
            tick();
        }

        dut_->mem_read_req_ready = 1;
        dut_->eval();
        check("read request handshakes while valid",
              dut_->mem_read_req_valid == 1);
        tick();
        dut_->mem_read_req_ready = 0;
        ++read_requests_;

        for (unsigned beat = 0; beat <= expected_len; ++beat) {
            dut_->mem_read_resp_valid = 0;
            const unsigned gap = (stall_seed + beat * 3U) % 3U;
            for (unsigned cycle = 0; cycle < gap; ++cycle) {
                check("cache is ready while a read beat is delayed",
                      dut_->mem_read_resp_ready == 1);
                tick();
            }

            const uint32_t data = read_word(expected_address + beat * 4U);
            const bool last = beat == expected_len;
            dut_->mem_read_resp_valid = 1;
            dut_->mem_read_resp_data = data;
            dut_->mem_read_resp_last = last;

            bool accepted = false;
            for (int cycle = 0; cycle < 32; ++cycle) {
                dut_->eval();
                if (dut_->mem_read_resp_ready) {
                    tick();
                    accepted = true;
                    break;
                }
                check_equal("held read response data",
                            dut_->mem_read_resp_data, data);
                check_equal("held read response last",
                            dut_->mem_read_resp_last, last);
                tick();
            }
            check("read response beat eventually accepted", accepted);
            dut_->mem_read_resp_valid = 0;
            dut_->mem_read_resp_data = 0;
            dut_->mem_read_resp_last = 0;
        }
        dut_->eval();
    }

    WriteBurst serve_write(uint32_t expected_address,
                           uint8_t expected_len,
                           unsigned stall_seed = 0) {
        check("write request is valid", dut_->mem_write_req_valid == 1);
        check_equal("write request address", dut_->mem_write_req_addr,
                    expected_address);
        check_equal("write request length", dut_->mem_write_req_len,
                    expected_len);

        const uint32_t held_address = dut_->mem_write_req_addr;
        const uint8_t held_len = dut_->mem_write_req_len;
        const unsigned request_stalls = stall_seed % 4U;
        for (unsigned cycle = 0; cycle < request_stalls; ++cycle) {
            check("write request stays valid under backpressure",
                  dut_->mem_write_req_valid == 1);
            check_equal("write address stays stable",
                        dut_->mem_write_req_addr, held_address);
            check_equal("write length stays stable",
                        dut_->mem_write_req_len, held_len);
            tick();
        }

        dut_->mem_write_req_ready = 1;
        dut_->eval();
        check("write request handshakes while valid",
              dut_->mem_write_req_valid == 1);
        tick();
        dut_->mem_write_req_ready = 0;
        ++write_requests_;

        WriteBurst burst;
        burst.address = expected_address;
        burst.len = expected_len;

        for (unsigned beat = 0; beat <= expected_len; ++beat) {
            bool observed = false;
            for (int cycle = 0; cycle < 32; ++cycle) {
                dut_->eval();
                if (dut_->mem_write_data_valid) {
                    observed = true;
                    break;
                }
                tick();
            }
            check("write data beat eventually becomes valid", observed);

            const uint32_t data = dut_->mem_write_data;
            const uint8_t mask = dut_->mem_write_mask;
            const bool last = dut_->mem_write_data_last;
            check_equal("write data last", last, beat == expected_len);

            const unsigned data_stalls = (stall_seed + beat * 5U) % 3U;
            for (unsigned cycle = 0; cycle < data_stalls; ++cycle) {
                check("write data stays valid under backpressure",
                      dut_->mem_write_data_valid == 1);
                check_equal("write data stays stable",
                            dut_->mem_write_data, data);
                check_equal("write mask stays stable",
                            dut_->mem_write_mask, mask);
                check_equal("write last stays stable",
                            dut_->mem_write_data_last, last);
                tick();
            }

            dut_->mem_write_data_ready = 1;
            dut_->eval();
            check("write data handshakes while valid",
                  dut_->mem_write_data_valid == 1);
            tick();
            dut_->mem_write_data_ready = 0;

            burst.data.push_back(data);
            burst.masks.push_back(mask);
            write_word(expected_address + beat * 4U, data, mask);
        }

        dut_->mem_write_resp_valid = 0;
        for (unsigned cycle = 0; cycle < (stall_seed % 3U); ++cycle) {
            check("cache waits for delayed write response",
                  dut_->mem_write_resp_ready == 1);
            tick();
        }

        dut_->mem_write_resp_valid = 1;
        dut_->eval();
        check("write response is accepted",
              dut_->mem_write_resp_ready == 1);
        tick();
        dut_->mem_write_resp_valid = 0;
        dut_->eval();

        writes_.push_back(burst);
        return burst;
    }

    void consume_response(const Request& request, uint32_t expected_data,
                          int stall_cycles = 0) {
        check("CPU response is valid", dut_->resp_valid == 1);
        check_equal("CPU response store bit", dut_->resp_is_store,
                    request.store);
        check_equal("CPU response tag", dut_->resp_tag, request.tag);
        check_equal("CPU response data", dut_->resp_rdata,
                    request.store ? 0U : expected_data);

        const bool held_store = dut_->resp_is_store;
        const uint32_t held_data = dut_->resp_rdata;
        const uint8_t held_tag = dut_->resp_tag;
        for (int cycle = 0; cycle < stall_cycles; ++cycle) {
            check("CPU response stays valid under backpressure",
                  dut_->resp_valid == 1);
            check("blocking cache rejects a new request while responding",
                  dut_->req_ready == 0);
            check_equal("held response store bit", dut_->resp_is_store,
                        held_store);
            check_equal("held response data", dut_->resp_rdata,
                        held_data);
            check_equal("held response tag", dut_->resp_tag, held_tag);
            tick();
        }

        dut_->resp_ready = 1;
        dut_->eval();
        check("CPU response handshakes while valid", dut_->resp_valid == 1);
        tick();
        dut_->resp_ready = 0;
        dut_->eval();
        check("CPU response retires after handshake", dut_->resp_valid == 0);
    }

    void transact_auto(const Request& request, uint32_t expected_data,
                       unsigned stall_seed = 0,
                       int response_stalls = 0) {
        accept_cpu_request(request);
        for (int event_count = 0; event_count < 16; ++event_count) {
            const Event event = wait_event();
            if (event == Event::Response) {
                consume_response(request, expected_data, response_stalls);
                return;
            }
            if (event == Event::ReadRequest) {
                serve_read(dut_->mem_read_req_addr,
                           dut_->mem_read_req_len,
                           stall_seed + unsigned(event_count));
            } else if (event == Event::WriteRequest) {
                serve_write(dut_->mem_write_req_addr,
                            dut_->mem_write_req_len,
                            stall_seed + unsigned(event_count));
            } else {
                break;
            }
        }
        check("CPU transaction eventually completes", false);
    }

    void begin_maintenance(uint8_t operation, uint8_t mode, bool all,
                           uint32_t vaddr, uint32_t paddr) {
        dut_->maint_valid = 1;
        dut_->maint_op = operation;
        dut_->maint_mode = mode;
        dut_->maint_all = all;
        dut_->maint_vaddr = vaddr;
        dut_->maint_paddr = paddr;

        bool accepted = false;
        for (int cycle = 0; cycle < 64; ++cycle) {
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
        dut_->maint_op = 0;
        dut_->maint_mode = 0;
        dut_->maint_all = 0;
        dut_->maint_vaddr = 0;
        dut_->maint_paddr = 0;
        dut_->eval();
    }

    unsigned finish_maintenance(unsigned stall_seed = 0) {
        unsigned writebacks = 0;
        for (int event_count = 0; event_count < 128; ++event_count) {
            const Event event = wait_event(512);
            if (event == Event::MaintenanceDone) {
                tick();
                check("maintenance completion is a pulse",
                      dut_->maint_done == 0);
                return writebacks;
            }
            if (event == Event::WriteRequest) {
                serve_write(dut_->mem_write_req_addr,
                            dut_->mem_write_req_len,
                            stall_seed + unsigned(event_count));
                ++writebacks;
            } else {
                break;
            }
        }
        check("maintenance eventually completes", false);
        return writebacks;
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

    unsigned read_requests() const { return read_requests_; }
    unsigned write_requests() const { return write_requests_; }
    const std::vector<WriteBurst>& writes() const { return writes_; }
    int checks() const { return checks_; }
    int failures() const { return failures_; }

  private:
    Vdcache_test_top* dut_;
    std::map<uint32_t, uint8_t> memory_bytes_;
    std::vector<WriteBurst> writes_;
    uint64_t time_ = 0;
    unsigned read_requests_ = 0;
    unsigned write_requests_ = 0;
    int checks_ = 0;
    int failures_ = 0;
};

void test_load_refill_and_hit(Testbench& tb) {
    tb.reset();
    const Request miss{0x0000'1004U, true, false, 0, 0, 0x11};
    const uint32_t expected = tb.read_word(miss.address);

    tb.accept_cpu_request(miss);
    tb.check_equal("cold load goes to memory",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::ReadRequest));
    tb.serve_read(0x0000'1000U, LINE_BEATS - 1, 3);
    tb.check_equal("refill produces a response",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::Response));
    tb.consume_response(miss, expected, 3);

    const Request hit{0x0000'1004U, true, false, 0, 0, 0xa2};
    const unsigned reads_before = tb.read_requests();
    tb.accept_cpu_request(hit);
    tb.check_equal("second load hits",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::Response));
    tb.consume_response(hit, expected, 1);
    tb.check_equal("load hit emits no lower read", tb.read_requests(),
                   reads_before);
    std::puts("PASS: load refill, hit, response hold, and tag preservation");
}

void test_store_merge_and_write_allocate(Testbench& tb) {
    tb.reset();
    const uint32_t line = 0x0000'2000U;
    const uint32_t address = line + 8U;
    const uint32_t original = tb.read_word(address);

    Request store_miss{address, true, true, 0x0000'beefU, 0x3, 0x31};
    tb.accept_cpu_request(store_miss);
    tb.check_equal("store miss requests a refill",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::ReadRequest));
    tb.serve_read(line, LINE_BEATS - 1, 2);
    tb.check_equal("store miss completes after refill",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::Response));
    tb.consume_response(store_miss, 0, 2);

    uint32_t expected = merge_word(original, store_miss.data,
                                   store_miss.mask);
    Request load_hit{address, true, false, 0, 0, 0x32};
    tb.accept_cpu_request(load_hit);
    tb.check_equal("load after store-miss allocation hits",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::Response));
    tb.consume_response(load_hit, expected);

    Request byte_store{address + 2U, true, true, 0x00aa'0000U, 0x4, 0x33};
    tb.accept_cpu_request(byte_store);
    tb.check_equal("partial store hit responds without memory",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::Response));
    tb.consume_response(byte_store, 0);
    expected = merge_word(expected, byte_store.data, byte_store.mask);

    Request verify{address, true, false, 0, 0, 0x34};
    tb.transact_auto(verify, expected);
    std::puts("PASS: store write-allocate and byte-mask merging");
}

void test_dirty_eviction(Testbench& tb) {
    tb.reset();
    constexpr uint32_t first = 0x0000'4000U;
    constexpr uint32_t stride = NUM_SETS * LINE_BYTES;
    constexpr uint32_t second = first + stride;
    constexpr uint32_t third = second + stride;

    Request load_first{first, true, false, 0, 0, 0x41};
    tb.transact_auto(load_first, tb.read_word(first), 1);
    Request dirty_first{first, true, true, 0xdead'beefU, 0xf, 0x42};
    tb.transact_auto(dirty_first, 0, 2);

    Request load_second{second, true, false, 0, 0, 0x43};
    tb.transact_auto(load_second, tb.read_word(second), 3);

    Request load_third{third, true, false, 0, 0, 0x44};
    const uint32_t third_expected = tb.read_word(third);
    tb.accept_cpu_request(load_third);
    tb.check_equal("dirty victim writes back before refill",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::WriteRequest));
    const WriteBurst writeback =
        tb.serve_write(first, LINE_BEATS - 1, 3);
    tb.check_equal("writeback has one word per line", writeback.data.size(),
                   static_cast<size_t>(LINE_BEATS));
    for (uint8_t mask : writeback.masks)
        tb.check_equal("writeback enables every byte", mask, 0xf);
    tb.check_equal("dirty word is present in writeback", writeback.data[0],
                   0xdead'beefU);

    tb.check_equal("refill follows dirty writeback",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::ReadRequest));
    tb.serve_read(third, LINE_BEATS - 1, 4);
    tb.check_equal("post-eviction load responds",
                   static_cast<int>(tb.wait_event()),
                   static_cast<int>(Event::Response));
    tb.consume_response(load_third, third_expected);
    tb.check_equal("writeback updates lower memory", tb.read_word(first),
                   0xdead'beefU);
    std::puts("PASS: dirty victim writeback precedes refill");
}

void test_uncached_bypass(Testbench& tb) {
    tb.reset();
    constexpr uint32_t load_address = 0x0000'3012U;
    const uint32_t load_expected = tb.read_word(load_address);

    Request uncached_load{load_address, false, false, 0, 0, 0x51};
    tb.transact_auto(uncached_load, load_expected, 3, 2);

    Request uncached_store{
        load_address, false, true, 0x00cc'0000U, 0x4, 0x52};
    tb.transact_auto(uncached_store, 0, 4, 1);
    const uint32_t merged =
        merge_word(load_expected, uncached_store.data, uncached_store.mask);
    tb.check_equal("uncached store reaches lower memory",
                   tb.read_word(load_address), merged);

    const unsigned reads_before = tb.read_requests();
    Request cacheable_load{load_address, true, false, 0, 0, 0x53};
    tb.transact_auto(cacheable_load, merged, 2);
    tb.check_equal("uncached accesses do not allocate",
                   tb.read_requests(), reads_before + 1U);
    std::puts("PASS: uncached load/store bypass without allocation");
}

void test_maintenance(Testbench& tb) {
    tb.reset();
    constexpr uint32_t line = 0x0000'5000U;

    Request load{line, true, false, 0, 0, 0x61};
    tb.transact_auto(load, tb.read_word(line));
    Request store{line, true, true, 0x1234'5678U, 0xf, 0x62};
    tb.transact_auto(store, 0);

    tb.begin_maintenance(MAINT_CLEAN, 2, false, 0, line + 12U);
    tb.check_equal("clean writes one dirty line",
                   tb.finish_maintenance(3), 1U);
    tb.check_equal("clean publishes dirty data", tb.read_word(line),
                   0x1234'5678U);

    const unsigned reads_before_clean_hit = tb.read_requests();
    Request clean_hit{line, true, false, 0, 0, 0x63};
    tb.transact_auto(clean_hit, 0x1234'5678U);
    tb.check_equal("clean retains the line", tb.read_requests(),
                   reads_before_clean_hit);

    Request dirty_again{line, true, true, 0xa5a5'5a5aU, 0xf, 0x64};
    tb.transact_auto(dirty_again, 0);
    tb.begin_maintenance(MAINT_FLUSH, 2, false, 0, line);
    tb.check_equal("clean-invalidate writes dirty data",
                   tb.finish_maintenance(2), 1U);
    tb.check_equal("clean-invalidate publishes latest data",
                   tb.read_word(line), 0xa5a5'5a5aU);

    const unsigned reads_before_flush_miss = tb.read_requests();
    Request flush_miss{line, true, false, 0, 0, 0x65};
    tb.transact_auto(flush_miss, 0xa5a5'5a5aU);
    tb.check_equal("clean-invalidate removes the line", tb.read_requests(),
                   reads_before_flush_miss + 1U);

    constexpr uint32_t second_line = line + LINE_BYTES;
    Request dirty_line{line, true, true, 0x0bad'f00dU, 0xf, 0x66};
    Request dirty_second{
        second_line, true, true, 0xcafe'babeU, 0xf, 0x67};
    tb.transact_auto(dirty_line, 0);
    tb.transact_auto(dirty_second, 0);
    tb.begin_maintenance(MAINT_FLUSH, 2, true, 0, 0);
    tb.check_equal("whole-cache flush writes every dirty line",
                   tb.finish_maintenance(4), 2U);
    tb.check_equal("whole-cache flush writes first line",
                   tb.read_word(line), 0x0bad'f00dU);
    tb.check_equal("whole-cache flush writes second line",
                   tb.read_word(second_line), 0xcafe'babeU);

    const unsigned reads_before_all = tb.read_requests();
    Request all_miss{line, true, false, 0, 0, 0x68};
    tb.transact_auto(all_miss, 0x0bad'f00dU);
    tb.check_equal("whole-cache flush invalidates retained lines",
                   tb.read_requests(), reads_before_all + 1U);

    tb.begin_maintenance(MAINT_INVALIDATE, 2, true, 0, 0);
    tb.check_equal("whole-cache invalidate needs no clean writeback",
                   tb.finish_maintenance(), 0U);
    std::puts("PASS: clean, clean-invalidate, and whole-cache invalidate");
}

void test_cacop_index_modes(Testbench& tb) {
    constexpr uint32_t first = 0x0000'8000U;
    constexpr uint32_t stride = NUM_SETS * LINE_BYTES;
    constexpr uint32_t second = first + stride;
    constexpr uint32_t unrelated = 0x0000'a000U;

    tb.reset();
    tb.transact_auto({first, true, false, 0, 0, 0x71},
                     tb.read_word(first));
    tb.transact_auto({second, true, false, 0, 0, 0x72},
                     tb.read_word(second));
    tb.transact_auto({first, true, true, 0x1111'2222U, 0xf, 0x73}, 0);

    tb.begin_maintenance(MAINT_INVALIDATE, 0, false,
                         first | 0U, unrelated);
    tb.check_equal("mode-0 index invalidate performs no writeback",
                   tb.finish_maintenance(), 0U);
    const unsigned reads_before_mode0 = tb.read_requests();
    tb.transact_auto({first, true, false, 0, 0, 0x74},
                     tb.read_word(first));
    tb.check_equal("mode-0 selected way is invalidated",
                   tb.read_requests(), reads_before_mode0 + 1U);
    const unsigned reads_before_other_way = tb.read_requests();
    tb.transact_auto({second, true, false, 0, 0, 0x75},
                     tb.read_word(second));
    tb.check_equal("mode-0 preserves the other way",
                   tb.read_requests(), reads_before_other_way);

    tb.reset();
    tb.transact_auto({first, true, false, 0, 0, 0x76},
                     tb.read_word(first));
    tb.transact_auto({second, true, false, 0, 0, 0x77},
                     tb.read_word(second));
    tb.transact_auto({second, true, true, 0x3333'4444U, 0xf, 0x78}, 0);

    tb.begin_maintenance(MAINT_FLUSH, 1, false,
                         first | 1U, unrelated);
    tb.check_equal("mode-1 index flush writes the selected dirty way",
                   tb.finish_maintenance(3), 1U);
    tb.check_equal("mode-1 writeback uses the cached physical tag",
                   tb.read_word(second), 0x3333'4444U);

    const unsigned reads_before_mode1 = tb.read_requests();
    tb.transact_auto({second, true, false, 0, 0, 0x79},
                     0x3333'4444U);
    tb.check_equal("mode-1 selected way is invalidated",
                   tb.read_requests(), reads_before_mode1 + 1U);

    tb.reset();
    tb.transact_auto({first, true, false, 0, 0, 0x7a},
                     tb.read_word(first));
    tb.transact_auto({second, true, false, 0, 0, 0x7b},
                     tb.read_word(second));
    tb.transact_auto({first, true, true, 0x5555'6666U, 0xf, 0x7c}, 0);

    tb.begin_maintenance(MAINT_FLUSH, 2, false,
                         first | 1U, first + 12U);
    tb.check_equal("mode-2 PA-hit flush writes the matching dirty line",
                   tb.finish_maintenance(2), 1U);
    tb.check_equal("mode-2 writeback publishes dirty data",
                   tb.read_word(first), 0x5555'6666U);

    const unsigned reads_before_mode2_other = tb.read_requests();
    tb.transact_auto({second, true, false, 0, 0, 0x7d},
                     tb.read_word(second));
    tb.check_equal("mode-2 ignores the misleading VA way",
                   tb.read_requests(), reads_before_mode2_other);

    std::puts("PASS: CACOP indexed and PA-hit maintenance modes");
}

void test_randomized_backpressure(Testbench& tb) {
    tb.reset();
    std::mt19937 random(0xdcac'2026U);
    std::map<uint32_t, uint32_t> architectural_words;

    for (unsigned operation = 0; operation < 40; ++operation) {
        const bool cacheable = (random() % 7U) != 0;
        const uint32_t region = cacheable ? 0x0000'6000U : 0x0000'7000U;
        const uint32_t line = region + (random() % 6U) * LINE_BYTES;
        const uint32_t address = line + (random() % LINE_BEATS) * 4U;
        auto [it, inserted] = architectural_words.emplace(
            address, tb.read_word(address));
        (void)inserted;

        const bool store = (random() % 3U) == 0;
        const uint8_t tag = static_cast<uint8_t>(operation + 0x80U);

        if (store) {
            const uint8_t masks[] = {0x1, 0x3, 0x4, 0xc, 0xf};
            const uint8_t offsets[] = {0, 0, 2, 2, 0};
            const unsigned store_form = random() % 5U;
            const uint8_t mask = masks[store_form];
            const uint32_t data = random();
            Request request{
                address + offsets[store_form],
                cacheable,
                true,
                data,
                mask,
                tag
            };
            tb.transact_auto(request, 0, random(), random() % 4U);
            it->second = merge_word(it->second, data, mask);
        } else {
            Request request{address, cacheable, false, 0, 0, tag};
            tb.transact_auto(request, it->second, random(), random() % 4U);
        }
    }
    std::puts("PASS: deterministic mixed traffic and lower-memory backpressure");
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vdcache_test_top;
    Testbench tb(dut);

    test_load_refill_and_hit(tb);
    test_store_merge_and_write_allocate(tb);
    test_dirty_eviction(tb);
    test_uncached_bypass(tb);
    test_maintenance(tb);
    test_cacop_index_modes(tb);
    test_randomized_backpressure(tb);

    if (tb.failures() == 0) {
        std::printf("PASS: dcache (%d checks)\n", tb.checks());
    } else {
        std::printf("FAIL: dcache (%d failures, %d checks)\n",
                    tb.failures(), tb.checks());
    }

    delete dut;
    return tb.failures() == 0 ? 0 : 1;
}
