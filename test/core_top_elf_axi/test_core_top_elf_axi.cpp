#include "Vcore_top_elf_axi_test_top.h"
#include "elf_image.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <stdexcept>
#include <string>

namespace {

constexpr uint32_t RESET_PC = 0x1c000000U;
constexpr uint32_t NUM_ADDRESS = 0xbfaff050U;
constexpr uint32_t SWITCH_ADDRESS = 0xbfaff060U;
constexpr uint32_t SW_INTER_ADDRESS = 0xbfaff090U;
constexpr uint32_t SIMU_FLAG_ADDRESS = 0xbfafff20U;
constexpr uint32_t TIMER_ADDRESS = 0xbfafe000U;
constexpr unsigned COMMIT_WIDTH = 2;

struct Options {
    std::string elf_path;
    std::string disasm_path;
    uint64_t max_cycles = 5000000;
    uint64_t watchdog_cycles = 50000;
    unsigned target_tests = 58;
    unsigned axi_latency = 2;
    bool stress = false;
    bool trace = false;
    bool allow_exceptions = false;
};

struct CommitRecord {
    uint64_t cycle = 0;
    uint32_t pc = 0;
    uint32_t inst = 0;
    unsigned ldst = 0;
    unsigned rob_idx = 0;
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
        "  --stress            add deterministic AXI backpressure\n"
        "  --allow-exceptions  continue through architectural exceptions\n"
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
        } else if (argument == "--stress") {
            options.stress = true;
        } else if (argument == "--allow-exceptions") {
            options.allow_exceptions = true;
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
              bool trace)
        : image_(image),
          latency_(latency),
          stress_(stress),
          trace_(trace) {}

    void drive(Vcore_top_elf_axi_test_top* dut, uint64_t cycle) {
        dut->arready =
            !read_pending_ &&
            (!stress_ || (cycle % 11 != 3 && cycle % 11 != 4));
        dut->awready =
            !aw_seen_ && !write_response_pending_ &&
            (!stress_ || cycle % 7 != 2);
        dut->wready =
            !w_seen_ && !write_response_pending_ &&
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
            require(dut->awaddr == held_awaddr_,
                    "AWADDR changed under backpressure");
        }
        if (hold_w_) {
            require(dut->wvalid, "WVALID dropped under backpressure");
            require(dut->wdata == held_wdata_,
                    "WDATA changed under backpressure");
            require(dut->wstrb == held_wstrb_,
                    "WSTRB changed under backpressure");
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
        if (hold_aw_)
            held_awaddr_ = dut->awaddr;
        if (hold_w_) {
            held_wdata_ = dut->wdata;
            held_wstrb_ = dut->wstrb;
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
            require(dut->awlen == 0, "store AWLEN is not zero");
            require(dut->awsize == 2, "store AWSIZE is not word");
            require(dut->awburst == 1,
                    "store AWBURST is not incrementing");
            require((dut->awaddr & 3U) == 0,
                    "store AWADDR is not word aligned");
            aw_seen_ = true;
            write_addr_q_ = dut->awaddr;
        }

        if (w_fire) {
            require(!w_seen_, "duplicate W handshake");
            require(dut->wid == 1, "store WID is not LSU ID 1");
            require(dut->wlast, "single-beat store lacks WLAST");
            require(dut->wstrb != 0, "store has an empty WSTRB");
            w_seen_ = true;
            write_data_q_ = dut->wdata;
            write_mask_q_ = dut->wstrb;
        }

        if (aw_seen_ && w_seen_) {
            require(!write_response_pending_,
                    "new store completed before prior B response");
            image_->write_word_masked(
                write_addr_q_, write_data_q_, write_mask_q_);
            ++stores_;
            ++writes_;

            uint32_t base = write_addr_q_ & ~uint32_t{3};
            write_response_is_num_ = base == NUM_ADDRESS;
            write_response_num_value_ =
                write_response_is_num_
                    ? image_->read_word(NUM_ADDRESS)
                    : 0;

            if (trace_) {
                std::printf(
                    "[%8llu] AXI-W addr=%08x data=%08x strb=%x%s\n",
                    static_cast<unsigned long long>(cycle),
                    write_addr_q_, write_data_q_, write_mask_q_,
                    write_response_is_num_ ? " NUM" : "");
            }

            aw_seen_ = false;
            w_seen_ = false;
            write_response_pending_ = true;
            write_response_active_ = false;
            write_response_due_cycle_ = cycle + latency_;
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
            require(dut->arlen == 3,
                    "instruction ARLEN is not four beats");
            require((dut->araddr & 15U) == 0,
                    "instruction ARADDR is not packet aligned");
            ++instruction_reads_;
            if (!image_->contains(dut->araddr, 16)) {
                invalid_fetch_ = true;
                invalid_fetch_address_ = dut->araddr;
            }
        } else if (dut->arid == 1) {
            require(dut->arlen == 0,
                    "data ARLEN is not one beat");
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
        if (base == SWITCH_ADDRESS)
            return 0x000000ffU;
        if (base == SW_INTER_ADDRESS)
            return 0x0000aaaaU;
        if (base == SIMU_FLAG_ADDRESS)
            return 0xffffffffU;
        if (base == TIMER_ADDRESS)
            return static_cast<uint32_t>(cycle);
        return image_->read_word(base);
    }

    ElfImage* image_;
    unsigned latency_ = 0;
    bool stress_ = false;
    bool trace_ = false;
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
    bool w_seen_ = false;
    uint32_t write_addr_q_ = 0;
    uint32_t write_data_q_ = 0;
    unsigned write_mask_q_ = 0;
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
    uint32_t held_awaddr_ = 0;
    uint32_t held_wdata_ = 0;
    unsigned held_wstrb_ = 0;

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
        "ELF: %s\nentry=0x%08x, PT_LOAD segments=%zu%s\n",
        options.elf_path.c_str(), image.entry(),
        image.segments().size(),
        options.stress ? ", AXI stress" : "");

    auto* dut = new Vcore_top_elf_axi_test_top;
    reset(dut);

    AxiMemory memory(
        &image, options.axi_latency, options.stress, options.trace);
    std::deque<CommitRecord> recent;
    uint64_t commit_count = 0;
    uint64_t redirect_count = 0;
    uint64_t exception_count = 0;
    uint64_t last_commit_cycle = 0;
    uint64_t observed_num_completions = 0;
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

            if (commit_count <=
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
            if (!options.allow_exceptions) {
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
        if (failure.empty() && memory.invalid_fetch()) {
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
    if (passed &&
        memory.completed_writes() != memory.writes()) {
        passed = false;
        failure = "final AXI write response was not completed";
    }
    if (passed && dut->dmem_outstanding) {
        passed = false;
        failure = "core retained an outstanding LSU transaction";
    }

    if (passed) {
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
            "NUM=0x%08x backpressure=%u\n",
            static_cast<unsigned long long>(redirect_count),
            static_cast<unsigned long long>(exception_count),
            static_cast<unsigned long long>(
                memory.instruction_reads()),
            static_cast<unsigned long long>(memory.loads()),
            static_cast<unsigned long long>(memory.stores()),
            static_cast<unsigned long long>(memory.completed_writes()),
            static_cast<unsigned long long>(memory.writes()),
            memory.num_value(), memory.saw_backpressure());
        print_recent(recent, disassembly);
    }

    dut->final();
    delete dut;
    return passed ? 0 : 1;
}
