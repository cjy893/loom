package loom_consts;
    localparam logic [2:0] CFI_X = 3'd0;
    localparam logic [2:0] CFI_BR = 3'd1;
    localparam logic [2:0] CFI_B_BL = 3'd2;
    localparam logic [2:0] CFI_JIRL = 3'd3;

    localparam logic [1:0] PC_PLUS4 = 2'd0;
    localparam logic [1:0] PC_BRANCH = 2'd1;
    localparam logic [1:0] PC_JIRL = 2'd2;

    localparam logic [3:0] BR_NONE = 4'd0;
    localparam logic [3:0] BR_BNE = 4'd1;
    localparam logic [3:0] BR_BEQ = 4'd2;
    localparam logic [3:0] BR_BGE = 4'd3;
    localparam logic [3:0] BR_BGEU = 4'd4;
    localparam logic [3:0] BR_BLT = 4'd5;
    localparam logic [3:0] BR_BLTU = 4'd6;
    localparam logic [3:0] BR_B_BL = 4'd7;
    localparam logic [3:0] BR_JIRL = 4'd8;

    localparam logic [1:0] OP1_SRC1 = 2'd0;
    localparam logic [1:0] OP1_ZERO = 2'd1;
    localparam logic [1:0] OP1_PC = 2'd2;

    localparam logic [2:0] OP2_SRC2 = 3'd0;
    localparam logic [2:0] OP2_IMM = 3'd1;
    localparam logic [2:0] OP2_ZERO = 3'd2;
    localparam logic [2:0] OP2_NEXT = 3'd3;
    localparam logic [2:0] OP2_IMMC = 3'd4;

    localparam logic [1:0] RT_FIX = 2'd0;
    localparam logic [1:0] RT_FLT = 2'd1;
    localparam logic [1:0] RT_X = 2'd2;
    localparam logic [1:0] RT_ZERO = 2'd3;

    localparam logic [3:0] IQ_MEM = 4'b0001;
    localparam logic [3:0] IQ_UNQ = 4'b0010;
    localparam logic [3:0] IQ_ALU = 4'b0100;
    localparam logic [3:0] IQ_FP = 4'b1000;

    localparam int IQ_IDX_MEM = 0;
    localparam int IQ_IDX_UNQ = 1;
    localparam int IQ_IDX_ALU = 2;
    localparam int IQ_IDX_FP = 3;

    localparam int FC_ALU = 0;
    localparam int FC_AGEN = 1;
    localparam int FC_DGEN = 2;
    localparam int FC_MUL = 3;
    localparam int FC_DIV = 4;
    localparam int FC_CSR = 5;
    localparam int FC_FPU = 6;
    localparam int FC_FDV = 7;
    localparam int FC_I2F = 8;
    localparam int FC_F2I = 9;

    localparam logic [2:0] IMM_I12 = 3'd0;
    localparam logic [2:0] IMM_U12 = 3'd1;
    localparam logic [2:0] IMM_I16_S2 = 3'd2;
    localparam logic [2:0] IMM_U20_S12 = 3'd3;
    localparam logic [2:0] IMM_I26_S2 = 3'd4;
    localparam logic [2:0] IMM_U5 = 3'd5;
    localparam logic [2:0] IMM_NONE = 3'd6;
    localparam logic [2:0] IMM_U14 = 3'd7;

    localparam logic [2:0] BSRC_1 = 3'd0;
    localparam logic [2:0] BSRC_2 = 3'd1;
    localparam logic [2:0] BSRC_3 = 3'd2;
    localparam logic [2:0] BSRC_4 = 3'd3;
    localparam logic [2:0] BSRC_C = 3'd4;

    localparam logic [2:0] FT_NONE    = 3'd0;
    localparam logic [2:0] FT_XCPT    = 3'd1;
    localparam logic [2:0] FT_ERTN    = 3'd3;
    localparam logic [2:0] FT_REFETCH = 3'd2;
    localparam logic [2:0] FT_NEXT    = 3'd4;

    localparam logic [3:0] ALU_ADD  = 4'd0;
    localparam logic [3:0] ALU_SUB  = 4'd1;
    localparam logic [3:0] ALU_SLT  = 4'd2;
    localparam logic [3:0] ALU_SLTU = 4'd3;
    localparam logic [3:0] ALU_AND  = 4'd4;
    localparam logic [3:0] ALU_OR   = 4'd5;
    localparam logic [3:0] ALU_XOR  = 4'd6;
    localparam logic [3:0] ALU_NOR  = 4'd7;
    localparam logic [3:0] ALU_SLL  = 4'd8;
    localparam logic [3:0] ALU_SRL  = 4'd9;
    localparam logic [3:0] ALU_SRA  = 4'd10;
    localparam logic [3:0] ALU_LUI  = 4'd11;

    localparam logic [3:0] MULDIV_MUL_W    = 4'd0;
    localparam logic [3:0] MULDIV_MULH_W   = 4'd1;
    localparam logic [3:0] MULDIV_MULH_WU  = 4'd2;
    localparam logic [3:0] MULDIV_DIV_W    = 4'd3;
    localparam logic [3:0] MULDIV_DIV_WU   = 4'd4;
    localparam logic [3:0] MULDIV_MOD_W    = 4'd5;
    localparam logic [3:0] MULDIV_MOD_WU   = 4'd6;

    localparam logic [5:0] ECODE_ADE = 6'd8;
    localparam logic [5:0] ECODE_ALE = 6'd9;
    localparam logic [5:0] ECODE_SYS = 6'd11;
    localparam logic [5:0] ECODE_BRK = 6'd12;
    localparam logic [5:0] ECODE_INE = 6'd13;
    localparam logic [5:0] ECODE_IPE = 6'd14;

    localparam logic [1:0] CSR_READ = 2'd0;
    localparam logic [1:0] CSR_WRITE = 2'd1;
    localparam logic [1:0] CSR_XCHG = 2'd2;

    localparam logic [3:0] CNT_LOW = 4'd0;
    localparam logic [3:0] CNT_HIGH = 4'd1;
    localparam logic [3:0] CNT_ID = 4'd2;
endpackage
