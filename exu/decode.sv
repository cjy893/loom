import loom_params::*;
import loom_consts::*;
import loom_types::*;

module decode(
    input logic [31:0] inst,
    input logic [31:0] pc,
    input logic [1:0]  status_prv,
    output uop_t        uop
);

    // ================================================================
    // Stage 1: 指令分类 (仿 InstrClassify)
    // ================================================================
    typedef enum logic [3:0] {
        INSTR_MEM,          // load / store / atomic
        INSTR_JUMP,         // branch / jump / jirl
        INSTR_IOP,          // I-type operator (addi.w, andi, ori...)
        INSTR_OP,           // R-type operator (add.w, sub.w, mul.w...)
        INSTR_USHIFT,       // variable shift (sll.w, srl.w, sra.w)
        INSTR_I20,          // lu12i.w, lu32i.d, pcaddu12i
        INSTR_CSR,          // csrrd, csrwr, csrxchg, cpucfg
        INSTR_CACHE,        // cacop, tlbsrch, tlbrd, tlbwr, tlbfill, ertn, idle, invtlb, dbar, ibar
        INSTR_RDCNT,        // rdcntvl.w, rdcntvh.w
        INSTR_EXCEPTION,    // syscall, break
        INSTR_ILLEGAL       // 未定义指令
    } instr_type_t;

    instr_type_t instr_type;

    always_comb begin
        casez(inst)
            // MEM load / store           : 001010_xxxxxxxxxxxxxxxxxxxxxxxxxx
            32'b001010_??????????????????????????: instr_type = INSTR_MEM;
            // MEM atomic (ll.w / sc.w)   : 0010000_xxxxxxxxxxxxxxxxxxxxxxxxx
            32'b0010000_?????????????????????????: instr_type = INSTR_MEM;
            // JUMP / branch              : 01xx_xxxxxxxxxxxxxxxxxxxxxxxxxxxx
            32'b01??????????????????????????????: instr_type = INSTR_JUMP;
            // I-Operator                 : 0000001_xxxxxxxxxxxxxxxxxxxxxxxxx
            32'b0000001_?????????????????????????: instr_type = INSTR_IOP;
            // UShift                     : 000000_000100_xxxxxxxxxxxxxxxxxxxx
            32'b000000000100_????????????????????: instr_type = INSTR_USHIFT;
            // Exception (syscall/break)  : 000000_00001010_xxxxxxxxxxxxxxxxxx
            32'b00000000001010_??????????????????: instr_type = INSTR_EXCEPTION;
            // Operator (R-type)          : 000000_000001_xxxxxxxxxxxxxxxxxxxx
            //                            : 000000_000010_xxxxxxxxxxxxxxxxxxxx
            32'b000000000001_????????????????????: instr_type = INSTR_OP;
            32'b000000000010_????????????????????: instr_type = INSTR_OP;
            // I20                        : 0001?10_xxxxxxxxxxxxxxxxxxxxxxxxxx
            32'b0001?10_?????????????????????????: instr_type = INSTR_I20;
            // CSR                        : 00000100_xxxxxxxxxxxxxxxxxxxxxxxxx
            32'b00000100_????????????????????????: instr_type = INSTR_CSR;
            // CACHE/TLB/ERTN/DBAR/IBAR   : 0000011_xxxxxxxxxxxxxxxxxxxxxxxxx
            //                            : 00111000011100100xxxxxxxxxxxxxxxxx
            //                            : 00111000011100101xxxxxxxxxxxxxxxxx
            32'b0000011_?????????????????????????: instr_type = INSTR_CACHE;
            32'b00111000011100100_???????????????: instr_type = INSTR_CACHE;
            32'b00111000011100101_???????????????: instr_type = INSTR_CACHE;
            // RDCNT                      : 000000_000000_00000110_xxxxxxxxxx
            32'b000000000000000001100_???????????: instr_type = INSTR_RDCNT;
            32'b0000000000000000011011_??????????: instr_type = INSTR_CSR;
            default:                              instr_type = INSTR_ILLEGAL;
        endcase
    end

    // ================================================================
    // Stage 2: 填 uop_t (仿 Controller 的 case)
    // ================================================================

    // 提取指令字段
    logic [5:0] op_31_26;
    logic bit29, bit28, bit27, bit26, bit25, bit24, bit22;
    logic [4:0] rd, rj, rk;
    logic [4:0] i5;
    logic [11:0] i12;
    logic [13:0] i14;
    logic [19:0] i20;
    logic [15:0] offs_16;
    logic [25:0] offs_26;
    logic [6:0] op_21_15;
    logic [4:0] funct3;
    logic [13:0] csr_addr;

    logic [1:0] cacop_mode;
    logic [2:0] cacop_cache;
    logic       cacop_supported;

    assign op_31_26 = inst[31:26];
    assign bit29 = inst[29]; assign bit28 = inst[28];
    assign bit27 = inst[27]; assign bit26 = inst[26];
    assign bit25 = inst[25]; assign bit24 = inst[24];
    assign bit22 = inst[22];

    assign rd  = inst[4:0];
    assign rj  = inst[9:5];
    assign rk  = inst[14:10];
    assign i5  = inst[14:10];
    assign i12 = inst[21:10];
    assign i14 = inst[23:10];
    assign i20 = inst[24:5];
    assign offs_16 = inst[25:10];
    assign offs_26 = {inst[9:0], inst[25:10]};
    assign op_21_15 = inst[21:15];
    assign funct3   = inst[17:15];
    assign csr_addr = inst[23:10];

    assign cacop_mode = rd[4:3];
    assign cacop_cache = rd[2:0];
    assign cacop_supported = (cacop_mode != 2'b11) && ((cacop_cache == 3'd0) || (cacop_cache == 3'd1));

    // 跳转辅助
    logic need_jump;
    assign need_jump = ~bit29 & ~bit28 | ~bit29 & ~bit27;

    // ================================================================
    // uop 赋值
    // ================================================================
    always_comb begin
        // 默认全零
        uop = '0;
        uop.inst       = inst;
        uop.debug_inst = inst;
        uop.pc         = pc;

        // 默认路由
        uop.iq_type     = 4'b0;
        uop.fu_code     = 10'b0;
        uop.br_type     = BR_NONE;
        uop.pc_sel      = PC_PLUS4;

        // 默认操作数
        uop.lsrc1        = 5'd0;
        uop.lsrc2        = 5'd0;
        uop.lsrc3        = 5'd0;
        uop.ldst        = 5'd0;
        uop.dst_rtype   = RT_X;
        uop.lsrc1_rtype  = RT_X;
        uop.lsrc2_rtype  = RT_X;
        uop.fsrc3_en    = 1'b0;

        uop.imm_sel     = IMM_NONE;
        uop.imm_packed  = '0;

        case(instr_type)

            // ============================================================
            // JUMP / BRANCH : inst[31:30] == 01
            // ============================================================
            INSTR_JUMP: begin
                uop.iq_type        = IQ_ALU;
                uop.fu_code[FC_ALU] = 1'b1;
                uop.allocate_brtag  = 1'b1;

                uop.lsrc2    = rd;        // LA 分支比较 rj vs rd
                uop.op1_sel = OP1_SRC1;
                uop.op2_sel = OP2_SRC2;

                unique case(op_31_26)
                    6'b010011: begin
                        uop.is_jirl = 1'b1;
                        uop.br_type = BR_JIRL;
                        uop.pc_sel = PC_JIRL;
                        uop.lsrc1 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.ldst = rd;
                        uop.dst_rtype = RT_FIX;
                        uop.imm_sel = IMM_I16_S2;
                        uop.imm_packed = {10'b0, offs_16};
                        uop.op1_sel = OP1_PC;
                        uop.op2_sel = OP2_NEXT;
                        uop.fcn_op = ALU_ADD;
                    end
                    6'b010100: begin
                        uop.is_b_bl = 1'b1;
                        uop.br_type = BR_B_BL;
                        uop.pc_sel = PC_BRANCH;
                        uop.imm_sel = IMM_I26_S2;
                        uop.imm_packed = offs_26;
                    end
                    6'b010101: begin
                        uop.is_b_bl = 1'b1;
                        uop.br_type = BR_B_BL;
                        uop.pc_sel = PC_BRANCH;
                        uop.ldst = 5'd1;
                        uop.dst_rtype = RT_FIX;
                        uop.imm_sel = IMM_I26_S2;
                        uop.imm_packed = offs_26;
                        uop.op1_sel = OP1_PC;
                        uop.op2_sel = OP2_NEXT;
                        uop.fcn_op = ALU_ADD;
                    end
                    6'b010110: begin
                        uop.br_type = BR_BEQ;
                        uop.is_br = 1'b1;
                        uop.lsrc1 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2_rtype = RT_FIX;
                        uop.imm_sel = IMM_I16_S2;
                        uop.imm_packed = {10'b0, offs_16};
                        uop.pc_sel = PC_BRANCH;
                    end
                    6'b010111: begin
                        uop.br_type = BR_BNE;
                        uop.is_br = 1'b1;
                        uop.lsrc1 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2_rtype = RT_FIX;
                        uop.imm_sel = IMM_I16_S2;
                        uop.imm_packed = {10'b0, offs_16};
                        uop.pc_sel = PC_BRANCH;
                    end
                    6'b011000: begin
                        uop.br_type = BR_BLT;
                        uop.is_br = 1'b1;
                        uop.lsrc1 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2_rtype = RT_FIX;
                        uop.imm_sel = IMM_I16_S2;
                        uop.imm_packed = {10'b0, offs_16};
                        uop.pc_sel = PC_BRANCH;
                    end
                    6'b011001: begin
                        uop.br_type = BR_BGE;
                        uop.is_br = 1'b1;
                        uop.lsrc1 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2_rtype = RT_FIX;
                        uop.imm_sel = IMM_I16_S2;
                        uop.imm_packed = {10'b0, offs_16};
                        uop.pc_sel = PC_BRANCH;
                    end
                    6'b011010: begin
                        uop.br_type = BR_BLTU;
                        uop.is_br = 1'b1;
                        uop.lsrc1 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2_rtype = RT_FIX;
                        uop.imm_sel = IMM_I16_S2;
                        uop.imm_packed = {10'b0, offs_16};
                        uop.pc_sel = PC_BRANCH;
                    end
                    6'b011011: begin
                        uop.br_type = BR_BGEU;
                        uop.is_br = 1'b1;
                        uop.lsrc1 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2_rtype = RT_FIX;
                        uop.imm_sel = IMM_I16_S2;
                        uop.imm_packed = {10'b0, offs_16};
                        uop.pc_sel = PC_BRANCH;
                    end
                    default: begin
                        uop.exception = 1'b1;
                        uop.exc_cause = 32'd13;
                    end
                endcase
            end

            // ============================================================
            // MEM : load (bit24=0) / store (bit24=1) / atomic
            // ============================================================
            INSTR_MEM: begin
                uop.iq_type         = IQ_MEM;
                uop.fu_code[FC_AGEN] = 1'b1;
                uop.starts_unsafe   = 1'b1;

                uop.op1_sel = OP1_SRC1;
                uop.op2_sel = OP2_IMM;
                uop.lsrc1    = rj;
                uop.lsrc1_rtype = RT_FIX;

                case(inst[23:22])
                    2'b00: uop.mem_size = 2'd0;  // byte
                    2'b01: uop.mem_size = 2'd1;  // half
                    2'b10: uop.mem_size = 2'd2;  // word
                    default: uop.mem_size = 2'd0;
                endcase

                // 区分 load / store / atomic
                if(inst[31:25] == 7'b0010000) begin
                    // ── LL/SC atomic ──
                    uop.is_llsc       = 1'b1;
                    uop.is_unique    = 1'b1;
                    uop.ldst         = rd;
                    uop.dst_rtype = RT_FIX;
                    uop.mem_size     = 2'd2;
                    uop.imm_sel      = IMM_I16_S2;
                    uop.imm_packed   = {{12{i14[13]}}, i14};
                    if(!bit24) begin
                        uop.uses_ldq = 1'b1;
                        uop.mem_cmd = 5'd0;
                    end else begin
                        uop.uses_stq = 1'b1;
                        uop.fu_code[FC_DGEN] = 1'b1;
                        uop.lsrc2 = rd;
                        uop.lsrc2_rtype = RT_FIX;
                        uop.mem_cmd = 5'd1;
                    end
                end else if(bit24 == 1'b0) begin
                    // ── Load ──
                    uop.uses_ldq     = 1'b1;
                    uop.uses_stq     = 1'b0;
                    uop.lsrc2         = 5'd0;
                    uop.ldst         = rd;
                    uop.dst_rtype    = RT_FIX;
                    uop.mem_cmd      = 5'd0;       // M_XRD
                    uop.mem_signed   = ~bit25;      // LA: bit25 区分 signed/unsigned
                    uop.imm_sel      = IMM_I12;
                    uop.imm_packed   = {{14{i12[11]}}, i12};
                end else begin
                    // ── Store ──
                    uop.uses_ldq     = 1'b0;
                    uop.uses_stq     = 1'b1;
                    uop.lsrc2         = rd;          // store data = rd
                    uop.lsrc2_rtype = RT_FIX;
                    uop.ldst         = 5'd0;
                    uop.dst_rtype    = RT_X;
                    uop.mem_cmd      = 5'd1;       // M_XWR
                    uop.mem_signed   = 1'b0;
                    uop.fu_code[FC_DGEN] = 1'b1;
                    uop.imm_sel      = IMM_I12;
                    uop.imm_packed   = {{14{i12[11]}}, i12};
                end
            end

            // ============================================================
            // I-Operator : inst[31:25] == 0000001
            // ============================================================
            INSTR_IOP: begin
                uop.iq_type         = IQ_ALU;
                uop.fu_code[FC_ALU] = 1'b1;

                uop.op1_sel = OP1_SRC1;
                uop.op2_sel = OP2_IMM;
                uop.lsrc1    = rj;
                uop.lsrc1_rtype = RT_FIX;
                uop.ldst    = rd;
                uop.dst_rtype = RT_FIX;
                uop.imm_sel = IMM_I12;
                uop.imm_packed = {{14{i12[11]}}, i12};

                // inst[24:22] 决定操作
                unique case(inst[24:22])
                    3'b000:  uop.fcn_op = ALU_SLT;    // slti
                    3'b001:  uop.fcn_op = ALU_SLTU;   // sltui
                    3'b010:  uop.fcn_op = ALU_ADD;    // addi.w
                    3'b101: begin
                        uop.fcn_op = ALU_AND;    // andi
                        uop.imm_sel = IMM_U12;

                    end
                    3'b110: begin
                        uop.fcn_op = ALU_OR;     // ori
                        uop.imm_sel = IMM_U12;
                    end
                    3'b111: begin
                        uop.fcn_op = ALU_XOR;    // xori
                        uop.imm_sel = IMM_U12;
                    end
                    default: begin                      // 011, 100 → illegal
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_INE;
                    end
                endcase
            end

            // ============================================================
            // Operator (R-type) : inst[31:18] = 000000_000001 / 000000_000010
            // ============================================================
            INSTR_OP: begin
                uop.op1_sel = OP1_SRC1;
                uop.lsrc1    = rj;
                uop.lsrc1_rtype = RT_FIX;
                uop.ldst    = rd;
                uop.dst_rtype = RT_FIX;
                uop.lsrc2_rtype = RT_FIX;
                uop.imm_sel = IMM_NONE;

                // inst[21:15] selects the ALU or multiply/divide operation.
                unique case(op_21_15)
                    // pattern 000000000001: inst[21]=0, inst[20]=1
                    7'b0100000: begin  // add.w
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_ADD;
                    end
                    7'b0100010: begin  // sub.w
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_SUB;
                    end
                    7'b0100100: begin  // slt
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_SLT;
                    end
                    7'b0100101: begin  // sltu
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_SLTU;
                    end
                    7'b0101000: begin  // nor
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_NOR;
                    end
                    7'b0101001: begin  // and
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_AND;
                    end
                    7'b0101010: begin  // or
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_OR;
                    end
                    7'b0101011: begin  // xor
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_XOR;
                    end
                    7'b0101110: begin  // sll.w (R-type, 移位量在 rk)
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_SLL;
                    end
                    7'b0101111: begin  // srl.w
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_SRL;
                    end
                    7'b0110000: begin  // sra.w
                        uop.iq_type = IQ_ALU; uop.fu_code[FC_ALU] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk;
                        uop.fcn_op  = ALU_SRA;
                    end
                    7'b0111000: begin  // mul.w
                        uop.iq_type = IQ_UNQ; uop.fu_code[FC_MUL] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk; uop.is_unique = 1'b1;
                        uop.fcn_op = MULDIV_MUL_W;
                    end
                    7'b0111001: begin  // mulh.w
                        uop.iq_type = IQ_UNQ; uop.fu_code[FC_MUL] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk; uop.is_unique = 1'b1;
                        uop.fcn_op = MULDIV_MULH_W;
                    end
                    7'b0111010: begin  // mulh.wu
                        uop.iq_type = IQ_UNQ; uop.fu_code[FC_MUL] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk; uop.is_unique = 1'b1;
                        uop.fcn_op = MULDIV_MULH_WU;
                    end
                    // pattern 000000000010: inst[21]=1, inst[20]=0
                    7'b1000000: begin  // div.w
                        uop.iq_type = IQ_UNQ; uop.fu_code[FC_DIV] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk; uop.is_unique = 1'b1;
                        uop.fcn_op = MULDIV_DIV_W;
                    end
                    7'b1000010: begin  // div.wu
                        uop.iq_type = IQ_UNQ; uop.fu_code[FC_DIV] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk; uop.is_unique = 1'b1;
                        uop.fcn_op = MULDIV_DIV_WU;
                    end
                    7'b1000001: begin  // mod.w
                        uop.iq_type = IQ_UNQ; uop.fu_code[FC_DIV] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk; uop.is_unique = 1'b1;
                        uop.fcn_op = MULDIV_MOD_W;
                    end
                    7'b1000011: begin  // mod.wu
                        uop.iq_type = IQ_UNQ; uop.fu_code[FC_DIV] = 1'b1;
                        uop.op2_sel = OP2_SRC2; uop.lsrc2 = rk; uop.is_unique = 1'b1;
                        uop.fcn_op = MULDIV_MOD_WU;
                    end
                    default: begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_INE;
                    end
                endcase
            end

            // ============================================================
            // UShift : inst[31:20] == 000000000100
            // ============================================================
            INSTR_USHIFT: begin
                uop.iq_type         = IQ_ALU;
                uop.fu_code[FC_ALU] = 1'b1;

                uop.op1_sel = OP1_SRC1;       // rj = 移位量
                uop.op2_sel = OP2_IMM;       // rk = 被移位数
                uop.lsrc1    = rj;
                uop.lsrc1_rtype = RT_FIX;
                uop.ldst = rd;
                uop.dst_rtype = RT_FIX;
                uop.imm_sel = IMM_U5;
                uop.imm_packed = {21'b0, i5};

                unique case(inst[19:18])
                    2'b00: uop.fcn_op = ALU_SLL;   // sll.w
                    2'b01: uop.fcn_op = ALU_SRL;   // srl.w
                    2'b10: uop.fcn_op = ALU_SRA;   // sra.w
                    default: begin                   // 11 → illegal
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_INE;
                    end
                endcase
            end

            // ============================================================
            // I20 : inst[31:28]==0001, inst[26:25]==10
            // ============================================================
            INSTR_I20: begin
                uop.iq_type         = IQ_ALU;
                uop.fu_code[FC_ALU] = 1'b1;

                uop.op1_sel  = OP1_ZERO;
                uop.op2_sel  = OP2_IMM;
                uop.ldst     = rd;
                uop.dst_rtype = RT_FIX;
                uop.imm_sel  = IMM_U20_S12;
                uop.imm_packed = i20;

                // bit27 区分: 0=lu12i.w, 1=lu32i.d/pcaddu12i
                // 这两个在执行单元处理时略有差异（lu32i.d 需要移位累加）
                if(bit27) begin
                    // lu32i.d / pcaddu12i — 第一操作数是 PC
                    uop.op1_sel = OP1_PC;
                    uop.fcn_op  = ALU_ADD;
                end
            end

            // ============================================================
            // CSR : inst[31:24] == 00000100
            // ============================================================
            INSTR_CSR: begin
                if(inst[31:15] == 17'b0 && inst[14:10] == 5'h1b) begin
                    uop.iq_type = IQ_UNQ;
                    uop.fu_code[FC_CSR] = 1'b1;
                    uop.is_unique = 1'b1;
                    uop.flush_on_commit = 1'b1;
                    uop.csr_cmd = CSR_CPUCFG;
                    uop.ldst = rd;
                    uop.dst_rtype = RT_FIX;
                    uop.lsrc1 = rj;
                    uop.lsrc1_rtype = RT_FIX;
                    uop.imm_sel = IMM_U14;
                    uop.imm_packed = {12'b0, 14'h00b0};
                end else if(status_prv != 2'b00) begin
                    uop.exception = 1'b1;
                    uop.exc_cause = ECODE_IPE;
                end else begin
                    uop.iq_type         = IQ_UNQ;
                    uop.fu_code[FC_CSR] = 1'b1;
                    uop.is_unique       = 1'b1;
                    uop.flush_on_commit = 1'b1;     // CSR 串行化
                    uop.ldst = rd;
                    uop.dst_rtype = RT_FIX;
                    uop.imm_sel = IMM_U14;
                    uop.imm_packed = {12'b0, csr_addr};

                    if(rj == 5'd0) begin
                        uop.csr_cmd = CSR_READ;
                    end else if(rj == 1) begin
                        uop.csr_cmd = CSR_WRITE;
                        uop.lsrc1 = rd;
                        uop.lsrc1_rtype = RT_FIX;
                    end else begin
                        uop.csr_cmd = CSR_XCHG;
                        uop.lsrc1 = rd;
                        uop.lsrc2 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2_rtype = RT_FIX;
                    end
                end
            end

            // ============================================================
            // CACHE/TLB/ERTN/DBAR/IBAR
            // ============================================================
            INSTR_CACHE: begin
                // 判断具体子指令
                if(inst[31:22] == 10'b0000011000) begin
                    // CACOP
                    if(!cacop_supported) begin
                        uop.iq_type = IQ_ALU;
                        uop.fu_code[FC_ALU] = 1'b1;
                        uop.op1_sel = OP1_ZERO;
                        uop.op2_sel = OP2_ZERO;
                        uop.fcn_op = ALU_ADD;

                        uop.ldst = '0;
                        uop.dst_rtype = RT_X;
                        uop.lsrc1_rtype = RT_X;
                        uop.lsrc2_rtype = RT_X;
                    end else if((cacop_mode != 2'b10) && (status_prv != 2'b00)) begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_IPE;
                    end else begin
                        uop.iq_type = IQ_UNQ;
                        uop.is_cacop = 1'b1;
                        uop.is_unique = 1'b1;
                        uop.flush_on_commit = 1'b1;

                        uop.lsrc1 = rj;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2 = '0;
                        uop.lsrc2_rtype = RT_X;

                        uop.op1_sel = OP1_SRC1;
                        uop.op2_sel = OP2_IMM;
                        uop.imm_sel = IMM_I12;
                        uop.imm_packed = {{14{i12[11]}}, i12};

                        uop.ldst = '0;
                        uop.dst_rtype = RT_X;
                    end
                end else if(inst == 32'h0648_3800) begin
                    if(status_prv != 2'b00) begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_IPE;
                    end else begin
                        uop.iq_type = IQ_UNQ;
                        uop.is_unique = 1'b1;
                        uop.flush_on_commit = 1'b1;
                        uop.is_ertn = 1'b1;

                        uop.dst_rtype = RT_X;
                        uop.lsrc1_rtype = RT_X;
                        uop.lsrc2_rtype = RT_X;
                    end
                end else if(inst == 32'h0648_2800) begin
                    if(status_prv != 2'b00) begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_IPE;
                    end else begin
                        uop.iq_type = IQ_UNQ;
                        uop.is_unique = 1'b1;
                        uop.flush_on_commit = 1'b1;
                        uop.tlb_cmd = TLB_CMD_SEARCH;

                        uop.dst_rtype = RT_X;
                        uop.lsrc1_rtype = RT_X;
                        uop.lsrc2_rtype = RT_X;
                    end
                end else if(inst == 32'h0648_2c00) begin
                    if(status_prv != 2'b00) begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_IPE;
                    end else begin
                        uop.iq_type = IQ_UNQ;
                        uop.is_unique = 1'b1;
                        uop.flush_on_commit = 1'b1;
                        uop.tlb_cmd = TLB_CMD_READ;

                        uop.dst_rtype = RT_X;
                        uop.lsrc1_rtype = RT_X;
                        uop.lsrc2_rtype = RT_X;
                    end
                end else if(inst == 32'h0648_3000) begin
                    if(status_prv != 2'b00) begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_IPE;
                    end else begin
                        uop.iq_type = IQ_UNQ;
                        uop.is_unique = 1'b1;
                        uop.flush_on_commit = 1'b1;
                        uop.tlb_cmd = TLB_CMD_WRITE;

                        uop.dst_rtype = RT_X;
                        uop.lsrc1_rtype = RT_X;
                        uop.lsrc2_rtype = RT_X;
                    end
                end else if(inst == 32'h0648_3400) begin
                    if(status_prv != 2'b00) begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_IPE;
                    end else begin
                        uop.iq_type = IQ_UNQ;
                        uop.is_unique = 1'b1;
                        uop.flush_on_commit = 1'b1;
                        uop.tlb_cmd = TLB_CMD_FILL;

                        uop.dst_rtype = RT_X;
                        uop.lsrc1_rtype = RT_X;
                        uop.lsrc2_rtype = RT_X;
                    end
                end else if(inst[31:15] == 17'b00000110010010011 && rd <= 6) begin
                    if(status_prv != 2'b00) begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_IPE;
                    end else begin
                        uop.iq_type = IQ_UNQ;
                        uop.is_unique = 1'b1;
                        uop.flush_on_commit = 1'b1;
                        uop.tlb_cmd = TLB_CMD_INV;

                        uop.lsrc1 = rj;
                        uop.lsrc2 = rk;
                        uop.lsrc1_rtype = RT_FIX;
                        uop.lsrc2_rtype = RT_FIX;
                    end
                end else if (inst[31:15] == 17'b00000110010010001) begin
                    if (status_prv != 2'b00) begin
                        uop.exception = 1'b1;
                        uop.exc_cause = ECODE_IPE;
                    end else begin
                        uop.iq_type = IQ_UNQ;
                        uop.is_unique = 1'b1;
                        uop.is_idle = 1'b1;
                        uop.flush_on_commit = 1'b1;

                        uop.ldst = '0;
                        uop.dst_rtype = RT_X;
                        uop.lsrc1_rtype = RT_X;
                        uop.lsrc2_rtype = RT_X;
                    end
                end else if(inst[31:15] == 17'b00111000011100100) begin
                    uop.iq_type = IQ_UNQ;
                    uop.is_unique = 1'b1;
                    uop.is_dbar = 1'b1;

                    uop.ldst = '0;
                    uop.dst_rtype = RT_X;
                    uop.lsrc1_rtype = RT_X;
                    uop.lsrc2_rtype = RT_X;
                end else if (inst[31:15] == 17'b00111000011100101) begin
                    uop.iq_type = IQ_UNQ;
                    uop.is_unique = 1'b1;
                    uop.is_ibar = 1'b1;
                    uop.flush_on_commit = 1'b1;

                    uop.ldst = '0;
                    uop.dst_rtype = RT_X;
                    uop.lsrc1_rtype = RT_X;
                    uop.lsrc2_rtype = RT_X;
                end else begin
                    uop.exception = 1'b1;
                    uop.exc_cause = ECODE_INE;
                end
                // end else if(inst[31:22] == 10'b0000011000) begin
                //     // CACOP
                //     uop.fu_code[FC_AGEN] = 1'b1;
                //     uop.op1_sel = OP1_SRC1;
                //     uop.op2_sel = OP2_IMM;
                //     uop.imm_sel = IMM_I12;
                //     uop.imm_packed = i12;
                // end else if(inst[31:15] == 17'b00111000011100100) begin
                //     // DBAR
                // end else if(inst[31:15] == 17'b00111000011100101) begin
                //     // IBAR
                // end else if(inst == 32'h0648_8000) begin
                //     // IDLE
                // end else begin
                //     // TLBSRCH / TLBRD / TLBWR / TLBFILL / INVTLB
                // end
            end

            // ============================================================
            // RDCNT : inst[31:20] == 00000000000000000110
            // ============================================================
            INSTR_RDCNT: begin
                if(inst[10] && rj != 5'd0) begin
                    uop.exception = 1'b1;
                    uop.exc_cause = ECODE_INE;
                end else begin
                    uop.iq_type         = IQ_UNQ;
                    uop.is_unique       = 1'b1;
                    uop.is_rdcnt = 1'b1;

                    uop.op1_sel  = OP1_ZERO;
                    uop.op2_sel  = OP2_ZERO;
                    uop.dst_rtype = RT_FIX;

                    // inst[10]=0: rdcntvl.w (低32位), inst[10]=1: rdcntvh.w (高32位)
                    uop.imm_sel  = IMM_U14;
                    uop.imm_packed = {25'b0, inst[10]};

                    if(rj != 5'd0) begin
                        uop.fcn_op = CNT_ID;
                        uop.ldst = rj;
                    end else begin
                        uop.fcn_op = inst[10] ? CNT_HIGH : CNT_LOW;
                        uop.ldst = rd;
                    end
                end
            end

            // ============================================================
            // Exception : syscall / break
            // ============================================================
            INSTR_EXCEPTION: begin
                uop.exception = 1'b1;
                uop.is_unique = 1'b1;
                uop.iq_type = IQ_UNQ;
                uop.flush_on_commit = 1'b1;

                if(!inst[17] || inst[15]) uop.exc_cause = ECODE_INE;
                else uop.exc_cause = inst[16] ? ECODE_SYS : ECODE_BRK;
            end

            // ============================================================
            // Illegal
            // ============================================================
            default: begin
                uop.exception = 1'b1;
                uop.exc_cause = ECODE_INE;          // illegal instruction
            end
        endcase

        if(uop.exception) begin
            uop.iq_type = '0;
            uop.fu_code = '0;
            uop.dst_rtype = RT_X;
            uop.lsrc1_rtype = RT_X;
            uop.lsrc2_rtype = RT_X;
            uop.allocate_brtag = 1'b0;
            uop.starts_bsy = 1'b0;
            uop.starts_unsafe = 1'b0;
        end

        if(pc[1:0] != 2'b00) begin
            uop = '0;
            uop.inst = inst;
            uop.debug_inst = inst;
            uop.pc = pc;

            uop.exception = 1'b1;
            uop.exc_cause = ECODE_ADE;
            uop.exc_adef = 1'b1;
        end
    end

endmodule
