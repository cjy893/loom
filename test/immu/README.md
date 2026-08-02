# IMMU control contract

This suite defines the control contract between the IFU, the shared LA32 TLB,
and the combinational `addr_trans` translation rules.

`immu` accepts at most one request at a time. It snapshots the request virtual
address and all relevant CSR state, bypasses the TLB in direct-address and DMW
modes, emits exactly one TLB lookup pulse in mapped paging mode, and holds its
response until consumed. `flush` cancels a request or response in every state.

The production interface is:

```systemverilog
module immu #(
    parameter int ASID_WIDTH = 10
) (
    input  logic                  clk,
    input  logic                  rst_n,
    input  logic                  flush,

    input  logic                  req_valid,
    output logic                  req_ready,
    input  logic [31:0]           req_vaddr,

    input  logic [31:0]           csr_crmd,
    input  logic [31:0]           csr_asid,
    input  logic [31:0]           csr_dmw0,
    input  logic [31:0]           csr_dmw1,

    output logic                  tlb_req_valid,
    output logic [31:0]           tlb_req_vaddr,
    output logic [ASID_WIDTH-1:0] tlb_req_asid,
    input  logic                  tlb_resp_valid,
    input  logic                  tlb_found,
    input  logic [5:0]            tlb_ps,
    input  logic [19:0]           tlb_ppn,
    input  logic                  tlb_v,
    input  logic                  tlb_d,
    input  logic [1:0]            tlb_mat,
    input  logic [1:0]            tlb_plv,

    output logic                  resp_valid,
    input  logic                  resp_ready,
    output logic [31:0]           resp_vaddr,
    output logic [31:0]           resp_paddr,
    output logic [1:0]            resp_mat,
    output logic                  resp_cacheable,
    output logic                  resp_xcpt_valid,
    output logic [5:0]            resp_xcpt_code,
    output logic [31:0]           resp_badvaddr
);
```

The CSR fields used by the contract are `CRMD.PLV[1:0]`, `DA[3]`, `PG[4]`,
`DATF[6:5]`, `DATM[8:7]`, `ASID.ASID[ASID_WIDTH-1:0]`, and the architectural
DMW0/DMW1 fields.

Coverage includes:

- direct-address translation and `DATF`;
- DMW0/DMW1 translation and DMW0 priority;
- mapped 4KB and 4MB TLB translations;
- `TLBR`, `PIF`, and instruction-side `PPI`;
- one lookup pulse per mapped request;
- CSR snapshot behavior while a lookup is outstanding;
- response stability under backpressure;
- flush before lookup, while waiting, with a returning lookup, and while a
  response is held;
- sequential requests without stale-response leakage.

Validate the test harness against the test-only reference controller:

```sh
./test/immu/run.sh --reference
```

The default run requires `mmu/immu.sv`:

```sh
./test/immu/run.sh
```

This suite must not be added to `test/run_all.sh` until the production module
exists and passes the candidate run.
