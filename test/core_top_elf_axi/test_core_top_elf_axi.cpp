#include "Vcore_top_elf_axi_test_top.h"
#include "elf_image.h"
#include "verilated.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <vector>

namespace {

constexpr uint32_t RESET_PC = 0x1c000000U;
constexpr uint32_t DEFAULT_PERF_WINDOW_PC = 0x1c000438U;
constexpr uint32_t LED_ADDRESS = 0xbfaff020U;
constexpr uint32_t NUM_ADDRESS = 0xbfaff050U;
constexpr uint32_t SWITCH_ADDRESS = 0xbfaff060U;
constexpr uint32_t SW_INTER_ADDRESS = 0xbfaff090U;
constexpr uint32_t SIMU_FLAG_ADDRESS = 0xbfafff20U;
constexpr uint32_t TIMER_ADDRESS = 0xbfafe000U;
constexpr uint32_t UART_STATUS_WORD_ADDRESS = 0xbfe001e4U;
constexpr unsigned COMMIT_WIDTH = 2;
constexpr unsigned ALU_WIDTH = 3;

bool is_mmio_alias(uint32_t address, uint32_t virtual_address) {
    return address == virtual_address ||
           address == (virtual_address & 0x1fffffffU);
}

struct Options {
    std::string elf_path;
    std::string disasm_path;
    uint64_t max_cycles = 5000000;
    uint64_t watchdog_cycles = 50000;
    unsigned target_tests = 58;
    unsigned axi_latency = 2;
    uint32_t perf_window_pc = DEFAULT_PERF_WINDOW_PC;
    uint32_t simu_flag = 0xffffffffU;
    bool stress = false;
    bool trace = false;
    bool perf_mode = false;
    bool simu_flag_set = false;
    bool allow_exceptions = false;
    bool check_startup_prefix = true;
    std::set<uint32_t> allowed_exception_pcs;
};

struct CommitRecord {
    uint64_t cycle = 0;
    uint32_t pc = 0;
    uint32_t inst = 0;
    unsigned ldst = 0;
    unsigned rob_idx = 0;
};

struct BranchPcStats {
    uint64_t resolves = 0;
    uint64_t taken = 0;
    uint64_t mispredicts = 0;
};

uint64_t parse_unsigned(const std::string& option,
                        const std::string& value) {
    char* end = nullptr;
    unsigned long long parsed =
        std::strtoull(value.c_str(), &end, 0);
    if (value.empty() || *end != '\0')
        throw std::runtime_error(option + " expects an integer");
    return parsed;
}

void print_usage(const char* executable) {
    std::printf(
        "Usage: %s --elf FILE [options]\n"
        "  --disasm FILE       annotate failure diagnostics\n"
        "  --target-tests N    pass after NUM reports N tests\n"
        "  --max-cycles N      simulation limit\n"
        "  --watchdog N        no-commit timeout\n"
        "  --axi-latency N     AXI response latency\n"
        "  --perf              profile rdtimel-delimited benchmark windows\n"
        "  --window-pc N       committed rdtimel PC (default 0x1c000438)\n"
        "  --simu-flag N       value read at SIMU_FLAG (perf default 0)\n"
        "  --stress            add deterministic AXI backpressure\n"
        "  --allow-exceptions  continue through architectural exceptions\n"
        "  --allow-exception-pc N\n"
        "                      allow an exception at one instruction PC\n"
        "  --skip-startup-prefix\n"
        "                      accept an ELF-specific startup sequence\n"
        "  --trace             print commits and AXI transactions\n",
        executable);
}

Options parse_options(int argc, char** argv) {
    Options options;
    for (int index = 1; index < argc; ++index) {
        std::string argument = argv[index];
        auto require_value = [&]() -> std::string {
            if (++index >= argc)
                throw std::runtime_error(argument + " requires a value");
            return argv[index];
        };

        if (argument == "--elf") {
            options.elf_path = require_value();
        } else if (argument == "--disasm") {
            options.disasm_path = require_value();
        } else if (argument == "--target-tests") {
            options.target_tests = static_cast<unsigned>(
                parse_unsigned(argument, require_value()));
        } else if (argument == "--max-cycles") {
            options.max_cycles =
                parse_unsigned(argument, require_value());
        } else if (argument == "--watchdog") {
            options.watchdog_cycles =
                parse_unsigned(argument, require_value());
        } else if (argument == "--axi-latency") {
            options.axi_latency = static_cast<unsigned>(
                parse_unsigned(argument, require_value()));
        } else if (argument == "--perf") {
            options.perf_mode = true;
            options.check_startup_prefix = false;
        } else if (argument == "--window-pc") {
            options.perf_window_pc = static_cast<uint32_t>(
                parse_unsigned(argument, require_value()));
        } else if (argument == "--simu-flag") {
            options.simu_flag = static_cast<uint32_t>(
                parse_unsigned(argument, require_value()));
            options.simu_flag_set = true;
        } else if (argument == "--stress") {
            options.stress = true;
        } else if (argument == "--allow-exceptions") {
            options.allow_exceptions = true;
        } else if (argument == "--allow-exception-pc") {
            options.allowed_exception_pcs.insert(static_cast<uint32_t>(
                parse_unsigned(argument, require_value())));
        } else if (argument == "--skip-startup-prefix") {
            options.check_startup_prefix = false;
        } else if (argument == "--trace") {
            options.trace = true;
        } else if (argument == "--help" || argument == "-h") {
            print_usage(argv[0]);
            std::exit(0);
        } else if (!argument.empty() && argument[0] != '-' &&
                   options.elf_path.empty()) {
            options.elf_path = argument;
        } else {
            throw std::runtime_error("unknown option: " + argument);
        }
    }

    if (options.elf_path.empty())
        throw std::runtime_error("--elf is required");
    if (options.max_cycles == 0 || options.watchdog_cycles == 0)
        throw std::runtime_error("cycle limits must be nonzero");
    if (options.target_tests == 0)
        throw std::runtime_error("--target-tests must be nonzero");
    if (options.perf_mode && !options.simu_flag_set)
        options.simu_flag = 0;
    return options;
}

uint32_t packed_word(uint64_t value, unsigned index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

unsigned packed_field(uint32_t value, unsigned index,
                      unsigned width) {
    return (value >> (index * width)) &
           ((uint32_t{1} << width) - 1);
}

void tick(Vcore_top_elf_axi_test_top* dut) {
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void reset(Vcore_top_elf_axi_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->arready = 0;
    dut->rid = 0;
    dut->rdata = 0;
    dut->rresp = 0;
    dut->rlast = 0;
    dut->rvalid = 0;
    dut->awready = 0;
    dut->wready = 0;
    dut->bid = 0;
    dut->bresp = 0;
    dut->bvalid = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

class AxiMemory {
public:
    AxiMemory(ElfImage* image, unsigned latency, bool stress,
              bool trace, uint32_t simu_flag)
        : image_(image),
          latency_(latency),
          stress_(stress),
          trace_(trace),
          simu_flag_(simu_flag) {}

    void drive(Vcore_top_elf_axi_test_top* dut, uint64_t cycle) {
        dut->arready =
            !read_pending_ &&
            (!stress_ || (cycle % 11 != 3 && cycle % 11 != 4));
        dut->awready =
            !aw_seen_ && !write_response_pending_ &&
            (!stress_ || cycle % 7 != 2);
        dut->wready =
            aw_seen_ && !write_response_pending_ &&
            (!stress_ || cycle % 9 != 5);

        if (read_pending_ && !read_active_ &&
            cycle >= read_due_cycle_ &&
            (!stress_ || cycle % 5 != 1)) {
            read_active_ = true;
            read_data_q_ =
                read_word(read_addr_ + read_beat_ * 4U, cycle);
        }

        dut->rvalid = read_active_;
        dut->rid = read_id_;
        dut->rdata = read_data_q_;
        dut->rresp = 0;
        dut->rlast =
            read_active_ && read_beat_ == read_len_;

        if (write_response_pending_ && !write_response_active_ &&
            cycle >= write_response_due_cycle_ &&
            (!stress_ || cycle % 6 != 3)) {
            write_response_active_ = true;
        }

        dut->bvalid = write_response_active_;
        dut->bid = 1;
        dut->bresp = 0;
    }

    void observe_master_stability(
        Vcore_top_elf_axi_test_top* dut) {
        if (hold_ar_) {
            require(dut->arvalid, "ARVALID dropped under backpressure");
            require(dut->arid == held_arid_,
                    "ARID changed under backpressure");
            require(dut->araddr == held_araddr_,
                    "ARADDR changed under backpressure");
            require(dut->arlen == held_arlen_,
                    "ARLEN changed under backpressure");
            require(dut->arsize == held_arsize_,
                    "ARSIZE changed under backpressure");
        }
        if (hold_aw_) {
            require(dut->awvalid, "AWVALID dropped under backpressure");
            require(dut->awid == held_awid_,
                    "AWID changed under backpressure");
            require(dut->awaddr == held_awaddr_,
                    "AWADDR changed under backpressure");
            require(dut->awlen == held_awlen_,
                    "AWLEN changed under backpressure");
            require(dut->awsize == held_awsize_,
                    "AWSIZE changed under backpressure");
        }
        if (hold_w_) {
            require(dut->wvalid, "WVALID dropped under backpressure");
            require(dut->wdata == held_wdata_,
                    "WDATA changed under backpressure");
            require(dut->wstrb == held_wstrb_,
                    "WSTRB changed under backpressure");
            require(dut->wlast == held_wlast_,
                    "WLAST changed under backpressure");
        }

        hold_ar_ = dut->arvalid && !dut->arready;
        hold_aw_ = dut->awvalid && !dut->awready;
        hold_w_ = dut->wvalid && !dut->wready;
        saw_backpressure_ |= hold_ar_ || hold_aw_ || hold_w_;

        if (hold_ar_) {
            held_arid_ = dut->arid;
            held_araddr_ = dut->araddr;
            held_arlen_ = dut->arlen;
            held_arsize_ = dut->arsize;
        }
        if (hold_aw_) {
            held_awid_ = dut->awid;
            held_awaddr_ = dut->awaddr;
            held_awlen_ = dut->awlen;
            held_awsize_ = dut->awsize;
        }
        if (hold_w_) {
            held_wdata_ = dut->wdata;
            held_wstrb_ = dut->wstrb;
            held_wlast_ = dut->wlast;
        }
    }

    void advance(Vcore_top_elf_axi_test_top* dut,
                 uint64_t cycle) {
        bool ar_fire = dut->arvalid && dut->arready;
        bool r_fire = dut->rvalid && dut->rready;
        bool aw_fire = dut->awvalid && dut->awready;
        bool w_fire = dut->wvalid && dut->wready;
        bool b_fire = dut->bvalid && dut->bready;

        if (r_fire) {
            require(read_pending_ && read_active_,
                    "R handshake without a pending read");
            read_active_ = false;
            if (read_beat_ == read_len_) {
                read_pending_ = false;
                read_beat_ = 0;
            } else {
                ++read_beat_;
                read_due_cycle_ = cycle + latency_;
            }
        }

        if (b_fire) {
            require(write_response_pending_ &&
                        write_response_active_,
                    "B handshake without a pending write");
            write_response_pending_ = false;
            write_response_active_ = false;
            ++completed_writes_;
            if (write_response_is_num_) {
                ++num_completions_;
                num_value_ = write_response_num_value_;
            }
        }

        if (ar_fire)
            accept_read(dut, cycle);

        if (aw_fire) {
            require(!aw_seen_, "duplicate AW handshake");
            require(dut->awid == 1, "store AWID is not LSU ID 1");
            require(dut->awlen == 0 || dut->awlen == 7,
                    "store AWLEN is neither one beat nor a cache line");
            require(dut->awsize == 2, "store AWSIZE is not word");
            require(dut->awburst == 1,
                    "store AWBURST is not incrementing");
            require((dut->awaddr & 3U) == 0,
                    "store AWADDR is not word aligned");
            require(dut->awlen == 0 || (dut->awaddr & 31U) == 0,
                    "cache-line write address is not line aligned");
            aw_seen_ = true;
            write_addr_q_ = dut->awaddr;
            write_len_q_ = dut->awlen;
            write_beat_q_ = 0;
        }

        if (w_fire) {
            require(aw_seen_, "W handshake without a pending AW");
            require(dut->wid == 1, "store WID is not LSU ID 1");
            require(dut->wstrb != 0, "store has an empty WSTRB");
            const bool expected_last = write_beat_q_ == write_len_q_;
            require(static_cast<bool>(dut->wlast) == expected_last,
                    "WLAST does not match AWLEN");

            uint32_t beat_addr =
                write_addr_q_ + static_cast<uint32_t>(write_beat_q_) * 4U;
            image_->write_word_masked(
                beat_addr, dut->wdata, dut->wstrb);

            uint32_t base = beat_addr & ~uint32_t{3};
            if (is_mmio_alias(base, LED_ADDRESS)) {
                ++led_writes_;
                led_value_ = image_->read_word(base);
            }

            if (trace_) {
                std::printf(
                    "[%8llu] AXI-W addr=%08x data=%08x strb=%x "
                    "beat=%u/%u%s\n",
                    static_cast<unsigned long long>(cycle),
                    beat_addr, dut->wdata, dut->wstrb,
                    write_beat_q_, write_len_q_,
                    is_mmio_alias(base, NUM_ADDRESS) ? " NUM" : "");
            }

            if (expected_last) {
                ++stores_;
                ++writes_;
                write_response_is_num_ =
                    is_mmio_alias(base, NUM_ADDRESS);
                write_response_num_value_ =
                    write_response_is_num_
                        ? image_->read_word(base)
                        : 0;
                aw_seen_ = false;
                write_response_pending_ = true;
                write_response_active_ = false;
                write_response_due_cycle_ = cycle + latency_;
            } else {
                ++write_beat_q_;
            }
        }
    }

    const std::string& protocol_error() const {
        return protocol_error_;
    }
    bool invalid_fetch() const { return invalid_fetch_; }
    uint32_t invalid_fetch_address() const {
        return invalid_fetch_address_;
    }
    bool saw_backpressure() const { return saw_backpressure_; }
    uint64_t instruction_reads() const {
        return instruction_reads_;
    }
    uint64_t loads() const { return loads_; }
    uint64_t stores() const { return stores_; }
    uint64_t writes() const { return writes_; }
    uint64_t completed_writes() const {
        return completed_writes_;
    }
    uint64_t num_completions() const {
        return num_completions_;
    }
    uint32_t num_value() const { return num_value_; }
    uint64_t led_writes() const { return led_writes_; }
    uint32_t led_value() const { return led_value_; }

private:
    void require(bool condition, const char* message) {
        if (!condition && protocol_error_.empty())
            protocol_error_ = message;
    }

    void accept_read(Vcore_top_elf_axi_test_top* dut,
                     uint64_t cycle) {
        require(!read_pending_,
                "new AR handshake while a read is pending");
        require(dut->arsize == 2, "ARSIZE is not word");
        require(dut->arburst == 1,
                "ARBURST is not incrementing");
        require((dut->araddr & 3U) == 0,
                "ARADDR is not word aligned");

        if (dut->arid == 0) {
            bool fetch_bundle = dut->arlen == 3;
            bool cache_line = dut->arlen == 15;
            require(fetch_bundle || cache_line,
                    "instruction ARLEN is not a fetch bundle or cache line");
            require((dut->araddr & (cache_line ? 63U : 15U)) == 0,
                    "instruction ARADDR is not burst aligned");
            ++instruction_reads_;
            if (!image_->contains(dut->araddr,
                                  (dut->arlen + 1U) * 4U)) {
                invalid_fetch_ = true;
                invalid_fetch_address_ = dut->araddr;
            }
        } else if (dut->arid == 1) {
            bool uncached_word = dut->arlen == 0;
            bool cache_line = dut->arlen == 7;
            require(uncached_word || cache_line,
                    "data ARLEN is neither one beat nor a cache line");
            require((dut->araddr & (cache_line ? 31U : 3U)) == 0,
                    "data ARADDR is not transfer aligned");
            ++loads_;
        } else {
            require(false, "unknown AXI read ID");
        }

        read_pending_ = true;
        read_active_ = false;
        read_id_ = dut->arid;
        read_addr_ = dut->araddr;
        read_len_ = dut->arlen;
        read_beat_ = 0;
        read_due_cycle_ = cycle + latency_;

        if (trace_) {
            std::printf(
                "[%8llu] AXI-AR id=%u addr=%08x len=%u\n",
                static_cast<unsigned long long>(cycle),
                read_id_, read_addr_, read_len_);
        }
    }

    uint32_t read_word(uint32_t address,
                       uint64_t cycle) const {
        uint32_t base = address & ~uint32_t{3};
        if (read_id_ == 0)
            return image_->read_word(base);
        if (is_mmio_alias(base, SWITCH_ADDRESS))
            return 0x000000ffU;
        if (is_mmio_alias(base, SW_INTER_ADDRESS))
            return 0x0000aaaaU;
        if (is_mmio_alias(base, SIMU_FLAG_ADDRESS))
            return simu_flag_;
        if (is_mmio_alias(base, TIMER_ADDRESS))
            return static_cast<uint32_t>(cycle);
        if (is_mmio_alias(base, UART_STATUS_WORD_ADDRESS))
            return 0x00002000U;
        return image_->read_word(base);
    }

    ElfImage* image_;
    unsigned latency_ = 0;
    bool stress_ = false;
    bool trace_ = false;
    uint32_t simu_flag_ = 0xffffffffU;
    std::string protocol_error_;

    bool read_pending_ = false;
    bool read_active_ = false;
    unsigned read_id_ = 0;
    uint32_t read_addr_ = 0;
    unsigned read_len_ = 0;
    unsigned read_beat_ = 0;
    uint64_t read_due_cycle_ = 0;
    uint32_t read_data_q_ = 0;

    bool aw_seen_ = false;
    uint32_t write_addr_q_ = 0;
    unsigned write_len_q_ = 0;
    unsigned write_beat_q_ = 0;
    bool write_response_pending_ = false;
    bool write_response_active_ = false;
    uint64_t write_response_due_cycle_ = 0;
    bool write_response_is_num_ = false;
    uint32_t write_response_num_value_ = 0;

    bool hold_ar_ = false;
    bool hold_aw_ = false;
    bool hold_w_ = false;
    unsigned held_arid_ = 0;
    uint32_t held_araddr_ = 0;
    unsigned held_arlen_ = 0;
    unsigned held_arsize_ = 0;
    unsigned held_awid_ = 0;
    uint32_t held_awaddr_ = 0;
    unsigned held_awlen_ = 0;
    unsigned held_awsize_ = 0;
    uint32_t held_wdata_ = 0;
    unsigned held_wstrb_ = 0;
    bool held_wlast_ = false;

    bool invalid_fetch_ = false;
    uint32_t invalid_fetch_address_ = 0;
    bool saw_backpressure_ = false;
    uint64_t instruction_reads_ = 0;
    uint64_t loads_ = 0;
    uint64_t stores_ = 0;
    uint64_t writes_ = 0;
    uint64_t completed_writes_ = 0;
    uint64_t num_completions_ = 0;
    uint32_t num_value_ = 0;
    uint64_t led_writes_ = 0;
    uint32_t led_value_ = 0;
};

void print_recent(const std::deque<CommitRecord>& recent,
                  const DisassemblyIndex& disassembly) {
    std::fprintf(stderr, "Recent committed instructions:\n");
    for (const CommitRecord& record : recent) {
        const std::string* line = disassembly.find(record.pc);
        std::fprintf(
            stderr,
            "  [%8llu] pc=%08x inst=%08x r%-2u rob=%u",
            static_cast<unsigned long long>(record.cycle),
            record.pc, record.inst, record.ldst, record.rob_idx);
        if (line)
            std::fprintf(stderr, "  %s", line->c_str());
        std::fprintf(stderr, "\n");
    }
}

unsigned count_bits(unsigned value) {
    unsigned count = 0;
    while (value != 0) {
        count += value & 1U;
        value >>= 1;
    }
    return count;
}

double ratio(uint64_t numerator, uint64_t denominator) {
    return denominator == 0
               ? 0.0
               : static_cast<double>(numerator) /
                     static_cast<double>(denominator);
}

struct PerformanceStats {
    uint64_t cycles = 0;
    uint64_t commits = 0;
    uint64_t commit_cycles = 0;
    uint64_t dual_commit_cycles = 0;

    std::array<uint64_t, 8> ifu_states{};
    std::array<uint64_t, 4> immu_states{};
    std::array<uint64_t, 8> icache_states{};
    std::array<uint64_t, 4> dmmu_states{};
    std::array<uint64_t, 16> dcache_states{};

    uint64_t ifu_packets = 0;
    uint64_t ifu_xlate_fires = 0;
    uint64_t ifu_xlate_stalls = 0;
    uint64_t icache_req_fires = 0;
    uint64_t icache_req_stalls = 0;
    uint64_t icache_hits = 0;
    uint64_t icache_misses = 0;
    uint64_t fetch_buffer_empty_cycles = 0;
    uint64_t frontend_not_ready_cycles = 0;

    uint64_t mem_issues = 0;
    uint64_t dmmu_req_fires = 0;
    uint64_t dmmu_req_stalls = 0;
    uint64_t dcache_req_fires = 0;
    uint64_t dcache_req_stalls = 0;
    uint64_t dcache_load_reqs = 0;
    uint64_t dcache_store_reqs = 0;
    uint64_t dcache_hits = 0;
    uint64_t dcache_misses = 0;
    uint64_t load_writebacks = 0;
    uint64_t load_queries = 0;
    uint64_t load_query_blocks = 0;
    uint64_t load_forwards = 0;
    uint64_t ldq_nonempty_cycles = 0;
    uint64_t stq_nonempty_cycles = 0;

    uint64_t rename_stall_cycles = 0;
    uint64_t dispatch_active_cycles = 0;
    uint64_t dispatch_blocked_cycles = 0;
    uint64_t branch_resolves = 0;
    uint64_t branch_mispredicts = 0;
    uint64_t branch_direction_mispredicts = 0;
    std::array<uint64_t, 8> branch_mispredicts_by_cfi{};
    std::unordered_map<uint32_t, uint64_t> branch_mispredicts_by_pc;
    std::unordered_map<uint32_t, BranchPcStats> branches_by_pc;
    uint64_t frontend_flushes = 0;

    uint64_t axi_ifetch_reads = 0;
    uint64_t axi_data_reads = 0;
    uint64_t axi_writes = 0;

    void sample(const Vcore_top_elf_axi_test_top* dut) {
        ++cycles;

        unsigned committed = count_bits(dut->commit_valid & 0x3U);
        commits += committed;
        commit_cycles += committed != 0;
        dual_commit_cycles += committed == 2;

        ++ifu_states[dut->ifu_state & 0x7U];
        ++immu_states[dut->immu_state & 0x3U];
        ++icache_states[dut->icache_state & 0x7U];
        ++dmmu_states[dut->dmmu_state & 0x3U];
        ++dcache_states[dut->dcache_state & 0xfU];

        ifu_packets += dut->ifu_packet_fire;
        ifu_xlate_fires +=
            dut->ifu_xlate_req_valid && dut->ifu_xlate_req_ready;
        ifu_xlate_stalls +=
            dut->ifu_xlate_req_valid && !dut->ifu_xlate_req_ready;
        icache_req_fires +=
            dut->icache_req_valid && dut->icache_req_ready;
        icache_req_stalls +=
            dut->icache_req_valid && !dut->icache_req_ready;
        if (dut->icache_lookup_cacheable) {
            icache_hits += dut->icache_lookup_hit;
            icache_misses += !dut->icache_lookup_hit;
        }
        fetch_buffer_empty_cycles += dut->fetch_buffer_count == 0;
        frontend_not_ready_cycles += !dut->core_fe_ready;

        mem_issues += dut->mem_issue_valid;
        dmmu_req_fires +=
            dut->dmmu_req_valid && dut->dmmu_req_ready;
        dmmu_req_stalls +=
            dut->dmmu_req_valid && !dut->dmmu_req_ready;
        bool dcache_fire =
            dut->core_dmem_req_valid && dut->core_dmem_req_ready;
        dcache_req_fires += dcache_fire;
        dcache_req_stalls +=
            dut->core_dmem_req_valid && !dut->core_dmem_req_ready;
        dcache_load_reqs += dcache_fire && !dut->core_dmem_req_is_store;
        dcache_store_reqs += dcache_fire && dut->core_dmem_req_is_store;
        if (dut->dcache_lookup_cacheable) {
            dcache_hits += dut->dcache_lookup_hit;
            dcache_misses += !dut->dcache_lookup_hit;
        }
        load_writebacks += dut->load_wb_valid;
        load_queries += dut->ld_query_valid;
        load_query_blocks += dut->ld_query_valid && dut->ld_query_block;
        load_forwards +=
            dut->ld_query_valid && dut->ld_query_forward_valid &&
            !dut->ld_query_block;
        ldq_nonempty_cycles += !dut->ldq_empty;
        stq_nonempty_cycles += !dut->stq_empty;

        rename_stall_cycles += dut->rename_stalls != 0;
        dispatch_active_cycles += dut->dispatch_valid != 0;
        dispatch_blocked_cycles +=
            dut->dispatch_valid != 0 &&
            dut->dispatch_fire != dut->dispatch_valid;
        branch_resolves += count_bits(dut->branch_resolve_mask);
        for (unsigned port = 0; port < ALU_WIDTH; ++port) {
            if ((dut->branch_resolve_valid_detail & (1U << port)) == 0)
                continue;

            const uint32_t pc = dut->branch_resolve_pc_detail[port];
            BranchPcStats& stats = branches_by_pc[pc];
            ++stats.resolves;
            stats.taken +=
                (dut->branch_resolve_actual_taken_detail >> port) & 1U;
            stats.mispredicts +=
                (dut->branch_resolve_mispredict_detail >> port) & 1U;
        }
        branch_mispredicts += dut->branch_mispredict;
        if (dut->branch_mispredict) {
            ++branch_mispredicts_by_cfi[
                dut->branch_mispredict_cfi_type & 0x7U];
            ++branch_mispredicts_by_pc[dut->branch_mispredict_pc];
            branch_direction_mispredicts +=
                dut->branch_mispredict_predicted_taken !=
                dut->branch_mispredict_actual_taken;
        }
        frontend_flushes += dut->frontend_flush;

        bool ar_fire = dut->arvalid && dut->arready;
        axi_ifetch_reads += ar_fire && dut->arid == 0;
        axi_data_reads += ar_fire && dut->arid == 1;
        axi_writes += dut->awvalid && dut->awready;
    }

    void print(unsigned windows, uint32_t reported_cycles) const {
        const uint64_t icache_lookups = icache_hits + icache_misses;
        const uint64_t dcache_lookups = dcache_hits + dcache_misses;

        std::printf(
            "PERF: windows=%u cycles=%llu reported_cycles=%u "
            "commits=%llu IPC=%.4f commit_util=%.2f%% dual_commit=%.2f%%\n",
            windows, static_cast<unsigned long long>(cycles),
            reported_cycles, static_cast<unsigned long long>(commits),
            ratio(commits, cycles), 100.0 * ratio(commit_cycles, cycles),
            100.0 * ratio(dual_commit_cycles, cycles));

        std::printf(
            "  frontend: packets=%llu (%.4f/cyc) fb_empty=%.2f%% "
            "core_not_ready=%.2f%% xlate=%llu stall=%llu "
            "ic_req=%llu stall=%llu\n",
            static_cast<unsigned long long>(ifu_packets),
            ratio(ifu_packets, cycles),
            100.0 * ratio(fetch_buffer_empty_cycles, cycles),
            100.0 * ratio(frontend_not_ready_cycles, cycles),
            static_cast<unsigned long long>(ifu_xlate_fires),
            static_cast<unsigned long long>(ifu_xlate_stalls),
            static_cast<unsigned long long>(icache_req_fires),
            static_cast<unsigned long long>(icache_req_stalls));
        std::printf(
            "  ifu_state%%: xreq=%.2f xresp=%.2f mreq=%.2f "
            "mresp=%.2f fetch=%.2f fault=%.2f\n",
            100.0 * ratio(ifu_states[0], cycles),
            100.0 * ratio(ifu_states[1], cycles),
            100.0 * ratio(ifu_states[2], cycles),
            100.0 * ratio(ifu_states[3], cycles),
            100.0 * ratio(ifu_states[4], cycles),
            100.0 * ratio(ifu_states[5], cycles));
        std::printf(
            "  icache: lookup=%llu hit=%llu miss=%llu hit_rate=%.2f%% "
            "state_idle=%.2f%% lookup=%.2f%% refill=%.2f%%\n",
            static_cast<unsigned long long>(icache_lookups),
            static_cast<unsigned long long>(icache_hits),
            static_cast<unsigned long long>(icache_misses),
            100.0 * ratio(icache_hits, icache_lookups),
            100.0 * ratio(icache_states[0], cycles),
            100.0 * ratio(icache_states[1], cycles),
            100.0 * ratio(icache_states[3], cycles));

        std::printf(
            "  backend: mem_issue=%llu rename_stall=%.2f%% "
            "dispatch_active=%.2f%% dispatch_blocked=%.2f%%\n",
            static_cast<unsigned long long>(mem_issues),
            100.0 * ratio(rename_stall_cycles, cycles),
            100.0 * ratio(dispatch_active_cycles, cycles),
            100.0 * ratio(dispatch_blocked_cycles, cycles));
        std::printf(
            "  dmmu: req=%llu stall=%llu state_idle=%.2f%% "
            "check=%.2f%% wait=%.2f%% response=%.2f%%\n",
            static_cast<unsigned long long>(dmmu_req_fires),
            static_cast<unsigned long long>(dmmu_req_stalls),
            100.0 * ratio(dmmu_states[0], cycles),
            100.0 * ratio(dmmu_states[1], cycles),
            100.0 * ratio(dmmu_states[2], cycles),
            100.0 * ratio(dmmu_states[3], cycles));
        std::printf(
            "  dcache: req=%llu load=%llu store=%llu stall=%llu "
            "lookup=%llu hit=%llu miss=%llu hit_rate=%.2f%%\n",
            static_cast<unsigned long long>(dcache_req_fires),
            static_cast<unsigned long long>(dcache_load_reqs),
            static_cast<unsigned long long>(dcache_store_reqs),
            static_cast<unsigned long long>(dcache_req_stalls),
            static_cast<unsigned long long>(dcache_lookups),
            static_cast<unsigned long long>(dcache_hits),
            static_cast<unsigned long long>(dcache_misses),
            100.0 * ratio(dcache_hits, dcache_lookups));
        std::printf(
            "  dcache_state%%: idle=%.2f lookup=%.2f wb=%.2f "
            "refill=%.2f response=%.2f\n",
            100.0 * ratio(dcache_states[0], cycles),
            100.0 * ratio(dcache_states[1], cycles),
            100.0 * ratio(
                dcache_states[2] + dcache_states[3] + dcache_states[4],
                cycles),
            100.0 * ratio(dcache_states[5] + dcache_states[6], cycles),
            100.0 * ratio(dcache_states[12], cycles));
        std::printf(
            "  lsu: load_wb=%llu query=%llu blocked=%llu forwarded=%llu "
            "ldq_nonempty=%.2f%% stq_nonempty=%.2f%%\n",
            static_cast<unsigned long long>(load_writebacks),
            static_cast<unsigned long long>(load_queries),
            static_cast<unsigned long long>(load_query_blocks),
            static_cast<unsigned long long>(load_forwards),
            100.0 * ratio(ldq_nonempty_cycles, cycles),
            100.0 * ratio(stq_nonempty_cycles, cycles));
        std::printf(
            "  control: branches=%llu mispredict=%llu rate=%.2f%% "
            "frontend_flush=%llu AXI(ifetch/read/write)=%llu/%llu/%llu\n",
            static_cast<unsigned long long>(branch_resolves),
            static_cast<unsigned long long>(branch_mispredicts),
            100.0 * ratio(branch_mispredicts, branch_resolves),
            static_cast<unsigned long long>(frontend_flushes),
            static_cast<unsigned long long>(axi_ifetch_reads),
            static_cast<unsigned long long>(axi_data_reads),
            static_cast<unsigned long long>(axi_writes));

        std::printf(
            "  control_detail: cfi(br/b_bl/jirl)=%llu/%llu/%llu "
            "direction=%llu target_or_metadata=%llu\n",
            static_cast<unsigned long long>(branch_mispredicts_by_cfi[1]),
            static_cast<unsigned long long>(branch_mispredicts_by_cfi[2]),
            static_cast<unsigned long long>(branch_mispredicts_by_cfi[3]),
            static_cast<unsigned long long>(branch_direction_mispredicts),
            static_cast<unsigned long long>(
                branch_mispredicts - branch_direction_mispredicts));

        std::vector<std::pair<uint32_t, uint64_t>> hot_mispredicts(
            branch_mispredicts_by_pc.begin(),
            branch_mispredicts_by_pc.end());
        std::sort(
            hot_mispredicts.begin(), hot_mispredicts.end(),
            [](const auto& lhs, const auto& rhs) {
                if (lhs.second != rhs.second)
                    return lhs.second > rhs.second;
                return lhs.first < rhs.first;
            });

        std::printf("  top_mispredict_pc:");
        const size_t shown = std::min<size_t>(8, hot_mispredicts.size());
        for (size_t index = 0; index < shown; ++index) {
            std::printf(
                " %08x=%llu", hot_mispredicts[index].first,
                static_cast<unsigned long long>(
                    hot_mispredicts[index].second));
        }
        std::printf("\n");

        std::vector<std::pair<uint32_t, BranchPcStats>> hot_branches(
            branches_by_pc.begin(), branches_by_pc.end());
        std::sort(
            hot_branches.begin(), hot_branches.end(),
            [](const auto& lhs, const auto& rhs) {
                if (lhs.second.mispredicts != rhs.second.mispredicts)
                    return lhs.second.mispredicts > rhs.second.mispredicts;
                return lhs.first < rhs.first;
            });

        std::printf("  branch_pc_detail:");
        const size_t branch_shown =
            std::min<size_t>(8, hot_branches.size());
        for (size_t index = 0; index < branch_shown; ++index) {
            const auto& [pc, stats] = hot_branches[index];
            std::printf(
                " %08x=%llu/%llu(%.1f%%,taken=%.1f%%)", pc,
                static_cast<unsigned long long>(stats.mispredicts),
                static_cast<unsigned long long>(stats.resolves),
                100.0 * ratio(stats.mispredicts, stats.resolves),
                100.0 * ratio(stats.taken, stats.resolves));
        }
        std::printf("\n");
    }
};

}  // namespace

int main(int argc, char** argv) {
    std::setvbuf(stdout, nullptr, _IOLBF, 0);
    Verilated::commandArgs(argc, argv);

    Options options;
    try {
        options = parse_options(argc, argv);
    } catch (const std::exception& error) {
        std::fprintf(stderr, "ERROR: %s\n", error.what());
        print_usage(argv[0]);
        return 2;
    }

    ElfImage image;
    std::string load_error;
    if (!image.load(options.elf_path, &load_error)) {
        std::fprintf(stderr, "ERROR: %s\n", load_error.c_str());
        return 2;
    }
    if (image.entry() != RESET_PC) {
        std::fprintf(
            stderr,
            "ERROR: ELF entry is 0x%08x, expected 0x%08x\n",
            image.entry(), RESET_PC);
        return 2;
    }

    DisassemblyIndex disassembly;
    if (!options.disasm_path.empty() &&
        !disassembly.load(options.disasm_path)) {
        std::fprintf(
            stderr, "WARNING: cannot load disassembly '%s'\n",
            options.disasm_path.c_str());
    }

    std::printf(
        "ELF: %s\nentry=0x%08x, PT_LOAD segments=%zu%s%s\n",
        options.elf_path.c_str(), image.entry(),
        image.segments().size(),
        options.stress ? ", AXI stress" : "",
        options.perf_mode ? ", performance profile" : "");

    auto* dut = new Vcore_top_elf_axi_test_top;
    reset(dut);

    AxiMemory memory(
        &image, options.axi_latency, options.stress, options.trace,
        options.simu_flag);
    std::deque<CommitRecord> recent;
    PerformanceStats perf_stats;
    uint64_t commit_count = 0;
    uint64_t redirect_count = 0;
    uint64_t exception_count = 0;
    uint64_t last_commit_cycle = 0;
    uint64_t observed_num_completions = 0;
    unsigned perf_windows = 0;
    bool perf_window_active = false;
    bool saw_first_commit = false;
    bool passed = false;
    std::string failure;

    const uint32_t expected_prefix[] = {
        0x1c000000U,
        0x1c000004U,
        0x1c000008U,
        0x1c010000U,
    };

    for (uint64_t cycle = 0; cycle < options.max_cycles; ++cycle) {
        memory.drive(dut, cycle);
        dut->eval();
        memory.observe_master_stability(dut);

        if (options.perf_mode && perf_window_active)
            perf_stats.sample(dut);

        if (dut->redirect_valid) {
            ++redirect_count;
            if (options.trace) {
                std::printf(
                    "[%8llu] REDIRECT pc=%08x\n",
                    static_cast<unsigned long long>(cycle),
                    dut->redirect_pc);
            }
        }

        for (unsigned lane = 0; lane < COMMIT_WIDTH; ++lane) {
            if ((dut->commit_valid & (1U << lane)) == 0)
                continue;

            CommitRecord record = {
                cycle,
                packed_word(dut->commit_pc, lane),
                packed_word(dut->commit_inst, lane),
                packed_field(dut->commit_ldst, lane, 5),
                packed_field(dut->commit_rob_idx, lane, 6),
            };

            if (options.perf_mode &&
                record.pc == options.perf_window_pc) {
                if (perf_window_active) {
                    perf_window_active = false;
                    if (options.trace) {
                        std::printf(
                            "[%8llu] PERF window %u close\n",
                            static_cast<unsigned long long>(cycle),
                            perf_windows);
                    }
                } else {
                    perf_window_active = true;
                    ++perf_windows;
                    if (options.trace) {
                        std::printf(
                            "[%8llu] PERF window %u open\n",
                            static_cast<unsigned long long>(cycle),
                            perf_windows);
                    }
                }
            }

            ++commit_count;
            saw_first_commit = true;
            last_commit_cycle = cycle;
            recent.push_back(record);
            if (recent.size() > 24)
                recent.pop_front();

            if (options.trace) {
                const std::string* line =
                    disassembly.find(record.pc);
                std::printf(
                    "[%8llu] COMMIT pc=%08x inst=%08x r%-2u",
                    static_cast<unsigned long long>(cycle),
                    record.pc, record.inst, record.ldst);
                if (line)
                    std::printf("  %s", line->c_str());
                std::printf("\n");
            } else if (commit_count % 10000 == 0) {
                std::printf(
                    "progress: commits=%llu cycle=%llu pc=%08x\n",
                    static_cast<unsigned long long>(commit_count),
                    static_cast<unsigned long long>(cycle),
                    record.pc);
            }

            if (options.check_startup_prefix &&
                commit_count <=
                    sizeof(expected_prefix) /
                        sizeof(expected_prefix[0]) &&
                record.pc != expected_prefix[commit_count - 1]) {
                failure = "startup commit-PC prefix mismatch";
                break;
            }
            if (!image.contains(record.pc, 4) ||
                image.read_word(record.pc) != record.inst) {
                failure =
                    "committed instruction does not match ELF image";
                break;
            }
        }

        if (failure.empty() && dut->exception_valid) {
            ++exception_count;
            if (options.trace) {
                std::printf(
                    "[%8llu] EXCEPTION pc=%08x inst=%08x "
                    "cause=%u badvaddr=%08x\n",
                    static_cast<unsigned long long>(cycle),
                    dut->exception_pc, dut->exception_inst,
                    dut->exception_cause, dut->exception_badvaddr);
            }
            const bool exception_allowed =
                options.allow_exceptions ||
                options.allowed_exception_pcs.count(
                    dut->exception_pc) != 0;
            if (!exception_allowed) {
                char message[192];
                std::snprintf(
                    message, sizeof(message),
                    "unexpected exception pc=0x%08x inst=0x%08x "
                    "cause=%u badvaddr=0x%08x",
                    dut->exception_pc, dut->exception_inst,
                    dut->exception_cause,
                    dut->exception_badvaddr);
                failure = message;
            }
        }

        memory.advance(dut, cycle);
        tick(dut);

        if (failure.empty() && !memory.protocol_error().empty())
            failure = memory.protocol_error();
        // An out-of-order frontend may issue a wrong-path fetch outside the
        // ELF before a branch redirect arrives. Committed instructions are
        // still checked against the ELF above, so this is not a correctness
        // failure for performance profiling.
        if (failure.empty() && !options.perf_mode &&
            memory.invalid_fetch()) {
            char message[96];
            std::snprintf(
                message, sizeof(message),
                "instruction fetch outside PT_LOAD at 0x%08x",
                memory.invalid_fetch_address());
            failure = message;
        }

        if (failure.empty() &&
            memory.num_completions() !=
                observed_num_completions) {
            observed_num_completions = memory.num_completions();
            uint32_t status = memory.num_value();
            if (options.perf_mode) {
                if (perf_windows == 0) {
                    failure = "performance window PC was never committed";
                } else if (perf_window_active) {
                    failure = "SOC_NUM written while a performance window was open";
                } else if (memory.led_writes() == 0) {
                    failure = "benchmark did not report an LED result";
                } else if (memory.led_value() != 0x0000ffffU) {
                    char message[96];
                    std::snprintf(
                        message, sizeof(message),
                        "benchmark reported failure (LED=0x%08x)",
                        memory.led_value());
                    failure = message;
                } else {
                    passed = true;
                }
            } else {
                unsigned test_number = status >> 24;
                unsigned passed_tests = status & 0x00ffffffU;

                if (test_number != 0 &&
                    passed_tests < test_number) {
                    char message[128];
                    std::snprintf(
                        message, sizeof(message),
                        "NSCSCC functional test %u failed "
                        "(NUM=0x%08x, passed=%u)",
                        test_number, status, passed_tests);
                    failure = message;
                } else if (test_number >= options.target_tests &&
                           passed_tests == test_number) {
                    passed = true;
                }
            }
        }

        if (passed || !failure.empty())
            break;

        uint64_t watchdog_base =
            saw_first_commit ? last_commit_cycle : 0;
        if (cycle - watchdog_base >=
            options.watchdog_cycles) {
            char message[384];
            std::snprintf(
                message, sizeof(message),
                "no commit for %llu cycles "
                "(rob_empty=%u fb=%u fe_ready=%u "
                "dreq=%u/%u store=%u rd_state=%u "
                "wr_state=%u dmem_outstanding=%u "
                "AR=%u/%u R=%u/%u AW=%u/%u "
                "W=%u/%u B=%u/%u)",
                static_cast<unsigned long long>(
                    options.watchdog_cycles),
                dut->rob_empty, dut->fetch_buffer_count,
                dut->core_fe_ready, dut->core_dmem_req_valid,
                dut->core_dmem_req_ready,
                dut->core_dmem_req_is_store,
                dut->axi_read_state, dut->axi_write_state,
                dut->dmem_outstanding,
                dut->arvalid, dut->arready,
                dut->rvalid, dut->rready,
                dut->awvalid, dut->awready,
                dut->wvalid, dut->wready,
                dut->bvalid, dut->bready);
            failure = message;
        }
    }

    if (!passed && failure.empty())
        failure = "maximum cycle limit reached";
    if (passed && options.stress && !memory.saw_backpressure()) {
        passed = false;
        failure = "stress mode did not exercise AXI backpressure";
    }
    if (passed && !options.perf_mode &&
        memory.completed_writes() != memory.writes()) {
        passed = false;
        failure = "final AXI write response was not completed";
    }
    if (passed && !options.perf_mode && dut->dmem_outstanding) {
        passed = false;
        failure = "core retained an outstanding LSU transaction";
    }

    if (passed) {
        if (options.perf_mode) {
            perf_stats.print(perf_windows, memory.num_value());
            std::printf(
                "PASS: core_top_perf%s commits=%llu redirects=%llu "
                "exceptions=%llu LED=0x%08x NUM=0x%08x\n",
                options.stress ? " stress" : "",
                static_cast<unsigned long long>(commit_count),
                static_cast<unsigned long long>(redirect_count),
                static_cast<unsigned long long>(exception_count),
                memory.led_value(), memory.num_value());
        } else {
            std::printf(
                "PASS: core_top_elf_axi%s commits=%llu redirects=%llu "
                "exceptions=%llu ifetch=%llu loads=%llu stores=%llu "
                "NUM=0x%08x\n",
                options.stress ? " stress" : "",
                static_cast<unsigned long long>(commit_count),
                static_cast<unsigned long long>(redirect_count),
                static_cast<unsigned long long>(exception_count),
                static_cast<unsigned long long>(
                    memory.instruction_reads()),
                static_cast<unsigned long long>(memory.loads()),
                static_cast<unsigned long long>(memory.stores()),
                memory.num_value());
        }
    } else {
        std::fprintf(
            stderr,
            "FAIL: core_top_elf_axi after %llu commits: %s\n",
            static_cast<unsigned long long>(commit_count),
            failure.c_str());
        std::fprintf(
            stderr,
            "State: redirects=%llu exceptions=%llu ifetch=%llu "
            "loads=%llu stores=%llu writes=%llu/%llu "
            "LED=0x%08x NUM=0x%08x backpressure=%u\n",
            static_cast<unsigned long long>(redirect_count),
            static_cast<unsigned long long>(exception_count),
            static_cast<unsigned long long>(
                memory.instruction_reads()),
            static_cast<unsigned long long>(memory.loads()),
            static_cast<unsigned long long>(memory.stores()),
            static_cast<unsigned long long>(memory.completed_writes()),
            static_cast<unsigned long long>(memory.writes()),
            memory.led_value(), memory.num_value(),
            memory.saw_backpressure());
        print_recent(recent, disassembly);
    }

    dut->final();
    delete dut;
    return passed ? 0 : 1;
}
