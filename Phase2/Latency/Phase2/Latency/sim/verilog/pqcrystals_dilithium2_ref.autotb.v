// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
 `timescale 1ns/1ps


`define AUTOTB_DUT      pqcrystals_dilithium2_ref
`define AUTOTB_DUT_INST AESL_inst_pqcrystals_dilithium2_ref
`define AUTOTB_TOP      apatb_pqcrystals_dilithium2_ref_top
`define AUTOTB_LAT_RESULT_FILE "pqcrystals_dilithium2_ref.result.lat.rb"
`define AUTOTB_PER_RESULT_TRANS_FILE "pqcrystals_dilithium2_ref.performance.result.transaction.xml"
`define AUTOTB_TOP_INST AESL_inst_apatb_pqcrystals_dilithium2_ref_top
`define AUTOTB_MAX_ALLOW_LATENCY  15000000
`define AUTOTB_CLOCK_PERIOD_DIV2 5.00

`define AESL_MEM_sm AESL_automem_sm
`define AESL_MEM_INST_sm mem_inst_sm
`define AESL_DEPTH_smlen 1
`define AESL_MEM_m AESL_automem_m
`define AESL_MEM_INST_m mem_inst_m
`define AESL_DEPTH_mlen 1
`define AESL_MEM_sk AESL_automem_sk
`define AESL_MEM_INST_sk mem_inst_sk
`define AUTOTB_TVIN_sm  "../tv/cdatafile/c.pqcrystals_dilithium2_ref.autotvin_sm.dat"
`define AUTOTB_TVIN_m  "../tv/cdatafile/c.pqcrystals_dilithium2_ref.autotvin_m.dat"
`define AUTOTB_TVIN_mlen  "../tv/cdatafile/c.pqcrystals_dilithium2_ref.autotvin_mlen.dat"
`define AUTOTB_TVIN_sk  "../tv/cdatafile/c.pqcrystals_dilithium2_ref.autotvin_sk.dat"
`define AUTOTB_TVIN_sm_out_wrapc  "../tv/rtldatafile/rtl.pqcrystals_dilithium2_ref.autotvin_sm.dat"
`define AUTOTB_TVIN_m_out_wrapc  "../tv/rtldatafile/rtl.pqcrystals_dilithium2_ref.autotvin_m.dat"
`define AUTOTB_TVIN_mlen_out_wrapc  "../tv/rtldatafile/rtl.pqcrystals_dilithium2_ref.autotvin_mlen.dat"
`define AUTOTB_TVIN_sk_out_wrapc  "../tv/rtldatafile/rtl.pqcrystals_dilithium2_ref.autotvin_sk.dat"
`define AUTOTB_TVOUT_sm  "../tv/cdatafile/c.pqcrystals_dilithium2_ref.autotvout_sm.dat"
`define AUTOTB_TVOUT_smlen  "../tv/cdatafile/c.pqcrystals_dilithium2_ref.autotvout_smlen.dat"
`define AUTOTB_TVOUT_ap_return  "../tv/cdatafile/c.pqcrystals_dilithium2_ref.autotvout_ap_return.dat"
`define AUTOTB_TVOUT_sm_out_wrapc  "../tv/rtldatafile/rtl.pqcrystals_dilithium2_ref.autotvout_sm.dat"
`define AUTOTB_TVOUT_smlen_out_wrapc  "../tv/rtldatafile/rtl.pqcrystals_dilithium2_ref.autotvout_smlen.dat"
`define AUTOTB_TVOUT_ap_return_out_wrapc  "../tv/rtldatafile/rtl.pqcrystals_dilithium2_ref.autotvout_ap_return.dat"
module `AUTOTB_TOP;

parameter AUTOTB_TRANSACTION_NUM = 2;
parameter PROGRESS_TIMEOUT = 10000000;
parameter LATENCY_ESTIMATION = -1;
parameter LENGTH_sm = 5720;
parameter LENGTH_smlen = 1;
parameter LENGTH_m = 3300;
parameter LENGTH_mlen = 1;
parameter LENGTH_sk = 2544;
parameter LENGTH_ap_return = 1;

task read_token;
    input integer fp;
    output reg [151 : 0] token;
    integer ret;
    begin
        token = "";
        ret = 0;
        ret = $fscanf(fp,"%s",token);
    end
endtask

reg AESL_clock;
reg rst;
reg start;
reg ce;
reg tb_continue;
wire AESL_start;
wire AESL_reset;
wire AESL_ce;
wire AESL_ready;
wire AESL_idle;
wire AESL_continue;
wire AESL_done;
reg AESL_done_delay = 0;
reg AESL_done_delay2 = 0;
reg AESL_ready_delay = 0;
wire ready;
wire ready_wire;
wire ap_start;
wire ap_done;
wire ap_idle;
wire ap_ready;
wire [12 : 0] sm_address0;
wire  sm_ce0;
wire  sm_we0;
wire [7 : 0] sm_d0;
wire [7 : 0] sm_q0;
wire [12 : 0] sm_address1;
wire  sm_ce1;
wire  sm_we1;
wire [7 : 0] sm_d1;
wire [7 : 0] sm_q1;
wire [63 : 0] smlen;
wire  smlen_ap_vld;
wire [11 : 0] m_address0;
wire  m_ce0;
wire [7 : 0] m_q0;
wire [63 : 0] mlen;
wire [11 : 0] sk_address0;
wire  sk_ce0;
wire [7 : 0] sk_q0;
wire [11 : 0] sk_address1;
wire  sk_ce1;
wire [7 : 0] sk_q1;
wire [31 : 0] ap_return;
integer done_cnt = 0;
integer AESL_ready_cnt = 0;
integer ready_cnt = 0;
reg ready_initial;
reg ready_initial_n;
reg ready_last_n;
reg ready_delay_last_n;
reg done_delay_last_n;
reg interface_done = 0;

wire ap_clk;
wire ap_rst;
wire ap_rst_n;

`AUTOTB_DUT `AUTOTB_DUT_INST(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_done(ap_done),
    .ap_idle(ap_idle),
    .ap_ready(ap_ready),
    .sm_address0(sm_address0),
    .sm_ce0(sm_ce0),
    .sm_we0(sm_we0),
    .sm_d0(sm_d0),
    .sm_q0(sm_q0),
    .sm_address1(sm_address1),
    .sm_ce1(sm_ce1),
    .sm_we1(sm_we1),
    .sm_d1(sm_d1),
    .sm_q1(sm_q1),
    .smlen(smlen),
    .smlen_ap_vld(smlen_ap_vld),
    .m_address0(m_address0),
    .m_ce0(m_ce0),
    .m_q0(m_q0),
    .mlen(mlen),
    .sk_address0(sk_address0),
    .sk_ce0(sk_ce0),
    .sk_q0(sk_q0),
    .sk_address1(sk_address1),
    .sk_ce1(sk_ce1),
    .sk_q1(sk_q1),
    .ap_return(ap_return));

// Assignment for control signal
assign ap_clk = AESL_clock;
assign ap_rst = AESL_reset;
assign ap_rst_n = ~AESL_reset;
assign AESL_reset = rst;
assign ap_start = AESL_start;
assign AESL_start = start;
assign AESL_done = ap_done;
assign AESL_idle = ap_idle;
assign AESL_ready = ap_ready;
assign AESL_ce = ce;
assign AESL_continue = tb_continue;
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_done !== 1 && AESL_done !== 0) begin
                $display("ERROR: Control signal AESL_done is invalid!");
                $finish;
            end
        end
    end
    always @(posedge AESL_clock) begin
        if (AESL_reset) begin
        end else begin
            if (AESL_ready !== 1 && AESL_ready !== 0) begin
                $display("ERROR: Control signal AESL_ready is invalid!");
                $finish;
            end
        end
    end
//------------------------arraysm Instantiation--------------

// The input and output of arraysm
wire    arraysm_ce0, arraysm_ce1;
wire    arraysm_we0, arraysm_we1;
wire    [12 : 0]    arraysm_address0, arraysm_address1;
wire    [7 : 0]    arraysm_din0, arraysm_din1;
wire    [7 : 0]    arraysm_dout0, arraysm_dout1;
wire    arraysm_ready;
wire    arraysm_done;

`AESL_MEM_sm `AESL_MEM_INST_sm(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysm_ce0),
    .we0        (arraysm_we0),
    .address0   (arraysm_address0),
    .din0       (arraysm_din0),
    .dout0      (arraysm_dout0),
    .ce1        (arraysm_ce1),
    .we1        (arraysm_we1),
    .address1   (arraysm_address1),
    .din1       (arraysm_din1),
    .dout1      (arraysm_dout1),
    .ready      (arraysm_ready),
    .done    (arraysm_done)
);

// Assignment between dut and arraysm
assign arraysm_address0 = sm_address0;
assign arraysm_ce0 = sm_ce0;
assign sm_q0 = arraysm_dout0;
assign arraysm_we0 = sm_we0;
assign arraysm_din0 = sm_d0;
assign arraysm_address1 = sm_address1;
assign arraysm_ce1 = sm_ce1;
assign sm_q1 = arraysm_dout1;
assign arraysm_we1 = sm_we1;
assign arraysm_din1 = sm_d1;
assign arraysm_ready= ready;
assign arraysm_done = interface_done;


reg AESL_REG_smlen_ap_vld = 0;
// The signal of port smlen
reg [63: 0] AESL_REG_smlen = 0;
always @(posedge AESL_clock)
begin
    if(AESL_reset)
        AESL_REG_smlen = 0; 
    else if(smlen_ap_vld) begin
        AESL_REG_smlen <= smlen;
        AESL_REG_smlen_ap_vld <= 1;
    end
end 

initial begin : write_file_process_smlen
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer smlen_count;
    reg [151:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_smlen_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_smlen_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        # 0.4;
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
        if(AESL_REG_smlen_ap_vld)  begin
          $fdisplay(fp,"0x%x", AESL_REG_smlen);
        AESL_REG_smlen_ap_vld = 0;
        end
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end


//------------------------arraym Instantiation--------------

// The input and output of arraym
wire    arraym_ce0, arraym_ce1;
wire    arraym_we0, arraym_we1;
wire    [11 : 0]    arraym_address0, arraym_address1;
wire    [7 : 0]    arraym_din0, arraym_din1;
wire    [7 : 0]    arraym_dout0, arraym_dout1;
wire    arraym_ready;
wire    arraym_done;

`AESL_MEM_m `AESL_MEM_INST_m(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraym_ce0),
    .we0        (arraym_we0),
    .address0   (arraym_address0),
    .din0       (arraym_din0),
    .dout0      (arraym_dout0),
    .ce1        (arraym_ce1),
    .we1        (arraym_we1),
    .address1   (arraym_address1),
    .din1       (arraym_din1),
    .dout1      (arraym_dout1),
    .ready      (arraym_ready),
    .done    (arraym_done)
);

// Assignment between dut and arraym
assign arraym_address0 = m_address0;
assign arraym_ce0 = m_ce0;
assign m_q0 = arraym_dout0;
assign arraym_we0 = 0;
assign arraym_din0 = 0;
assign arraym_we1 = 0;
assign arraym_din1 = 0;
assign arraym_ready=    ready;
assign arraym_done = 0;


// The signal of port mlen
reg [63: 0] AESL_REG_mlen = 0;
assign mlen = AESL_REG_mlen;
initial begin : read_file_process_mlen
    integer fp;
    integer err;
    integer ret;
    integer proc_rand;
    reg [151  : 0] token;
    integer i;
    reg transaction_finish;
    integer transaction_idx;
    transaction_idx = 0;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVIN_mlen,"r");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVIN_mlen);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    if (token != "[[[runtime]]]") begin
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    read_token(fp, token);
    while (token != "[[[/runtime]]]") begin
        if (token != "[[transaction]]") begin
            $display("ERROR: Simulation using HLS TB failed.");
              $finish;
        end
        read_token(fp, token);  // skip transaction number
          read_token(fp, token);
            # 0.2;
            while(ready_wire !== 1) begin
                @(posedge AESL_clock);
                # 0.2;
            end
        if(token != "[[/transaction]]") begin
            ret = $sscanf(token, "0x%x", AESL_REG_mlen);
              if (ret != 1) begin
                  $display("Failed to parse token!");
                $display("ERROR: Simulation using HLS TB failed.");
                  $finish;
              end
            @(posedge AESL_clock);
              read_token(fp, token);
        end
          read_token(fp, token);
    end
    $fclose(fp);
end


//------------------------arraysk Instantiation--------------

// The input and output of arraysk
wire    arraysk_ce0, arraysk_ce1;
wire    arraysk_we0, arraysk_we1;
wire    [11 : 0]    arraysk_address0, arraysk_address1;
wire    [7 : 0]    arraysk_din0, arraysk_din1;
wire    [7 : 0]    arraysk_dout0, arraysk_dout1;
wire    arraysk_ready;
wire    arraysk_done;

`AESL_MEM_sk `AESL_MEM_INST_sk(
    .clk        (AESL_clock),
    .rst        (AESL_reset),
    .ce0        (arraysk_ce0),
    .we0        (arraysk_we0),
    .address0   (arraysk_address0),
    .din0       (arraysk_din0),
    .dout0      (arraysk_dout0),
    .ce1        (arraysk_ce1),
    .we1        (arraysk_we1),
    .address1   (arraysk_address1),
    .din1       (arraysk_din1),
    .dout1      (arraysk_dout1),
    .ready      (arraysk_ready),
    .done    (arraysk_done)
);

// Assignment between dut and arraysk
assign arraysk_address0 = sk_address0;
assign arraysk_ce0 = sk_ce0;
assign sk_q0 = arraysk_dout0;
assign arraysk_we0 = 0;
assign arraysk_din0 = 0;
assign arraysk_address1 = sk_address1;
assign arraysk_ce1 = sk_ce1;
assign sk_q1 = arraysk_dout1;
assign arraysk_we1 = 0;
assign arraysk_din1 = 0;
assign arraysk_ready=    ready;
assign arraysk_done = 0;


initial begin : write_file_process_ap_return
    integer fp;
    integer fp_size;
    integer err;
    integer ret;
    integer i;
    integer hls_stream_size;
    integer proc_rand;
    integer ap_return_count;
    reg [151:0] token;
    integer transaction_idx;
    reg [8 * 5:1] str;
    wait(AESL_reset === 0);
    fp = $fopen(`AUTOTB_TVOUT_ap_return_out_wrapc,"w");
    if(fp == 0) begin       // Failed to open file
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_ap_return_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    transaction_idx = 0;
    while (transaction_idx != AUTOTB_TRANSACTION_NUM) begin
        @(posedge AESL_clock);
          while(AESL_done !== 1) begin
              @(posedge AESL_clock);
          end
        $fdisplay(fp,"[[transaction]] %d", transaction_idx);
          $fdisplay(fp,"0x%x", ap_return);
    transaction_idx = transaction_idx + 1;
      $fdisplay(fp,"[[/transaction]]");
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
end

initial begin : generate_AESL_ready_cnt_proc
    AESL_ready_cnt = 0;
    wait(AESL_reset === 0);
    while(AESL_ready_cnt != AUTOTB_TRANSACTION_NUM) begin
        while(AESL_ready !== 1) begin
            @(posedge AESL_clock);
            # 0.4;
        end
        @(negedge AESL_clock);
        AESL_ready_cnt = AESL_ready_cnt + 1;
        @(posedge AESL_clock);
        # 0.4;
    end
end

    event next_trigger_ready_cnt;
    
    initial begin : gen_ready_cnt
        ready_cnt = 0;
        wait (AESL_reset === 0);
        forever begin
            @ (posedge AESL_clock);
            if (ready == 1) begin
                if (ready_cnt < AUTOTB_TRANSACTION_NUM) begin
                    ready_cnt = ready_cnt + 1;
                end
            end
            -> next_trigger_ready_cnt;
        end
    end
    
    wire all_finish = (done_cnt == AUTOTB_TRANSACTION_NUM);
    
    // done_cnt
    always @ (posedge AESL_clock) begin
        if (AESL_reset) begin
            done_cnt <= 0;
        end else begin
            if (AESL_done == 1) begin
                if (done_cnt < AUTOTB_TRANSACTION_NUM) begin
                    done_cnt <= done_cnt + 1;
                end
            end
        end
    end
    
    initial begin : finish_simulation
        wait (all_finish == 1);
        // last transaction is saved at negedge right after last done
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        @ (posedge AESL_clock);
        $finish;
    end
    
initial begin
    AESL_clock = 0;
    forever #`AUTOTB_CLOCK_PERIOD_DIV2 AESL_clock = ~AESL_clock;
end


reg end_sm;
reg [31:0] size_sm;
reg [31:0] size_sm_backup;
reg end_m;
reg [31:0] size_m;
reg [31:0] size_m_backup;
reg end_mlen;
reg [31:0] size_mlen;
reg [31:0] size_mlen_backup;
reg end_sk;
reg [31:0] size_sk;
reg [31:0] size_sk_backup;
reg end_smlen;
reg [31:0] size_smlen;
reg [31:0] size_smlen_backup;
reg end_ap_return;
reg [31:0] size_ap_return;
reg [31:0] size_ap_return_backup;

initial begin : initial_process
    integer proc_rand;
    rst = 1;
    # 100;
    repeat(3) @ (posedge AESL_clock);
    rst = 0;
end
initial begin : start_process
    integer proc_rand;
    reg [31:0] start_cnt;
    ce = 1;
    start = 0;
    start_cnt = 0;
    wait (AESL_reset === 0);
    @ (posedge AESL_clock);
    #0 start = 1;
    start_cnt = start_cnt + 1;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt >= AUTOTB_TRANSACTION_NUM) begin
            // keep pushing garbage in
            #0 start = 1;
        end
        if (AESL_ready) begin
            start_cnt = start_cnt + 1;
        end
    end
end

always @(AESL_done)
begin
    tb_continue = AESL_done;
end

initial begin : ready_initial_process
    ready_initial = 0;
    wait (AESL_start === 1);
    ready_initial = 1;
    @(posedge AESL_clock);
    ready_initial = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      AESL_ready_delay = 0;
  else
      AESL_ready_delay = AESL_ready;
end
initial begin : ready_last_n_process
  ready_last_n = 1;
  wait(ready_cnt == AUTOTB_TRANSACTION_NUM)
  @(posedge AESL_clock);
  ready_last_n <= 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
      ready_delay_last_n = 0;
  else
      ready_delay_last_n <= ready_last_n;
end
assign ready = (ready_initial | AESL_ready_delay);
assign ready_wire = ready_initial | AESL_ready_delay;
initial begin : done_delay_last_n_process
  done_delay_last_n = 1;
  while(done_cnt < AUTOTB_TRANSACTION_NUM)
      @(posedge AESL_clock);
  # 0.1;
  done_delay_last_n = 0;
end

always @(posedge AESL_clock)
begin
    if(AESL_reset)
  begin
      AESL_done_delay <= 0;
      AESL_done_delay2 <= 0;
  end
  else begin
      AESL_done_delay <= AESL_done & done_delay_last_n;
      AESL_done_delay2 <= AESL_done_delay;
  end
end
always @(posedge AESL_clock)
begin
    if(AESL_reset)
      interface_done = 0;
  else begin
      # 0.01;
      if(ready === 1 && ready_cnt > 0 && ready_cnt < AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else if(AESL_done_delay === 1 && done_cnt == AUTOTB_TRANSACTION_NUM)
          interface_done = 1;
      else
          interface_done = 0;
  end
end

reg dump_tvout_finish_sm;

initial begin : dump_tvout_runtime_sign_sm
    integer fp;
    dump_tvout_finish_sm = 0;
    fp = $fopen(`AUTOTB_TVOUT_sm_out_wrapc, "w");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sm_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[runtime]]]");
    $fclose(fp);
    wait (done_cnt == AUTOTB_TRANSACTION_NUM);
    // last transaction is saved at negedge right after last done
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    @ (posedge AESL_clock);
    fp = $fopen(`AUTOTB_TVOUT_sm_out_wrapc, "a");
    if (fp == 0) begin
        $display("Failed to open file \"%s\"!", `AUTOTB_TVOUT_sm_out_wrapc);
        $display("ERROR: Simulation using HLS TB failed.");
        $finish;
    end
    $fdisplay(fp,"[[[/runtime]]]");
    $fclose(fp);
    dump_tvout_finish_sm = 1;
end


////////////////////////////////////////////
// progress and performance
////////////////////////////////////////////

task wait_start();
    while (~AESL_start) begin
        @ (posedge AESL_clock);
    end
endtask

reg [31:0] clk_cnt = 0;
reg AESL_ready_p1;
reg AESL_start_p1;

always @ (posedge AESL_clock) begin
    clk_cnt <= clk_cnt + 1;
    AESL_ready_p1 <= AESL_ready;
    AESL_start_p1 <= AESL_start;
end

reg [31:0] start_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] start_cnt;
reg [31:0] ready_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] ap_ready_cnt;
reg [31:0] finish_timestamp [0:AUTOTB_TRANSACTION_NUM - 1];
reg [31:0] finish_cnt;
event report_progress;

initial begin
    start_cnt = 0;
    finish_cnt = 0;
    ap_ready_cnt = 0;
    wait (AESL_reset == 0);
    wait_start();
    start_timestamp[start_cnt] = clk_cnt;
    start_cnt = start_cnt + 1;
    if (AESL_done) begin
        finish_timestamp[finish_cnt] = clk_cnt;
        finish_cnt = finish_cnt + 1;
    end
    -> report_progress;
    forever begin
        @ (posedge AESL_clock);
        if (start_cnt < AUTOTB_TRANSACTION_NUM) begin
            if ((AESL_start && AESL_ready_p1)||(AESL_start && ~AESL_start_p1)) begin
                start_timestamp[start_cnt] = clk_cnt;
                start_cnt = start_cnt + 1;
            end
        end
        if (ap_ready_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_start_p1 && AESL_ready_p1) begin
                ready_timestamp[ap_ready_cnt] = clk_cnt;
                ap_ready_cnt = ap_ready_cnt + 1;
            end
        end
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                finish_timestamp[finish_cnt] = clk_cnt;
                finish_cnt = finish_cnt + 1;
            end
        end
        -> report_progress;
    end
end

reg [31:0] progress_timeout;

initial begin : simulation_progress
    real intra_progress;
    wait (AESL_reset == 0);
    progress_timeout = PROGRESS_TIMEOUT;
    $display("////////////////////////////////////////////////////////////////////////////////////");
    $display("// Inter-Transaction Progress: Completed Transaction / Total Transaction");
    $display("// Intra-Transaction Progress: Measured Latency / Latency Estimation * 100%%");
    $display("//");
    $display("// RTL Simulation : \"Inter-Transaction Progress\" [\"Intra-Transaction Progress\"] @ \"Simulation Time\"");
    $display("////////////////////////////////////////////////////////////////////////////////////");
    print_progress();
    while (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
        @ (report_progress);
        if (finish_cnt < AUTOTB_TRANSACTION_NUM) begin
            if (AESL_done) begin
                print_progress();
                progress_timeout = PROGRESS_TIMEOUT;
            end else begin
                if (progress_timeout == 0) begin
                    print_progress();
                    progress_timeout = PROGRESS_TIMEOUT;
                end else begin
                    progress_timeout = progress_timeout - 1;
                end
            end
        end
    end
    print_progress();
    $display("////////////////////////////////////////////////////////////////////////////////////");
    calculate_performance();
end

task get_intra_progress(output real intra_progress);
    begin
        if (start_cnt > finish_cnt) begin
            intra_progress = clk_cnt - start_timestamp[finish_cnt];
        end else if(finish_cnt > 0) begin
            intra_progress = LATENCY_ESTIMATION;
        end else begin
            intra_progress = 0;
        end
        intra_progress = intra_progress / LATENCY_ESTIMATION;
    end
endtask

task print_progress();
    real intra_progress;
    begin
        if (LATENCY_ESTIMATION > 0) begin
            get_intra_progress(intra_progress);
            $display("// RTL Simulation : %0d / %0d [%2.2f%%] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, intra_progress * 100, $time);
        end else begin
            $display("// RTL Simulation : %0d / %0d [n/a] @ \"%0t\"", finish_cnt, AUTOTB_TRANSACTION_NUM, $time);
        end
    end
endtask

task calculate_performance();
    integer i;
    integer fp;
    reg [31:0] latency [0:AUTOTB_TRANSACTION_NUM - 1];
    reg [31:0] latency_min;
    reg [31:0] latency_max;
    reg [31:0] latency_total;
    reg [31:0] latency_average;
    reg [31:0] interval [0:AUTOTB_TRANSACTION_NUM - 2];
    reg [31:0] interval_min;
    reg [31:0] interval_max;
    reg [31:0] interval_total;
    reg [31:0] interval_average;
    begin
        latency_min = -1;
        latency_max = 0;
        latency_total = 0;
        interval_min = -1;
        interval_max = 0;
        interval_total = 0;

        for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
            // calculate latency
            latency[i] = finish_timestamp[i] - start_timestamp[i];
            if (latency[i] > latency_max) latency_max = latency[i];
            if (latency[i] < latency_min) latency_min = latency[i];
            latency_total = latency_total + latency[i];
            // calculate interval
            if (AUTOTB_TRANSACTION_NUM == 1) begin
                interval[i] = 0;
                interval_max = 0;
                interval_min = 0;
                interval_total = 0;
            end else if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                interval[i] = finish_timestamp[i] - start_timestamp[i]+1;
                if (interval[i] > interval_max) interval_max = interval[i];
                if (interval[i] < interval_min) interval_min = interval[i];
                interval_total = interval_total + interval[i];
            end
        end

        latency_average = latency_total / AUTOTB_TRANSACTION_NUM;
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            interval_average = 0;
        end else begin
            interval_average = interval_total / (AUTOTB_TRANSACTION_NUM - 1);
        end

        fp = $fopen(`AUTOTB_LAT_RESULT_FILE, "w");

        $fdisplay(fp, "$MAX_LATENCY = \"%0d\"", latency_max);
        $fdisplay(fp, "$MIN_LATENCY = \"%0d\"", latency_min);
        $fdisplay(fp, "$AVER_LATENCY = \"%0d\"", latency_average);
        $fdisplay(fp, "$MAX_THROUGHPUT = \"%0d\"", interval_max);
        $fdisplay(fp, "$MIN_THROUGHPUT = \"%0d\"", interval_min);
        $fdisplay(fp, "$AVER_THROUGHPUT = \"%0d\"", interval_average);

        $fclose(fp);

        fp = $fopen(`AUTOTB_PER_RESULT_TRANS_FILE, "w");

        $fdisplay(fp, "%20s%16s%16s", "", "latency", "interval");
        if (AUTOTB_TRANSACTION_NUM == 1) begin
            i = 0;
            $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
        end else begin
            for (i = 0; i < AUTOTB_TRANSACTION_NUM; i = i + 1) begin
                if (i < AUTOTB_TRANSACTION_NUM - 1) begin
                    $fdisplay(fp, "transaction%8d:%16d%16d", i, latency[i], interval[i]);
                end else begin
                    $fdisplay(fp, "transaction%8d:%16d               x", i, latency[i]);
                end
            end
        end

        $fclose(fp);
    end
endtask


////////////////////////////////////////////
// Dependence Check
////////////////////////////////////////////

`ifndef POST_SYN

`endif

endmodule
