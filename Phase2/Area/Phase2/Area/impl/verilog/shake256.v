// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module shake256 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        out_r_address0,
        out_r_ce0,
        out_r_we0,
        out_r_d0,
        out_r_q0,
        out_r_address1,
        out_r_ce1,
        out_r_we1,
        out_r_d1,
        out_r_q1
);

parameter    ap_ST_fsm_state1 = 15'd1;
parameter    ap_ST_fsm_state2 = 15'd2;
parameter    ap_ST_fsm_state3 = 15'd4;
parameter    ap_ST_fsm_state4 = 15'd8;
parameter    ap_ST_fsm_state5 = 15'd16;
parameter    ap_ST_fsm_state6 = 15'd32;
parameter    ap_ST_fsm_state7 = 15'd64;
parameter    ap_ST_fsm_state8 = 15'd128;
parameter    ap_ST_fsm_state9 = 15'd256;
parameter    ap_ST_fsm_state10 = 15'd512;
parameter    ap_ST_fsm_state11 = 15'd1024;
parameter    ap_ST_fsm_state12 = 15'd2048;
parameter    ap_ST_fsm_state13 = 15'd4096;
parameter    ap_ST_fsm_state14 = 15'd8192;
parameter    ap_ST_fsm_state15 = 15'd16384;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [7:0] out_r_address0;
output   out_r_ce0;
output   out_r_we0;
output  [7:0] out_r_d0;
input  [7:0] out_r_q0;
output  [7:0] out_r_address1;
output   out_r_ce1;
output   out_r_we1;
output  [7:0] out_r_d1;
input  [7:0] out_r_q1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[7:0] out_r_address0;
reg out_r_ce0;
reg out_r_we0;
reg[7:0] out_r_d0;
reg[7:0] out_r_address1;
reg out_r_ce1;
reg out_r_we1;
reg[7:0] out_r_d1;

(* fsm_encoding = "none" *) reg   [14:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [4:0] i_fu_344_p2;
wire    ap_CS_fsm_state2;
wire   [3:0] add_ln416_fu_366_p2;
reg   [3:0] add_ln416_reg_769;
wire    ap_CS_fsm_state3;
wire   [7:0] zext_ln417_fu_380_p1;
reg   [7:0] zext_ln417_reg_774;
wire   [0:0] icmp_ln416_fu_360_p2;
reg   [4:0] state_0_s_addr_3_reg_794;
reg   [7:0] in_load_reg_812;
wire    ap_CS_fsm_state4;
reg   [7:0] in_load_1_reg_817;
reg   [7:0] in_load_2_reg_832;
wire    ap_CS_fsm_state5;
reg   [7:0] in_load_3_reg_837;
reg   [7:0] in_load_4_reg_852;
wire    ap_CS_fsm_state6;
reg   [7:0] in_load_5_reg_857;
wire   [2:0] add_ln540_fu_512_p2;
reg   [2:0] add_ln540_reg_875;
wire    ap_CS_fsm_state11;
wire   [0:0] icmp_ln540_fu_506_p2;
wire   [5:0] shl_ln1_fu_523_p3;
reg   [5:0] shl_ln1_reg_885;
wire    ap_CS_fsm_state12;
reg   [7:0] trunc_ln1_reg_895;
reg   [7:0] trunc_ln2_reg_900;
reg   [7:0] trunc_ln3_reg_905;
reg   [7:0] trunc_ln4_reg_910;
reg   [7:0] trunc_ln5_reg_915;
reg   [7:0] trunc_ln6_reg_920;
reg   [4:0] state_0_s_address0;
reg    state_0_s_ce0;
reg    state_0_s_we0;
reg   [63:0] state_0_s_d0;
wire   [63:0] state_0_s_q0;
reg   [4:0] state_0_s_address1;
reg    state_0_s_ce1;
reg    state_0_s_we1;
reg   [63:0] state_0_s_d1;
wire   [63:0] state_0_s_q1;
wire    grp_KeccakF1600_StatePer_fu_331_ap_start;
wire    grp_KeccakF1600_StatePer_fu_331_ap_done;
wire    grp_KeccakF1600_StatePer_fu_331_ap_idle;
wire    grp_KeccakF1600_StatePer_fu_331_ap_ready;
wire   [4:0] grp_KeccakF1600_StatePer_fu_331_state_0_address0;
wire    grp_KeccakF1600_StatePer_fu_331_state_0_ce0;
wire    grp_KeccakF1600_StatePer_fu_331_state_0_we0;
wire   [63:0] grp_KeccakF1600_StatePer_fu_331_state_0_d0;
wire   [4:0] grp_KeccakF1600_StatePer_fu_331_state_0_address1;
wire    grp_KeccakF1600_StatePer_fu_331_state_0_ce1;
wire    grp_KeccakF1600_StatePer_fu_331_state_0_we1;
wire   [63:0] grp_KeccakF1600_StatePer_fu_331_state_0_d1;
reg   [4:0] i_0_i_i_reg_297;
wire   [0:0] icmp_ln362_fu_338_p2;
reg   [3:0] i_3_i_i_reg_308;
wire    ap_CS_fsm_state7;
reg   [2:0] i_3_i_reg_319;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state15;
reg    grp_KeccakF1600_StatePer_fu_331_ap_start_reg;
wire    ap_CS_fsm_state9;
wire   [63:0] zext_ln363_fu_350_p1;
wire   [63:0] zext_ln417_1_fu_390_p1;
wire   [63:0] zext_ln31_fu_401_p1;
wire   [63:0] zext_ln416_fu_355_p1;
wire   [63:0] zext_ln31_1_fu_411_p1;
wire   [63:0] zext_ln31_2_fu_421_p1;
wire   [63:0] zext_ln31_3_fu_431_p1;
wire   [63:0] zext_ln31_4_fu_441_p1;
wire   [63:0] zext_ln31_5_fu_451_p1;
wire   [63:0] zext_ln31_6_fu_461_p1;
wire   [63:0] zext_ln540_fu_501_p1;
wire   [63:0] zext_ln541_1_fu_541_p1;
wire   [63:0] zext_ln542_1_fu_573_p1;
wire   [63:0] zext_ln543_1_fu_653_p1;
wire    ap_CS_fsm_state13;
wire   [63:0] zext_ln544_1_fu_673_p1;
wire   [63:0] zext_ln545_1_fu_693_p1;
wire    ap_CS_fsm_state14;
wire   [63:0] zext_ln546_1_fu_713_p1;
wire   [63:0] zext_ln547_1_fu_733_p1;
wire   [63:0] zext_ln548_1_fu_753_p1;
wire   [63:0] xor_ln417_fu_480_p2;
wire    ap_CS_fsm_state8;
wire   [63:0] xor_ln450_fu_487_p2;
wire   [63:0] xor_ln451_fu_494_p2;
wire   [7:0] trunc_ln541_fu_518_p1;
wire   [6:0] shl_ln_fu_372_p3;
wire   [7:0] add_ln417_fu_384_p2;
wire   [7:0] add_ln31_fu_395_p2;
wire   [7:0] add_ln31_1_fu_406_p2;
wire   [7:0] add_ln31_2_fu_416_p2;
wire   [7:0] add_ln31_3_fu_426_p2;
wire   [7:0] add_ln31_4_fu_436_p2;
wire   [7:0] add_ln31_5_fu_446_p2;
wire   [7:0] add_ln31_6_fu_456_p2;
wire   [63:0] r_7_i_fu_466_p9;
wire   [7:0] zext_ln541_fu_531_p1;
wire   [7:0] add_ln541_fu_535_p2;
wire   [5:0] or_ln542_fu_557_p2;
wire   [7:0] zext_ln542_fu_563_p1;
wire   [7:0] add_ln542_fu_567_p2;
wire   [5:0] or_ln543_fu_638_p2;
wire   [7:0] zext_ln543_fu_643_p1;
wire   [7:0] add_ln543_fu_647_p2;
wire   [5:0] or_ln544_fu_658_p2;
wire   [7:0] zext_ln544_fu_663_p1;
wire   [7:0] add_ln544_fu_667_p2;
wire   [5:0] or_ln545_fu_678_p2;
wire   [7:0] zext_ln545_fu_683_p1;
wire   [7:0] add_ln545_fu_687_p2;
wire   [5:0] or_ln546_fu_698_p2;
wire   [7:0] zext_ln546_fu_703_p1;
wire   [7:0] add_ln546_fu_707_p2;
wire   [5:0] or_ln547_fu_718_p2;
wire   [7:0] zext_ln547_fu_723_p1;
wire   [7:0] add_ln547_fu_727_p2;
wire   [5:0] or_ln548_fu_738_p2;
wire   [7:0] zext_ln548_fu_743_p1;
wire   [7:0] add_ln548_fu_747_p2;
reg   [14:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 15'd1;
#0 grp_KeccakF1600_StatePer_fu_331_ap_start_reg = 1'b0;
end

shake256_state_0_s #(
    .DataWidth( 64 ),
    .AddressRange( 25 ),
    .AddressWidth( 5 ))
state_0_s_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(state_0_s_address0),
    .ce0(state_0_s_ce0),
    .we0(state_0_s_we0),
    .d0(state_0_s_d0),
    .q0(state_0_s_q0),
    .address1(state_0_s_address1),
    .ce1(state_0_s_ce1),
    .we1(state_0_s_we1),
    .d1(state_0_s_d1),
    .q1(state_0_s_q1)
);

KeccakF1600_StatePer grp_KeccakF1600_StatePer_fu_331(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_KeccakF1600_StatePer_fu_331_ap_start),
    .ap_done(grp_KeccakF1600_StatePer_fu_331_ap_done),
    .ap_idle(grp_KeccakF1600_StatePer_fu_331_ap_idle),
    .ap_ready(grp_KeccakF1600_StatePer_fu_331_ap_ready),
    .state_0_address0(grp_KeccakF1600_StatePer_fu_331_state_0_address0),
    .state_0_ce0(grp_KeccakF1600_StatePer_fu_331_state_0_ce0),
    .state_0_we0(grp_KeccakF1600_StatePer_fu_331_state_0_we0),
    .state_0_d0(grp_KeccakF1600_StatePer_fu_331_state_0_d0),
    .state_0_q0(state_0_s_q0),
    .state_0_address1(grp_KeccakF1600_StatePer_fu_331_state_0_address1),
    .state_0_ce1(grp_KeccakF1600_StatePer_fu_331_state_0_ce1),
    .state_0_we1(grp_KeccakF1600_StatePer_fu_331_state_0_we1),
    .state_0_d1(grp_KeccakF1600_StatePer_fu_331_state_0_d1),
    .state_0_q1(state_0_s_q1)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_KeccakF1600_StatePer_fu_331_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state9)) begin
            grp_KeccakF1600_StatePer_fu_331_ap_start_reg <= 1'b1;
        end else if ((grp_KeccakF1600_StatePer_fu_331_ap_ready == 1'b1)) begin
            grp_KeccakF1600_StatePer_fu_331_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln362_fu_338_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_0_i_i_reg_297 <= i_fu_344_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_i_i_reg_297 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln362_fu_338_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_3_i_i_reg_308 <= 4'd0;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        i_3_i_i_reg_308 <= add_ln416_reg_769;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        i_3_i_reg_319 <= add_ln540_reg_875;
    end else if (((1'b1 == ap_CS_fsm_state10) & (grp_KeccakF1600_StatePer_fu_331_ap_done == 1'b1))) begin
        i_3_i_reg_319 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        add_ln416_reg_769 <= add_ln416_fu_366_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        add_ln540_reg_875 <= add_ln540_fu_512_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        in_load_1_reg_817 <= out_r_q1;
        in_load_reg_812 <= out_r_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        in_load_2_reg_832 <= out_r_q0;
        in_load_3_reg_837 <= out_r_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        in_load_4_reg_852 <= out_r_q0;
        in_load_5_reg_857 <= out_r_q1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state12)) begin
        shl_ln1_reg_885[5 : 3] <= shl_ln1_fu_523_p3[5 : 3];
        trunc_ln1_reg_895 <= {{state_0_s_q1[23:16]}};
        trunc_ln2_reg_900 <= {{state_0_s_q1[31:24]}};
        trunc_ln3_reg_905 <= {{state_0_s_q1[39:32]}};
        trunc_ln4_reg_910 <= {{state_0_s_q1[47:40]}};
        trunc_ln5_reg_915 <= {{state_0_s_q1[55:48]}};
        trunc_ln6_reg_920 <= {{state_0_s_q1[63:56]}};
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln416_fu_360_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        state_0_s_addr_3_reg_794[3 : 0] <= zext_ln416_fu_355_p1[3 : 0];
        zext_ln417_reg_774[6 : 3] <= zext_ln417_fu_380_p1[6 : 3];
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((icmp_ln540_fu_506_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state11)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln540_fu_506_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state11))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        out_r_address0 = zext_ln547_1_fu_733_p1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        out_r_address0 = zext_ln545_1_fu_693_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        out_r_address0 = zext_ln543_1_fu_653_p1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        out_r_address0 = zext_ln541_1_fu_541_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        out_r_address0 = zext_ln31_5_fu_451_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        out_r_address0 = zext_ln31_3_fu_431_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        out_r_address0 = zext_ln31_1_fu_411_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        out_r_address0 = zext_ln417_1_fu_390_p1;
    end else begin
        out_r_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        out_r_address1 = zext_ln548_1_fu_753_p1;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        out_r_address1 = zext_ln546_1_fu_713_p1;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        out_r_address1 = zext_ln544_1_fu_673_p1;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        out_r_address1 = zext_ln542_1_fu_573_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        out_r_address1 = zext_ln31_6_fu_461_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        out_r_address1 = zext_ln31_4_fu_441_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        out_r_address1 = zext_ln31_2_fu_421_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        out_r_address1 = zext_ln31_fu_401_p1;
    end else begin
        out_r_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state6))) begin
        out_r_ce0 = 1'b1;
    end else begin
        out_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state12) | (1'b1 == ap_CS_fsm_state6))) begin
        out_r_ce1 = 1'b1;
    end else begin
        out_r_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        out_r_d0 = trunc_ln5_reg_915;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        out_r_d0 = trunc_ln3_reg_905;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        out_r_d0 = trunc_ln1_reg_895;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        out_r_d0 = trunc_ln541_fu_518_p1;
    end else begin
        out_r_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        out_r_d1 = trunc_ln6_reg_920;
    end else if ((1'b1 == ap_CS_fsm_state14)) begin
        out_r_d1 = trunc_ln4_reg_910;
    end else if ((1'b1 == ap_CS_fsm_state13)) begin
        out_r_d1 = trunc_ln2_reg_900;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        out_r_d1 = {{state_0_s_q1[15:8]}};
    end else begin
        out_r_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state12))) begin
        out_r_we0 = 1'b1;
    end else begin
        out_r_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state13) | (1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state12))) begin
        out_r_we1 = 1'b1;
    end else begin
        out_r_we1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        state_0_s_address0 = 64'd16;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        state_0_s_address0 = state_0_s_addr_3_reg_794;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_0_s_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        state_0_s_address0 = zext_ln363_fu_350_p1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_0_s_address0 = grp_KeccakF1600_StatePer_fu_331_state_0_address0;
    end else begin
        state_0_s_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        state_0_s_address1 = zext_ln540_fu_501_p1;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        state_0_s_address1 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        state_0_s_address1 = state_0_s_addr_3_reg_794;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        state_0_s_address1 = 64'd16;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_0_s_address1 = grp_KeccakF1600_StatePer_fu_331_state_0_address1;
    end else begin
        state_0_s_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        state_0_s_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_0_s_ce0 = grp_KeccakF1600_StatePer_fu_331_state_0_ce0;
    end else begin
        state_0_s_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state11) | (1'b1 == ap_CS_fsm_state6))) begin
        state_0_s_ce1 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_0_s_ce1 = grp_KeccakF1600_StatePer_fu_331_state_0_ce1;
    end else begin
        state_0_s_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        state_0_s_d0 = xor_ln451_fu_494_p2;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        state_0_s_d0 = xor_ln417_fu_480_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        state_0_s_d0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_0_s_d0 = grp_KeccakF1600_StatePer_fu_331_state_0_d0;
    end else begin
        state_0_s_d0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        state_0_s_d1 = xor_ln450_fu_487_p2;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_0_s_d1 = grp_KeccakF1600_StatePer_fu_331_state_0_d1;
    end else begin
        state_0_s_d1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | ((icmp_ln362_fu_338_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)))) begin
        state_0_s_we0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_0_s_we0 = grp_KeccakF1600_StatePer_fu_331_state_0_we0;
    end else begin
        state_0_s_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        state_0_s_we1 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        state_0_s_we1 = grp_KeccakF1600_StatePer_fu_331_state_0_we1;
    end else begin
        state_0_s_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln362_fu_338_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((icmp_ln416_fu_360_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            if (((1'b1 == ap_CS_fsm_state10) & (grp_KeccakF1600_StatePer_fu_331_ap_done == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state11 : begin
            if (((icmp_ln540_fu_506_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state11))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln31_1_fu_406_p2 = (zext_ln417_reg_774 + 8'd82);

assign add_ln31_2_fu_416_p2 = (zext_ln417_reg_774 + 8'd83);

assign add_ln31_3_fu_426_p2 = (zext_ln417_reg_774 + 8'd84);

assign add_ln31_4_fu_436_p2 = (zext_ln417_reg_774 + 8'd85);

assign add_ln31_5_fu_446_p2 = (zext_ln417_reg_774 + 8'd86);

assign add_ln31_6_fu_456_p2 = (zext_ln417_reg_774 + 8'd87);

assign add_ln31_fu_395_p2 = (zext_ln417_fu_380_p1 + 8'd81);

assign add_ln416_fu_366_p2 = (i_3_i_i_reg_308 + 4'd1);

assign add_ln417_fu_384_p2 = (zext_ln417_fu_380_p1 + 8'd80);

assign add_ln540_fu_512_p2 = (i_3_i_reg_319 + 3'd1);

assign add_ln541_fu_535_p2 = ($signed(8'd160) + $signed(zext_ln541_fu_531_p1));

assign add_ln542_fu_567_p2 = ($signed(8'd160) + $signed(zext_ln542_fu_563_p1));

assign add_ln543_fu_647_p2 = ($signed(8'd160) + $signed(zext_ln543_fu_643_p1));

assign add_ln544_fu_667_p2 = ($signed(8'd160) + $signed(zext_ln544_fu_663_p1));

assign add_ln545_fu_687_p2 = ($signed(8'd160) + $signed(zext_ln545_fu_683_p1));

assign add_ln546_fu_707_p2 = ($signed(8'd160) + $signed(zext_ln546_fu_703_p1));

assign add_ln547_fu_727_p2 = ($signed(8'd160) + $signed(zext_ln547_fu_723_p1));

assign add_ln548_fu_747_p2 = ($signed(8'd160) + $signed(zext_ln548_fu_743_p1));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign grp_KeccakF1600_StatePer_fu_331_ap_start = grp_KeccakF1600_StatePer_fu_331_ap_start_reg;

assign i_fu_344_p2 = (i_0_i_i_reg_297 + 5'd1);

assign icmp_ln362_fu_338_p2 = ((i_0_i_i_reg_297 == 5'd25) ? 1'b1 : 1'b0);

assign icmp_ln416_fu_360_p2 = ((i_3_i_i_reg_308 == 4'd10) ? 1'b1 : 1'b0);

assign icmp_ln540_fu_506_p2 = ((i_3_i_reg_319 == 3'd6) ? 1'b1 : 1'b0);

assign or_ln542_fu_557_p2 = (shl_ln1_fu_523_p3 | 6'd1);

assign or_ln543_fu_638_p2 = (shl_ln1_reg_885 | 6'd2);

assign or_ln544_fu_658_p2 = (shl_ln1_reg_885 | 6'd3);

assign or_ln545_fu_678_p2 = (shl_ln1_reg_885 | 6'd4);

assign or_ln546_fu_698_p2 = (shl_ln1_reg_885 | 6'd5);

assign or_ln547_fu_718_p2 = (shl_ln1_reg_885 | 6'd6);

assign or_ln548_fu_738_p2 = (shl_ln1_reg_885 | 6'd7);

assign r_7_i_fu_466_p9 = {{{{{{{{out_r_q1}, {out_r_q0}}, {in_load_5_reg_857}}, {in_load_4_reg_852}}, {in_load_3_reg_837}}, {in_load_2_reg_832}}, {in_load_1_reg_817}}, {in_load_reg_812}};

assign shl_ln1_fu_523_p3 = {{i_3_i_reg_319}, {3'd0}};

assign shl_ln_fu_372_p3 = {{i_3_i_i_reg_308}, {3'd0}};

assign trunc_ln541_fu_518_p1 = state_0_s_q1[7:0];

assign xor_ln417_fu_480_p2 = (state_0_s_q1 ^ r_7_i_fu_466_p9);

assign xor_ln450_fu_487_p2 = (state_0_s_q0 ^ 64'd31);

assign xor_ln451_fu_494_p2 = (state_0_s_q1 ^ 64'd9223372036854775808);

assign zext_ln31_1_fu_411_p1 = add_ln31_1_fu_406_p2;

assign zext_ln31_2_fu_421_p1 = add_ln31_2_fu_416_p2;

assign zext_ln31_3_fu_431_p1 = add_ln31_3_fu_426_p2;

assign zext_ln31_4_fu_441_p1 = add_ln31_4_fu_436_p2;

assign zext_ln31_5_fu_451_p1 = add_ln31_5_fu_446_p2;

assign zext_ln31_6_fu_461_p1 = add_ln31_6_fu_456_p2;

assign zext_ln31_fu_401_p1 = add_ln31_fu_395_p2;

assign zext_ln363_fu_350_p1 = i_0_i_i_reg_297;

assign zext_ln416_fu_355_p1 = i_3_i_i_reg_308;

assign zext_ln417_1_fu_390_p1 = add_ln417_fu_384_p2;

assign zext_ln417_fu_380_p1 = shl_ln_fu_372_p3;

assign zext_ln540_fu_501_p1 = i_3_i_reg_319;

assign zext_ln541_1_fu_541_p1 = add_ln541_fu_535_p2;

assign zext_ln541_fu_531_p1 = shl_ln1_fu_523_p3;

assign zext_ln542_1_fu_573_p1 = add_ln542_fu_567_p2;

assign zext_ln542_fu_563_p1 = or_ln542_fu_557_p2;

assign zext_ln543_1_fu_653_p1 = add_ln543_fu_647_p2;

assign zext_ln543_fu_643_p1 = or_ln543_fu_638_p2;

assign zext_ln544_1_fu_673_p1 = add_ln544_fu_667_p2;

assign zext_ln544_fu_663_p1 = or_ln544_fu_658_p2;

assign zext_ln545_1_fu_693_p1 = add_ln545_fu_687_p2;

assign zext_ln545_fu_683_p1 = or_ln545_fu_678_p2;

assign zext_ln546_1_fu_713_p1 = add_ln546_fu_707_p2;

assign zext_ln546_fu_703_p1 = or_ln546_fu_698_p2;

assign zext_ln547_1_fu_733_p1 = add_ln547_fu_727_p2;

assign zext_ln547_fu_723_p1 = or_ln547_fu_718_p2;

assign zext_ln548_1_fu_753_p1 = add_ln548_fu_747_p2;

assign zext_ln548_fu_743_p1 = or_ln548_fu_738_p2;

always @ (posedge ap_clk) begin
    zext_ln417_reg_774[2:0] <= 3'b000;
    zext_ln417_reg_774[7] <= 1'b0;
    state_0_s_addr_3_reg_794[4] <= 1'b0;
    shl_ln1_reg_885[2:0] <= 3'b000;
end

endmodule //shake256
