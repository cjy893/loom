package loom_consts;
    localparam logic [2:0] CFI_X = 3'd0;
    localparam logic [2:0] CFI_BR = 3'd1;
    localparam logic [2:0] CFI_JAL = 3'd2;
    localparam logic [2:0] CFI_JALR = 3'd3;

    localparam logic [1:0] PC_PLUS4 = 2'd0;
    localparam logic [1:0] PC_BRJMP = 2'd1;
    localparam logic [1:0] PC_JALR = 2'd2;

    localparam logic [3:0] B_N = 4'd0;
    localparam logic [3:0] B_NE = 4'd1;
    localparam logic [3:0] B_EQ = 4'd2;
    localparam logic [3:0] B_GE = 4'd3;
    localparam logic [3:0] B_GEU = 4'd4;
    localparam logic [3:0] B_LT = 4'd5;
    localparam logic [3:0] B_LTU = 4'd6;
    localparam logic [3:0] B_J = 4'd7;
    localparam logic [3:0] B_JR = 4'd8;

    localparam logic [1:0] OP1_RS1 = 2'd0;
    localparam logic [1:0] OP1_ZERO = 2'd1;
    localparam logic [1:0] OP1_PC = 2'd2;

    localparam logic [2:0] OP2_RS2 = 3'd0;
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

    localparam logic [2:0] IS_I = 3'd0;
    localparam logic [2:0] IS_Z = 3'd1;
    localparam logic [2:0] IS_B = 3'd2;
    localparam logic [2:0] IS_U = 3'd3;
    localparam logic [2:0] IS_J = 3'd4;
    localparam logic [2:0] IS_SH = 3'd5;
    localparam logic [2:0] IS_N = 3'd6;
    localparam logic [2:0] IS_F3 = 3'd7;

    localparam logic [2:0] BSRC_1 = 3'd0;
    localparam logic [2:0] BSRC_2 = 3'd1;
    localparam logic [2:0] BSRC_3 = 3'd2;
    localparam logic [2:0] BSRC_4 = 3'd3;
    localparam logic [2:0] BSRC_C = 3'd4;

    localparam logic [2:0] FT_NONE    = 3'd0;
    localparam logic [2:0] FT_XCPT    = 3'd1;
    localparam logic [2:0] FT_ERET    = 3'd3; 
    localparam logic [2:0] FT_REFETCH = 3'd2;
    localparam logic [2:0] FT_NEXT    = 3'd4;

    localparam logic [6:0] FUNCT7_ADD = 7'b0000000;
    localparam logic [6:0] FUNCT7_SUB = 7'b0000010;

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

    localparam logic [5:0] ECODE_SYS = 6'd11;
    localparam logic [5:0] ECODE_BRK = 6'd12;
    localparam logic [5:0] ECODE_INE = 6'd13;
    localparam logic [5:0] ECODE_IPE = 6'd14;

    localparam logic [1:0] CSR_READ = 2'd0;
    localparam logic [1:0] CSR_WRITE = 2'd1;
    localparam logic [1:0] CSR_XCHG = 2'd2;
endpackage