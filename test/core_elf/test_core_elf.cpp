#include "Vcore_elf_test_top.h"
#include "elf_image.h"
#include "verilated.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <limits>
#include <stdexcept>
#include <string>
#include <vector>

namespace {

constexpr int FETCH_WIDTH = 4;
constexpr int COMMIT_WIDTH = 2;
constexpr uint32_t RESET_PC = 0x1c000000U;
constexpr uint32_t NUM_ADDRESS = 0xbfaff050U;
constexpr uint32_t SWITCH_ADDRESS = 0xbfaff060U;
constexpr uint32_t SW_INTER_ADDRESS = 0xbfaff090U;
constexpr uint32_t SIMU_FLAG_ADDRESS = 0xbfafff20U;
constexpr uint32_t TIMER_ADDRESS = 0xbfafe000U;

struct Options {
    std::string elf_path;
    std::string disasm_path;
    uint64_t max_cycles = 500000;
    uint64_t watchdog_cycles = 5000;
    uint64_t target_commits = 0;
    unsigned target_tests = 1;
    unsigned imem_latency = 2;
    unsigned dmem_latency = 3;
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

struct DmemRequest {
    bool is_store = false;
    uint32_t address = 0;
    uint32_t data = 0;
    unsigned mask = 0;
    unsigned size = 0;
    unsigned idx = 0;
    uint32_t pc = 0;
    uint32_t inst = 0;
};

struct DmemResponse {
    uint64_t due_cycle = 0;
    bool is_store = false;
    uint32_t data = 0;
    unsigned idx = 0;
};

struct DmemAccess {
    uint64_t cycle = 0;
    DmemRequest request;
    uint32_t response_data = 0;
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
        "  --disasm FILE          annotate diagnostics with test.s\n"
        "  --target-tests N       pass after NUM reports N tests (default 1)\n"
        "  --target-commits N     pass after N commits instead\n"
        "  --max-cycles N         simulation limit (default 500000)\n"
        "  --watchdog N           no-commit timeout (default 5000)\n"
        "  --imem-latency N       request-to-response cycles (default 2)\n"
        "  --dmem-latency N       request-to-response cycles (default 3)\n"
        "  --stress               add deterministic request backpressure\n"
        "  --allow-exceptions     continue through architectural exceptions\n"
        "  --trace                print every commit and memory request\n",
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
        } else if (argument == "--target-commits") {
            options.target_commits =
                parse_unsigned(argument, require_value());
        } else if (argument == "--max-cycles") {
            options.max_cycles =
                parse_unsigned(argument, require_value());
        } else if (argument == "--watchdog") {
            options.watchdog_cycles =
                parse_unsigned(argument, require_value());
        } else if (argument == "--imem-latency") {
            options.imem_latency = static_cast<unsigned>(
                parse_unsigned(argument, require_value()));
        } else if (argument == "--dmem-latency") {
            options.dmem_latency = static_cast<unsigned>(
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
    if (options.target_commits == 0 && options.target_tests == 0)
        throw std::runtime_error(
            "at least one of target tests or commits must be nonzero");
    return options;
}

unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) &
           ((uint32_t{1} << width) - 1);
}

uint32_t packed_word(uint64_t value, int index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

unsigned packed_field64(uint64_t value, int index, int width) {
    return static_cast<unsigned>(
        (value >> (index * width)) &
        ((uint64_t{1} << width) - 1));
}

void tick(Vcore_elf_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void reset(Vcore_elf_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->imem_req_ready = 0;
    dut->imem_resp_valid = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_is_store = 0;
    dut->dmem_resp_data = 0;
    dut->dmem_resp_idx = 0;
    for (int lane = 0; lane < FETCH_WIDTH; ++lane)
        dut->imem_resp_insts[lane] = 0;
    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);
    dut->rst_n = 1;
    dut->eval();
}

class ImemModel {
public:
    ImemModel(const ElfImage& image, unsigned latency, bool stress)
        : image_(image), latency_(latency), stress_(stress) {}

    void drive(Vcore_elf_test_top* dut, uint64_t cycle) {
        dut->imem_req_ready =
            !stress_ || (cycle % 11 != 3 && cycle % 11 != 4);

        if (pending_ && !response_active_ && cycle >= due_cycle_)
            response_active_ = true;

        dut->imem_resp_valid = response_active_;
        for (int lane = 0; lane < FETCH_WIDTH; ++lane)
            dut->imem_resp_insts[lane] = response_[lane];
    }

    void advance(bool request_fire, uint32_t request_address,
                 bool response_fire, uint64_t cycle) {
        if (response_fire) {
            response_active_ = false;
            pending_ = false;
        }

        if (!request_fire)
            return;
        if (pending_) {
            protocol_error_ =
                "IFU accepted a second request while one was pending";
            return;
        }

        pending_ = true;
        request_address_ = request_address;
        due_cycle_ = cycle + latency_;
        if (!image_.contains(request_address, FETCH_WIDTH * 4)) {
            invalid_address_ = request_address;
            invalid_request_ = true;
        }
        for (int lane = 0; lane < FETCH_WIDTH; ++lane)
            response_[lane] =
                image_.read_word(request_address + lane * 4U);
    }

    bool invalid_request() const { return invalid_request_; }
    uint32_t invalid_address() const { return invalid_address_; }
    const std::string& protocol_error() const { return protocol_error_; }

private:
    const ElfImage& image_;
    unsigned latency_ = 0;
    bool stress_ = false;
    bool pending_ = false;
    bool response_active_ = false;
    bool invalid_request_ = false;
    uint32_t invalid_address_ = 0;
    uint32_t request_address_ = 0;
    uint64_t due_cycle_ = 0;
    std::array<uint32_t, FETCH_WIDTH> response_{};
    std::string protocol_error_;
};

class DmemModel {
public:
    DmemModel(ElfImage* image, unsigned latency, bool stress, bool trace)
        : image_(image), latency_(latency), stress_(stress), trace_(trace) {}

    void drive(Vcore_elf_test_top* dut, uint64_t cycle) {
        dut->dmem_req_ready =
            !stress_ || (cycle % 13 != 5 && cycle % 13 != 6);
        dut->dmem_resp_valid = 0;
        dut->dmem_resp_is_store = 0;
        dut->dmem_resp_data = 0;
        dut->dmem_resp_idx = 0;

        if (!responses_.empty() &&
            responses_.front().due_cycle <= cycle) {
            const DmemResponse& response = responses_.front();
            dut->dmem_resp_valid = 1;
            dut->dmem_resp_is_store = response.is_store;
            dut->dmem_resp_data = response.data;
            dut->dmem_resp_idx = response.idx;
        }
    }

    void advance(uint64_t cycle, bool request_fire,
                 const DmemRequest& request, bool response_sent) {
        if (response_sent)
            responses_.pop_front();
        if (!request_fire)
            return;

        uint32_t response_data = 0;
        if (request.is_store) {
            ++stores_;
            image_->write_word_masked(request.address, request.data,
                                      request.mask);
            uint32_t base = request.address & ~uint32_t{3};
            if (base == NUM_ADDRESS) {
                num_value_ = image_->read_word(NUM_ADDRESS);
                num_write_ = true;
            }
        } else {
            ++loads_;
            response_data = read_word(request.address, cycle);
        }

        if (trace_) {
            std::printf(
                "[%8llu] DMEM %-5s pc=%08x inst=%08x "
                "addr=%08x data=%08x mask=%x idx=%u\n",
                static_cast<unsigned long long>(cycle),
                request.is_store ? "store" : "load", request.pc,
                request.inst, request.address,
                request.is_store ? request.data : response_data,
                request.mask, request.idx);
        }
        recent_.push_back({cycle, request, response_data});
        if (recent_.size() > 24)
            recent_.pop_front();
        responses_.push_back(
            {cycle + latency_, request.is_store, response_data,
             request.idx});
    }

    bool num_write() const { return num_write_; }
    uint32_t num_value() const { return num_value_; }
    uint64_t loads() const { return loads_; }
    uint64_t stores() const { return stores_; }
    std::size_t pending_responses() const { return responses_.size(); }

    void print_recent(const DisassemblyIndex& disassembly) const {
        std::fprintf(stderr, "Recent data-memory requests:\n");
        for (const DmemAccess& access : recent_) {
            const DmemRequest& request = access.request;
            const std::string* line = disassembly.find(request.pc);
            std::fprintf(
                stderr,
                "  [%8llu] %-5s pc=%08x inst=%08x "
                "addr=%08x data=%08x mask=%x size=%u idx=%u",
                static_cast<unsigned long long>(access.cycle),
                request.is_store ? "store" : "load", request.pc,
                request.inst, request.address,
                request.is_store ? request.data : access.response_data,
                request.mask, request.size, request.idx);
            if (line)
                std::fprintf(stderr, "  %s", line->c_str());
            std::fprintf(stderr, "\n");
        }
    }

private:
    uint32_t read_word(uint32_t address, uint64_t cycle) const {
        uint32_t base = address & ~uint32_t{3};
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
    std::deque<DmemResponse> responses_;
    bool num_write_ = false;
    uint32_t num_value_ = 0;
    uint64_t loads_ = 0;
    uint64_t stores_ = 0;
    std::deque<DmemAccess> recent_;
};

void print_commit(const CommitRecord& record,
                  const DisassemblyIndex& disassembly) {
    const std::string* line = disassembly.find(record.pc);
    std::printf("[%8llu] COMMIT pc=%08x inst=%08x r%-2u rob=%u",
                static_cast<unsigned long long>(record.cycle),
                record.pc, record.inst, record.ldst, record.rob_idx);
    if (line)
        std::printf("  %s", line->c_str());
    std::printf("\n");
}

void print_recent(const std::deque<CommitRecord>& recent,
                  const DisassemblyIndex& disassembly) {
    std::fprintf(stderr, "Recent committed instructions:\n");
    for (const CommitRecord& record : recent) {
        const std::string* line = disassembly.find(record.pc);
        std::fprintf(stderr,
                     "  [%8llu] pc=%08x inst=%08x r%-2u rob=%u",
                     static_cast<unsigned long long>(record.cycle),
                     record.pc, record.inst, record.ldst,
                     record.rob_idx);
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
        std::fprintf(stderr,
                     "ERROR: ELF entry is 0x%08x, but the test top "
                     "resets at 0x%08x\n",
                     image.entry(), RESET_PC);
        return 2;
    }

    DisassemblyIndex disassembly;
    if (!options.disasm_path.empty() &&
        !disassembly.load(options.disasm_path)) {
        std::fprintf(stderr,
                     "WARNING: cannot load disassembly '%s'\n",
                     options.disasm_path.c_str());
    }

    std::printf("ELF: %s\n", options.elf_path.c_str());
    std::printf("entry=0x%08x, PT_LOAD segments=%zu\n",
                image.entry(), image.segments().size());
    for (const ElfImage::Segment& segment : image.segments()) {
        std::printf(
            "  load 0x%08x..0x%08x file=0x%x mem=0x%x flags=%c%c%c\n",
            segment.address, segment.address + segment.memory_size,
            segment.file_size, segment.memory_size,
            (segment.flags & 4) ? 'R' : '-',
            (segment.flags & 2) ? 'W' : '-',
            (segment.flags & 1) ? 'X' : '-');
    }

    auto* dut = new Vcore_elf_test_top;
    reset(dut);

    ImemModel imem(image, options.imem_latency, options.stress);
    DmemModel dmem(&image, options.dmem_latency, options.stress,
                    options.trace);
    std::deque<CommitRecord> recent;
    uint64_t commit_count = 0;
    uint64_t redirect_count = 0;
    uint64_t exception_count = 0;
    uint64_t last_commit_cycle = 0;
    std::array<uint64_t, 64> last_wakeup_cycle{};
    std::array<unsigned, 64> last_wakeup_port{};
    std::array<bool, 64> saw_wakeup{};
    bool saw_first_commit = false;
    bool passed = false;
    std::string failure;
    const std::array<uint32_t, 4> expected_prefix = {
        0x1c000000U, 0x1c000004U, 0x1c000008U, 0x1c010000U,
    };

    for (uint64_t cycle = 0; cycle < options.max_cycles; ++cycle) {
        imem.drive(dut, cycle);
        dmem.drive(dut, cycle);
        dut->eval();

        bool imem_request_fire =
            dut->imem_req_valid && dut->imem_req_ready;
        uint32_t imem_request_address = dut->imem_req_addr;
        bool imem_response_fire =
            dut->imem_resp_valid && dut->imem_resp_ready;
        bool dmem_request_fire =
            dut->dmem_req_valid && dut->dmem_req_ready;
        DmemRequest dmem_request = {
            static_cast<bool>(dut->dmem_req_is_store),
            dut->dmem_req_addr,
            dut->dmem_req_data,
            dut->dmem_req_mask,
            dut->dmem_req_size,
            dut->dmem_req_idx,
            dut->dmem_req_pc,
            dut->dmem_req_inst,
        };
        bool dmem_response_sent = dut->dmem_resp_valid;

        for (int port = 0; port < 6; ++port) {
            if ((dut->core_wakeup_valid & (1U << port)) == 0)
                continue;
            unsigned pdst = packed_field64(
                dut->core_wakeup_pdst, port, 6);
            if (pdst != 0 && pdst < last_wakeup_cycle.size()) {
                last_wakeup_cycle[pdst] = cycle;
                last_wakeup_port[pdst] = port;
                saw_wakeup[pdst] = true;
            }
        }

        if (dut->redirect_valid) {
            ++redirect_count;
            if (options.trace) {
                std::printf("[%8llu] REDIRECT pc=%08x\n",
                            static_cast<unsigned long long>(cycle),
                            dut->redirect_pc);
            }
        }

        for (int lane = 0; lane < COMMIT_WIDTH; ++lane) {
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

            if (options.trace)
                print_commit(record, disassembly);
            else if (commit_count % 10000 == 0)
                std::printf("progress: commits=%llu cycle=%llu pc=%08x\n",
                            static_cast<unsigned long long>(commit_count),
                            static_cast<unsigned long long>(cycle),
                            record.pc);

            if (commit_count <= expected_prefix.size() &&
                record.pc != expected_prefix[commit_count - 1]) {
                failure = "startup commit-PC prefix mismatch";
                break;
            }
            if (!image.contains(record.pc, 4) ||
                image.read_word(record.pc) != record.inst) {
                failure =
                    "committed instruction does not match the ELF image";
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
                    "unexpected exception: pc=0x%08x inst=0x%08x "
                    "cause=%u badvaddr=0x%08x",
                    dut->exception_pc, dut->exception_inst,
                    dut->exception_cause, dut->exception_badvaddr);
                failure = message;
            }
        }

        tick(dut);
        imem.advance(imem_request_fire, imem_request_address,
                     imem_response_fire, cycle);
        dmem.advance(cycle, dmem_request_fire, dmem_request,
                     dmem_response_sent);

        if (failure.empty() && !imem.protocol_error().empty())
            failure = imem.protocol_error();
        if (failure.empty() && imem.invalid_request()) {
            char message[96];
            std::snprintf(message, sizeof(message),
                          "instruction fetch outside PT_LOAD at 0x%08x",
                          imem.invalid_address());
            failure = message;
        }

        if (failure.empty() && dmem.num_write()) {
            uint32_t status = dmem.num_value();
            unsigned test_number = status >> 24;
            unsigned passed_tests = status & 0x00ffffffU;
            if (test_number != 0 && passed_tests < test_number) {
                char message[128];
                std::snprintf(
                    message, sizeof(message),
                    "NSCSCC functional test %u failed "
                    "(NUM=0x%08x, passed=%u)",
                    test_number, status, passed_tests);
                failure = message;
            } else if (options.target_commits == 0 &&
                       test_number >= options.target_tests &&
                       passed_tests == test_number) {
                passed = true;
            }
        }

        if (failure.empty() && options.target_commits != 0 &&
            commit_count >= options.target_commits) {
            passed = true;
        }
        if (passed || !failure.empty())
            break;

        uint64_t watchdog_base =
            saw_first_commit ? last_commit_cycle : 0;
        if (cycle - watchdog_base >= options.watchdog_cycles) {
            char message[512];
            std::snprintf(
                message, sizeof(message),
                "no commit for %llu cycles "
                "(rob_empty=%u ldq_empty=%u stq_empty=%u "
                "fb_count=%u fe_ready=%u ren_stalls=0x%x "
                "dis_fire=0x%x alu_issue=0x%x mem_issue=%u "
                "rob_wb=0x%x mem_iq=%u/%u "
                "mem_pc=0x%08x mem_busy=0x%x "
                "ldq=%u stq=%u cq=%u "
                "dreq=%u/%u dresp=%u pending_resp=%zu)",
                static_cast<unsigned long long>(
                    options.watchdog_cycles),
                dut->rob_empty, dut->ldq_empty, dut->stq_empty,
                dut->fetch_buffer_count, dut->core_fe_ready,
                dut->core_ren_stalls, dut->core_dis_fire,
                dut->core_alu_issue, dut->core_mem_issue,
                dut->core_rob_wb, dut->mem_iq_valid_count,
                dut->mem_iq_ready_count, dut->mem_iq_oldest_pc,
                dut->mem_iq_oldest_busy, dut->ldq_valid_count,
                dut->stq_valid_count, dut->stq_commit_count,
                dut->dmem_req_valid, dut->dmem_req_ready,
                dut->dmem_resp_valid, dmem.pending_responses());
            failure = message;
            break;
        }
    }

    if (!passed && failure.empty())
        failure = "maximum cycle limit reached";

    if (passed) {
        std::printf(
            "PASS: core_elf commits=%llu redirects=%llu exceptions=%llu "
            "loads=%llu stores=%llu NUM=0x%08x\n",
            static_cast<unsigned long long>(commit_count),
            static_cast<unsigned long long>(redirect_count),
            static_cast<unsigned long long>(exception_count),
            static_cast<unsigned long long>(dmem.loads()),
            static_cast<unsigned long long>(dmem.stores()),
            dmem.num_value());
    } else {
        std::fprintf(
            stderr,
            "FAIL: core_elf after %llu commits: %s\n",
            static_cast<unsigned long long>(commit_count),
            failure.c_str());
        std::fprintf(
            stderr,
            "State: redirects=%llu exceptions=%llu loads=%llu stores=%llu "
            "NUM=0x%08x\n",
            static_cast<unsigned long long>(redirect_count),
            static_cast<unsigned long long>(exception_count),
            static_cast<unsigned long long>(dmem.loads()),
            static_cast<unsigned long long>(dmem.stores()),
            dmem.num_value());
        auto print_blocked_uop =
            [&](const char* label, uint32_t pc, unsigned busy,
                unsigned prs1, unsigned prs2, unsigned pdst,
                unsigned busytable_bit) {
                std::fprintf(
                    stderr,
                    "%s: pc=%08x busy=0x%x prs1=p%u prs2=p%u "
                    "pdst=p%u busytable[prs1]=%u",
                    label, pc, busy, prs1, prs2, pdst,
                    busytable_bit);
                if (prs1 < saw_wakeup.size() && saw_wakeup[prs1]) {
                    std::fprintf(
                        stderr, " last_prs1_wakeup=%llu(port%u)",
                        static_cast<unsigned long long>(
                            last_wakeup_cycle[prs1]),
                        last_wakeup_port[prs1]);
                } else {
                    std::fprintf(stderr, " last_prs1_wakeup=never");
                }
                std::fprintf(stderr, "\n");
            };
        print_blocked_uop(
            "MEM IQ first", dut->mem_iq_oldest_pc,
            dut->mem_iq_oldest_busy, dut->mem_iq_oldest_prs1,
            dut->mem_iq_oldest_prs2, dut->mem_iq_oldest_pdst,
            dut->mem_iq_oldest_bt_busy);
        print_blocked_uop(
            "MEM IQ second", dut->mem_iq_second_pc,
            dut->mem_iq_second_busy, dut->mem_iq_second_prs1,
            dut->mem_iq_second_prs2, dut->mem_iq_second_pdst,
            dut->mem_iq_second_bt_busy);
        std::fprintf(
            stderr,
            "LDQ chain state [valid addr requested completed forward]: "
            "dfcc=0x%x(p%u) dfd0=0x%x(p%u) "
            "dfd4=0x%x(p%u) dfd8=0x%x(p%u)\n",
            dut->ldq_dfcc_state, dut->ldq_dfcc_pdst,
            dut->ldq_dfd0_state, dut->ldq_dfd0_pdst,
            dut->ldq_dfd4_state, dut->ldq_dfd4_pdst,
            dut->ldq_dfd8_state, dut->ldq_dfd8_pdst);
        std::fprintf(
            stderr,
            "LDQ query: valid=%u slot=%u pc=%08x rob=%u addr=%08x "
            "block=%u forward=%u unresolved_older=%u overlaps=%u\n",
            dut->ld_query_valid_dbg, dut->ld_query_slot_dbg,
            dut->ld_query_pc_dbg, dut->ld_query_rob_idx_dbg,
            dut->ld_query_addr_dbg, dut->ld_query_block_dbg,
            dut->ld_query_forward_dbg, dut->ld_query_unresolved_dbg,
            dut->ld_query_overlap_count_dbg);
        auto print_stq_entry =
            [&](const char* label, uint32_t pc, unsigned state,
                unsigned rob_idx) {
                std::fprintf(
                    stderr,
                    "%s: pc=%08x rob=%u "
                    "state=0x%02x [valid addr data committed requested "
                    "completed cleared]\n",
                    label, pc, rob_idx, state);
            };
        print_stq_entry(
            "STQ first ", dut->stq_first_pc, dut->stq_first_state,
            dut->stq_first_rob_idx);
        print_stq_entry(
            "STQ second", dut->stq_second_pc, dut->stq_second_state,
            dut->stq_second_rob_idx);
        print_stq_entry(
            "STQ third ", dut->stq_third_pc, dut->stq_third_state,
            dut->stq_third_rob_idx);
        print_stq_entry(
            "STQ fourth", dut->stq_fourth_pc, dut->stq_fourth_state,
            dut->stq_fourth_rob_idx);
        print_recent(recent, disassembly);
        dmem.print_recent(disassembly);
    }

    dut->final();
    delete dut;
    return passed ? 0 : 1;
}
