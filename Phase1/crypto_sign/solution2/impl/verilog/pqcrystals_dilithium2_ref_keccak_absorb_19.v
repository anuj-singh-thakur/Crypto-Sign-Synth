// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Version: 2022.2
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module pqcrystals_dilithium2_ref_keccak_absorb_19 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        s_address0,
        s_ce0,
        s_we0,
        s_d0,
        s_address1,
        s_ce1,
        s_q1,
        m_address0,
        m_ce0,
        m_q0,
        m_address1,
        m_ce1,
        m_q1,
        m_offset
);

parameter    ap_ST_fsm_pp0_stage0 = 4'd1;
parameter    ap_ST_fsm_pp0_stage1 = 4'd2;
parameter    ap_ST_fsm_pp0_stage2 = 4'd4;
parameter    ap_ST_fsm_pp0_stage3 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] s_address0;
output   s_ce0;
output   s_we0;
output  [63:0] s_d0;
output  [4:0] s_address1;
output   s_ce1;
input  [63:0] s_q1;
output  [7:0] m_address0;
output   m_ce0;
input  [7:0] m_q0;
output  [7:0] m_address1;
output   m_ce1;
input  [7:0] m_q1;
input  [6:0] m_offset;

reg ap_idle;
reg s_ce0;
reg s_we0;
reg s_ce1;
reg[7:0] m_address0;
reg m_ce0;
reg[7:0] m_address1;
reg m_ce1;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_idle_pp0;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state5_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_subdone;
wire   [0:0] icmp_ln416_fu_164_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
wire    ap_CS_fsm_pp0_stage3;
wire    ap_block_state4_pp0_stage3_iter0;
wire    ap_block_pp0_stage3_subdone;
wire   [7:0] m_offset_cast_fu_152_p1;
reg   [7:0] m_offset_cast_reg_371;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln416_reg_381;
wire   [5:0] shl_ln_fu_181_p3;
reg   [5:0] shl_ln_reg_385;
reg   [4:0] s_addr_reg_405;
reg   [7:0] m_load_reg_411;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state2_pp0_stage1_iter0;
wire    ap_block_pp0_stage1_11001;
reg   [7:0] m_load_1_reg_416;
reg   [63:0] s_load_reg_431;
reg   [7:0] m_load_2_reg_436;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_state3_pp0_stage2_iter0;
wire    ap_block_pp0_stage2_11001;
reg   [7:0] m_load_3_reg_441;
reg   [7:0] m_load_4_reg_456;
wire    ap_block_pp0_stage3_11001;
reg   [7:0] m_load_5_reg_461;
reg    ap_enable_reg_pp0_iter0_reg;
wire   [63:0] zext_ln31_37_fu_199_p1;
wire    ap_block_pp0_stage0;
wire   [63:0] zext_ln31_39_fu_220_p1;
wire   [63:0] zext_ln416_fu_176_p1;
wire   [63:0] zext_ln31_41_fu_244_p1;
wire    ap_block_pp0_stage1;
wire   [63:0] zext_ln31_43_fu_263_p1;
wire   [63:0] zext_ln31_45_fu_282_p1;
wire    ap_block_pp0_stage2;
wire   [63:0] zext_ln31_47_fu_301_p1;
wire   [63:0] zext_ln31_49_fu_320_p1;
wire    ap_block_pp0_stage3;
wire   [63:0] zext_ln31_51_fu_339_p1;
reg   [2:0] i_36_fu_52;
wire   [2:0] i_71_fu_170_p2;
wire    ap_loop_init;
reg   [2:0] ap_sig_allocacmp_i;
wire   [7:0] zext_ln31_fu_189_p1;
wire   [7:0] add_ln31_fu_193_p2;
wire   [5:0] or_ln31_fu_204_p2;
wire   [7:0] zext_ln31_38_fu_210_p1;
wire   [7:0] add_ln31_15_fu_214_p2;
wire   [5:0] or_ln31_14_fu_230_p2;
wire   [7:0] zext_ln31_40_fu_235_p1;
wire   [7:0] add_ln31_16_fu_239_p2;
wire   [5:0] or_ln31_15_fu_249_p2;
wire   [7:0] zext_ln31_42_fu_254_p1;
wire   [7:0] add_ln31_17_fu_258_p2;
wire   [5:0] or_ln31_16_fu_268_p2;
wire   [7:0] zext_ln31_44_fu_273_p1;
wire   [7:0] add_ln31_18_fu_277_p2;
wire   [5:0] or_ln31_17_fu_287_p2;
wire   [7:0] zext_ln31_46_fu_292_p1;
wire   [7:0] add_ln31_19_fu_296_p2;
wire   [5:0] or_ln31_18_fu_306_p2;
wire   [7:0] zext_ln31_48_fu_311_p1;
wire   [7:0] add_ln31_20_fu_315_p2;
wire   [5:0] or_ln31_19_fu_325_p2;
wire   [7:0] zext_ln31_50_fu_330_p1;
wire   [7:0] add_ln31_21_fu_334_p2;
wire   [63:0] r_15_7_fu_344_p9;
reg    ap_done_reg;
wire    ap_continue_int;
reg    ap_done_int;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0_1to1;
wire    ap_block_pp0_stage1_subdone;
wire    ap_block_pp0_stage2_subdone;
wire    ap_enable_pp0;
wire    ap_start_int;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0_reg = 1'b0;
#0 ap_done_reg = 1'b0;
end

pqcrystals_dilithium2_ref_flow_control_loop_pipe_sequential_init flow_control_loop_pipe_sequential_init_U(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(ap_start),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_start_int(ap_start_int),
    .ap_loop_init(ap_loop_init),
    .ap_ready_int(ap_ready_int),
    .ap_loop_exit_ready(ap_condition_exit_pp0_iter0_stage0),
    .ap_loop_exit_done(ap_done_int),
    .ap_continue_int(ap_continue_int),
    .ap_done_int(ap_done_int)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue_int == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((ap_loop_exit_ready == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_condition_exit_pp0_iter0_stage0)) begin
            ap_enable_reg_pp0_iter0_reg <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
            ap_enable_reg_pp0_iter0_reg <= ap_start_int;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln416_fu_164_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            i_36_fu_52 <= i_71_fu_170_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_36_fu_52 <= 3'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln416_reg_381 <= icmp_ln416_fu_164_p2;
        m_offset_cast_reg_371[6 : 0] <= m_offset_cast_fu_152_p1[6 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln416_reg_381 == 1'd0) & (1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        m_load_1_reg_416 <= m_q0;
        m_load_reg_411 <= m_q1;
        s_load_reg_431 <= s_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln416_reg_381 == 1'd0) & (1'b0 == ap_block_pp0_stage2_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2))) begin
        m_load_2_reg_436 <= m_q1;
        m_load_3_reg_441 <= m_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln416_reg_381 == 1'd0) & (1'b0 == ap_block_pp0_stage3_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
        m_load_4_reg_456 <= m_q1;
        m_load_5_reg_461 <= m_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln416_fu_164_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        s_addr_reg_405[2 : 0] <= zext_ln416_fu_176_p1[2 : 0];
        shl_ln_reg_385[5 : 3] <= shl_ln_fu_181_p3[5 : 3];
    end
end

always @ (*) begin
    if (((icmp_ln416_fu_164_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_loop_exit_ready == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_done_int = 1'b1;
    end else begin
        ap_done_int = ap_done_reg;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
        ap_enable_reg_pp0_iter0 = ap_start_int;
    end else begin
        ap_enable_reg_pp0_iter0 = ap_enable_reg_pp0_iter0_reg;
    end
end

always @ (*) begin
    if (((ap_start_int == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter1 == 1'b0)) begin
        ap_idle_pp0_1to1 = 1'b1;
    end else begin
        ap_idle_pp0_1to1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage3_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_loop_init == 1'b1))) begin
        ap_sig_allocacmp_i = 3'd0;
    end else begin
        ap_sig_allocacmp_i = i_36_fu_52;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
            m_address0 = zext_ln31_51_fu_339_p1;
        end else if (((1'b0 == ap_block_pp0_stage2) & (1'b1 == ap_CS_fsm_pp0_stage2))) begin
            m_address0 = zext_ln31_47_fu_301_p1;
        end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            m_address0 = zext_ln31_43_fu_263_p1;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            m_address0 = zext_ln31_39_fu_220_p1;
        end else begin
            m_address0 = 'bx;
        end
    end else begin
        m_address0 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
            m_address1 = zext_ln31_49_fu_320_p1;
        end else if (((1'b0 == ap_block_pp0_stage2) & (1'b1 == ap_CS_fsm_pp0_stage2))) begin
            m_address1 = zext_ln31_45_fu_282_p1;
        end else if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            m_address1 = zext_ln31_41_fu_244_p1;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            m_address1 = zext_ln31_37_fu_199_p1;
        end else begin
            m_address1 = 'bx;
        end
    end else begin
        m_address1 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b0 == ap_block_pp0_stage3_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage3)) | ((1'b0 == ap_block_pp0_stage2_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2)) | ((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        m_ce0 = 1'b1;
    end else begin
        m_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b0 == ap_block_pp0_stage3_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage3)) | ((1'b0 == ap_block_pp0_stage2_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage2)) | ((1'b0 == ap_block_pp0_stage1_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        m_ce1 = 1'b1;
    end else begin
        m_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        s_ce0 = 1'b1;
    end else begin
        s_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        s_ce1 = 1'b1;
    end else begin
        s_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        s_we0 = 1'b1;
    end else begin
        s_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            if ((1'b1 == ap_condition_exit_pp0_iter0_stage0)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((~((ap_start_int == 1'b0) & (ap_idle_pp0_1to1 == 1'b1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((1'b0 == ap_block_pp0_stage1_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_pp0_stage2 : begin
            if ((1'b0 == ap_block_pp0_stage2_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end
        end
        ap_ST_fsm_pp0_stage3 : begin
            if ((1'b0 == ap_block_pp0_stage3_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln31_15_fu_214_p2 = (zext_ln31_38_fu_210_p1 + m_offset_cast_fu_152_p1);

assign add_ln31_16_fu_239_p2 = (zext_ln31_40_fu_235_p1 + m_offset_cast_reg_371);

assign add_ln31_17_fu_258_p2 = (zext_ln31_42_fu_254_p1 + m_offset_cast_reg_371);

assign add_ln31_18_fu_277_p2 = (zext_ln31_44_fu_273_p1 + m_offset_cast_reg_371);

assign add_ln31_19_fu_296_p2 = (zext_ln31_46_fu_292_p1 + m_offset_cast_reg_371);

assign add_ln31_20_fu_315_p2 = (zext_ln31_48_fu_311_p1 + m_offset_cast_reg_371);

assign add_ln31_21_fu_334_p2 = (zext_ln31_50_fu_330_p1 + m_offset_cast_reg_371);

assign add_ln31_fu_193_p2 = (zext_ln31_fu_189_p1 + m_offset_cast_fu_152_p1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_pp0_stage3 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_subdone = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage3_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign i_71_fu_170_p2 = (ap_sig_allocacmp_i + 3'd1);

assign icmp_ln416_fu_164_p2 = ((ap_sig_allocacmp_i == 3'd6) ? 1'b1 : 1'b0);

assign m_offset_cast_fu_152_p1 = m_offset;

assign or_ln31_14_fu_230_p2 = (shl_ln_reg_385 | 6'd2);

assign or_ln31_15_fu_249_p2 = (shl_ln_reg_385 | 6'd3);

assign or_ln31_16_fu_268_p2 = (shl_ln_reg_385 | 6'd4);

assign or_ln31_17_fu_287_p2 = (shl_ln_reg_385 | 6'd5);

assign or_ln31_18_fu_306_p2 = (shl_ln_reg_385 | 6'd6);

assign or_ln31_19_fu_325_p2 = (shl_ln_reg_385 | 6'd7);

assign or_ln31_fu_204_p2 = (shl_ln_fu_181_p3 | 6'd1);

assign r_15_7_fu_344_p9 = {{{{{{{{m_q0}, {m_q1}}, {m_load_5_reg_461}}, {m_load_4_reg_456}}, {m_load_3_reg_441}}, {m_load_2_reg_436}}, {m_load_1_reg_416}}, {m_load_reg_411}};

assign s_address0 = s_addr_reg_405;

assign s_address1 = zext_ln416_fu_176_p1;

assign s_d0 = (s_load_reg_431 ^ r_15_7_fu_344_p9);

assign shl_ln_fu_181_p3 = {{ap_sig_allocacmp_i}, {3'd0}};

assign zext_ln31_37_fu_199_p1 = add_ln31_fu_193_p2;

assign zext_ln31_38_fu_210_p1 = or_ln31_fu_204_p2;

assign zext_ln31_39_fu_220_p1 = add_ln31_15_fu_214_p2;

assign zext_ln31_40_fu_235_p1 = or_ln31_14_fu_230_p2;

assign zext_ln31_41_fu_244_p1 = add_ln31_16_fu_239_p2;

assign zext_ln31_42_fu_254_p1 = or_ln31_15_fu_249_p2;

assign zext_ln31_43_fu_263_p1 = add_ln31_17_fu_258_p2;

assign zext_ln31_44_fu_273_p1 = or_ln31_16_fu_268_p2;

assign zext_ln31_45_fu_282_p1 = add_ln31_18_fu_277_p2;

assign zext_ln31_46_fu_292_p1 = or_ln31_17_fu_287_p2;

assign zext_ln31_47_fu_301_p1 = add_ln31_19_fu_296_p2;

assign zext_ln31_48_fu_311_p1 = or_ln31_18_fu_306_p2;

assign zext_ln31_49_fu_320_p1 = add_ln31_20_fu_315_p2;

assign zext_ln31_50_fu_330_p1 = or_ln31_19_fu_325_p2;

assign zext_ln31_51_fu_339_p1 = add_ln31_21_fu_334_p2;

assign zext_ln31_fu_189_p1 = shl_ln_fu_181_p3;

assign zext_ln416_fu_176_p1 = ap_sig_allocacmp_i;

always @ (posedge ap_clk) begin
    m_offset_cast_reg_371[7] <= 1'b0;
    shl_ln_reg_385[2:0] <= 3'b000;
    s_addr_reg_405[4:3] <= 2'b00;
end

endmodule //pqcrystals_dilithium2_ref_keccak_absorb_19
