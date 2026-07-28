#include "Vcore_elf_test_top.h"
#include "elf_image.h"
#include "la32_ref.h"
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
    bool differential = false;
    uint64_t diff_corrupt = 0;
};

struct StoreEvent {
    uint64_t order = 0;  // cycle (RTL) or step (reference)
    uint32_t pc = 0;
    uint32_t inst = 0;
    uint32_t address = 0;
    uint32_t data = 0;   // reference: raw register value; RTL: lane-packed
    unsigned size = 0;   // bytes
    unsigned mask = 0;
    // Reference side only: the address/data producing registers were fed
    // by an architecturally unstable source (e.g. the counter).
    bool addr_tainted = false;
    bool data_tainted = false;
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
        "  --differential         lockstep-compare commits against la32_ref\n"
        "  --diff-selftest-corrupt N\n"
        "                         intentionally desync the reference at the Nth\n"
        "                         comparison (verifies the checker fires)\n"
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
        } else if (argument == "--differential") {
            options.differential = true;
        } else if (argument == "--diff-selftest-corrupt") {
            options.diff_corrupt =
                parse_unsigned(argument, require_value());
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

    // ---------------- differential (lockstep) state ----------------
    La32Ref reference;
    std::deque<StoreEvent> reference_stores;
    std::deque<StoreEvent> rtl_stores;
    uint64_t diff_compares = 0;
    uint64_t diff_exceptions = 0;
    uint64_t diff_forced_irq = 0;
    uint64_t diff_unstable = 0;
    // Taint tracking: values derived from architecturally unstable sources
    // (the free-running counters) propagate through the dataflow; tainted
    // writebacks/stores compare rd/address only.
    std::array<bool, 32> ref_gpr_taint{};
    std::vector<bool> ref_csr_taint(0x4000, false);
    if (options.differential) {
        if (!reference.load_elf(options.elf_path, &load_error)) {
            std::fprintf(stderr, "ERROR: reference: %s\n",
                         load_error.c_str());
            return 2;
        }
        // Timer clock sources differ; the reference takes timer
        // interrupts only when the harness mirrors the RTL's boundary.
        reference.set_timer_irq_external(true);
        std::printf("differential: la32_ref lockstep enabled\n");
    }

    // Drain matched store pairs from the two program-order streams.
    auto drain_stores = [&]() -> bool {
        while (!reference_stores.empty() && !rtl_stores.empty()) {
            const StoreEvent& expected = reference_stores.front();
            const StoreEvent& actual = rtl_stores.front();
            uint32_t value_mask =
                expected.size >= 4
                    ? 0xffffffffU
                    : ((uint32_t{1} << (expected.size * 8)) - 1);
            uint32_t rtl_data =
                (actual.data >> (8 * (actual.address & 3U))) & value_mask;
            bool mismatch =
                (!expected.addr_tainted &&
                 expected.address != actual.address) ||
                expected.size != actual.size ||
                (!expected.data_tainted &&
                 (expected.data & value_mask) != rtl_data);
            if (mismatch) {
                char message[256];
                std::snprintf(
                    message, sizeof(message),
                    "store-stream mismatch: ref {addr=0x%08x data=0x%08x "
                    "size=%u pc=0x%08x} vs rtl {addr=0x%08x data=0x%08x "
                    "size=%u mask=0x%x pc=0x%08x inst=0x%08x}",
                    expected.address, expected.data, expected.size,
                    expected.pc, actual.address, actual.data, actual.size,
                    actual.mask, actual.pc, actual.inst);
                failure = message;
                return false;
            }
            reference_stores.pop_front();
            rtl_stores.pop_front();
        }
        return true;
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

            if (options.differential) {
                ++diff_compares;
                if (options.diff_corrupt != 0 &&
                    diff_compares == options.diff_corrupt) {
                    reference.step();
                    std::fprintf(
                        stderr,
                        "[diff-selftest] corrupted reference at compare "
                        "#%llu (extra step; reference pc now 0x%08x)\n",
                        static_cast<unsigned long long>(diff_compares),
                        reference.pc());
                }
                if (reference.pc() != record.pc) {
                    char message[256];
                    std::snprintf(
                        message, sizeof(message),
                        "differential PC desync: RTL commit pc=0x%08x "
                        "inst=0x%08x ldst=%u rob=%u, reference pc=0x%08x",
                        record.pc, record.inst, record.ldst, record.rob_idx,
                        reference.pc());
                    failure = message;
                    break;
                }
                La32Ref::StepResult ref_result = reference.step();
                if (ref_result.exception) {
                    char message[224];
                    std::snprintf(
                        message, sizeof(message),
                        "reference raised ecode=0x%02x at pc=0x%08x, but "
                        "RTL committed the instruction (inst=0x%08x)",
                        ref_result.ecode, record.pc, record.inst);
                    failure = message;
                    break;
                }
                uint32_t rtl_wdata = packed_word(dut->commit_wdata, lane);
                bool src1_tainted =
                    ref_result.src1 < 32 && ref_gpr_taint[ref_result.src1];
                bool src2_tainted =
                    ref_result.src2 < 32 && ref_gpr_taint[ref_result.src2];
                bool result_tainted =
                    ref_result.data_unstable || src1_tainted ||
                    src2_tainted ||
                    (ref_result.is_csr_op &&
                     ref_csr_taint[ref_result.csr_addr]);
                if (record.ldst != 0) {
                    if (!ref_result.gpr_write ||
                        ref_result.rd != record.ldst) {
                        char message[224];
                        std::snprintf(
                            message, sizeof(message),
                            "GPR-write mismatch at pc=0x%08x inst=0x%08x: "
                            "RTL writes r%u=0x%08x, reference %s",
                            record.pc, record.inst, record.ldst, rtl_wdata,
                            ref_result.gpr_write
                                ? "writes a different register"
                                : "writes nothing");
                        failure = message;
                        break;
                    }
                    if (result_tainted) {
                        ++diff_unstable;
                    } else if (ref_result.wdata != rtl_wdata) {
                        char message[224];
                        std::snprintf(
                            message, sizeof(message),
                            "writeback mismatch at pc=0x%08x inst=0x%08x: "
                            "RTL r%u=0x%08x, reference r%u=0x%08x",
                            record.pc, record.inst, record.ldst, rtl_wdata,
                            ref_result.rd, ref_result.wdata);
                        failure = message;
                        break;
                    }
                } else if (ref_result.gpr_write) {
                    char message[224];
                    std::snprintf(
                        message, sizeof(message),
                        "reference wrote r%u=0x%08x at pc=0x%08x "
                        "inst=0x%08x, but RTL commit has ldst=0",
                        ref_result.rd, ref_result.wdata, record.pc,
                        record.inst);
                    failure = message;
                    break;
                }
                // Taint bookkeeping: CSR writes carry GPR taint into the
                // CSR; a written GPR takes the taint of its inputs.
                if (ref_result.is_csr_op && ref_result.src1 < 32 &&
                    src1_tainted)
                    ref_csr_taint[ref_result.csr_addr] = true;
                if (ref_result.gpr_write)
                    ref_gpr_taint[ref_result.rd] = result_tainted;
                if (ref_result.is_store) {
                    reference_stores.push_back(
                        {reference.steps(), record.pc, record.inst,
                         ref_result.mem_addr, ref_result.mem_data,
                         ref_result.mem_size, 0, src1_tainted,
                         src2_tainted});
                    if (!drain_stores())
                        break;
                }
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
            if (options.differential) {
                ++diff_exceptions;
                uint32_t cause = dut->exception_cause;
                if (reference.pc() != dut->exception_pc) {
                    char message[224];
                    std::snprintf(
                        message, sizeof(message),
                        "exception boundary desync: RTL exception "
                        "pc=0x%08x cause=0x%02x, reference pc=0x%08x",
                        dut->exception_pc, cause, reference.pc());
                    failure = message;
                } else if (cause == La32Ref::ECODE_INT) {
                    // Timer sources differ; if the reference cannot take
                    // this interrupt on its own (timer interrupt), mirror
                    // the RTL boundary. Software interrupts (ESTAT.IS via
                    // CSR write) are architecturally mirrored and are
                    // taken naturally.
                    if (!reference.interrupt_pending_now()) {
                        reference.force_timer_irq();
                        ++diff_forced_irq;
                    }
                    La32Ref::StepResult ref_result = reference.step();
                    if (!ref_result.exception ||
                        ref_result.ecode != La32Ref::ECODE_INT) {
                        failure =
                            "reference failed to take the interrupt the "
                            "RTL reported";
                    } else if (reference.csr_read(La32Ref::CSR_ERA) !=
                               dut->exception_pc) {
                        char message[224];
                        std::snprintf(
                            message, sizeof(message),
                            "interrupt ERA mismatch: RTL "
                            "exception_pc=0x%08x, reference ERA=0x%08x",
                            dut->exception_pc,
                            reference.csr_read(La32Ref::CSR_ERA));
                        failure = message;
                    }
                } else {
                    La32Ref::StepResult ref_result = reference.step();
                    if (!ref_result.exception ||
                        ref_result.ecode != cause) {
                        char message[224];
                        std::snprintf(
                            message, sizeof(message),
                            "exception mismatch at pc=0x%08x: RTL "
                            "cause=0x%02x, reference %s", dut->exception_pc,
                            cause,
                            ref_result.exception ? "raised a different "
                                                   "ecode" :
                                                   "executed the "
                                                   "instruction");
                        failure = message;
                    } else if (ref_result.inst != dut->exception_inst) {
                        char message[224];
                        std::snprintf(
                            message, sizeof(message),
                            "exception inst mismatch at pc=0x%08x: RTL "
                            "0x%08x, reference 0x%08x",
                            dut->exception_pc, dut->exception_inst,
                            ref_result.inst);
                        failure = message;
                    } else if (cause == La32Ref::ECODE_ALE &&
                               reference.csr_read(La32Ref::CSR_BADV) !=
                                   dut->exception_badvaddr) {
                        char message[224];
                        std::snprintf(
                            message, sizeof(message),
                            "ALE BADV mismatch at pc=0x%08x: RTL "
                            "badvaddr=0x%08x, reference BADV=0x%08x",
                            dut->exception_pc, dut->exception_badvaddr,
                            reference.csr_read(La32Ref::CSR_BADV));
                        failure = message;
                    }
                }
            } else if (!options.allow_exceptions) {
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

        if (options.differential && failure.empty() &&
            dmem_request_fire && dmem_request.is_store) {
            rtl_stores.push_back({cycle, dmem_request.pc, dmem_request.inst,
                                  dmem_request.address, dmem_request.data,
                                  1U << dmem_request.size,
                                  dmem_request.mask});
            drain_stores();
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

    if (passed && options.differential) {
        drain_stores();
        if (failure.empty() &&
            (!reference_stores.empty() || !rtl_stores.empty())) {
            char message[160];
            std::snprintf(
                message, sizeof(message),
                "store streams not drained at end of simulation "
                "(reference pending=%zu, RTL pending=%zu)",
                reference_stores.size(), rtl_stores.size());
            failure = message;
        }
        if (!failure.empty())
            passed = false;
    }

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
        if (options.differential) {
            std::printf(
                "DIFF-PASS: compares=%llu exceptions=%llu "
                "forced_irq=%llu unstable_masked=%llu ref_steps=%llu\n",
                static_cast<unsigned long long>(diff_compares),
                static_cast<unsigned long long>(diff_exceptions),
                static_cast<unsigned long long>(diff_forced_irq),
                static_cast<unsigned long long>(diff_unstable),
                static_cast<unsigned long long>(reference.steps()));
        }
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
        if (options.differential) {
            std::fprintf(
                stderr,
                "Reference: pc=0x%08x steps=%llu compares=%llu "
                "diff_exceptions=%llu forced_irq=%llu\n",
                reference.pc(),
                static_cast<unsigned long long>(reference.steps()),
                static_cast<unsigned long long>(diff_compares),
                static_cast<unsigned long long>(diff_exceptions),
                static_cast<unsigned long long>(diff_forced_irq));
            if (!reference_stores.empty() || !rtl_stores.empty()) {
                std::fprintf(
                    stderr,
                    "Pending stores: reference=%zu RTL=%zu\n",
                    reference_stores.size(), rtl_stores.size());
                if (!reference_stores.empty()) {
                    const StoreEvent& event = reference_stores.front();
                    std::fprintf(
                        stderr,
                        "  ref oldest: pc=%08x addr=%08x data=%08x "
                        "size=%u\n",
                        event.pc, event.address, event.data, event.size);
                }
                if (!rtl_stores.empty()) {
                    const StoreEvent& event = rtl_stores.front();
                    std::fprintf(
                        stderr,
                        "  rtl oldest: pc=%08x inst=%08x addr=%08x "
                        "data=%08x size=%u mask=%x\n",
                        event.pc, event.inst, event.address, event.data,
                        event.size, event.mask);
                }
            }
        }
        auto print_blocked_uop =
            [&](const char* label, uint32_t pc, unsigned busy,
                unsigned psrc1, unsigned psrc2, unsigned pdst,
                unsigned busytable_bit) {
                std::fprintf(
                    stderr,
                    "%s: pc=%08x busy=0x%x psrc1=p%u psrc2=p%u "
                    "pdst=p%u busytable[psrc1]=%u",
                    label, pc, busy, psrc1, psrc2, pdst,
                    busytable_bit);
                if (psrc1 < saw_wakeup.size() && saw_wakeup[psrc1]) {
                    std::fprintf(
                        stderr, " last_psrc1_wakeup=%llu(port%u)",
                        static_cast<unsigned long long>(
                            last_wakeup_cycle[psrc1]),
                        last_wakeup_port[psrc1]);
                } else {
                    std::fprintf(stderr, " last_psrc1_wakeup=never");
                }
                std::fprintf(stderr, "\n");
            };
        print_blocked_uop(
            "MEM IQ first", dut->mem_iq_oldest_pc,
            dut->mem_iq_oldest_busy, dut->mem_iq_oldest_psrc1,
            dut->mem_iq_oldest_psrc2, dut->mem_iq_oldest_pdst,
            dut->mem_iq_oldest_bt_busy);
        print_blocked_uop(
            "MEM IQ second", dut->mem_iq_second_pc,
            dut->mem_iq_second_busy, dut->mem_iq_second_psrc1,
            dut->mem_iq_second_psrc2, dut->mem_iq_second_pdst,
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
