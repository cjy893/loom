package loom_params;
    localparam bit USING_FPU = 1'b1;
    localparam bit USING_FDIV_SQRT = 1'b1;
    localparam bit USING_VM = 1'b1;
    localparam bit DCACHE_SINGLE_PORTED = 1'b0;
    localparam bit ICACHE_SINGLE_PORTED = 1'b1;

    localparam int XLEN = 32;
    localparam int FLEN = 64;
    localparam int VADDR_BITS = 32;
    localparam int PADDR_BITS = 32;
    localparam int PGIDX_BITS = 12;
    localparam int ASID_BITS = 10;
    localparam int LOGICAL_REG_CNT = (USING_FPU) ? 64 : 32;
    localparam int LREG_SZ = $clog2(LOGICAL_REG_CNT);
    localparam int HART_ID_LEN = 4;

    localparam int FETCH_WIDTH = 4;
    localparam int DECODE_WIDTH = 2;
    localparam int RETIRE_WIDTH = 2;
    localparam int LSU_WIDTH = 1;
    localparam int ALU_WIDTH = 3;
    localparam int MEM_WIDTH = 2;
    localparam int FP_WIDTH = 1;
    localparam int TOTAL_ISSUE_WIDTH = ALU_WIDTH + MEM_WIDTH + FP_WIDTH + 1;

    localparam int ROB_ENTRIES = 64;
    localparam int ROB_ROWS = ROB_ENTRIES / DECODE_WIDTH;
    localparam int ROB_ADDR_SZ = $clog2(ROB_ENTRIES);
    localparam int LDQ_ENTRIES = 16;
    localparam int STQ_ENTRIES = 16;
    localparam int LDQ_ADDR_SZ = $clog2(LDQ_ENTRIES);
    localparam int STQ_ADDR_SZ = $clog2(STQ_ENTRIES);
    localparam int LSU_ADDR_SZ = (LDQ_ADDR_SZ > STQ_ADDR_SZ) ? LDQ_ADDR_SZ : STQ_ADDR_SZ;
    localparam int MAX_BR_COUNT = 4;
    localparam int BR_TAG_SZ = $clog2(MAX_BR_COUNT);
    localparam int FTQ_ENTRIES = 16;
    localparam int FTQ_ADDR_SZ = $clog2(FTQ_ENTRIES);
    localparam int FETCH_BUFFER_ENTRIES = 8;
    localparam int RXQ_ENTRIES = 4;
    localparam int RCQ_ENTRIES = 8;

    localparam int NUM_INT_PHYS_REGS = 48;
    localparam int NUM_FP_PHYS_REGS = 48;
    localparam int NUM_IMM_PHYS_REGS = 48;
    localparam int IPREG_SZ = $clog2(NUM_INT_PHYS_REGS);
    localparam int FPREG_SZ = $clog2(NUM_FP_PHYS_REGS);
    localparam int MAX_PREG_SZ = (IPREG_SZ > FPREG_SZ) ? IPREG_SZ : FPREG_SZ;
    localparam int IMM_PREG_SZ = $clog2(NUM_IMM_PHYS_REGS);

    localparam int NUM_IRF_BANKS = 1;
    localparam int NUM_FRF_BANKS = 1;

    localparam int ALU_IQ_ENTRIES = 16;
    localparam int ALU_IQ_DISPATCH_W = 1;
    localparam int MEM_IQ_ENTRIES = 16;
    localparam int MEM_IQ_DISPATCH_W = 1;
    localparam int UNQ_IQ_ENTRIES = 12;
    localparam int UNQ_IQ_DISPATCH_W = 1;
    localparam int FP_IQ_ENTRIES = 16;
    localparam int FP_IQ_DISPATCH_W = 1;

    localparam int GLOBAL_HISTORY_LENGTH = 64;
    localparam int LOCAL_HISTORY_LENGTH = 32;
    localparam int LOCAL_HISTORY_NSETS = 128;
    localparam int BPD_MAX_META_LENGTH = 120;
    localparam int RAS_ENTRIES = 32;
    localparam int RAS_IDX_SZ = $clog2(RAS_ENTRIES);
    localparam int USE_RAS = (RAS_ENTRIES > 0) ? 1 : 0;

    localparam int ICACHE_BLOCK_BYTES = 64;
    localparam int ICACHE_FETCH_BYTES = FETCH_WIDTH * 4;
    localparam int DCACHE_ROW_BITS = ICACHE_FETCH_BYTES * 8;
    localparam int ICACHE_NSETS = 64;
    localparam int ICACHE_NWAYS = 4;
    localparam int DCACHE_NSETS = 64;
    localparam int DCACHE_NWAYS = 4;
    localparam int DCACHE_NMSHRS = 2;
    localparam int DCACHE_NTLBWAYS = 16;
    localparam int ICACHE_NTLBWAYS = 16;

    localparam int IMUL_LATENCY = 3;
    localparam int SFMA_LATENCY = 4;
    localparam int DFMA_LATENCY = 4;
    localparam int INT_TO_FP_LATENCY = 2;
    localparam int LOAD_USE_DELAY = 4;

    localparam bit ENABLE_FAST_LOAD_USE = 1'b0;
    localparam bit ENABLE_ST_LD_FORWARDING = 1'b1;
    localparam bit ENABLE_COMPACT_LSU_DISPATCH = 1'b1;
    localparam bit ENABLE_AGEN_STAGE = 1'b0;
    localparam bit ENABLE_FAST_PNR = 1'b0;
    localparam bit ENABLE_SFB_OPT = 1'b1;
    localparam bit ENABLE_GHIST_STALL_REPAIR = 1'b1;
    localparam bit ENABLE_BTB_FAST_REPAIR = 1'b1;
    localparam bit ENABLE_LOAD_TO_STORE_FWD = 1'b1;
    localparam bit ENABLE_SUPER_SCALAR_SNAPSHOTS = 1'b1;
    localparam bit ENABLE_COLUMN_ALU_ISSUE = 1'b0;
    localparam bit ENABLE_ALU_SINGLE_WIDE_DISP = 1'b0;
    localparam bit ENABLE_BANKED_FP_FREELIST = 1'b0;
    localparam bit ENABLE_BPD_HPMS = 1'b0;
    localparam bit ENABLE_PREFETCHING = 1'b0;
    localparam bit ENABLE_SLOW_BTB_REDIRECT = 1'b0;
    localparam bit ENABLE_CONSERVATIVE_SNI = 1'b0;
    localparam bit ENABLE_RAS_TOP_REPAIR = 1'b1;

    localparam int NBANKS = (FETCH_WIDTH > 2) ? 2 : 1;
    localparam int BANK_BYTES = FETCH_WIDTH * 4 / NBANKS;
    localparam int BANK_WIDTH = FETCH_WIDTH / NBANKS;

    localparam int BIM_SETS = 2048;
    localparam int BIM_COLS = 8;

    localparam int BTB_SETS = 32;
    localparam int BTB_WAYS = 2;
    localparam int BTB_TAG_SZ = 22;

    localparam int PG_LEVELS = 2;
    localparam int PMP_ENTRIES = 8;
    localparam int L2_TLB_ENTRIES = 512;
    localparam int L2_TLB_WAYS = 1;
    localparam int N_BREAKPOINTS = 0;
    localparam int N_PERF_COUNTERS = 2;
    localparam bit USE_LBT = 1'b0;
endpackage
