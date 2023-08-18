// ==============================================================
// RTL generated by Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2022.2 (64-bit)
// Version: 2022.2
// Copyright (C) Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module pqcrystals_dilithium2_ref_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        z_vec_coeffs_address0,
        z_vec_coeffs_ce0,
        z_vec_coeffs_we0,
        z_vec_coeffs_d0,
        z_vec_coeffs_address1,
        z_vec_coeffs_ce1,
        z_vec_coeffs_q1
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] z_vec_coeffs_address0;
output   z_vec_coeffs_ce0;
output   z_vec_coeffs_we0;
output  [31:0] z_vec_coeffs_d0;
output  [9:0] z_vec_coeffs_address1;
output   z_vec_coeffs_ce1;
input  [31:0] z_vec_coeffs_q1;

reg ap_idle;
reg z_vec_coeffs_ce0;
reg z_vec_coeffs_we0;
reg z_vec_coeffs_ce1;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_idle_pp0;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_state4_pp0_stage0_iter3;
wire    ap_block_state5_pp0_stage0_iter4;
wire    ap_block_pp0_stage0_subdone;
wire   [0:0] icmp_ln53_fu_101_p2;
reg    ap_condition_exit_pp0_iter0_stage0;
wire    ap_loop_exit_ready;
reg    ap_ready_int;
wire    ap_block_pp0_stage0_11001;
reg   [9:0] z_vec_coeffs_addr_reg_248;
reg   [9:0] z_vec_coeffs_addr_reg_248_pp0_iter1_reg;
reg   [9:0] z_vec_coeffs_addr_reg_248_pp0_iter2_reg;
reg   [9:0] z_vec_coeffs_addr_reg_248_pp0_iter3_reg;
reg   [31:0] z_vec_coeffs_load_reg_254;
reg   [31:0] z_vec_coeffs_load_reg_254_pp0_iter2_reg;
wire   [63:0] zext_ln33_1_fu_169_p1;
wire    ap_block_pp0_stage0;
reg   [8:0] i_fu_54;
wire   [8:0] add_ln32_fu_174_p2;
wire    ap_loop_init;
reg   [8:0] ap_sig_allocacmp_i_load;
reg   [2:0] i_5_fu_58;
wire   [2:0] select_ln53_1_fu_139_p3;
reg   [2:0] ap_sig_allocacmp_i_5_load;
reg   [10:0] indvar_flatten69_fu_62;
wire   [10:0] add_ln53_1_fu_107_p2;
reg   [10:0] ap_sig_allocacmp_indvar_flatten69_load;
wire   [31:0] grp_fu_215_p3;
wire   [0:0] icmp_ln32_fu_125_p2;
wire   [2:0] add_ln53_fu_119_p2;
wire   [1:0] trunc_ln33_fu_147_p1;
wire   [8:0] select_ln53_fu_131_p3;
wire   [9:0] tmp_s_fu_151_p3;
wire   [9:0] zext_ln33_fu_159_p1;
wire   [9:0] add_ln33_fu_163_p2;
wire   [31:0] add_ln36_fu_195_p2;
wire  signed [8:0] t_fu_201_p4;
wire  signed [23:0] grp_fu_215_p1;
reg    ap_done_reg;
wire    ap_continue_int;
reg    ap_done_int;
reg    ap_loop_exit_ready_pp0_iter1_reg;
reg    ap_loop_exit_ready_pp0_iter2_reg;
reg    ap_loop_exit_ready_pp0_iter3_reg;
reg   [0:0] ap_NS_fsm;
wire    ap_enable_pp0;
wire    ap_start_int;
wire    ap_ce_reg;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_done_reg = 1'b0;
end

pqcrystals_dilithium2_ref_mac_muladd_9s_24s_32ns_32_4_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 9 ),
    .din1_WIDTH( 24 ),
    .din2_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
mac_muladd_9s_24s_32ns_32_4_1_U286(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(t_fu_201_p4),
    .din1(grp_fu_215_p1),
    .din2(z_vec_coeffs_load_reg_254_pp0_iter2_reg),
    .ce(1'b1),
    .dout(grp_fu_215_p3)
);

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
        end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_loop_exit_ready_pp0_iter3_reg == 1'b1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b1 == ap_condition_exit_pp0_iter0_stage0)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter1 <= ap_start_int;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln53_fu_101_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            i_5_fu_58 <= select_ln53_1_fu_139_p3;
        end else if ((ap_loop_init == 1'b1)) begin
            i_5_fu_58 <= 3'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln53_fu_101_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            i_fu_54 <= add_ln32_fu_174_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            i_fu_54 <= 9'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        if (((icmp_ln53_fu_101_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
            indvar_flatten69_fu_62 <= add_ln53_1_fu_107_p2;
        end else if ((ap_loop_init == 1'b1)) begin
            indvar_flatten69_fu_62 <= 11'd0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_loop_exit_ready_pp0_iter1_reg <= ap_loop_exit_ready;
        ap_loop_exit_ready_pp0_iter2_reg <= ap_loop_exit_ready_pp0_iter1_reg;
        z_vec_coeffs_addr_reg_248_pp0_iter1_reg <= z_vec_coeffs_addr_reg_248;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        ap_loop_exit_ready_pp0_iter3_reg <= ap_loop_exit_ready_pp0_iter2_reg;
        z_vec_coeffs_addr_reg_248_pp0_iter2_reg <= z_vec_coeffs_addr_reg_248_pp0_iter1_reg;
        z_vec_coeffs_addr_reg_248_pp0_iter3_reg <= z_vec_coeffs_addr_reg_248_pp0_iter2_reg;
        z_vec_coeffs_load_reg_254_pp0_iter2_reg <= z_vec_coeffs_load_reg_254;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln53_fu_101_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        z_vec_coeffs_addr_reg_248 <= zext_ln33_1_fu_169_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        z_vec_coeffs_load_reg_254 <= z_vec_coeffs_q1;
    end
end

always @ (*) begin
    if (((icmp_ln53_fu_101_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b1;
    end else begin
        ap_condition_exit_pp0_iter0_stage0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_loop_exit_ready_pp0_iter3_reg == 1'b1))) begin
        ap_done_int = 1'b1;
    end else begin
        ap_done_int = ap_done_reg;
    end
end

always @ (*) begin
    if (((ap_idle_pp0 == 1'b1) & (ap_start_int == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready_int = 1'b1;
    end else begin
        ap_ready_int = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_loop_init == 1'b1))) begin
        ap_sig_allocacmp_i_5_load = 3'd0;
    end else begin
        ap_sig_allocacmp_i_5_load = i_5_fu_58;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_loop_init == 1'b1))) begin
        ap_sig_allocacmp_i_load = 9'd0;
    end else begin
        ap_sig_allocacmp_i_load = i_fu_54;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_loop_init == 1'b1))) begin
        ap_sig_allocacmp_indvar_flatten69_load = 11'd0;
    end else begin
        ap_sig_allocacmp_indvar_flatten69_load = indvar_flatten69_fu_62;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        z_vec_coeffs_ce0 = 1'b1;
    end else begin
        z_vec_coeffs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        z_vec_coeffs_ce1 = 1'b1;
    end else begin
        z_vec_coeffs_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter4 == 1'b1))) begin
        z_vec_coeffs_we0 = 1'b1;
    end else begin
        z_vec_coeffs_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln32_fu_174_p2 = (select_ln53_fu_131_p3 + 9'd1);

assign add_ln33_fu_163_p2 = (tmp_s_fu_151_p3 + zext_ln33_fu_159_p1);

assign add_ln36_fu_195_p2 = (z_vec_coeffs_q1 + 32'd4194304);

assign add_ln53_1_fu_107_p2 = (ap_sig_allocacmp_indvar_flatten69_load + 11'd1);

assign add_ln53_fu_119_p2 = (ap_sig_allocacmp_i_5_load + 3'd1);

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start_int;

assign ap_loop_exit_ready = ap_condition_exit_pp0_iter0_stage0;

assign grp_fu_215_p1 = 32'd4286586879;

assign icmp_ln32_fu_125_p2 = ((ap_sig_allocacmp_i_load == 9'd256) ? 1'b1 : 1'b0);

assign icmp_ln53_fu_101_p2 = ((ap_sig_allocacmp_indvar_flatten69_load == 11'd1024) ? 1'b1 : 1'b0);

assign select_ln53_1_fu_139_p3 = ((icmp_ln32_fu_125_p2[0:0] == 1'b1) ? add_ln53_fu_119_p2 : ap_sig_allocacmp_i_5_load);

assign select_ln53_fu_131_p3 = ((icmp_ln32_fu_125_p2[0:0] == 1'b1) ? 9'd0 : ap_sig_allocacmp_i_load);

assign t_fu_201_p4 = {{add_ln36_fu_195_p2[31:23]}};

assign tmp_s_fu_151_p3 = {{trunc_ln33_fu_147_p1}, {8'd0}};

assign trunc_ln33_fu_147_p1 = select_ln53_1_fu_139_p3[1:0];

assign z_vec_coeffs_address0 = z_vec_coeffs_addr_reg_248_pp0_iter3_reg;

assign z_vec_coeffs_address1 = zext_ln33_1_fu_169_p1;

assign z_vec_coeffs_d0 = grp_fu_215_p3;

assign zext_ln33_1_fu_169_p1 = add_ln33_fu_163_p2;

assign zext_ln33_fu_159_p1 = select_ln53_fu_131_p3;

endmodule //pqcrystals_dilithium2_ref_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1
