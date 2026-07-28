#include "la32_ref.h"

namespace {

// CONFREG load values mirrored from test/core_elf/test_core_elf.cpp.
constexpr uint32_t SWITCH_VALUE = 0x000000ffU;
constexpr uint32_t SW_INTER_VALUE = 0x0000aaaaU;
constexpr uint32_t SIMU_FLAG_VALUE = 0xffffffffU;

}  // namespace

bool La32Ref::load_elf(const std::string& path, std::string* error) {
    if (!image_.load(path, error))
        return false;
    reset();
    return true;
}

void La32Ref::reset() {
    for (uint32_t& value : gpr_)
        value = 0;
    pc_ = image_.entry();
    steps_ = 0;

    // csr_file.sv reset values (RESET_CRMD = 32'h0000_0008: DA=1, PLV=0,
    // IE=0; TID = CORE_ID = 0; TLBIDX = 32'h8000_0000).
    crmd_ = 0x00000008U;
    prmd_ = 0;
    euen_ = 0;
    ecfg_ = 0;
    estat_ = 0;
    era_ = 0;
    badv_ = 0;
    badi_ = 0;
    eentry_ = 0;
    tlbidx_ = 0x80000000U;
    tlbehi_ = 0;
    tlbelo0_ = 0;
    tlbelo1_ = 0;
    asid_ = 0;
    pgdl_ = 0;
    pgdh_ = 0;
    for (uint32_t& value : save_)
        value = 0;
    tid_ = 0;
    tcfg_ = 0;
    tval_ = 0;
    cntc_ = 0;
    llbctl_ = 0;
    tlbrentry_ = 0;
    dmw0_ = 0;
    dmw1_ = 0;
    timer_irq_ = false;
    timer_armed_ = false;

    num_written_ = false;
    num_value_ = 0;
}

void La32Ref::set_gpr(unsigned index, uint32_t value) {
    if (index > 0 && index < 32)
        gpr_[index] = value;
}

void La32Ref::poke_word(uint32_t address, uint32_t value) {
    for (unsigned byte = 0; byte < 4; ++byte)
        image_.write_byte(address + byte,
                          static_cast<uint8_t>(value >> (8 * byte)));
}

// ---------------------------------------------------------------------------
// Memory model: sparse ELF overlay + CONFREG interception.
// Loads of CONFREG locations return magic values; everything else reads the
// sparse image (0 for unmapped). Stores always land in the sparse image; a
// store to NUM is recorded for the driver.
// ---------------------------------------------------------------------------

uint32_t La32Ref::mem_read_word(uint32_t address) const {
    uint32_t base = address & ~uint32_t{3};
    if (base == SWITCH_ADDRESS)
        return SWITCH_VALUE;
    if (base == SW_INTER_ADDRESS)
        return SW_INTER_VALUE;
    if (base == SIMU_FLAG_ADDRESS)
        return SIMU_FLAG_VALUE;
    if (base == TIMER_ADDRESS)
        return static_cast<uint32_t>(steps_);
    return image_.read_word(base);
}

uint8_t La32Ref::mem_read_byte(uint32_t address) const {
    uint32_t word = mem_read_word(address & ~uint32_t{3});
    return static_cast<uint8_t>(word >> (8 * (address & 3)));
}

void La32Ref::mem_write(uint32_t address, uint32_t data, unsigned size) {
    for (unsigned byte = 0; byte < size; ++byte)
        image_.write_byte(address + byte,
                          static_cast<uint8_t>(data >> (8 * byte)));
    if ((address & ~uint32_t{3}) == NUM_ADDRESS) {
        num_written_ = true;
        num_value_ = image_.read_word(NUM_ADDRESS);
    }
}

// ---------------------------------------------------------------------------
// CSR model (mirrors csr_file.sv).
// ---------------------------------------------------------------------------

uint32_t La32Ref::arch_write_mask(unsigned address) {
    switch (address) {
        case 0x000: return 0x000001ffU;  // CRMD
        case 0x001: return 0x00000007U;  // PRMD
        case 0x002: return 0x00000000U;  // EUEN
        case 0x004: return 0x00001bffU;  // ECFG
        case 0x005: return 0x00000003U;  // ESTAT (soft IS[1:0] only)
        case 0x00c: return 0xffffffc0U;  // EENTRY
        case 0x010: return 0xbf00001fU;  // TLBIDX
        case 0x011: return 0xffffe000U;  // TLBEHI
        case 0x012:
        case 0x013: return 0x0fffff7fU;  // TLBELO0/1
        case 0x018: return 0x000003ffU;  // ASID
        case 0x019:
        case 0x01a: return 0xfffff000U;  // PGDL/PGDH
        case 0x060: return 0x00000004U;  // LLBCTL
        case 0x088: return 0xffffffc0U;  // TLBRENTRY
        case 0x180:
        case 0x181: return 0xee000039U;  // DMW0/1
        case 0x006:                      // ERA
        case 0x007:                      // BADV
        case 0x030:                      // SAVE0-3
        case 0x031:
        case 0x032:
        case 0x033:
        case 0x040:                      // TID
        case 0x041:                      // TCFG
        case 0x043:                      // CNTC
            return 0xffffffffU;
        default:
            // BADI, TVAL, TICLR, CPUID, PRCFG*, 0x182/0x183, unknown: no
            // writable bits.
            return 0;
    }
}

uint32_t La32Ref::estat_value() const {
    // estat_read_value: IS[9:2] = hw_irq (0), IS[10] = 0,
    // IS[11] = timer_irq, IS[12] = ipi_irq (0); read masks to 0x7fff1fff.
    uint32_t value = estat_;
    value &= ~uint32_t{0x3fc};  // IS[9:2]
    value &= ~uint32_t{1U << 10};
    value &= ~uint32_t{1U << 12};
    if (timer_irq_)
        value |= 1U << 11;
    else
        value &= ~uint32_t{1U << 11};
    return value & 0x7fff1fffU;
}

uint32_t La32Ref::csr_read(unsigned address) const {
    uint64_t counter = steps_ + static_cast<uint64_t>(
                                    static_cast<int64_t>(
                                        static_cast<int32_t>(cntc_)));
    switch (address) {
        case 0x000: return crmd_;
        case 0x001: return prmd_;
        case 0x002: return euen_;
        case 0x004: return ecfg_;
        case 0x005: return estat_value();
        case 0x006: return era_;
        case 0x007: return badv_;
        case 0x008: return badi_;
        case 0x00c: return eentry_;
        case 0x010: return tlbidx_;
        case 0x011: return tlbehi_;
        case 0x012: return tlbelo0_;
        case 0x013: return tlbelo1_;
        case 0x018: return (10U << 16) | (asid_ & 0x3ffU);
        case 0x019: return pgdl_;
        case 0x01a: return pgdh_;
        case 0x01b: return (badv_ & 0x80000000U) ? pgdh_ : pgdl_;
        case 0x020: return 0;            // CPUID = CORE_ID & 0x1ff
        case 0x021: return 0x000001f4U;  // PRCFG1
        case 0x022: return 0;            // PRCFG2
        case 0x023: return 0;            // PRCFG3
        case 0x030: return save_[0];
        case 0x031: return save_[1];
        case 0x032: return save_[2];
        case 0x033: return save_[3];
        case 0x040: return tid_;
        case 0x041: return tcfg_;
        case 0x042: return tval_;
        case 0x043: return cntc_;
        case 0x044: return 0;            // TICLR reads as 0
        case 0x060: return llbctl_ & 0x5U;
        case 0x088: return tlbrentry_;
        case 0x180: return dmw0_;
        case 0x181: return dmw1_;
        case 0x182: return static_cast<uint32_t>(counter);
        case 0x183: return static_cast<uint32_t>(counter >> 32);
        default: return 0;
    }
}

void La32Ref::csr_write(unsigned address, uint32_t wdata, uint32_t wmask) {
    uint32_t mask = arch_write_mask(address);
    switch (address) {
        case 0x000: crmd_ = merge_write(crmd_, wdata, wmask, mask); break;
        case 0x001: prmd_ = merge_write(prmd_, wdata, wmask, mask); break;
        case 0x002: euen_ = merge_write(euen_, wdata, wmask, mask); break;
        case 0x004: ecfg_ = merge_write(ecfg_, wdata, wmask, mask); break;
        case 0x005: estat_ = merge_write(estat_, wdata, wmask, mask); break;
        case 0x006: era_ = merge_write(era_, wdata, wmask, mask); break;
        case 0x007: badv_ = merge_write(badv_, wdata, wmask, mask); break;
        case 0x00c: eentry_ = merge_write(eentry_, wdata, wmask, mask); break;
        case 0x010: tlbidx_ = merge_write(tlbidx_, wdata, wmask, mask); break;
        case 0x011: tlbehi_ = merge_write(tlbehi_, wdata, wmask, mask); break;
        case 0x012: tlbelo0_ = merge_write(tlbelo0_, wdata, wmask, mask); break;
        case 0x013: tlbelo1_ = merge_write(tlbelo1_, wdata, wmask, mask); break;
        case 0x018: asid_ = merge_write(asid_, wdata, wmask, mask); break;
        case 0x019: pgdl_ = merge_write(pgdl_, wdata, wmask, mask); break;
        case 0x01a: pgdh_ = merge_write(pgdh_, wdata, wmask, mask); break;
        case 0x030: save_[0] = merge_write(save_[0], wdata, wmask, mask); break;
        case 0x031: save_[1] = merge_write(save_[1], wdata, wmask, mask); break;
        case 0x032: save_[2] = merge_write(save_[2], wdata, wmask, mask); break;
        case 0x033: save_[3] = merge_write(save_[3], wdata, wmask, mask); break;
        case 0x040: tid_ = merge_write(tid_, wdata, wmask, mask); break;
        case 0x041: {
            // TCFG write reloads TVAL = {new[31:2], 2'b0} and (re)arms.
            tcfg_ = merge_write(tcfg_, wdata, wmask, mask);
            timer_armed_ = (tcfg_ & 1U) != 0;
            tval_ = tcfg_ & 0xfffffffcU;
            break;
        }
        case 0x043: cntc_ = merge_write(cntc_, wdata, wmask, mask); break;
        case 0x044:
            // TICLR: writing 1 to bit 0 clears the timer interrupt.
            if ((wdata & 1U) && (wmask & 1U))
                timer_irq_ = false;
            break;
        case 0x060: llbctl_ = merge_write(llbctl_, wdata, wmask, mask); break;
        case 0x088: tlbrentry_ = merge_write(tlbrentry_, wdata, wmask, mask); break;
        case 0x180: dmw0_ = merge_write(dmw0_, wdata, wmask, mask); break;
        case 0x181: dmw1_ = merge_write(dmw1_, wdata, wmask, mask); break;
        default: break;
    }
}

bool La32Ref::interrupt_pending() const {
    // interrupt_pending = CRMD.IE && |(ESTAT.IS[12:0] & ECFG.LIE[12:0])
    return ((crmd_ >> 2) & 1U) &&
           ((estat_value() & 0x1fffU) & (ecfg_ & 0x1fffU)) != 0;
}

void La32Ref::timer_tick() {
    // One "cycle" per retired step: mirrors the csr_file.sv countdown.
    if (!timer_armed_)
        return;
    if (tval_ <= 1) {
        if (!timer_irq_external_)
            timer_irq_ = true;
        if (tcfg_ & 2U) {  // periodic mode reloads
            tval_ = tcfg_ & 0xfffffffcU;
        } else {
            tval_ = 0;
            timer_armed_ = false;
        }
    } else {
        tval_ -= 1;
    }
}

void La32Ref::raise_exception(StepResult& result, uint32_t ecode,
                              uint32_t esubcode, uint32_t badvaddr) {
    // Exact xcpt_valid behavior of csr_file.sv.
    prmd_ = (prmd_ & ~uint32_t{7}) | (crmd_ & 7U);
    crmd_ &= ~uint32_t{7};
    estat_ = (estat_ & ~(uint32_t{0x3f} << 16)) | (ecode << 16);
    estat_ = (estat_ & ~(uint32_t{0x1ff} << 22)) | (esubcode << 22);
    era_ = result.pc;
    if (ecode != ECODE_INT)
        badi_ = result.inst;
    if (ecode == ECODE_ADE)
        badv_ = (esubcode == 0) ? result.pc : badvaddr;
    else if (ecode == ECODE_ALE)
        badv_ = badvaddr;

    result.exception = true;
    result.ecode = ecode;
    result.esubcode = esubcode;
    result.gpr_write = false;
    result.is_store = false;
    pc_ = eentry_;
    result.next_pc = pc_;
}

void La32Ref::ine(StepResult& result) {
    raise_exception(result, ECODE_INE, 0, 0);
}

// ---------------------------------------------------------------------------
// Instruction step.
// ---------------------------------------------------------------------------

La32Ref::StepResult La32Ref::step() {
    StepResult result;
    result.pc = pc_;

    // Timer counts down once per retired step, then interrupts are sampled
    // before the next instruction executes (mirrors RTL ordering closely
    // enough for the functional tests).
    timer_tick();
    if (interrupt_pending()) {
        result.inst = 0;
        raise_exception(result, ECODE_INT, 0, 0);
        ++steps_;
        return result;
    }

    // Fetch: misaligned pc raises ADEF (EsubCode 0 -> BADV = pc).
    if (pc_ & 3U) {
        result.inst = image_.read_word(pc_);
        raise_exception(result, ECODE_ADE, 0, 0);
        ++steps_;
        return result;
    }

    uint32_t inst = image_.read_word(pc_);
    result.inst = inst;
    execute(result, inst);
    gpr_[0] = 0;
    ++steps_;
    result.next_pc = pc_;
    return result;
}

void La32Ref::execute(StepResult& result, uint32_t inst) {
    const uint32_t pc = result.pc;
    const unsigned rd = inst & 0x1fU;
    const unsigned rj = (inst >> 5) & 0x1fU;
    const unsigned rk = (inst >> 10) & 0x1fU;
    uint32_t next_pc = pc + 4;

    auto write_rd = [&](uint32_t value) {
        if (rd != 0) {
            gpr_[rd] = value;
            result.gpr_write = true;
            result.rd = rd;
            result.wdata = value;
        }
    };

    // Decode space mirrors exu/decode.sv casez priority so that the same
    // encodings raise INE.
    if ((inst >> 25) == 0b0010000) {
        // ---------------- ll.w / sc.w ----------------
        // Not exercised by the functional tests; trivial always-succeed
        // model. si14 offset, word access only.
        uint32_t imm = sext((inst >> 10) & 0x3fffU, 14);
        uint32_t addr = gpr_[rj] + imm;
        result.mem_addr = addr;
        result.mem_size = 4;
        result.src1 = rj;
        if (addr & 3U) {
            raise_exception(result, ECODE_ALE, 0, addr);
            return;
        }
        if (((inst >> 24) & 1U) == 0) {  // ll.w
            result.is_load = true;
            result.mem_data = mem_read_word(addr);
            write_rd(result.mem_data);
        } else {  // sc.w
            result.is_store = true;
            result.src2 = rd;  // store data register
            result.mem_data = gpr_[rd];
            mem_write(addr, gpr_[rd], 4);
            write_rd(1);
        }
        pc_ = next_pc;
        return;
    }

    if ((inst >> 26) == 0b001010) {
        // ---------------- load / store ----------------
        uint32_t imm = sext((inst >> 10) & 0xfffU, 12);
        uint32_t addr = gpr_[rj] + imm;
        unsigned size_code = (inst >> 22) & 3U;
        unsigned size = 1U << size_code;  // 00:1 01:2 10:4
        if (size_code == 3) {
            ine(result);
            return;
        }
        result.mem_addr = addr;
        result.mem_size = size;
        result.src1 = rj;  // base register

        if (((inst >> 24) & 1U) == 0) {
            // load; bit25 selects unsigned for sub-word sizes
            bool sign = ((inst >> 25) & 1U) == 0;
            if ((size == 4 && (addr & 3U)) || (size == 2 && (addr & 1U))) {
                raise_exception(result, ECODE_ALE, 0, addr);
                return;
            }
            result.is_load = true;
            uint32_t value;
            if (size == 4) {
                value = mem_read_word(addr);
            } else if (size == 2) {
                value = static_cast<uint32_t>(mem_read_byte(addr)) |
                        (static_cast<uint32_t>(mem_read_byte(addr + 1)) << 8);
                if (sign)
                    value = sext(value, 16);
            } else {
                value = mem_read_byte(addr);
                if (sign)
                    value = sext(value, 8);
            }
            result.mem_data = value;
            write_rd(value);
            if ((addr & ~uint32_t{3}) == TIMER_ADDRESS)
                result.data_unstable = true;  // cycle-count MMIO
        } else {
            // store
            if ((size == 4 && (addr & 3U)) || (size == 2 && (addr & 1U))) {
                raise_exception(result, ECODE_ALE, 0, addr);
                return;
            }
            result.is_store = true;
            result.src2 = rd;  // store data register
            result.mem_data = gpr_[rd];
            mem_write(addr, gpr_[rd], size);
        }
        pc_ = next_pc;
        return;
    }

    if ((inst >> 30) == 0b01) {
        // ---------------- branches / jumps ----------------
        uint32_t offs16 = sext((inst >> 10) & 0xffffU, 16) << 2;
        uint32_t a = gpr_[rj];
        uint32_t b = gpr_[rd];
        bool taken = false;
        switch (inst >> 26) {
            case 0b010011:  // jirl
                result.src1 = rj;
                if (rd != 0) {
                    gpr_[rd] = pc + 4;
                    result.gpr_write = true;
                    result.rd = rd;
                    result.wdata = pc + 4;
                }
                pc_ = a + offs16;
                return;
            case 0b010100:  // b
                pc_ = pc + (sext(((inst & 0x3ffU) << 16) | ((inst >> 10) & 0xffffU), 26) << 2);
                return;
            case 0b010101:  // bl
                gpr_[1] = pc + 4;
                result.gpr_write = true;
                result.rd = 1;
                result.wdata = pc + 4;
                pc_ = pc + (sext(((inst & 0x3ffU) << 16) | ((inst >> 10) & 0xffffU), 26) << 2);
                return;
            case 0b010110: taken = a == b; break;                    // beq
            case 0b010111: taken = a != b; break;                    // bne
            case 0b011000:                                            // blt
                taken = static_cast<int32_t>(a) < static_cast<int32_t>(b);
                break;
            case 0b011001:                                            // bge
                taken = static_cast<int32_t>(a) >= static_cast<int32_t>(b);
                break;
            case 0b011010: taken = a < b; break;                     // bltu
            case 0b011011: taken = a >= b; break;                    // bgeu
            default:
                ine(result);
                return;
        }
        result.src1 = rj;  // conditional branch compares rj vs rd
        result.src2 = rd;
        pc_ = taken ? pc + offs16 : next_pc;
        return;
    }

    if ((inst >> 25) == 0b0000001) {
        // ---------------- immediate ALU ----------------
        uint32_t a = gpr_[rj];
        result.src1 = rj;
        switch ((inst >> 22) & 7U) {
            case 0b000:  // slti
                write_rd(static_cast<int32_t>(a) <
                                 static_cast<int32_t>(sext((inst >> 10) & 0xfffU, 12))
                             ? 1
                             : 0);
                break;
            case 0b001:  // sltui
                write_rd(a < sext((inst >> 10) & 0xfffU, 12) ? 1 : 0);
                break;
            case 0b010:  // addi.w
                write_rd(a + sext((inst >> 10) & 0xfffU, 12));
                break;
            case 0b101:  // andi
                write_rd(a & ((inst >> 10) & 0xfffU));
                break;
            case 0b110:  // ori
                write_rd(a | ((inst >> 10) & 0xfffU));
                break;
            case 0b111:  // xori
                write_rd(a ^ ((inst >> 10) & 0xfffU));
                break;
            default:
                ine(result);
                return;
        }
        pc_ = next_pc;
        return;
    }

    if ((inst >> 20) == 0b000000000100) {
        // ---------------- shift by immediate ----------------
        unsigned sa = (inst >> 10) & 0x1fU;
        uint32_t a = gpr_[rj];
        result.src1 = rj;
        switch ((inst >> 18) & 3U) {
            case 0: write_rd(a << sa); break;                              // slli.w
            case 1: write_rd(a >> sa); break;                              // srli.w
            case 2:                                                            // srai.w
                write_rd(static_cast<uint32_t>(
                    static_cast<int32_t>(a) >> sa));
                break;
            default:
                ine(result);
                return;
        }
        pc_ = next_pc;
        return;
    }

    if ((inst >> 18) == 0b00000000001010) {
        // ---------------- syscall / break ----------------
        if (((inst >> 17) & 1U) == 0 || ((inst >> 15) & 1U) != 0) {
            ine(result);
        } else if ((inst >> 16) & 1U) {
            raise_exception(result, ECODE_SYS, 0, 0);
        } else {
            raise_exception(result, ECODE_BRK, 0, 0);
        }
        return;
    }

    if ((inst >> 20) == 0b000000000001 || (inst >> 20) == 0b000000000010) {
        // ---------------- register-register ALU / mul / div ----------------
        uint32_t a = gpr_[rj];
        uint32_t b = gpr_[rk];
        result.src1 = rj;
        result.src2 = rk;
        switch ((inst >> 15) & 0x7fU) {
            case 0b0100000: write_rd(a + b); break;                    // add.w
            case 0b0100010: write_rd(a - b); break;                    // sub.w
            case 0b0100100:                                            // slt
                write_rd(static_cast<int32_t>(a) < static_cast<int32_t>(b) ? 1 : 0);
                break;
            case 0b0100101: write_rd(a < b ? 1 : 0); break;            // sltu
            case 0b0101000: write_rd(~(a | b)); break;                 // nor
            case 0b0101001: write_rd(a & b); break;                    // and
            case 0b0101010: write_rd(a | b); break;                    // or
            case 0b0101011: write_rd(a ^ b); break;                    // xor
            case 0b0101110: write_rd(a << (b & 31U)); break;           // sll.w
            case 0b0101111: write_rd(a >> (b & 31U)); break;           // srl.w
            case 0b0110000:                                            // sra.w
                write_rd(static_cast<uint32_t>(
                    static_cast<int32_t>(a) >> (b & 31U)));
                break;
            case 0b0111000:                                            // mul.w
                write_rd(static_cast<uint32_t>(
                    static_cast<uint64_t>(a) * static_cast<uint64_t>(b)));
                break;
            case 0b0111001: {                                          // mulh.w
                int64_t product = static_cast<int64_t>(
                                      static_cast<int32_t>(a)) *
                                  static_cast<int64_t>(
                                      static_cast<int32_t>(b));
                write_rd(static_cast<uint32_t>(
                    static_cast<uint64_t>(product) >> 32));
                break;
            }
            case 0b0111010:                                            // mulh.wu
                write_rd(static_cast<uint32_t>(
                    (static_cast<uint64_t>(a) * static_cast<uint64_t>(b)) >> 32));
                break;
            case 0b1000000: {                                          // div.w
                int32_t sa = static_cast<int32_t>(a);
                int32_t sb = static_cast<int32_t>(b);
                uint32_t q;
                if (sb == 0)
                    q = 0xffffffffU;
                else if (sa == INT32_MIN && sb == -1)
                    q = 0x80000000U;
                else
                    q = static_cast<uint32_t>(sa / sb);
                write_rd(q);
                break;
            }
            case 0b1000010:                                            // div.wu
                write_rd(b == 0 ? 0xffffffffU : a / b);
                break;
            case 0b1000001: {                                          // mod.w
                int32_t sa = static_cast<int32_t>(a);
                int32_t sb = static_cast<int32_t>(b);
                uint32_t r;
                if (sb == 0)
                    r = a;
                else if (sa == INT32_MIN && sb == -1)
                    r = 0;
                else
                    r = static_cast<uint32_t>(sa % sb);
                write_rd(r);
                break;
            }
            case 0b1000011:                                            // mod.wu
                write_rd(b == 0 ? a : a % b);
                break;
            default:
                ine(result);
                return;
        }
        pc_ = next_pc;
        return;
    }

    if ((inst >> 28) == 0b0001 && ((inst >> 25) & 3U) == 0b10) {
        // ---------------- lu12i.w / pcaddu12i ----------------
        uint32_t imm = ((inst >> 5) & 0xfffffU) << 12;
        if ((inst >> 27) & 1U)
            write_rd(pc + imm);  // pcaddu12i
        else
            write_rd(imm);       // lu12i.w
        pc_ = next_pc;
        return;
    }

    if ((inst >> 24) == 0b00000100) {
        // ---------------- csrrd / csrwr / csrxchg ----------------
        if ((crmd_ & 3U) != 0) {
            raise_exception(result, ECODE_IPE, 0, 0);
            return;
        }
        unsigned address = (inst >> 10) & 0x3fffU;
        uint32_t old_value = csr_read(address);
        result.is_csr_op = true;
        result.csr_addr = address;
        if (rj == 1) {
            csr_write(address, gpr_[rd], 0xffffffffU);
            result.src1 = rd;  // CSR write data
        } else if (rj != 0) {
            csr_write(address, gpr_[rd], gpr_[rj]);
            result.src1 = rd;  // CSR write data
            result.src2 = rj;  // CSR write mask
        }
        write_rd(old_value);
        // TVAL and the stable counter tick from a different source in each
        // model; their read-back values cannot be compared bit-exactly.
        if (address == 0x042 || address == 0x182 || address == 0x183)
            result.data_unstable = true;
        pc_ = next_pc;
        return;
    }

    if ((inst >> 25) == 0b0000011 || (inst >> 15) == 0b00111000011100100 ||
        (inst >> 15) == 0b00111000011100101) {
        // ---------------- ertn / dbar / ibar (+ TLB ops -> INE) ----------------
        if (inst == 0x06483800U) {  // ertn
            if ((crmd_ & 3U) != 0) {
                raise_exception(result, ECODE_IPE, 0, 0);
                return;
            }
            crmd_ = (crmd_ & ~uint32_t{7}) | (prmd_ & 7U);
            if (((estat_ >> 16) & 0x3fU) == 0x3fU)  // TLBR: back to DA=0
                crmd_ = (crmd_ & ~uint32_t{0x18}) | 0x10U;
            llbctl_ &= ~uint32_t{4};
            result.is_ertn = true;
            pc_ = era_;
            return;
        }
        if ((inst >> 15) == 0b00111000011100100 ||
            (inst >> 15) == 0b00111000011100101) {
            // dbar / ibar: hints, architecturally nops (never executed by
            // the functional tests; RTL currently raises INE for them).
            pc_ = next_pc;
            return;
        }
        ine(result);
        return;
    }

    if ((inst >> 11) == 0b000000000000000001100) {
        // ---------------- rdcntvl.w / rdcntvh.w / rdcntid ----------------
        if (((inst >> 10) & 1U) != 0 && rj != 0) {
            ine(result);
            return;
        }
        uint64_t counter = steps_ + static_cast<uint64_t>(
                                        static_cast<int64_t>(
                                            static_cast<int32_t>(cntc_)));
        // rdcntvl/rdcntvh count from a different source in each model;
        // rdcntid returns TID, which is architecturally stable.
        if (rj == 0)
            result.data_unstable = true;
        if (rj != 0) {
            // rdcntid: destination register lives in the rj field.
            gpr_[rj] = tid_;
            result.gpr_write = true;
            result.rd = rj;
            result.wdata = tid_;
        } else if ((inst >> 10) & 1U) {
            write_rd(static_cast<uint32_t>(counter >> 32));
        } else {
            write_rd(static_cast<uint32_t>(counter));
        }
        pc_ = next_pc;
        return;
    }

    ine(result);
}
