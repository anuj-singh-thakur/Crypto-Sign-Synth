set moduleName pqcrystals_dilithium2_ref_signature_1
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set C_modelName {pqcrystals_dilithium2_ref_signature.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ sm int 8 regular {array 5720 { 2 2 } 1 1 }  }
	{ mlen int 64 regular  }
	{ sk int 8 regular {array 2544 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sm", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "mlen", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "sk", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 23
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ sm_address0 sc_out sc_lv 13 signal 0 } 
	{ sm_ce0 sc_out sc_logic 1 signal 0 } 
	{ sm_we0 sc_out sc_logic 1 signal 0 } 
	{ sm_d0 sc_out sc_lv 8 signal 0 } 
	{ sm_q0 sc_in sc_lv 8 signal 0 } 
	{ sm_address1 sc_out sc_lv 13 signal 0 } 
	{ sm_ce1 sc_out sc_logic 1 signal 0 } 
	{ sm_we1 sc_out sc_logic 1 signal 0 } 
	{ sm_d1 sc_out sc_lv 8 signal 0 } 
	{ sm_q1 sc_in sc_lv 8 signal 0 } 
	{ mlen sc_in sc_lv 64 signal 1 } 
	{ sk_address0 sc_out sc_lv 12 signal 2 } 
	{ sk_ce0 sc_out sc_logic 1 signal 2 } 
	{ sk_q0 sc_in sc_lv 8 signal 2 } 
	{ sk_address1 sc_out sc_lv 12 signal 2 } 
	{ sk_ce1 sc_out sc_logic 1 signal 2 } 
	{ sk_q1 sc_in sc_lv 8 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "sm_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "sm", "role": "address0" }} , 
 	{ "name": "sm_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sm", "role": "ce0" }} , 
 	{ "name": "sm_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sm", "role": "we0" }} , 
 	{ "name": "sm_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sm", "role": "d0" }} , 
 	{ "name": "sm_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sm", "role": "q0" }} , 
 	{ "name": "sm_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "sm", "role": "address1" }} , 
 	{ "name": "sm_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sm", "role": "ce1" }} , 
 	{ "name": "sm_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sm", "role": "we1" }} , 
 	{ "name": "sm_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sm", "role": "d1" }} , 
 	{ "name": "sm_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sm", "role": "q1" }} , 
 	{ "name": "mlen", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "mlen", "role": "default" }} , 
 	{ "name": "sk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address0" }} , 
 	{ "name": "sk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce0" }} , 
 	{ "name": "sk_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q0" }} , 
 	{ "name": "sk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address1" }} , 
 	{ "name": "sk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce1" }} , 
 	{ "name": "sk_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "19", "21", "23", "25", "27", "30", "32", "35", "55", "58", "60", "62", "64", "65", "67", "105", "110", "115", "120", "151", "156", "161", "164", "166", "171", "173", "184", "186", "190", "192", "195", "228", "233", "238", "240", "245", "250", "253", "255", "260", "262", "265", "267", "272", "275", "277", "279", "281", "283"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sm", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "283", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532", "Port" : "sm", "Inst_start_state" : "630", "Inst_end_state" : "631"},
					{"ID" : "35", "SubInstance" : "grp_keccak_absorb_1_fu_17224", "Port" : "sm", "Inst_start_state" : "580", "Inst_end_state" : "581"},
					{"ID" : "192", "SubInstance" : "grp_keccak_squeeze_1_fu_17405", "Port" : "sm", "Inst_start_state" : "586", "Inst_end_state" : "587"},
					{"ID" : "195", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414", "Port" : "sm", "Inst_start_state" : "588", "Inst_end_state" : "589"},
					{"ID" : "190", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_418_1_VITIS_LOOP_915_1_fu_17398", "Port" : "sm", "Inst_start_state" : "578", "Inst_end_state" : "579"}]},
			{"Name" : "mlen", "Type" : "None", "Direction" : "I"},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "27", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4_fu_17201", "Port" : "sk", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "55", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6_fu_17241", "Port" : "sk", "Inst_start_state" : "15", "Inst_end_state" : "16"},
					{"ID" : "17", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_122_1_fu_17167", "Port" : "sk", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "32", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5_fu_17217", "Port" : "sk", "Inst_start_state" : "9", "Inst_end_state" : "10"},
					{"ID" : "25", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_130_3_fu_17194", "Port" : "sk", "Inst_start_state" : "5", "Inst_end_state" : "6"},
					{"ID" : "23", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_126_2_fu_17187", "Port" : "sk", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "28", "Inst_end_state" : "29"},
					{"ID" : "64", "SubInstance" : "grp_KeccakF1600_StatePermute_1_fu_17267", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "23", "Inst_end_state" : "24"},
					{"ID" : "58", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_17248", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "15", "Inst_end_state" : "16"},
					{"ID" : "35", "SubInstance" : "grp_keccak_absorb_1_fu_17224", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "580", "Inst_end_state" : "581"},
					{"ID" : "120", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "46", "Inst_end_state" : "47"},
					{"ID" : "192", "SubInstance" : "grp_keccak_squeeze_1_fu_17405", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "586", "Inst_end_state" : "587"},
					{"ID" : "195", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "588", "Inst_end_state" : "589"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "173", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380", "Port" : "zetas", "Inst_start_state" : "618", "Inst_end_state" : "619"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_21_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state28", "LastState" : ["ap_ST_fsm_state29"], "QuitState" : ["ap_ST_fsm_state28"], "PreState" : ["ap_ST_fsm_state27"], "PostState" : ["ap_ST_fsm_state27"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_20_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state27", "LastState" : ["ap_ST_fsm_state28"], "QuitState" : ["ap_ST_fsm_state27"], "PreState" : ["ap_ST_fsm_state26"], "PostState" : ["ap_ST_fsm_state30"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_55_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state31", "LastState" : ["ap_ST_fsm_state34"], "QuitState" : ["ap_ST_fsm_state31"], "PreState" : ["ap_ST_fsm_state30"], "PostState" : ["ap_ST_fsm_state30"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_100_1_VITIS_LOOP_54_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state30", "LastState" : ["ap_ST_fsm_state31"], "QuitState" : ["ap_ST_fsm_state30"], "PreState" : ["ap_ST_fsm_state27"], "PostState" : ["ap_ST_fsm_state35"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_55_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state36", "LastState" : ["ap_ST_fsm_state39"], "QuitState" : ["ap_ST_fsm_state36"], "PreState" : ["ap_ST_fsm_state35"], "PostState" : ["ap_ST_fsm_state35"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_282_1_VITIS_LOOP_54_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state35", "LastState" : ["ap_ST_fsm_state36"], "QuitState" : ["ap_ST_fsm_state35"], "PreState" : ["ap_ST_fsm_state30"], "PostState" : ["ap_ST_fsm_state40"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_55_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state41", "LastState" : ["ap_ST_fsm_state44"], "QuitState" : ["ap_ST_fsm_state41"], "PreState" : ["ap_ST_fsm_state40"], "PostState" : ["ap_ST_fsm_state40"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_282_1_VITIS_LOOP_54_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state40", "LastState" : ["ap_ST_fsm_state41"], "QuitState" : ["ap_ST_fsm_state40"], "PreState" : ["ap_ST_fsm_state35"], "PostState" : ["ap_ST_fsm_state45"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_46_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state46", "LastState" : ["ap_ST_fsm_state47"], "QuitState" : ["ap_ST_fsm_state46"], "PreState" : ["ap_ST_fsm_state45"], "PostState" : ["ap_ST_fsm_state48"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_55_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state561", "LastState" : ["ap_ST_fsm_state564"], "QuitState" : ["ap_ST_fsm_state561"], "PreState" : ["ap_ST_fsm_state560"], "PostState" : ["ap_ST_fsm_state560"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_100_1_VITIS_LOOP_54_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state560", "LastState" : ["ap_ST_fsm_state561"], "QuitState" : ["ap_ST_fsm_state560"], "PreState" : ["ap_ST_fsm_state559"], "PostState" : ["ap_ST_fsm_state565"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_137_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state567", "LastState" : ["ap_ST_fsm_state570"], "QuitState" : ["ap_ST_fsm_state567"], "PreState" : ["ap_ST_fsm_state566"], "PostState" : ["ap_ST_fsm_state565"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_28_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state565", "LastState" : ["ap_ST_fsm_state567"], "QuitState" : ["ap_ST_fsm_state565"], "PreState" : ["ap_ST_fsm_state560"], "PostState" : ["ap_ST_fsm_state571"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_55_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state591", "LastState" : ["ap_ST_fsm_state594"], "QuitState" : ["ap_ST_fsm_state591"], "PreState" : ["ap_ST_fsm_state590"], "PostState" : ["ap_ST_fsm_state590"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_54_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state590", "LastState" : ["ap_ST_fsm_state591"], "QuitState" : ["ap_ST_fsm_state590"], "PreState" : ["ap_ST_fsm_state589"], "PostState" : ["ap_ST_fsm_state595"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_84_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state598", "LastState" : ["ap_ST_fsm_state601"], "QuitState" : ["ap_ST_fsm_state598"], "PreState" : ["ap_ST_fsm_state597"], "PostState" : ["ap_ST_fsm_state597"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_83_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state597", "LastState" : ["ap_ST_fsm_state598"], "QuitState" : ["ap_ST_fsm_state597"], "PreState" : ["ap_ST_fsm_state596"], "PostState" : ["ap_ST_fsm_state602"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_107_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state596", "LastState" : ["ap_ST_fsm_state602"], "QuitState" : ["ap_ST_fsm_state596"], "PreState" : ["ap_ST_fsm_state595"], "PostState" : ["ap_ST_fsm_state603"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "Loop 5", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "631", "FirstState" : "ap_ST_fsm_state45", "LastState" : ["ap_ST_fsm_state630"], "QuitState" : ["ap_ST_fsm_state630"], "PreState" : ["ap_ST_fsm_state40"], "PostState" : ["ap_ST_fsm_state631"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.KeccakF_RoundConstants_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.zetas_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.t_coeffs_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_s_0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.seedbuf_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mat_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s1_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.y_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.z_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.t0_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.s2_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w1_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.w0_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.h_vec_coeffs_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.cp_coeffs_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_s_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_122_1_fu_17167", "Parent" : "0", "Child" : ["18"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_122_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "34", "EstimateLatencyMax" : "34",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "seedbuf", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_122_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_122_1_fu_17167.flow_control_loop_pipe_sequential_init_U", "Parent" : "17"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_1_fu_17175", "Parent" : "0", "Child" : ["20"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "27", "EstimateLatencyMax" : "27",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "NotSupport"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_1_fu_17175.flow_control_loop_pipe_sequential_init_U", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_18_fu_17181", "Parent" : "0", "Child" : ["22"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_18",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "27", "EstimateLatencyMax" : "27",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s_0", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "NotSupport"}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_18_fu_17181.flow_control_loop_pipe_sequential_init_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_126_2_fu_17187", "Parent" : "0", "Child" : ["24"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_126_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "34", "EstimateLatencyMax" : "34",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "seedbuf", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_126_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_126_2_fu_17187.flow_control_loop_pipe_sequential_init_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_130_3_fu_17194", "Parent" : "0", "Child" : ["26"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_130_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "seedbuf", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_130_3", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_130_3_fu_17194.flow_control_loop_pipe_sequential_init_U", "Parent" : "25"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4_fu_17201", "Parent" : "0", "Child" : ["28", "29"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "515", "EstimateLatencyMax" : "515",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s1_vec_coeffs", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Port" : "r", "Inst_start_state" : "2", "Inst_end_state" : "130"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "28", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Port" : "sk", "Inst_start_state" : "2", "Inst_end_state" : "130"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_134_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "128", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4_fu_17201.grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Parent" : "27",
		"CDFG" : "pqcrystals_dilithium2_ref_polyeta_unpack_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "128",
		"VariableLatency" : "0", "ExactLatency" : "128", "EstimateLatencyMin" : "128", "EstimateLatencyMax" : "128",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "r_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4_fu_17201.flow_control_loop_pipe_sequential_init_U", "Parent" : "27"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_19_fu_17208", "Parent" : "0", "Child" : ["31"],
		"CDFG" : "keccak_absorb_19",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "26",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "m_offset", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_416_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_19_fu_17208.flow_control_loop_pipe_sequential_init_U", "Parent" : "30"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5_fu_17217", "Parent" : "0", "Child" : ["33", "34"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "515", "EstimateLatencyMax" : "515",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s2_vec_coeffs", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Port" : "r", "Inst_start_state" : "2", "Inst_end_state" : "130"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Port" : "sk", "Inst_start_state" : "2", "Inst_end_state" : "130"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_138_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "128", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5_fu_17217.grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Parent" : "32",
		"CDFG" : "pqcrystals_dilithium2_ref_polyeta_unpack_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "128",
		"VariableLatency" : "0", "ExactLatency" : "128", "EstimateLatencyMin" : "128", "EstimateLatencyMax" : "128",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "r_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5_fu_17217.flow_control_loop_pipe_sequential_init_U", "Parent" : "32"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224", "Parent" : "0", "Child" : ["36", "37", "39", "41", "43", "45", "47", "49", "51", "53"],
		"CDFG" : "keccak_absorb_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "41", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Port" : "s", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "45", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "43", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_291", "Port" : "state", "Inst_start_state" : "13", "Inst_end_state" : "14"}]},
			{"Name" : "pos_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Port" : "sm", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "41", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Port" : "sm", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "51", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325", "Port" : "sm", "Inst_start_state" : "17", "Inst_end_state" : "18"},
					{"ID" : "37", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262", "Port" : "sm", "Inst_start_state" : "2", "Inst_end_state" : "3"},
					{"ID" : "45", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Port" : "sm", "Inst_start_state" : "11", "Inst_end_state" : "12"}]},
			{"Name" : "m_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "mlen_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "43", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_291", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "13", "Inst_end_state" : "14"}]}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3", "ap_ST_fsm_state6"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_408_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state11", "LastState" : ["ap_ST_fsm_state14"], "QuitState" : ["ap_ST_fsm_state11"], "PreState" : ["ap_ST_fsm_state10"], "PostState" : ["ap_ST_fsm_state15"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.t_U", "Parent" : "35"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262", "Parent" : "35", "Child" : ["38"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_391_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln389", "Type" : "None", "Direction" : "I"},
			{"Name" : "xor_ln391_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_offset_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_391_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262.flow_control_loop_pipe_sequential_init_U", "Parent" : "37"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_1_fu_272", "Parent" : "35", "Child" : ["40"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_30_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_30_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_1_fu_272.flow_control_loop_pipe_sequential_init_U", "Parent" : "39"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Parent" : "35", "Child" : ["42"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_400_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "trunc_ln400_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_offset_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_addr_1_idx", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "trunc_ln57", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_400_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage1", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage1_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278.flow_control_loop_pipe_sequential_init_U", "Parent" : "41"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_KeccakF1600_StatePermute_fu_291", "Parent" : "35", "Child" : ["44"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_KeccakF1600_StatePermute_fu_291.KeccakF_RoundConstants_U", "Parent" : "43"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Parent" : "35", "Child" : ["46"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_409_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "70", "EstimateLatencyMax" : "70",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "m_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln384", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_409_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299.flow_control_loop_pipe_sequential_init_U", "Parent" : "45"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Parent" : "35", "Child" : ["48"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_416_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "66",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "tmp_921", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln31_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "trunc_ln418_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_416_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage1", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage1_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309.flow_control_loop_pipe_sequential_init_U", "Parent" : "47"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_423_6_fu_320", "Parent" : "35", "Child" : ["50"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_423_6",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_423_6", "PipelineType" : "NotSupport"}]},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_423_6_fu_320.flow_control_loop_pipe_sequential_init_U", "Parent" : "49"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325", "Parent" : "35", "Child" : ["52"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_425_7",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sext_ln384", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln419_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln31_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_425_7", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325.flow_control_loop_pipe_sequential_init_U", "Parent" : "51"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_124_fu_335", "Parent" : "35", "Child" : ["54"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_30_124",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r_2_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_30_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_124_fu_335.flow_control_loop_pipe_sequential_init_U", "Parent" : "53"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6_fu_17241", "Parent" : "0", "Child" : ["56", "57"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "835", "EstimateLatencyMax" : "835",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t0_vec_coeffs", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "56", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyt0_unpack_1_fu_50", "Port" : "r", "Inst_start_state" : "2", "Inst_end_state" : "210"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "56", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyt0_unpack_1_fu_50", "Port" : "sk", "Inst_start_state" : "2", "Inst_end_state" : "210"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_142_6", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "208", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6_fu_17241.grp_pqcrystals_dilithium2_ref_polyt0_unpack_1_fu_50", "Parent" : "55",
		"CDFG" : "pqcrystals_dilithium2_ref_polyt0_unpack_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "208",
		"VariableLatency" : "0", "ExactLatency" : "208", "EstimateLatencyMin" : "208", "EstimateLatencyMax" : "208",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "r_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6_fu_17241.flow_control_loop_pipe_sequential_init_U", "Parent" : "55"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_KeccakF1600_StatePermute_fu_17248", "Parent" : "0", "Child" : ["59"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_KeccakF1600_StatePermute_fu_17248.KeccakF_RoundConstants_U", "Parent" : "58"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_5_fu_17255", "Parent" : "0", "Child" : ["61"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "26",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "seedbuf", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_540_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_5_fu_17255.flow_control_loop_pipe_sequential_init_U", "Parent" : "60"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_416_5_fu_17261", "Parent" : "0", "Child" : ["63"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_416_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "42", "EstimateLatencyMax" : "42",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "seedbuf", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "state_s_0", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_416_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_416_5_fu_17261.flow_control_loop_pipe_sequential_init_U", "Parent" : "62"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_KeccakF1600_StatePermute_1_fu_17267", "Parent" : "0",
		"CDFG" : "KeccakF1600_StatePermute_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_59_fu_17274", "Parent" : "0", "Child" : ["66"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_59",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "26",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "seedbuf", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_540_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_59_fu_17274.flow_control_loop_pipe_sequential_init_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280", "Parent" : "0", "Child" : ["68", "69", "70", "72", "92", "94", "96", "98", "100", "102", "104"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "102", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_122_fu_247", "Port" : "a", "Inst_start_state" : "32", "Inst_end_state" : "33"},
					{"ID" : "94", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_1_fu_217", "Port" : "a", "Inst_start_state" : "10", "Inst_end_state" : "14"}]},
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_offset1", "Type" : "None", "Direction" : "I"},
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_416_5_fu_190", "Port" : "seed", "Inst_start_state" : "2", "Inst_end_state" : "3"}]},
			{"Name" : "nonce", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "92", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_210", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "28", "Inst_end_state" : "29"},
					{"ID" : "72", "SubInstance" : "grp_keccak_absorb_fu_197", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "4", "Inst_end_state" : "5"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "34", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_474_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "34", "FirstState" : "ap_ST_fsm_state10", "LastState" : ["ap_ST_fsm_state13"], "QuitState" : ["ap_ST_fsm_state10"], "PreState" : ["ap_ST_fsm_state9"], "PostState" : ["ap_ST_fsm_state14"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_377_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "34", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state34"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.buf_U", "Parent" : "67"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.state_s_U", "Parent" : "67"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_416_5_fu_190", "Parent" : "67", "Child" : ["71"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_416_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "18", "EstimateLatencyMax" : "18",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_416_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_416_5_fu_190.flow_control_loop_pipe_sequential_init_U", "Parent" : "70"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197", "Parent" : "67", "Child" : ["73", "74", "76", "78", "80", "82", "84", "86", "88", "90"],
		"CDFG" : "keccak_absorb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "82", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "80", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_277", "Port" : "state", "Inst_start_state" : "13", "Inst_end_state" : "14"},
					{"ID" : "78", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268", "Port" : "s", "Inst_start_state" : "7", "Inst_end_state" : "8"}]},
			{"Name" : "r", "Type" : "None", "Direction" : "I"},
			{"Name" : "pos_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "80", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_277", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "13", "Inst_end_state" : "14"}]}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3", "ap_ST_fsm_state6"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_408_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state11", "LastState" : ["ap_ST_fsm_state14"], "QuitState" : ["ap_ST_fsm_state11"], "PreState" : ["ap_ST_fsm_state10"], "PostState" : ["ap_ST_fsm_state15"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.t_U", "Parent" : "72"},
	{"ID" : "74", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_391_1_fu_253", "Parent" : "72", "Child" : ["75"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_391_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln389", "Type" : "None", "Direction" : "I"},
			{"Name" : "xor_ln391_3_cast11", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_391_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_391_1_fu_253.flow_control_loop_pipe_sequential_init_U", "Parent" : "74"},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_1_fu_262", "Parent" : "72", "Child" : ["77"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_30_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r_4_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_30_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_1_fu_262.flow_control_loop_pipe_sequential_init_U", "Parent" : "76"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268", "Parent" : "72", "Child" : ["79"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_400_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "select_ln31_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln400", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_400_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268.flow_control_loop_pipe_sequential_init_U", "Parent" : "78"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_KeccakF1600_StatePermute_fu_277", "Parent" : "72", "Child" : ["81"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "81", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_KeccakF1600_StatePermute_fu_277.KeccakF_RoundConstants_U", "Parent" : "80"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285", "Parent" : "72", "Child" : ["83"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_409_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "19", "EstimateLatencyMax" : "23",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "trunc_ln63", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_409_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "83", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285.flow_control_loop_pipe_sequential_init_U", "Parent" : "82"},
	{"ID" : "84", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294", "Parent" : "72", "Child" : ["85"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_416_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "22",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "tmp_925", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln418_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_416_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "85", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294.flow_control_loop_pipe_sequential_init_U", "Parent" : "84"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_423_6_fu_304", "Parent" : "72", "Child" : ["87"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_423_6",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_423_6", "PipelineType" : "NotSupport"}]},
	{"ID" : "87", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_423_6_fu_304.flow_control_loop_pipe_sequential_init_U", "Parent" : "86"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_425_7_fu_309", "Parent" : "72", "Child" : ["89"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_425_7",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sext_ln384_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "xor_ln31", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_425_7", "PipelineType" : "NotSupport"}]},
	{"ID" : "89", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_425_7_fu_309.flow_control_loop_pipe_sequential_init_U", "Parent" : "88"},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_125_fu_318", "Parent" : "72", "Child" : ["91"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_30_125",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r_6_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_30_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "91", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_125_fu_318.flow_control_loop_pipe_sequential_init_U", "Parent" : "90"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_KeccakF1600_StatePermute_fu_210", "Parent" : "67", "Child" : ["93"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_KeccakF1600_StatePermute_fu_210.KeccakF_RoundConstants_U", "Parent" : "92"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_1_fu_217", "Parent" : "67", "Child" : ["95"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "zext_ln344_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ctr_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_337_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "3", "FirstState" : "ap_ST_fsm_pp0_stage1", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage1_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_1_fu_217.flow_control_loop_pipe_sequential_init_U", "Parent" : "94"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_2_fu_226", "Parent" : "67", "Child" : ["97"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "86", "EstimateLatencyMax" : "86",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "idx", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_476_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_2_fu_226.flow_control_loop_pipe_sequential_init_U", "Parent" : "96"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_379_2_fu_233", "Parent" : "67", "Child" : ["99"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_379_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "4",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "trunc_ln367_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln379", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_379_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_379_2_fu_233.flow_control_loop_pipe_sequential_init_U", "Parent" : "98"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_221_fu_240", "Parent" : "67", "Child" : ["101"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_221",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "86", "EstimateLatencyMax" : "86",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "trunc_ln367_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_476_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_221_fu_240.flow_control_loop_pipe_sequential_init_U", "Parent" : "100"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_122_fu_247", "Parent" : "67", "Child" : ["103"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_122",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sub_ln384", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln368", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "zext_ln384", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln344_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ctr_4_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_337_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "3", "FirstState" : "ap_ST_fsm_pp0_stage1", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage1_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_122_fu_247.flow_control_loop_pipe_sequential_init_U", "Parent" : "102"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.urem_10s_3ns_9_14_seq_1_U132", "Parent" : "67"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291", "Parent" : "0", "Child" : ["106", "107", "108", "109"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln57", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln57_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln58_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "s1_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zext_ln50_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln57", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_57_3", "PipelineType" : "NotSupport"}]},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291.mul_32s_23s_54_1_1_U141", "Parent" : "105"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291.mul_32s_27ns_32_1_1_U142", "Parent" : "105"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291.mul_32s_24s_55_1_1_U143", "Parent" : "105"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291.flow_control_loop_pipe_sequential_init_U", "Parent" : "105"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302", "Parent" : "0", "Child" : ["111", "112", "113", "114"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln57_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln57_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln58_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "s2_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zext_ln50_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln57_1", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_57_3", "PipelineType" : "NotSupport"}]},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302.mul_32s_23s_54_1_1_U153", "Parent" : "110"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302.mul_32s_27ns_32_1_1_U154", "Parent" : "110"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302.mul_32s_24s_55_1_1_U155", "Parent" : "110"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302.flow_control_loop_pipe_sequential_init_U", "Parent" : "110"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313", "Parent" : "0", "Child" : ["116", "117", "118", "119"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln57_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln57_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln58_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "t0_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zext_ln50_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln57_2", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_57_3", "PipelineType" : "NotSupport"}]},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313.mul_32s_23s_54_1_1_U162", "Parent" : "115"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313.mul_32s_27ns_32_1_1_U163", "Parent" : "115"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313.mul_32s_24s_55_1_1_U164", "Parent" : "115"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313.flow_control_loop_pipe_sequential_init_U", "Parent" : "115"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324", "Parent" : "0", "Child" : ["121", "122", "123", "125", "145", "147", "149"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_gamma1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169", "Port" : "a", "Inst_start_state" : "10", "Inst_end_state" : "14"}]},
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "123", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142", "Port" : "seed", "Inst_start_state" : "2", "Inst_end_state" : "3"}]},
			{"Name" : "nonce", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "125", "SubInstance" : "grp_keccak_absorb_fu_149", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "4", "Inst_end_state" : "5"},
					{"ID" : "145", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_162", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "10", "Inst_end_state" : "11"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "14", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_474_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "14", "FirstState" : "ap_ST_fsm_state10", "LastState" : ["ap_ST_fsm_state13"], "QuitState" : ["ap_ST_fsm_state10"], "PreState" : ["ap_ST_fsm_state9"], "PostState" : ["ap_ST_fsm_state14"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.buf_U", "Parent" : "120"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.state_s_U", "Parent" : "120"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142", "Parent" : "120", "Child" : ["124"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "26", "EstimateLatencyMax" : "26",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_416_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142.flow_control_loop_pipe_sequential_init_U", "Parent" : "123"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149", "Parent" : "120", "Child" : ["126", "127", "129", "131", "133", "135", "137", "139", "141", "143"],
		"CDFG" : "keccak_absorb",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "137", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "135", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "133", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_277", "Port" : "state", "Inst_start_state" : "13", "Inst_end_state" : "14"},
					{"ID" : "131", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268", "Port" : "s", "Inst_start_state" : "7", "Inst_end_state" : "8"}]},
			{"Name" : "r", "Type" : "None", "Direction" : "I"},
			{"Name" : "pos_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "133", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_277", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "13", "Inst_end_state" : "14"}]}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3", "ap_ST_fsm_state6"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_408_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state11", "LastState" : ["ap_ST_fsm_state14"], "QuitState" : ["ap_ST_fsm_state11"], "PreState" : ["ap_ST_fsm_state10"], "PostState" : ["ap_ST_fsm_state15"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.t_U", "Parent" : "125"},
	{"ID" : "127", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_391_1_fu_253", "Parent" : "125", "Child" : ["128"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_391_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln389", "Type" : "None", "Direction" : "I"},
			{"Name" : "xor_ln391_3_cast11", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_391_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "128", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_391_1_fu_253.flow_control_loop_pipe_sequential_init_U", "Parent" : "127"},
	{"ID" : "129", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_1_fu_262", "Parent" : "125", "Child" : ["130"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_30_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r_4_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_30_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "130", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_1_fu_262.flow_control_loop_pipe_sequential_init_U", "Parent" : "129"},
	{"ID" : "131", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268", "Parent" : "125", "Child" : ["132"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_400_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "select_ln31_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln400", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_400_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "132", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268.flow_control_loop_pipe_sequential_init_U", "Parent" : "131"},
	{"ID" : "133", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_KeccakF1600_StatePermute_fu_277", "Parent" : "125", "Child" : ["134"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "134", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_KeccakF1600_StatePermute_fu_277.KeccakF_RoundConstants_U", "Parent" : "133"},
	{"ID" : "135", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285", "Parent" : "125", "Child" : ["136"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_409_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "19", "EstimateLatencyMax" : "23",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "trunc_ln63", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_409_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "136", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285.flow_control_loop_pipe_sequential_init_U", "Parent" : "135"},
	{"ID" : "137", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294", "Parent" : "125", "Child" : ["138"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_416_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "22",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "tmp_925", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "select_ln31_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln418_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_416_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "138", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294.flow_control_loop_pipe_sequential_init_U", "Parent" : "137"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_423_6_fu_304", "Parent" : "125", "Child" : ["140"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_423_6",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_423_6", "PipelineType" : "NotSupport"}]},
	{"ID" : "140", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_423_6_fu_304.flow_control_loop_pipe_sequential_init_U", "Parent" : "139"},
	{"ID" : "141", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_425_7_fu_309", "Parent" : "125", "Child" : ["142"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_425_7",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sext_ln384_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "xor_ln31", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_425_7", "PipelineType" : "NotSupport"}]},
	{"ID" : "142", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_425_7_fu_309.flow_control_loop_pipe_sequential_init_U", "Parent" : "141"},
	{"ID" : "143", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_125_fu_318", "Parent" : "125", "Child" : ["144"],
		"CDFG" : "keccak_absorb_Pipeline_VITIS_LOOP_30_125",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r_6_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_30_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "144", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_125_fu_318.flow_control_loop_pipe_sequential_init_U", "Parent" : "143"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_KeccakF1600_StatePermute_fu_162", "Parent" : "120", "Child" : ["146"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "146", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_KeccakF1600_StatePermute_fu_162.KeccakF_RoundConstants_U", "Parent" : "145"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169", "Parent" : "120", "Child" : ["148"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "322", "EstimateLatencyMax" : "322",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_854_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "5", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "148", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169.flow_control_loop_pipe_sequential_init_U", "Parent" : "147"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177", "Parent" : "120", "Child" : ["150"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "70", "EstimateLatencyMax" : "70",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "idx", "Type" : "None", "Direction" : "I"},
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_476_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177.flow_control_loop_pipe_sequential_init_U", "Parent" : "149"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334", "Parent" : "0", "Child" : ["152", "153", "154", "155"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln57_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln57_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln58_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zext_ln50_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln57_3", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_57_3", "PipelineType" : "NotSupport"}]},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334.mul_32s_23s_54_1_1_U184", "Parent" : "151"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334.mul_32s_27ns_32_1_1_U185", "Parent" : "151"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334.mul_32s_24s_55_1_1_U186", "Parent" : "151"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334.flow_control_loop_pipe_sequential_init_U", "Parent" : "151"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345", "Parent" : "0", "Child" : ["157", "158", "159", "160"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "258", "EstimateLatencyMax" : "258",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "i_17", "Type" : "None", "Direction" : "I"},
			{"Name" : "mat", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "zext_ln181_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "w1_vec_coeffs", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_180_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345.mul_32s_23ns_55_1_1_U193", "Parent" : "156"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345.mul_32s_27ns_32_1_1_U194", "Parent" : "156"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345.mul_32s_24s_55_1_1_U195", "Parent" : "156"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345.flow_control_loop_pipe_sequential_init_U", "Parent" : "156"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_1_fu_17354", "Parent" : "0", "Child" : ["162", "163"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1029", "EstimateLatencyMax" : "1029",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w1_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_187_1_VITIS_LOOP_32_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter4", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter4", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_1_fu_17354.mac_muladd_9s_24s_32ns_32_4_1_U213", "Parent" : "161"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_1_fu_17354.flow_control_loop_pipe_sequential_init_U", "Parent" : "161"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_114_fu_17359", "Parent" : "0", "Child" : ["165"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_114",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "27", "EstimateLatencyMax" : "27",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "NotSupport"}]},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_114_fu_17359.flow_control_loop_pipe_sequential_init_U", "Parent" : "164"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364", "Parent" : "0", "Child" : ["167", "168", "169", "170"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "258", "EstimateLatencyMax" : "258",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "tmp_20", "Type" : "None", "Direction" : "I"},
			{"Name" : "mat", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "zext_ln181_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "t_coeffs", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_180_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364.mul_32s_23ns_55_1_1_U202", "Parent" : "166"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364.mul_32s_27ns_32_1_1_U203", "Parent" : "166"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364.mul_32s_24s_55_1_1_U204", "Parent" : "166"},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364.flow_control_loop_pipe_sequential_init_U", "Parent" : "166"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_87_1_fu_17373", "Parent" : "0", "Child" : ["172"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_87_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "258", "EstimateLatencyMax" : "258",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln181_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "w1_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "t_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_87_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "172", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_87_1_fu_17373.flow_control_loop_pipe_sequential_init_U", "Parent" : "171"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380", "Parent" : "0", "Child" : ["174", "179"],
		"CDFG" : "pqcrystals_dilithium2_ref_polyveck_invntt_tomont",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "v", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "179", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138", "Port" : "v", "Inst_start_state" : "5", "Inst_end_state" : "6"},
					{"ID" : "174", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131", "Port" : "v", "Inst_start_state" : "3", "Inst_end_state" : "7"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_84_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state4", "LastState" : ["ap_ST_fsm_state6"], "QuitState" : ["ap_ST_fsm_state4"], "PreState" : ["ap_ST_fsm_state3"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_83_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state3", "LastState" : ["ap_ST_fsm_state4"], "QuitState" : ["ap_ST_fsm_state3"], "PreState" : ["ap_ST_fsm_state2"], "PostState" : ["ap_ST_fsm_state7"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_298_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state7"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131", "Parent" : "173", "Child" : ["175", "176", "177", "178"],
		"CDFG" : "pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "258", "EstimateLatencyMax" : "258",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln87", "Type" : "None", "Direction" : "I"},
			{"Name" : "v", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_95_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "175", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_17ns_49_1_1_U225", "Parent" : "174"},
	{"ID" : "176", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_27ns_32_1_1_U226", "Parent" : "174"},
	{"ID" : "177", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_24s_55_1_1_U227", "Parent" : "174"},
	{"ID" : "178", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.flow_control_loop_pipe_sequential_init_U", "Parent" : "174"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138", "Parent" : "173", "Child" : ["180", "181", "182", "183"],
		"CDFG" : "pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln86", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln86_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln87", "Type" : "None", "Direction" : "I"},
			{"Name" : "v", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zext_ln78_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln86", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_86_3", "PipelineType" : "NotSupport"}]},
	{"ID" : "180", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_23s_54_1_1_U216", "Parent" : "179"},
	{"ID" : "181", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_27ns_32_1_1_U217", "Parent" : "179"},
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_24s_55_1_1_U218", "Parent" : "179"},
	{"ID" : "183", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.flow_control_loop_pipe_sequential_init_U", "Parent" : "179"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_1_fu_17387", "Parent" : "0", "Child" : ["185"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w1_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_202_1_VITIS_LOOP_50_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "185", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_1_fu_17387.flow_control_loop_pipe_sequential_init_U", "Parent" : "184"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1_fu_17392", "Parent" : "0", "Child" : ["187", "188", "189"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1032", "EstimateLatencyMax" : "1032",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w1_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "w0_vec_coeffs", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_371_1_VITIS_LOOP_225_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter7", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter7", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1_fu_17392.mac_muladd_25s_14ns_24ns_32_4_1_U234", "Parent" : "186"},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1_fu_17392.mac_muladd_8s_19s_32s_32_4_1_U235", "Parent" : "186"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1_fu_17392.flow_control_loop_pipe_sequential_init_U", "Parent" : "186"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_418_1_VITIS_LOOP_915_1_fu_17398", "Parent" : "0", "Child" : ["191"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_418_1_VITIS_LOOP_915_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "515", "EstimateLatencyMax" : "515",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w1_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_418_1_VITIS_LOOP_915_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "2", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_418_1_VITIS_LOOP_915_1_fu_17398.flow_control_loop_pipe_sequential_init_U", "Parent" : "190"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeeze_1_fu_17405", "Parent" : "0", "Child" : ["193"],
		"CDFG" : "keccak_squeeze_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "72", "EstimateLatencyMax" : "72",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sm", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_172", "Port" : "state", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_172", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "1", "Inst_end_state" : "2"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_540_5", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state3", "LastState" : ["ap_ST_fsm_state7"], "QuitState" : ["ap_ST_fsm_state3"], "PreState" : ["ap_ST_fsm_state2"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeeze_1_fu_17405.grp_KeccakF1600_StatePermute_fu_172", "Parent" : "192", "Child" : ["194"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "194", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_keccak_squeeze_1_fu_17405.grp_KeccakF1600_StatePermute_fu_172.KeccakF_RoundConstants_U", "Parent" : "193"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414", "Parent" : "0", "Child" : ["196", "197", "198", "218", "220", "222", "224", "226"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_challenge_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "c", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "218", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_527_2_fu_218", "Port" : "c", "Inst_start_state" : "2", "Inst_end_state" : "3"}]},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "198", "SubInstance" : "grp_keccak_absorb_1_fu_203", "Port" : "sm", "Inst_start_state" : "2", "Inst_end_state" : "3"}]},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_224", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "15", "Inst_end_state" : "16"},
					{"ID" : "198", "SubInstance" : "grp_keccak_absorb_1_fu_203", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "2", "Inst_end_state" : "3"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "22", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_530_4", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "22", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state20"], "QuitState" : ["ap_ST_fsm_state20"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state21"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_529_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "22", "FirstState" : "ap_ST_fsm_state14", "LastState" : ["ap_ST_fsm_state22"], "QuitState" : ["ap_ST_fsm_state14"], "PreState" : ["ap_ST_fsm_state13"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.buf_U", "Parent" : "195"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.state_s_U", "Parent" : "195"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203", "Parent" : "195", "Child" : ["199", "200", "202", "204", "206", "208", "210", "212", "214", "216"],
		"CDFG" : "keccak_absorb_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "204", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Port" : "s", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "208", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "206", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_291", "Port" : "state", "Inst_start_state" : "13", "Inst_end_state" : "14"}]},
			{"Name" : "pos_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Port" : "sm", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "204", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Port" : "sm", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "214", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325", "Port" : "sm", "Inst_start_state" : "17", "Inst_end_state" : "18"},
					{"ID" : "200", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262", "Port" : "sm", "Inst_start_state" : "2", "Inst_end_state" : "3"},
					{"ID" : "208", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Port" : "sm", "Inst_start_state" : "11", "Inst_end_state" : "12"}]},
			{"Name" : "m_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "mlen_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_291", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "13", "Inst_end_state" : "14"}]}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3", "ap_ST_fsm_state6"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_408_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state11", "LastState" : ["ap_ST_fsm_state14"], "QuitState" : ["ap_ST_fsm_state11"], "PreState" : ["ap_ST_fsm_state10"], "PostState" : ["ap_ST_fsm_state15"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "199", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.t_U", "Parent" : "198"},
	{"ID" : "200", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262", "Parent" : "198", "Child" : ["201"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_391_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln389", "Type" : "None", "Direction" : "I"},
			{"Name" : "xor_ln391_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_offset_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_391_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "201", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262.flow_control_loop_pipe_sequential_init_U", "Parent" : "200"},
	{"ID" : "202", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_1_fu_272", "Parent" : "198", "Child" : ["203"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_30_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_30_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "203", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_1_fu_272.flow_control_loop_pipe_sequential_init_U", "Parent" : "202"},
	{"ID" : "204", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Parent" : "198", "Child" : ["205"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_400_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "trunc_ln400_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_offset_cast", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_addr_1_idx", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "trunc_ln57", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_400_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage1", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage1_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "205", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278.flow_control_loop_pipe_sequential_init_U", "Parent" : "204"},
	{"ID" : "206", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_KeccakF1600_StatePermute_fu_291", "Parent" : "198", "Child" : ["207"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "207", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_KeccakF1600_StatePermute_fu_291.KeccakF_RoundConstants_U", "Parent" : "206"},
	{"ID" : "208", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Parent" : "198", "Child" : ["209"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_409_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "70", "EstimateLatencyMax" : "70",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "m_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln384", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_409_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "209", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299.flow_control_loop_pipe_sequential_init_U", "Parent" : "208"},
	{"ID" : "210", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Parent" : "198", "Child" : ["211"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_416_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "66",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "tmp_921", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln31_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "trunc_ln418_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "s", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_416_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage1", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage1_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "211", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309.flow_control_loop_pipe_sequential_init_U", "Parent" : "210"},
	{"ID" : "212", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_423_6_fu_320", "Parent" : "198", "Child" : ["213"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_423_6",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_423_6", "PipelineType" : "NotSupport"}]},
	{"ID" : "213", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_423_6_fu_320.flow_control_loop_pipe_sequential_init_U", "Parent" : "212"},
	{"ID" : "214", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325", "Parent" : "198", "Child" : ["215"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_425_7",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sext_ln384", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln419_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln31_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "t", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_425_7", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "215", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325.flow_control_loop_pipe_sequential_init_U", "Parent" : "214"},
	{"ID" : "216", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_124_fu_335", "Parent" : "198", "Child" : ["217"],
		"CDFG" : "keccak_absorb_1_Pipeline_VITIS_LOOP_30_124",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "r_2_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_30_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "217", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_124_fu_335.flow_control_loop_pipe_sequential_init_U", "Parent" : "216"},
	{"ID" : "218", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_527_2_fu_218", "Parent" : "195", "Child" : ["219"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_527_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "258", "EstimateLatencyMax" : "258",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "c", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_527_2", "PipelineType" : "NotSupport"}]},
	{"ID" : "219", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_527_2_fu_218.flow_control_loop_pipe_sequential_init_U", "Parent" : "218"},
	{"ID" : "220", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_KeccakF1600_StatePermute_fu_224", "Parent" : "195", "Child" : ["221"],
		"CDFG" : "KeccakF1600_StatePermute",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "50", "EstimateLatencyMax" : "50",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_131_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "28", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state16"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state17"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "221", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_KeccakF1600_StatePermute_fu_224.KeccakF_RoundConstants_U", "Parent" : "220"},
	{"ID" : "222", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_2_fu_231", "Parent" : "195", "Child" : ["223"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "70", "EstimateLatencyMax" : "70",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_476_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "223", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_2_fu_231.flow_control_loop_pipe_sequential_init_U", "Parent" : "222"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_523_1_fu_237", "Parent" : "195", "Child" : ["225"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_523_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "10", "EstimateLatencyMax" : "10",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "signs_out", "Type" : "OVld", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_523_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "225", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_523_1_fu_237.flow_control_loop_pipe_sequential_init_U", "Parent" : "224"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_223_fu_243", "Parent" : "195", "Child" : ["227"],
		"CDFG" : "pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_223",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "70", "EstimateLatencyMax" : "70",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buf_r", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_476_2", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "4", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "227", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_223_fu_243.flow_control_loop_pipe_sequential_init_U", "Parent" : "226"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423", "Parent" : "0", "Child" : ["229", "230", "231", "232"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s1_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cp_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_114_1_VITIS_LOOP_180_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "229", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423.mul_32s_32s_64_1_1_U263", "Parent" : "228"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423.mul_32s_27ns_32_1_1_U264", "Parent" : "228"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423.mul_32s_24s_55_1_1_U265", "Parent" : "228"},
	{"ID" : "232", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423.flow_control_loop_pipe_sequential_init_U", "Parent" : "228"},
	{"ID" : "233", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430", "Parent" : "0", "Child" : ["234", "235", "236", "237"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln57_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "add_ln57_9", "Type" : "None", "Direction" : "I"},
			{"Name" : "len_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "cp_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "sext_ln57_4", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_57_3", "PipelineType" : "NotSupport"}]},
	{"ID" : "234", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430.mul_32s_23s_54_1_1_U255", "Parent" : "233"},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430.mul_32s_27ns_32_1_1_U256", "Parent" : "233"},
	{"ID" : "236", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430.mul_32s_24s_55_1_1_U257", "Parent" : "233"},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430.flow_control_loop_pipe_sequential_init_U", "Parent" : "233"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_85_1_VITIS_LOOP_87_1_fu_17441", "Parent" : "0", "Child" : ["239"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_85_1_VITIS_LOOP_87_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "y_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_85_1_VITIS_LOOP_87_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_85_1_VITIS_LOOP_87_1_fu_17441.flow_control_loop_pipe_sequential_init_U", "Parent" : "238"},
	{"ID" : "240", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447", "Parent" : "0", "Child" : ["241", "242", "243", "244"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "258", "EstimateLatencyMax" : "258",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln87", "Type" : "None", "Direction" : "I"},
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_95_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447.mul_32s_17ns_49_1_1_U279", "Parent" : "240"},
	{"ID" : "242", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447.mul_32s_27ns_32_1_1_U280", "Parent" : "240"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447.mul_32s_24s_55_1_1_U281", "Parent" : "240"},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447.flow_control_loop_pipe_sequential_init_U", "Parent" : "240"},
	{"ID" : "245", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453", "Parent" : "0", "Child" : ["246", "247", "248", "249"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "zext_ln86", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln86_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "zext_ln87", "Type" : "None", "Direction" : "I"},
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "zext_ln78_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "sext_ln86", "Type" : "None", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_86_3", "PipelineType" : "NotSupport"}]},
	{"ID" : "246", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453.mul_32s_23s_54_1_1_U270", "Parent" : "245"},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453.mul_32s_27ns_32_1_1_U271", "Parent" : "245"},
	{"ID" : "248", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453.mul_32s_24s_55_1_1_U272", "Parent" : "245"},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453.flow_control_loop_pipe_sequential_init_U", "Parent" : "245"},
	{"ID" : "250", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1_fu_17463", "Parent" : "0", "Child" : ["251", "252"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1029", "EstimateLatencyMax" : "1029",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_53_1_VITIS_LOOP_32_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter4", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter4", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "251", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1_fu_17463.mac_muladd_9s_24s_32ns_32_4_1_U286", "Parent" : "250"},
	{"ID" : "252", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1_fu_17463.flow_control_loop_pipe_sequential_init_U", "Parent" : "250"},
	{"ID" : "253", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_158_1_VITIS_LOOP_298_1_fu_17468", "Parent" : "0", "Child" : ["254"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_158_1_VITIS_LOOP_298_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "2051",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "z_vec_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_158_1_VITIS_LOOP_298_1", "PipelineType" : "NotSupport"}]},
	{"ID" : "254", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_158_1_VITIS_LOOP_298_1_fu_17468.flow_control_loop_pipe_sequential_init_U", "Parent" : "253"},
	{"ID" : "255", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473", "Parent" : "0", "Child" : ["256", "257", "258", "259"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "s2_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cp_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_305_1_VITIS_LOOP_180_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "256", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473.mul_32s_32s_64_1_1_U289", "Parent" : "255"},
	{"ID" : "257", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473.mul_32s_27ns_32_1_1_U290", "Parent" : "255"},
	{"ID" : "258", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473.mul_32s_24s_55_1_1_U291", "Parent" : "255"},
	{"ID" : "259", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473.flow_control_loop_pipe_sequential_init_U", "Parent" : "255"},
	{"ID" : "260", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_252_1_VITIS_LOOP_108_1_fu_17480", "Parent" : "0", "Child" : ["261"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_252_1_VITIS_LOOP_108_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w0_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_252_1_VITIS_LOOP_108_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "261", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_252_1_VITIS_LOOP_108_1_fu_17480.flow_control_loop_pipe_sequential_init_U", "Parent" : "260"},
	{"ID" : "262", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_1_fu_17486", "Parent" : "0", "Child" : ["263", "264"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1029", "EstimateLatencyMax" : "1029",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w0_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_187_1_VITIS_LOOP_32_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter4", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter4", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "263", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_1_fu_17486.mac_muladd_9s_24s_32ns_32_4_1_U297", "Parent" : "262"},
	{"ID" : "264", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_1_fu_17486.flow_control_loop_pipe_sequential_init_U", "Parent" : "262"},
	{"ID" : "265", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_1_fu_17491", "Parent" : "0", "Child" : ["266"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "2051",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w0_vec_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_325_1_VITIS_LOOP_298_1", "PipelineType" : "NotSupport"}]},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_1_fu_17491.flow_control_loop_pipe_sequential_init_U", "Parent" : "265"},
	{"ID" : "267", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496", "Parent" : "0", "Child" : ["268", "269", "270", "271"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "t0_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "cp_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_305_1_VITIS_LOOP_180_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496.mul_32s_32s_64_1_1_U300", "Parent" : "267"},
	{"ID" : "269", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496.mul_32s_27ns_32_1_1_U301", "Parent" : "267"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496.mul_32s_24s_55_1_1_U302", "Parent" : "267"},
	{"ID" : "271", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496.flow_control_loop_pipe_sequential_init_U", "Parent" : "267"},
	{"ID" : "272", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_fu_17503", "Parent" : "0", "Child" : ["273", "274"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1029", "EstimateLatencyMax" : "1029",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_187_1_VITIS_LOOP_32_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter4", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter4", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_fu_17503.mac_muladd_9s_24s_32ns_32_4_1_U306", "Parent" : "272"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_fu_17503.flow_control_loop_pipe_sequential_init_U", "Parent" : "272"},
	{"ID" : "275", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_fu_17508", "Parent" : "0", "Child" : ["276"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "5", "EstimateLatencyMax" : "2051",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_325_1_VITIS_LOOP_298_1", "PipelineType" : "NotSupport"}]},
	{"ID" : "276", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_fu_17508.flow_control_loop_pipe_sequential_init_U", "Parent" : "275"},
	{"ID" : "277", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_234_1_VITIS_LOOP_87_1_fu_17513", "Parent" : "0", "Child" : ["278"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_234_1_VITIS_LOOP_87_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w0_vec_coeffs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_234_1_VITIS_LOOP_87_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_234_1_VITIS_LOOP_87_1_fu_17513.flow_control_loop_pipe_sequential_init_U", "Parent" : "277"},
	{"ID" : "279", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_12_fu_17519", "Parent" : "0", "Child" : ["280"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_12",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1026", "EstimateLatencyMax" : "1026",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w0_vec_coeffs", "Type" : "Memory", "Direction" : "IO"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_202_1_VITIS_LOOP_50_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_12_fu_17519.flow_control_loop_pipe_sequential_init_U", "Parent" : "279"},
	{"ID" : "281", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_392_1_VITIS_LOOP_248_1_fu_17524", "Parent" : "0", "Child" : ["282"],
		"CDFG" : "pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_392_1_VITIS_LOOP_248_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1027", "EstimateLatencyMax" : "1027",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "w1_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "w0_vec_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "h_vec_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "s_4_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_392_1_VITIS_LOOP_248_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_392_1_VITIS_LOOP_248_1_fu_17524.flow_control_loop_pipe_sequential_init_U", "Parent" : "281"},
	{"ID" : "283", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532", "Parent" : "0", "Child" : ["284", "286", "288"],
		"CDFG" : "pqcrystals_dilithium2_ref_pack_sig_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "4448", "EstimateLatencyMax" : "4448",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sm", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "288", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36", "Port" : "sm", "Inst_start_state" : "5", "Inst_end_state" : "6"},
					{"ID" : "286", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30", "Port" : "sm", "Inst_start_state" : "3", "Inst_end_state" : "4"},
					{"ID" : "284", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22", "Port" : "sm", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "z", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "284", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22", "Port" : "z", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "h", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "288", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36", "Port" : "h", "Inst_start_state" : "5", "Inst_end_state" : "6"}]}]},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22", "Parent" : "283", "Child" : ["285"],
		"CDFG" : "pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2307", "EstimateLatencyMax" : "2307",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "z", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_167_2_VITIS_LOOP_804_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "9", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "285", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22.flow_control_loop_pipe_sequential_init_U", "Parent" : "284"},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30", "Parent" : "283", "Child" : ["287"],
		"CDFG" : "pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "86", "EstimateLatencyMax" : "86",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "sm", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_172_3", "PipelineType" : "NotSupport"}]},
	{"ID" : "287", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30.flow_control_loop_pipe_sequential_init_U", "Parent" : "286"},
	{"ID" : "288", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36", "Parent" : "283", "Child" : ["289"],
		"CDFG" : "pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2050", "EstimateLatencyMax" : "2050",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "h", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_176_4_VITIS_LOOP_177_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "2", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter0", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "289", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36.flow_control_loop_pipe_sequential_init_U", "Parent" : "288"}]}


set ArgLastReadFirstWriteLatency {
	pqcrystals_dilithium2_ref_signature_1 {
		sm {Type IO LastRead 5 FirstWrite -1}
		mlen {Type I LastRead 8 FirstWrite -1}
		sk {Type I LastRead 208 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}
		zetas {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_122_1 {
		sk {Type I LastRead 0 FirstWrite -1}
		seedbuf {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_1 {
		state_s {Type O LastRead -1 FirstWrite 0}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_18 {
		state_s_0 {Type O LastRead -1 FirstWrite 0}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_126_2 {
		sk {Type I LastRead 0 FirstWrite -1}
		seedbuf {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_130_3 {
		sk {Type I LastRead 0 FirstWrite -1}
		seedbuf {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4 {
		s1_vec_coeffs {Type O LastRead -1 FirstWrite 1}
		sk {Type I LastRead 48 FirstWrite -1}}
	pqcrystals_dilithium2_ref_polyeta_unpack_1 {
		r {Type O LastRead -1 FirstWrite 1}
		r_offset {Type I LastRead 1 FirstWrite -1}
		sk {Type I LastRead 48 FirstWrite -1}
		a {Type I LastRead 0 FirstWrite -1}}
	keccak_absorb_19 {
		s {Type IO LastRead 0 FirstWrite 4}
		m {Type I LastRead 4 FirstWrite -1}
		m_offset {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5 {
		s2_vec_coeffs {Type O LastRead -1 FirstWrite 1}
		sk {Type I LastRead 48 FirstWrite -1}}
	pqcrystals_dilithium2_ref_polyeta_unpack_1 {
		r {Type O LastRead -1 FirstWrite 1}
		r_offset {Type I LastRead 1 FirstWrite -1}
		sk {Type I LastRead 48 FirstWrite -1}
		a {Type I LastRead 0 FirstWrite -1}}
	keccak_absorb_1 {
		s {Type IO LastRead 16 FirstWrite 4}
		pos_offset {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 5 FirstWrite -1}
		m_offset {Type I LastRead 0 FirstWrite -1}
		mlen_offset {Type I LastRead 0 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_391_1 {
		zext_ln389 {Type I LastRead 0 FirstWrite -1}
		xor_ln391_2 {Type I LastRead 0 FirstWrite -1}
		m_offset_cast {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 1 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 2}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_30_1 {
		t {Type I LastRead 0 FirstWrite -1}
		r_out {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_400_2 {
		trunc_ln400_1 {Type I LastRead 0 FirstWrite -1}
		m_offset_cast {Type I LastRead 0 FirstWrite -1}
		m_addr_1_idx {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 5 FirstWrite -1}
		trunc_ln57 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 1 FirstWrite 5}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_409_4 {
		m_offset {Type I LastRead 0 FirstWrite -1}
		add_ln384 {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 4 FirstWrite -1}
		s {Type IO LastRead 0 FirstWrite 4}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_416_5 {
		tmp_921 {Type I LastRead 0 FirstWrite -1}
		add_ln31_3 {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 5 FirstWrite -1}
		trunc_ln418_1 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 1 FirstWrite 5}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_423_6 {
		t {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_425_7 {
		sext_ln384 {Type I LastRead 0 FirstWrite -1}
		zext_ln419_2 {Type I LastRead 0 FirstWrite -1}
		add_ln31_3 {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 0 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 1}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_30_124 {
		t {Type I LastRead 0 FirstWrite -1}
		r_2_out {Type O LastRead -1 FirstWrite 0}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6 {
		t0_vec_coeffs {Type O LastRead -1 FirstWrite 1}
		sk {Type I LastRead 208 FirstWrite -1}}
	pqcrystals_dilithium2_ref_polyt0_unpack_1 {
		r {Type O LastRead -1 FirstWrite 1}
		r_offset {Type I LastRead 1 FirstWrite -1}
		sk {Type I LastRead 208 FirstWrite -1}
		a {Type I LastRead 0 FirstWrite -1}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_5 {
		state_s {Type I LastRead 0 FirstWrite -1}
		seedbuf {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_416_5 {
		seedbuf {Type I LastRead 4 FirstWrite -1}
		state_s_0 {Type IO LastRead 0 FirstWrite 4}}
	KeccakF1600_StatePermute_1 {
		state_0 {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead 15 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_59 {
		state_s_0 {Type I LastRead 0 FirstWrite -1}
		seedbuf {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_poly_uniform {
		a {Type O LastRead -1 FirstWrite 3}
		a_offset {Type I LastRead 0 FirstWrite -1}
		a_offset1 {Type I LastRead 0 FirstWrite -1}
		seed {Type I LastRead 4 FirstWrite -1}
		nonce {Type I LastRead 0 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_416_5 {
		seed {Type I LastRead 4 FirstWrite -1}
		state_s {Type IO LastRead 0 FirstWrite 4}}
	keccak_absorb {
		s {Type IO LastRead 16 FirstWrite 1}
		r {Type I LastRead 0 FirstWrite -1}
		pos_r {Type I LastRead 0 FirstWrite -1}
		m_0_read {Type I LastRead 0 FirstWrite -1}
		m_1_read {Type I LastRead 0 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_Pipeline_VITIS_LOOP_391_1 {
		zext_ln389 {Type I LastRead 0 FirstWrite -1}
		xor_ln391_3_cast11 {Type I LastRead 0 FirstWrite -1}
		m_1_read {Type I LastRead 0 FirstWrite -1}
		m_0_read {Type I LastRead 0 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 1}}
	keccak_absorb_Pipeline_VITIS_LOOP_30_1 {
		t {Type I LastRead 0 FirstWrite -1}
		r_4_out {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_Pipeline_VITIS_LOOP_400_2 {
		select_ln31_1 {Type I LastRead 0 FirstWrite -1}
		select_ln31 {Type I LastRead 0 FirstWrite -1}
		zext_ln400 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 1 FirstWrite 2}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_Pipeline_VITIS_LOOP_409_4 {
		trunc_ln63 {Type I LastRead 0 FirstWrite -1}
		select_ln31_5 {Type I LastRead 0 FirstWrite -1}
		select_ln31_4 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 0 FirstWrite 1}}
	keccak_absorb_Pipeline_VITIS_LOOP_416_5 {
		tmp_925 {Type I LastRead 0 FirstWrite -1}
		select_ln31_3 {Type I LastRead 0 FirstWrite -1}
		select_ln31_2 {Type I LastRead 0 FirstWrite -1}
		zext_ln418_1 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 1 FirstWrite 2}}
	keccak_absorb_Pipeline_VITIS_LOOP_423_6 {
		t {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_Pipeline_VITIS_LOOP_425_7 {
		sext_ln384_3 {Type I LastRead 0 FirstWrite -1}
		xor_ln31 {Type I LastRead 0 FirstWrite -1}
		m_1_read {Type I LastRead 0 FirstWrite -1}
		m_0_read {Type I LastRead 0 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_Pipeline_VITIS_LOOP_30_125 {
		t {Type I LastRead 0 FirstWrite -1}
		r_6_out {Type O LastRead -1 FirstWrite 0}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_1 {
		buf_r {Type I LastRead 3 FirstWrite -1}
		zext_ln344_3 {Type I LastRead 0 FirstWrite -1}
		a {Type O LastRead -1 FirstWrite 3}
		ctr_out {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_2 {
		state_s {Type I LastRead 0 FirstWrite -1}
		idx {Type I LastRead 0 FirstWrite -1}
		buf_r {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_379_2 {
		trunc_ln367_1 {Type I LastRead 0 FirstWrite -1}
		sext_ln379 {Type I LastRead 0 FirstWrite -1}
		buf_r {Type IO LastRead 1 FirstWrite 2}}
	pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_221 {
		state_s {Type I LastRead 0 FirstWrite -1}
		trunc_ln367_1 {Type I LastRead 0 FirstWrite -1}
		buf_r {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_122 {
		sub_ln384 {Type I LastRead 0 FirstWrite -1}
		zext_ln368 {Type I LastRead 0 FirstWrite -1}
		buf_r {Type I LastRead 3 FirstWrite -1}
		zext_ln384 {Type I LastRead 0 FirstWrite -1}
		zext_ln344_3 {Type I LastRead 0 FirstWrite -1}
		a {Type O LastRead -1 FirstWrite 3}
		ctr_4_out {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3 {
		zext_ln57 {Type I LastRead 0 FirstWrite -1}
		add_ln57_5 {Type I LastRead 0 FirstWrite -1}
		zext_ln58_5 {Type I LastRead 0 FirstWrite -1}
		s1_vec_coeffs {Type IO LastRead 2 FirstWrite 1}
		zext_ln50_1 {Type I LastRead 0 FirstWrite -1}
		sext_ln57 {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310 {
		zext_ln57_1 {Type I LastRead 0 FirstWrite -1}
		add_ln57_6 {Type I LastRead 0 FirstWrite -1}
		zext_ln58_6 {Type I LastRead 0 FirstWrite -1}
		s2_vec_coeffs {Type IO LastRead 2 FirstWrite 1}
		zext_ln50_3 {Type I LastRead 0 FirstWrite -1}
		sext_ln57_1 {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311 {
		zext_ln57_2 {Type I LastRead 0 FirstWrite -1}
		add_ln57_7 {Type I LastRead 0 FirstWrite -1}
		zext_ln58_7 {Type I LastRead 0 FirstWrite -1}
		t0_vec_coeffs {Type IO LastRead 2 FirstWrite 1}
		zext_ln50_5 {Type I LastRead 0 FirstWrite -1}
		sext_ln57_2 {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_poly_uniform_gamma1 {
		a {Type O LastRead -1 FirstWrite 2}
		a_offset {Type I LastRead 0 FirstWrite -1}
		seed {Type I LastRead 4 FirstWrite -1}
		nonce {Type I LastRead 0 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5 {
		seed {Type I LastRead 4 FirstWrite -1}
		state_s {Type IO LastRead 0 FirstWrite 4}}
	keccak_absorb {
		s {Type IO LastRead 16 FirstWrite 1}
		r {Type I LastRead 0 FirstWrite -1}
		pos_r {Type I LastRead 0 FirstWrite -1}
		m_0_read {Type I LastRead 0 FirstWrite -1}
		m_1_read {Type I LastRead 0 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_Pipeline_VITIS_LOOP_391_1 {
		zext_ln389 {Type I LastRead 0 FirstWrite -1}
		xor_ln391_3_cast11 {Type I LastRead 0 FirstWrite -1}
		m_1_read {Type I LastRead 0 FirstWrite -1}
		m_0_read {Type I LastRead 0 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 1}}
	keccak_absorb_Pipeline_VITIS_LOOP_30_1 {
		t {Type I LastRead 0 FirstWrite -1}
		r_4_out {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_Pipeline_VITIS_LOOP_400_2 {
		select_ln31_1 {Type I LastRead 0 FirstWrite -1}
		select_ln31 {Type I LastRead 0 FirstWrite -1}
		zext_ln400 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 1 FirstWrite 2}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_Pipeline_VITIS_LOOP_409_4 {
		trunc_ln63 {Type I LastRead 0 FirstWrite -1}
		select_ln31_5 {Type I LastRead 0 FirstWrite -1}
		select_ln31_4 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 0 FirstWrite 1}}
	keccak_absorb_Pipeline_VITIS_LOOP_416_5 {
		tmp_925 {Type I LastRead 0 FirstWrite -1}
		select_ln31_3 {Type I LastRead 0 FirstWrite -1}
		select_ln31_2 {Type I LastRead 0 FirstWrite -1}
		zext_ln418_1 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 1 FirstWrite 2}}
	keccak_absorb_Pipeline_VITIS_LOOP_423_6 {
		t {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_Pipeline_VITIS_LOOP_425_7 {
		sext_ln384_3 {Type I LastRead 0 FirstWrite -1}
		xor_ln31 {Type I LastRead 0 FirstWrite -1}
		m_1_read {Type I LastRead 0 FirstWrite -1}
		m_0_read {Type I LastRead 0 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_Pipeline_VITIS_LOOP_30_125 {
		t {Type I LastRead 0 FirstWrite -1}
		r_6_out {Type O LastRead -1 FirstWrite 0}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1 {
		buf_r {Type I LastRead 5 FirstWrite -1}
		a_offset {Type I LastRead 0 FirstWrite -1}
		a {Type O LastRead -1 FirstWrite 2}}
	pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2 {
		state_s {Type I LastRead 0 FirstWrite -1}
		idx {Type I LastRead 0 FirstWrite -1}
		buf_r {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312 {
		zext_ln57_3 {Type I LastRead 0 FirstWrite -1}
		add_ln57_8 {Type I LastRead 0 FirstWrite -1}
		zext_ln58_8 {Type I LastRead 0 FirstWrite -1}
		z_vec_coeffs {Type IO LastRead 2 FirstWrite 1}
		zext_ln50_7 {Type I LastRead 0 FirstWrite -1}
		sext_ln57_3 {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1 {
		i_17 {Type I LastRead 0 FirstWrite -1}
		mat {Type I LastRead 0 FirstWrite -1}
		z_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		zext_ln181_3 {Type I LastRead 0 FirstWrite -1}
		w1_vec_coeffs {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_1 {
		w1_vec_coeffs {Type IO LastRead 0 FirstWrite 4}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_114 {
		state_s {Type O LastRead -1 FirstWrite 0}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113 {
		tmp_20 {Type I LastRead 0 FirstWrite -1}
		mat {Type I LastRead 0 FirstWrite -1}
		zext_ln181_5 {Type I LastRead 0 FirstWrite -1}
		z_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		t_coeffs {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_87_1 {
		zext_ln181_3 {Type I LastRead 0 FirstWrite -1}
		w1_vec_coeffs {Type IO LastRead 0 FirstWrite 1}
		t_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_polyveck_invntt_tomont {
		v {Type IO LastRead 2 FirstWrite 1}
		zetas {Type I LastRead 3 FirstWrite -1}}
	pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4 {
		zext_ln87 {Type I LastRead 0 FirstWrite -1}
		v {Type IO LastRead 0 FirstWrite 1}}
	pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3 {
		zext_ln86 {Type I LastRead 0 FirstWrite -1}
		zext_ln86_2 {Type I LastRead 0 FirstWrite -1}
		zext_ln87 {Type I LastRead 0 FirstWrite -1}
		v {Type IO LastRead 2 FirstWrite 1}
		zext_ln78_2 {Type I LastRead 0 FirstWrite -1}
		sext_ln86 {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_1 {
		w1_vec_coeffs {Type IO LastRead 0 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1 {
		w1_vec_coeffs {Type IO LastRead 0 FirstWrite 4}
		w0_vec_coeffs {Type O LastRead -1 FirstWrite 7}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_418_1_VITIS_LOOP_915_1 {
		w1_vec_coeffs {Type I LastRead 2 FirstWrite -1}
		sm {Type O LastRead -1 FirstWrite 1}}
	keccak_squeeze_1 {
		sm {Type O LastRead -1 FirstWrite 3}
		s {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_poly_challenge_1 {
		c {Type IO LastRead 19 FirstWrite 0}
		sm {Type I LastRead 5 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_1 {
		s {Type IO LastRead 16 FirstWrite 4}
		pos_offset {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 5 FirstWrite -1}
		m_offset {Type I LastRead 0 FirstWrite -1}
		mlen_offset {Type I LastRead 0 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_391_1 {
		zext_ln389 {Type I LastRead 0 FirstWrite -1}
		xor_ln391_2 {Type I LastRead 0 FirstWrite -1}
		m_offset_cast {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 1 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 2}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_30_1 {
		t {Type I LastRead 0 FirstWrite -1}
		r_out {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_400_2 {
		trunc_ln400_1 {Type I LastRead 0 FirstWrite -1}
		m_offset_cast {Type I LastRead 0 FirstWrite -1}
		m_addr_1_idx {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 5 FirstWrite -1}
		trunc_ln57 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 1 FirstWrite 5}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_409_4 {
		m_offset {Type I LastRead 0 FirstWrite -1}
		add_ln384 {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 4 FirstWrite -1}
		s {Type IO LastRead 0 FirstWrite 4}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_416_5 {
		tmp_921 {Type I LastRead 0 FirstWrite -1}
		add_ln31_3 {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 5 FirstWrite -1}
		trunc_ln418_1 {Type I LastRead 0 FirstWrite -1}
		s {Type IO LastRead 1 FirstWrite 5}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_423_6 {
		t {Type O LastRead -1 FirstWrite 0}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_425_7 {
		sext_ln384 {Type I LastRead 0 FirstWrite -1}
		zext_ln419_2 {Type I LastRead 0 FirstWrite -1}
		add_ln31_3 {Type I LastRead 0 FirstWrite -1}
		sm {Type I LastRead 0 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 1}}
	keccak_absorb_1_Pipeline_VITIS_LOOP_30_124 {
		t {Type I LastRead 0 FirstWrite -1}
		r_2_out {Type O LastRead -1 FirstWrite 0}}
	pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_527_2 {
		c {Type O LastRead -1 FirstWrite 0}}
	KeccakF1600_StatePermute {
		state {Type IO LastRead 13 FirstWrite 14}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_2 {
		state_s {Type I LastRead 0 FirstWrite -1}
		buf_r {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_523_1 {
		buf_r {Type I LastRead 0 FirstWrite -1}
		signs_out {Type IO LastRead 1 FirstWrite 0}}
	pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_223 {
		state_s {Type I LastRead 0 FirstWrite -1}
		buf_r {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1 {
		s1_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		z_vec_coeffs {Type O LastRead -1 FirstWrite 1}
		cp_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315 {
		zext_ln57_4 {Type I LastRead 0 FirstWrite -1}
		add_ln57_9 {Type I LastRead 0 FirstWrite -1}
		len_8 {Type I LastRead 0 FirstWrite -1}
		cp_coeffs {Type IO LastRead 2 FirstWrite 1}
		sext_ln57_4 {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_85_1_VITIS_LOOP_87_1 {
		y_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		z_vec_coeffs {Type IO LastRead 0 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4 {
		zext_ln87 {Type I LastRead 0 FirstWrite -1}
		z_vec_coeffs {Type IO LastRead 0 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3 {
		zext_ln86 {Type I LastRead 0 FirstWrite -1}
		zext_ln86_1 {Type I LastRead 0 FirstWrite -1}
		zext_ln87 {Type I LastRead 0 FirstWrite -1}
		z_vec_coeffs {Type IO LastRead 2 FirstWrite 1}
		zext_ln78_1 {Type I LastRead 0 FirstWrite -1}
		sext_ln86 {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1 {
		z_vec_coeffs {Type IO LastRead 0 FirstWrite 4}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_158_1_VITIS_LOOP_298_1 {
		z_vec_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1 {
		s2_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		h_vec_coeffs {Type O LastRead -1 FirstWrite 1}
		cp_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_252_1_VITIS_LOOP_108_1 {
		w0_vec_coeffs {Type IO LastRead 0 FirstWrite 1}
		h_vec_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_1 {
		w0_vec_coeffs {Type IO LastRead 0 FirstWrite 4}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_1 {
		w0_vec_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1 {
		t0_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		h_vec_coeffs {Type O LastRead -1 FirstWrite 1}
		cp_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11 {
		h_vec_coeffs {Type IO LastRead 0 FirstWrite 4}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1 {
		h_vec_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_234_1_VITIS_LOOP_87_1 {
		w0_vec_coeffs {Type IO LastRead 0 FirstWrite 1}
		h_vec_coeffs {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_12 {
		w0_vec_coeffs {Type IO LastRead 0 FirstWrite 1}}
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_392_1_VITIS_LOOP_248_1 {
		w1_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		w0_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		h_vec_coeffs {Type O LastRead -1 FirstWrite 1}
		s_4_out {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_pack_sig_1 {
		sm {Type O LastRead -1 FirstWrite 0}
		z {Type I LastRead 2 FirstWrite -1}
		h {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1 {
		z {Type I LastRead 2 FirstWrite -1}
		sm {Type O LastRead -1 FirstWrite 1}}
	pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3 {
		sm {Type O LastRead -1 FirstWrite 0}}
	pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5 {
		h {Type I LastRead 0 FirstWrite -1}
		sm {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	sm { ap_memory {  { sm_address0 mem_address 1 13 }  { sm_ce0 mem_ce 1 1 }  { sm_we0 mem_we 1 1 }  { sm_d0 mem_din 1 8 }  { sm_q0 mem_dout 0 8 }  { sm_address1 MemPortADDR2 1 13 }  { sm_ce1 MemPortCE2 1 1 }  { sm_we1 MemPortWE2 1 1 }  { sm_d1 MemPortDIN2 1 8 }  { sm_q1 MemPortDOUT2 0 8 } } }
	mlen { ap_none {  { mlen in_data 0 64 } } }
	sk { ap_memory {  { sk_address0 mem_address 1 12 }  { sk_ce0 mem_ce 1 1 }  { sk_q0 mem_dout 0 8 }  { sk_address1 MemPortADDR2 1 12 }  { sk_ce1 MemPortCE2 1 1 }  { sk_q1 MemPortDOUT2 0 8 } } }
}
