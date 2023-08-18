set moduleName pqcrystals_dilithium2_ref
set isTopModule 1
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
set C_modelName {pqcrystals_dilithium2_ref}
set C_modelType { int 32 }
set C_modelArgList {
	{ sm int 8 regular {array 5720 { 2 2 } 1 1 }  }
	{ smlen int 64 regular {pointer 1}  }
	{ m int 8 regular {array 3300 { 1 3 } 1 1 }  }
	{ mlen int 64 regular  }
	{ sk int 8 regular {array 2544 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sm", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "smlen", "interface" : "wire", "bitwidth" : 64, "direction" : "WRITEONLY"} , 
 	{ "Name" : "m", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "mlen", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "sk", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 32} ]}
# RTL Port declarations: 
set portNum 29
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
	{ smlen sc_out sc_lv 64 signal 1 } 
	{ smlen_ap_vld sc_out sc_logic 1 outvld 1 } 
	{ m_address0 sc_out sc_lv 12 signal 2 } 
	{ m_ce0 sc_out sc_logic 1 signal 2 } 
	{ m_q0 sc_in sc_lv 8 signal 2 } 
	{ mlen sc_in sc_lv 64 signal 3 } 
	{ sk_address0 sc_out sc_lv 12 signal 4 } 
	{ sk_ce0 sc_out sc_logic 1 signal 4 } 
	{ sk_q0 sc_in sc_lv 8 signal 4 } 
	{ sk_address1 sc_out sc_lv 12 signal 4 } 
	{ sk_ce1 sc_out sc_logic 1 signal 4 } 
	{ sk_q1 sc_in sc_lv 8 signal 4 } 
	{ ap_return sc_out sc_lv 32 signal -1 } 
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
 	{ "name": "smlen", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "smlen", "role": "default" }} , 
 	{ "name": "smlen_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "smlen", "role": "ap_vld" }} , 
 	{ "name": "m_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "m", "role": "address0" }} , 
 	{ "name": "m_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "m", "role": "ce0" }} , 
 	{ "name": "m_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "m", "role": "q0" }} , 
 	{ "name": "mlen", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "mlen", "role": "default" }} , 
 	{ "name": "sk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address0" }} , 
 	{ "name": "sk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce0" }} , 
 	{ "name": "sk_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q0" }} , 
 	{ "name": "sk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address1" }} , 
 	{ "name": "sk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce1" }} , 
 	{ "name": "sk_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q1" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3"],
		"CDFG" : "pqcrystals_dilithium2_ref",
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
					{"ID" : "3", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_fu_71", "Port" : "sm", "Inst_start_state" : "3", "Inst_end_state" : "4"},
					{"ID" : "1", "SubInstance" : "grp_pqcrystals_dilithium2_ref_Pipeline_VITIS_LOOP_205_1_fu_59", "Port" : "sm", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "smlen", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pqcrystals_dilithium2_ref_Pipeline_VITIS_LOOP_205_1_fu_59", "Port" : "m", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "mlen", "Type" : "None", "Direction" : "I"},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_fu_71", "Port" : "sk", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_fu_71", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_fu_71", "Port" : "zetas", "Inst_start_state" : "3", "Inst_end_state" : "4"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_Pipeline_VITIS_LOOP_205_1_fu_59", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "pqcrystals_dilithium2_ref_Pipeline_VITIS_LOOP_205_1",
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
			{"Name" : "mlen", "Type" : "None", "Direction" : "I"},
			{"Name" : "sub", "Type" : "None", "Direction" : "I"},
			{"Name" : "m", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sub2", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_205_1", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_Pipeline_VITIS_LOOP_205_1_fu_59.flow_control_loop_pipe_sequential_init_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71", "Parent" : "0", "Child" : ["4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "22", "24", "26", "28", "30", "33", "35", "38", "58", "61", "63", "65", "67", "68", "70", "108", "113", "118", "123", "154", "159", "164", "167", "169", "174", "176", "187", "189", "193", "195", "198", "231", "236", "241", "243", "248", "253", "256", "258", "263", "265", "268", "270", "275", "278", "280", "282", "284", "286"],
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
					{"ID" : "286", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532", "Port" : "sm", "Inst_start_state" : "630", "Inst_end_state" : "631"},
					{"ID" : "38", "SubInstance" : "grp_keccak_absorb_1_fu_17224", "Port" : "sm", "Inst_start_state" : "580", "Inst_end_state" : "581"},
					{"ID" : "195", "SubInstance" : "grp_keccak_squeeze_1_fu_17405", "Port" : "sm", "Inst_start_state" : "586", "Inst_end_state" : "587"},
					{"ID" : "198", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414", "Port" : "sm", "Inst_start_state" : "588", "Inst_end_state" : "589"},
					{"ID" : "193", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_418_1_VITIS_LOOP_915_1_fu_17398", "Port" : "sm", "Inst_start_state" : "578", "Inst_end_state" : "579"}]},
			{"Name" : "mlen", "Type" : "None", "Direction" : "I"},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4_fu_17201", "Port" : "sk", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "58", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6_fu_17241", "Port" : "sk", "Inst_start_state" : "15", "Inst_end_state" : "16"},
					{"ID" : "20", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_122_1_fu_17167", "Port" : "sk", "Inst_start_state" : "1", "Inst_end_state" : "2"},
					{"ID" : "35", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5_fu_17217", "Port" : "sk", "Inst_start_state" : "9", "Inst_end_state" : "10"},
					{"ID" : "28", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_130_3_fu_17194", "Port" : "sk", "Inst_start_state" : "5", "Inst_end_state" : "6"},
					{"ID" : "26", "SubInstance" : "grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_126_2_fu_17187", "Port" : "sk", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "28", "Inst_end_state" : "29"},
					{"ID" : "67", "SubInstance" : "grp_KeccakF1600_StatePermute_1_fu_17267", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "23", "Inst_end_state" : "24"},
					{"ID" : "61", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_17248", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "15", "Inst_end_state" : "16"},
					{"ID" : "38", "SubInstance" : "grp_keccak_absorb_1_fu_17224", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "580", "Inst_end_state" : "581"},
					{"ID" : "123", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "46", "Inst_end_state" : "47"},
					{"ID" : "195", "SubInstance" : "grp_keccak_squeeze_1_fu_17405", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "586", "Inst_end_state" : "587"},
					{"ID" : "198", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "588", "Inst_end_state" : "589"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "176", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380", "Port" : "zetas", "Inst_start_state" : "618", "Inst_end_state" : "619"}]}],
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
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.KeccakF_RoundConstants_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.zetas_U", "Parent" : "3"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.t_coeffs_U", "Parent" : "3"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.state_s_0_U", "Parent" : "3"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.seedbuf_U", "Parent" : "3"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.mat_U", "Parent" : "3"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.s1_vec_coeffs_U", "Parent" : "3"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.y_vec_coeffs_U", "Parent" : "3"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.z_vec_coeffs_U", "Parent" : "3"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.t0_vec_coeffs_U", "Parent" : "3"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.s2_vec_coeffs_U", "Parent" : "3"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.w1_vec_coeffs_U", "Parent" : "3"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.w0_vec_coeffs_U", "Parent" : "3"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.h_vec_coeffs_U", "Parent" : "3"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.cp_coeffs_U", "Parent" : "3"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.state_s_U", "Parent" : "3"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_122_1_fu_17167", "Parent" : "3", "Child" : ["21"],
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
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_122_1_fu_17167.flow_control_loop_pipe_sequential_init_U", "Parent" : "20"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_1_fu_17175", "Parent" : "3", "Child" : ["23"],
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
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_1_fu_17175.flow_control_loop_pipe_sequential_init_U", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_18_fu_17181", "Parent" : "3", "Child" : ["25"],
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
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_18_fu_17181.flow_control_loop_pipe_sequential_init_U", "Parent" : "24"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_126_2_fu_17187", "Parent" : "3", "Child" : ["27"],
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
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_126_2_fu_17187.flow_control_loop_pipe_sequential_init_U", "Parent" : "26"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_130_3_fu_17194", "Parent" : "3", "Child" : ["29"],
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
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_130_3_fu_17194.flow_control_loop_pipe_sequential_init_U", "Parent" : "28"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4_fu_17201", "Parent" : "3", "Child" : ["31", "32"],
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
					{"ID" : "31", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Port" : "r", "Inst_start_state" : "2", "Inst_end_state" : "130"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "31", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Port" : "sk", "Inst_start_state" : "2", "Inst_end_state" : "130"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_134_4", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "128", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4_fu_17201.grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Parent" : "30",
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
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_134_4_fu_17201.flow_control_loop_pipe_sequential_init_U", "Parent" : "30"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_19_fu_17208", "Parent" : "3", "Child" : ["34"],
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
	{"ID" : "34", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_19_fu_17208.flow_control_loop_pipe_sequential_init_U", "Parent" : "33"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5_fu_17217", "Parent" : "3", "Child" : ["36", "37"],
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
					{"ID" : "36", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Port" : "r", "Inst_start_state" : "2", "Inst_end_state" : "130"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "36", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Port" : "sk", "Inst_start_state" : "2", "Inst_end_state" : "130"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_138_5", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "128", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5_fu_17217.grp_pqcrystals_dilithium2_ref_polyeta_unpack_1_fu_50", "Parent" : "35",
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
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_138_5_fu_17217.flow_control_loop_pipe_sequential_init_U", "Parent" : "35"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224", "Parent" : "3", "Child" : ["39", "40", "42", "44", "46", "48", "50", "52", "54", "56"],
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
					{"ID" : "50", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "44", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Port" : "s", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "48", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "46", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_291", "Port" : "state", "Inst_start_state" : "13", "Inst_end_state" : "14"}]},
			{"Name" : "pos_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Port" : "sm", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "44", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Port" : "sm", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "54", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325", "Port" : "sm", "Inst_start_state" : "17", "Inst_end_state" : "18"},
					{"ID" : "40", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262", "Port" : "sm", "Inst_start_state" : "2", "Inst_end_state" : "3"},
					{"ID" : "48", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Port" : "sm", "Inst_start_state" : "11", "Inst_end_state" : "12"}]},
			{"Name" : "m_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "mlen_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_291", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "13", "Inst_end_state" : "14"}]}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3", "ap_ST_fsm_state6"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_408_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state11", "LastState" : ["ap_ST_fsm_state14"], "QuitState" : ["ap_ST_fsm_state11"], "PreState" : ["ap_ST_fsm_state10"], "PostState" : ["ap_ST_fsm_state15"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.t_U", "Parent" : "38"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262", "Parent" : "38", "Child" : ["41"],
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
	{"ID" : "41", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262.flow_control_loop_pipe_sequential_init_U", "Parent" : "40"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_1_fu_272", "Parent" : "38", "Child" : ["43"],
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
	{"ID" : "43", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_1_fu_272.flow_control_loop_pipe_sequential_init_U", "Parent" : "42"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Parent" : "38", "Child" : ["45"],
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
	{"ID" : "45", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278.flow_control_loop_pipe_sequential_init_U", "Parent" : "44"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_KeccakF1600_StatePermute_fu_291", "Parent" : "38", "Child" : ["47"],
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
	{"ID" : "47", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_KeccakF1600_StatePermute_fu_291.KeccakF_RoundConstants_U", "Parent" : "46"},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Parent" : "38", "Child" : ["49"],
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
	{"ID" : "49", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299.flow_control_loop_pipe_sequential_init_U", "Parent" : "48"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Parent" : "38", "Child" : ["51"],
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
	{"ID" : "51", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309.flow_control_loop_pipe_sequential_init_U", "Parent" : "50"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_423_6_fu_320", "Parent" : "38", "Child" : ["53"],
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
	{"ID" : "53", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_423_6_fu_320.flow_control_loop_pipe_sequential_init_U", "Parent" : "52"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325", "Parent" : "38", "Child" : ["55"],
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
	{"ID" : "55", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325.flow_control_loop_pipe_sequential_init_U", "Parent" : "54"},
	{"ID" : "56", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_124_fu_335", "Parent" : "38", "Child" : ["57"],
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
	{"ID" : "57", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_absorb_1_fu_17224.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_124_fu_335.flow_control_loop_pipe_sequential_init_U", "Parent" : "56"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6_fu_17241", "Parent" : "3", "Child" : ["59", "60"],
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
					{"ID" : "59", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyt0_unpack_1_fu_50", "Port" : "r", "Inst_start_state" : "2", "Inst_end_state" : "210"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyt0_unpack_1_fu_50", "Port" : "sk", "Inst_start_state" : "2", "Inst_end_state" : "210"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_142_6", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "208", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage1", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage1_subdone", "QuitState" : "ap_ST_fsm_pp0_stage1", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage1_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6_fu_17241.grp_pqcrystals_dilithium2_ref_polyt0_unpack_1_fu_50", "Parent" : "58",
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
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_142_6_fu_17241.flow_control_loop_pipe_sequential_init_U", "Parent" : "58"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_KeccakF1600_StatePermute_fu_17248", "Parent" : "3", "Child" : ["62"],
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
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_KeccakF1600_StatePermute_fu_17248.KeccakF_RoundConstants_U", "Parent" : "61"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_5_fu_17255", "Parent" : "3", "Child" : ["64"],
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
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_5_fu_17255.flow_control_loop_pipe_sequential_init_U", "Parent" : "63"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_416_5_fu_17261", "Parent" : "3", "Child" : ["66"],
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
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_416_5_fu_17261.flow_control_loop_pipe_sequential_init_U", "Parent" : "65"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_KeccakF1600_StatePermute_1_fu_17267", "Parent" : "3",
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
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_59_fu_17274", "Parent" : "3", "Child" : ["69"],
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
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_540_59_fu_17274.flow_control_loop_pipe_sequential_init_U", "Parent" : "68"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280", "Parent" : "3", "Child" : ["71", "72", "73", "75", "95", "97", "99", "101", "103", "105", "107"],
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
					{"ID" : "105", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_122_fu_247", "Port" : "a", "Inst_start_state" : "32", "Inst_end_state" : "33"},
					{"ID" : "97", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_1_fu_217", "Port" : "a", "Inst_start_state" : "10", "Inst_end_state" : "14"}]},
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_offset1", "Type" : "None", "Direction" : "I"},
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_416_5_fu_190", "Port" : "seed", "Inst_start_state" : "2", "Inst_end_state" : "3"}]},
			{"Name" : "nonce", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "95", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_210", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "28", "Inst_end_state" : "29"},
					{"ID" : "75", "SubInstance" : "grp_keccak_absorb_fu_197", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "4", "Inst_end_state" : "5"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "34", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_474_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "34", "FirstState" : "ap_ST_fsm_state10", "LastState" : ["ap_ST_fsm_state13"], "QuitState" : ["ap_ST_fsm_state10"], "PreState" : ["ap_ST_fsm_state9"], "PostState" : ["ap_ST_fsm_state14"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_377_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "34", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state34"], "QuitState" : ["ap_ST_fsm_state15"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "71", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.buf_U", "Parent" : "70"},
	{"ID" : "72", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.state_s_U", "Parent" : "70"},
	{"ID" : "73", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_416_5_fu_190", "Parent" : "70", "Child" : ["74"],
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
	{"ID" : "74", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_416_5_fu_190.flow_control_loop_pipe_sequential_init_U", "Parent" : "73"},
	{"ID" : "75", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197", "Parent" : "70", "Child" : ["76", "77", "79", "81", "83", "85", "87", "89", "91", "93"],
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
					{"ID" : "87", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "85", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "83", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_277", "Port" : "state", "Inst_start_state" : "13", "Inst_end_state" : "14"},
					{"ID" : "81", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268", "Port" : "s", "Inst_start_state" : "7", "Inst_end_state" : "8"}]},
			{"Name" : "r", "Type" : "None", "Direction" : "I"},
			{"Name" : "pos_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "83", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_277", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "13", "Inst_end_state" : "14"}]}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3", "ap_ST_fsm_state6"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_408_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state11", "LastState" : ["ap_ST_fsm_state14"], "QuitState" : ["ap_ST_fsm_state11"], "PreState" : ["ap_ST_fsm_state10"], "PostState" : ["ap_ST_fsm_state15"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "76", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.t_U", "Parent" : "75"},
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_391_1_fu_253", "Parent" : "75", "Child" : ["78"],
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
	{"ID" : "78", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_391_1_fu_253.flow_control_loop_pipe_sequential_init_U", "Parent" : "77"},
	{"ID" : "79", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_1_fu_262", "Parent" : "75", "Child" : ["80"],
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
	{"ID" : "80", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_1_fu_262.flow_control_loop_pipe_sequential_init_U", "Parent" : "79"},
	{"ID" : "81", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268", "Parent" : "75", "Child" : ["82"],
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
	{"ID" : "82", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268.flow_control_loop_pipe_sequential_init_U", "Parent" : "81"},
	{"ID" : "83", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_KeccakF1600_StatePermute_fu_277", "Parent" : "75", "Child" : ["84"],
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
	{"ID" : "84", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_KeccakF1600_StatePermute_fu_277.KeccakF_RoundConstants_U", "Parent" : "83"},
	{"ID" : "85", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285", "Parent" : "75", "Child" : ["86"],
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
	{"ID" : "86", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285.flow_control_loop_pipe_sequential_init_U", "Parent" : "85"},
	{"ID" : "87", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294", "Parent" : "75", "Child" : ["88"],
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
	{"ID" : "88", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294.flow_control_loop_pipe_sequential_init_U", "Parent" : "87"},
	{"ID" : "89", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_423_6_fu_304", "Parent" : "75", "Child" : ["90"],
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
	{"ID" : "90", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_423_6_fu_304.flow_control_loop_pipe_sequential_init_U", "Parent" : "89"},
	{"ID" : "91", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_425_7_fu_309", "Parent" : "75", "Child" : ["92"],
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
	{"ID" : "92", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_425_7_fu_309.flow_control_loop_pipe_sequential_init_U", "Parent" : "91"},
	{"ID" : "93", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_125_fu_318", "Parent" : "75", "Child" : ["94"],
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
	{"ID" : "94", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_keccak_absorb_fu_197.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_125_fu_318.flow_control_loop_pipe_sequential_init_U", "Parent" : "93"},
	{"ID" : "95", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_KeccakF1600_StatePermute_fu_210", "Parent" : "70", "Child" : ["96"],
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
	{"ID" : "96", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_KeccakF1600_StatePermute_fu_210.KeccakF_RoundConstants_U", "Parent" : "95"},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_1_fu_217", "Parent" : "70", "Child" : ["98"],
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
	{"ID" : "98", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_1_fu_217.flow_control_loop_pipe_sequential_init_U", "Parent" : "97"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_2_fu_226", "Parent" : "70", "Child" : ["100"],
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
	{"ID" : "100", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_2_fu_226.flow_control_loop_pipe_sequential_init_U", "Parent" : "99"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_379_2_fu_233", "Parent" : "70", "Child" : ["102"],
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
	{"ID" : "102", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_379_2_fu_233.flow_control_loop_pipe_sequential_init_U", "Parent" : "101"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_221_fu_240", "Parent" : "70", "Child" : ["104"],
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
	{"ID" : "104", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_476_221_fu_240.flow_control_loop_pipe_sequential_init_U", "Parent" : "103"},
	{"ID" : "105", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_122_fu_247", "Parent" : "70", "Child" : ["106"],
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
	{"ID" : "106", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.grp_pqcrystals_dilithium2_ref_poly_uniform_Pipeline_VITIS_LOOP_337_122_fu_247.flow_control_loop_pipe_sequential_init_U", "Parent" : "105"},
	{"ID" : "107", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_fu_17280.urem_10s_3ns_9_14_seq_1_U132", "Parent" : "70"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291", "Parent" : "3", "Child" : ["109", "110", "111", "112"],
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
	{"ID" : "109", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291.mul_32s_23s_54_1_1_U141", "Parent" : "108"},
	{"ID" : "110", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291.mul_32s_27ns_32_1_1_U142", "Parent" : "108"},
	{"ID" : "111", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291.mul_32s_24s_55_1_1_U143", "Parent" : "108"},
	{"ID" : "112", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3_fu_17291.flow_control_loop_pipe_sequential_init_U", "Parent" : "108"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302", "Parent" : "3", "Child" : ["114", "115", "116", "117"],
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
	{"ID" : "114", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302.mul_32s_23s_54_1_1_U153", "Parent" : "113"},
	{"ID" : "115", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302.mul_32s_27ns_32_1_1_U154", "Parent" : "113"},
	{"ID" : "116", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302.mul_32s_24s_55_1_1_U155", "Parent" : "113"},
	{"ID" : "117", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_310_fu_17302.flow_control_loop_pipe_sequential_init_U", "Parent" : "113"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313", "Parent" : "3", "Child" : ["119", "120", "121", "122"],
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
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313.mul_32s_23s_54_1_1_U162", "Parent" : "118"},
	{"ID" : "120", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313.mul_32s_27ns_32_1_1_U163", "Parent" : "118"},
	{"ID" : "121", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313.mul_32s_24s_55_1_1_U164", "Parent" : "118"},
	{"ID" : "122", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_311_fu_17313.flow_control_loop_pipe_sequential_init_U", "Parent" : "118"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324", "Parent" : "3", "Child" : ["124", "125", "126", "128", "148", "150", "152"],
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
					{"ID" : "150", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169", "Port" : "a", "Inst_start_state" : "10", "Inst_end_state" : "14"}]},
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "126", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142", "Port" : "seed", "Inst_start_state" : "2", "Inst_end_state" : "3"}]},
			{"Name" : "nonce", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "128", "SubInstance" : "grp_keccak_absorb_fu_149", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "4", "Inst_end_state" : "5"},
					{"ID" : "148", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_162", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "10", "Inst_end_state" : "11"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "14", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_474_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "14", "FirstState" : "ap_ST_fsm_state10", "LastState" : ["ap_ST_fsm_state13"], "QuitState" : ["ap_ST_fsm_state10"], "PreState" : ["ap_ST_fsm_state9"], "PostState" : ["ap_ST_fsm_state14"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.buf_U", "Parent" : "123"},
	{"ID" : "125", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.state_s_U", "Parent" : "123"},
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142", "Parent" : "123", "Child" : ["127"],
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
	{"ID" : "127", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_416_5_fu_142.flow_control_loop_pipe_sequential_init_U", "Parent" : "126"},
	{"ID" : "128", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149", "Parent" : "123", "Child" : ["129", "130", "132", "134", "136", "138", "140", "142", "144", "146"],
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
					{"ID" : "140", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "138", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "136", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_277", "Port" : "state", "Inst_start_state" : "13", "Inst_end_state" : "14"},
					{"ID" : "134", "SubInstance" : "grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268", "Port" : "s", "Inst_start_state" : "7", "Inst_end_state" : "8"}]},
			{"Name" : "r", "Type" : "None", "Direction" : "I"},
			{"Name" : "pos_r", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "m_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "136", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_277", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "13", "Inst_end_state" : "14"}]}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3", "ap_ST_fsm_state6"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_408_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state11", "LastState" : ["ap_ST_fsm_state14"], "QuitState" : ["ap_ST_fsm_state11"], "PreState" : ["ap_ST_fsm_state10"], "PostState" : ["ap_ST_fsm_state15"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "129", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.t_U", "Parent" : "128"},
	{"ID" : "130", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_391_1_fu_253", "Parent" : "128", "Child" : ["131"],
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
	{"ID" : "131", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_391_1_fu_253.flow_control_loop_pipe_sequential_init_U", "Parent" : "130"},
	{"ID" : "132", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_1_fu_262", "Parent" : "128", "Child" : ["133"],
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
	{"ID" : "133", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_1_fu_262.flow_control_loop_pipe_sequential_init_U", "Parent" : "132"},
	{"ID" : "134", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268", "Parent" : "128", "Child" : ["135"],
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
	{"ID" : "135", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_400_2_fu_268.flow_control_loop_pipe_sequential_init_U", "Parent" : "134"},
	{"ID" : "136", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_KeccakF1600_StatePermute_fu_277", "Parent" : "128", "Child" : ["137"],
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
	{"ID" : "137", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_KeccakF1600_StatePermute_fu_277.KeccakF_RoundConstants_U", "Parent" : "136"},
	{"ID" : "138", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285", "Parent" : "128", "Child" : ["139"],
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
	{"ID" : "139", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_409_4_fu_285.flow_control_loop_pipe_sequential_init_U", "Parent" : "138"},
	{"ID" : "140", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294", "Parent" : "128", "Child" : ["141"],
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
	{"ID" : "141", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_416_5_fu_294.flow_control_loop_pipe_sequential_init_U", "Parent" : "140"},
	{"ID" : "142", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_423_6_fu_304", "Parent" : "128", "Child" : ["143"],
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
	{"ID" : "143", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_423_6_fu_304.flow_control_loop_pipe_sequential_init_U", "Parent" : "142"},
	{"ID" : "144", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_425_7_fu_309", "Parent" : "128", "Child" : ["145"],
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
	{"ID" : "145", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_425_7_fu_309.flow_control_loop_pipe_sequential_init_U", "Parent" : "144"},
	{"ID" : "146", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_125_fu_318", "Parent" : "128", "Child" : ["147"],
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
	{"ID" : "147", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_keccak_absorb_fu_149.grp_keccak_absorb_Pipeline_VITIS_LOOP_30_125_fu_318.flow_control_loop_pipe_sequential_init_U", "Parent" : "146"},
	{"ID" : "148", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_KeccakF1600_StatePermute_fu_162", "Parent" : "123", "Child" : ["149"],
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
	{"ID" : "149", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_KeccakF1600_StatePermute_fu_162.KeccakF_RoundConstants_U", "Parent" : "148"},
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169", "Parent" : "123", "Child" : ["151"],
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
	{"ID" : "151", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_854_1_fu_169.flow_control_loop_pipe_sequential_init_U", "Parent" : "150"},
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177", "Parent" : "123", "Child" : ["153"],
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
	{"ID" : "153", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_fu_17324.grp_pqcrystals_dilithium2_ref_poly_uniform_gamma1_Pipeline_VITIS_LOOP_476_2_fu_177.flow_control_loop_pipe_sequential_init_U", "Parent" : "152"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334", "Parent" : "3", "Child" : ["155", "156", "157", "158"],
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
	{"ID" : "155", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334.mul_32s_23s_54_1_1_U184", "Parent" : "154"},
	{"ID" : "156", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334.mul_32s_27ns_32_1_1_U185", "Parent" : "154"},
	{"ID" : "157", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334.mul_32s_24s_55_1_1_U186", "Parent" : "154"},
	{"ID" : "158", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_312_fu_17334.flow_control_loop_pipe_sequential_init_U", "Parent" : "154"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345", "Parent" : "3", "Child" : ["160", "161", "162", "163"],
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
	{"ID" : "160", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345.mul_32s_23ns_55_1_1_U193", "Parent" : "159"},
	{"ID" : "161", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345.mul_32s_27ns_32_1_1_U194", "Parent" : "159"},
	{"ID" : "162", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345.mul_32s_24s_55_1_1_U195", "Parent" : "159"},
	{"ID" : "163", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_1_fu_17345.flow_control_loop_pipe_sequential_init_U", "Parent" : "159"},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_1_fu_17354", "Parent" : "3", "Child" : ["165", "166"],
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
	{"ID" : "165", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_1_fu_17354.mac_muladd_9s_24s_32ns_32_4_1_U213", "Parent" : "164"},
	{"ID" : "166", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_1_fu_17354.flow_control_loop_pipe_sequential_init_U", "Parent" : "164"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_114_fu_17359", "Parent" : "3", "Child" : ["168"],
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
	{"ID" : "168", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_362_114_fu_17359.flow_control_loop_pipe_sequential_init_U", "Parent" : "167"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364", "Parent" : "3", "Child" : ["170", "171", "172", "173"],
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
	{"ID" : "170", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364.mul_32s_23ns_55_1_1_U202", "Parent" : "169"},
	{"ID" : "171", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364.mul_32s_27ns_32_1_1_U203", "Parent" : "169"},
	{"ID" : "172", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364.mul_32s_24s_55_1_1_U204", "Parent" : "169"},
	{"ID" : "173", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113_fu_17364.flow_control_loop_pipe_sequential_init_U", "Parent" : "169"},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_87_1_fu_17373", "Parent" : "3", "Child" : ["175"],
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
	{"ID" : "175", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_87_1_fu_17373.flow_control_loop_pipe_sequential_init_U", "Parent" : "174"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380", "Parent" : "3", "Child" : ["177", "182"],
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
					{"ID" : "182", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138", "Port" : "v", "Inst_start_state" : "5", "Inst_end_state" : "6"},
					{"ID" : "177", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131", "Port" : "v", "Inst_start_state" : "3", "Inst_end_state" : "7"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_84_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state4", "LastState" : ["ap_ST_fsm_state6"], "QuitState" : ["ap_ST_fsm_state4"], "PreState" : ["ap_ST_fsm_state3"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_83_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state3", "LastState" : ["ap_ST_fsm_state4"], "QuitState" : ["ap_ST_fsm_state3"], "PreState" : ["ap_ST_fsm_state2"], "PostState" : ["ap_ST_fsm_state7"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_298_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state7"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "177", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131", "Parent" : "176", "Child" : ["178", "179", "180", "181"],
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
	{"ID" : "178", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_17ns_49_1_1_U225", "Parent" : "177"},
	{"ID" : "179", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_27ns_32_1_1_U226", "Parent" : "177"},
	{"ID" : "180", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_24s_55_1_1_U227", "Parent" : "177"},
	{"ID" : "181", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.flow_control_loop_pipe_sequential_init_U", "Parent" : "177"},
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138", "Parent" : "176", "Child" : ["183", "184", "185", "186"],
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
	{"ID" : "183", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_23s_54_1_1_U216", "Parent" : "182"},
	{"ID" : "184", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_27ns_32_1_1_U217", "Parent" : "182"},
	{"ID" : "185", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_24s_55_1_1_U218", "Parent" : "182"},
	{"ID" : "186", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_fu_17380.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.flow_control_loop_pipe_sequential_init_U", "Parent" : "182"},
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_1_fu_17387", "Parent" : "3", "Child" : ["188"],
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
	{"ID" : "188", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_1_fu_17387.flow_control_loop_pipe_sequential_init_U", "Parent" : "187"},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1_fu_17392", "Parent" : "3", "Child" : ["190", "191", "192"],
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
	{"ID" : "190", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1_fu_17392.mac_muladd_25s_14ns_24ns_32_4_1_U234", "Parent" : "189"},
	{"ID" : "191", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1_fu_17392.mac_muladd_8s_19s_32s_32_4_1_U235", "Parent" : "189"},
	{"ID" : "192", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_371_1_VITIS_LOOP_225_1_fu_17392.flow_control_loop_pipe_sequential_init_U", "Parent" : "189"},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_418_1_VITIS_LOOP_915_1_fu_17398", "Parent" : "3", "Child" : ["194"],
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
	{"ID" : "194", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_418_1_VITIS_LOOP_915_1_fu_17398.flow_control_loop_pipe_sequential_init_U", "Parent" : "193"},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_squeeze_1_fu_17405", "Parent" : "3", "Child" : ["196"],
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
					{"ID" : "196", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_172", "Port" : "state", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "196", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_172", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "1", "Inst_end_state" : "2"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_540_5", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state3", "LastState" : ["ap_ST_fsm_state7"], "QuitState" : ["ap_ST_fsm_state3"], "PreState" : ["ap_ST_fsm_state2"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "196", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_squeeze_1_fu_17405.grp_KeccakF1600_StatePermute_fu_172", "Parent" : "195", "Child" : ["197"],
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
	{"ID" : "197", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_keccak_squeeze_1_fu_17405.grp_KeccakF1600_StatePermute_fu_172.KeccakF_RoundConstants_U", "Parent" : "196"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414", "Parent" : "3", "Child" : ["199", "200", "201", "221", "223", "225", "227", "229"],
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
					{"ID" : "221", "SubInstance" : "grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_527_2_fu_218", "Port" : "c", "Inst_start_state" : "2", "Inst_end_state" : "3"}]},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "201", "SubInstance" : "grp_keccak_absorb_1_fu_203", "Port" : "sm", "Inst_start_state" : "2", "Inst_end_state" : "3"}]},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "223", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_224", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "15", "Inst_end_state" : "16"},
					{"ID" : "201", "SubInstance" : "grp_keccak_absorb_1_fu_203", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "2", "Inst_end_state" : "3"}]}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_362_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "22", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_530_4", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "22", "FirstState" : "ap_ST_fsm_state15", "LastState" : ["ap_ST_fsm_state20"], "QuitState" : ["ap_ST_fsm_state20"], "PreState" : ["ap_ST_fsm_state14"], "PostState" : ["ap_ST_fsm_state21"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_529_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "22", "FirstState" : "ap_ST_fsm_state14", "LastState" : ["ap_ST_fsm_state22"], "QuitState" : ["ap_ST_fsm_state14"], "PreState" : ["ap_ST_fsm_state13"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "199", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.buf_U", "Parent" : "198"},
	{"ID" : "200", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.state_s_U", "Parent" : "198"},
	{"ID" : "201", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203", "Parent" : "198", "Child" : ["202", "203", "205", "207", "209", "211", "213", "215", "217", "219"],
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
					{"ID" : "213", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "207", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Port" : "s", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "211", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Port" : "s", "Inst_start_state" : "11", "Inst_end_state" : "12"},
					{"ID" : "209", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_291", "Port" : "state", "Inst_start_state" : "13", "Inst_end_state" : "14"}]},
			{"Name" : "pos_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "sm", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "213", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Port" : "sm", "Inst_start_state" : "11", "Inst_end_state" : "15"},
					{"ID" : "207", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Port" : "sm", "Inst_start_state" : "7", "Inst_end_state" : "8"},
					{"ID" : "217", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325", "Port" : "sm", "Inst_start_state" : "17", "Inst_end_state" : "18"},
					{"ID" : "203", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262", "Port" : "sm", "Inst_start_state" : "2", "Inst_end_state" : "3"},
					{"ID" : "211", "SubInstance" : "grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Port" : "sm", "Inst_start_state" : "11", "Inst_end_state" : "12"}]},
			{"Name" : "m_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "mlen_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstants", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "209", "SubInstance" : "grp_KeccakF1600_StatePermute_fu_291", "Port" : "KeccakF_RoundConstants", "Inst_start_state" : "13", "Inst_end_state" : "14"}]}],
		"Loop" : [
			{"Name" : "Loop 1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state2"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state3", "ap_ST_fsm_state6"], "OneDepthLoop" : "1", "OneStateBlock": "ap_ST_fsm_state2_blk"}},
			{"Name" : "VITIS_LOOP_408_3", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "21", "FirstState" : "ap_ST_fsm_state11", "LastState" : ["ap_ST_fsm_state14"], "QuitState" : ["ap_ST_fsm_state11"], "PreState" : ["ap_ST_fsm_state10"], "PostState" : ["ap_ST_fsm_state15"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "202", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.t_U", "Parent" : "201"},
	{"ID" : "203", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262", "Parent" : "201", "Child" : ["204"],
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
	{"ID" : "204", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_391_1_fu_262.flow_control_loop_pipe_sequential_init_U", "Parent" : "203"},
	{"ID" : "205", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_1_fu_272", "Parent" : "201", "Child" : ["206"],
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
	{"ID" : "206", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_1_fu_272.flow_control_loop_pipe_sequential_init_U", "Parent" : "205"},
	{"ID" : "207", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278", "Parent" : "201", "Child" : ["208"],
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
	{"ID" : "208", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_400_2_fu_278.flow_control_loop_pipe_sequential_init_U", "Parent" : "207"},
	{"ID" : "209", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_KeccakF1600_StatePermute_fu_291", "Parent" : "201", "Child" : ["210"],
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
	{"ID" : "210", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_KeccakF1600_StatePermute_fu_291.KeccakF_RoundConstants_U", "Parent" : "209"},
	{"ID" : "211", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299", "Parent" : "201", "Child" : ["212"],
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
	{"ID" : "212", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_409_4_fu_299.flow_control_loop_pipe_sequential_init_U", "Parent" : "211"},
	{"ID" : "213", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309", "Parent" : "201", "Child" : ["214"],
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
	{"ID" : "214", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_416_5_fu_309.flow_control_loop_pipe_sequential_init_U", "Parent" : "213"},
	{"ID" : "215", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_423_6_fu_320", "Parent" : "201", "Child" : ["216"],
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
	{"ID" : "216", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_423_6_fu_320.flow_control_loop_pipe_sequential_init_U", "Parent" : "215"},
	{"ID" : "217", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325", "Parent" : "201", "Child" : ["218"],
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
	{"ID" : "218", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_425_7_fu_325.flow_control_loop_pipe_sequential_init_U", "Parent" : "217"},
	{"ID" : "219", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_124_fu_335", "Parent" : "201", "Child" : ["220"],
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
	{"ID" : "220", "Level" : "5", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_keccak_absorb_1_fu_203.grp_keccak_absorb_1_Pipeline_VITIS_LOOP_30_124_fu_335.flow_control_loop_pipe_sequential_init_U", "Parent" : "219"},
	{"ID" : "221", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_527_2_fu_218", "Parent" : "198", "Child" : ["222"],
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
	{"ID" : "222", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_527_2_fu_218.flow_control_loop_pipe_sequential_init_U", "Parent" : "221"},
	{"ID" : "223", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_KeccakF1600_StatePermute_fu_224", "Parent" : "198", "Child" : ["224"],
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
	{"ID" : "224", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_KeccakF1600_StatePermute_fu_224.KeccakF_RoundConstants_U", "Parent" : "223"},
	{"ID" : "225", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_2_fu_231", "Parent" : "198", "Child" : ["226"],
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
	{"ID" : "226", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_2_fu_231.flow_control_loop_pipe_sequential_init_U", "Parent" : "225"},
	{"ID" : "227", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_523_1_fu_237", "Parent" : "198", "Child" : ["228"],
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
	{"ID" : "228", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_523_1_fu_237.flow_control_loop_pipe_sequential_init_U", "Parent" : "227"},
	{"ID" : "229", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_223_fu_243", "Parent" : "198", "Child" : ["230"],
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
	{"ID" : "230", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_poly_challenge_1_fu_17414.grp_pqcrystals_dilithium2_ref_poly_challenge_1_Pipeline_VITIS_LOOP_476_223_fu_243.flow_control_loop_pipe_sequential_init_U", "Parent" : "229"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423", "Parent" : "3", "Child" : ["232", "233", "234", "235"],
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
	{"ID" : "232", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423.mul_32s_32s_64_1_1_U263", "Parent" : "231"},
	{"ID" : "233", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423.mul_32s_27ns_32_1_1_U264", "Parent" : "231"},
	{"ID" : "234", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423.mul_32s_24s_55_1_1_U265", "Parent" : "231"},
	{"ID" : "235", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_114_1_VITIS_LOOP_180_1_fu_17423.flow_control_loop_pipe_sequential_init_U", "Parent" : "231"},
	{"ID" : "236", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430", "Parent" : "3", "Child" : ["237", "238", "239", "240"],
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
	{"ID" : "237", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430.mul_32s_23s_54_1_1_U255", "Parent" : "236"},
	{"ID" : "238", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430.mul_32s_27ns_32_1_1_U256", "Parent" : "236"},
	{"ID" : "239", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430.mul_32s_24s_55_1_1_U257", "Parent" : "236"},
	{"ID" : "240", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_315_fu_17430.flow_control_loop_pipe_sequential_init_U", "Parent" : "236"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_85_1_VITIS_LOOP_87_1_fu_17441", "Parent" : "3", "Child" : ["242"],
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
	{"ID" : "242", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_85_1_VITIS_LOOP_87_1_fu_17441.flow_control_loop_pipe_sequential_init_U", "Parent" : "241"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447", "Parent" : "3", "Child" : ["244", "245", "246", "247"],
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
	{"ID" : "244", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447.mul_32s_17ns_49_1_1_U279", "Parent" : "243"},
	{"ID" : "245", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447.mul_32s_27ns_32_1_1_U280", "Parent" : "243"},
	{"ID" : "246", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447.mul_32s_24s_55_1_1_U281", "Parent" : "243"},
	{"ID" : "247", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_95_4_fu_17447.flow_control_loop_pipe_sequential_init_U", "Parent" : "243"},
	{"ID" : "248", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453", "Parent" : "3", "Child" : ["249", "250", "251", "252"],
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
	{"ID" : "249", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453.mul_32s_23s_54_1_1_U270", "Parent" : "248"},
	{"ID" : "250", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453.mul_32s_27ns_32_1_1_U271", "Parent" : "248"},
	{"ID" : "251", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453.mul_32s_24s_55_1_1_U272", "Parent" : "248"},
	{"ID" : "252", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_86_3_fu_17453.flow_control_loop_pipe_sequential_init_U", "Parent" : "248"},
	{"ID" : "253", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1_fu_17463", "Parent" : "3", "Child" : ["254", "255"],
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
	{"ID" : "254", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1_fu_17463.mac_muladd_9s_24s_32ns_32_4_1_U286", "Parent" : "253"},
	{"ID" : "255", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_53_1_VITIS_LOOP_32_1_fu_17463.flow_control_loop_pipe_sequential_init_U", "Parent" : "253"},
	{"ID" : "256", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_158_1_VITIS_LOOP_298_1_fu_17468", "Parent" : "3", "Child" : ["257"],
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
	{"ID" : "257", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_158_1_VITIS_LOOP_298_1_fu_17468.flow_control_loop_pipe_sequential_init_U", "Parent" : "256"},
	{"ID" : "258", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473", "Parent" : "3", "Child" : ["259", "260", "261", "262"],
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
	{"ID" : "259", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473.mul_32s_32s_64_1_1_U289", "Parent" : "258"},
	{"ID" : "260", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473.mul_32s_27ns_32_1_1_U290", "Parent" : "258"},
	{"ID" : "261", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473.mul_32s_24s_55_1_1_U291", "Parent" : "258"},
	{"ID" : "262", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_1_fu_17473.flow_control_loop_pipe_sequential_init_U", "Parent" : "258"},
	{"ID" : "263", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_252_1_VITIS_LOOP_108_1_fu_17480", "Parent" : "3", "Child" : ["264"],
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
	{"ID" : "264", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_252_1_VITIS_LOOP_108_1_fu_17480.flow_control_loop_pipe_sequential_init_U", "Parent" : "263"},
	{"ID" : "265", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_1_fu_17486", "Parent" : "3", "Child" : ["266", "267"],
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
	{"ID" : "266", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_1_fu_17486.mac_muladd_9s_24s_32ns_32_4_1_U297", "Parent" : "265"},
	{"ID" : "267", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_1_fu_17486.flow_control_loop_pipe_sequential_init_U", "Parent" : "265"},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_1_fu_17491", "Parent" : "3", "Child" : ["269"],
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
	{"ID" : "269", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_1_fu_17491.flow_control_loop_pipe_sequential_init_U", "Parent" : "268"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496", "Parent" : "3", "Child" : ["271", "272", "273", "274"],
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
	{"ID" : "271", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496.mul_32s_32s_64_1_1_U300", "Parent" : "270"},
	{"ID" : "272", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496.mul_32s_27ns_32_1_1_U301", "Parent" : "270"},
	{"ID" : "273", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496.mul_32s_24s_55_1_1_U302", "Parent" : "270"},
	{"ID" : "274", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_305_1_VITIS_LOOP_180_1_1_fu_17496.flow_control_loop_pipe_sequential_init_U", "Parent" : "270"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_fu_17503", "Parent" : "3", "Child" : ["276", "277"],
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
	{"ID" : "276", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_fu_17503.mac_muladd_9s_24s_32ns_32_4_1_U306", "Parent" : "275"},
	{"ID" : "277", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_187_1_VITIS_LOOP_32_11_fu_17503.flow_control_loop_pipe_sequential_init_U", "Parent" : "275"},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_fu_17508", "Parent" : "3", "Child" : ["279"],
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
	{"ID" : "279", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_325_1_VITIS_LOOP_298_1_1_fu_17508.flow_control_loop_pipe_sequential_init_U", "Parent" : "278"},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_234_1_VITIS_LOOP_87_1_fu_17513", "Parent" : "3", "Child" : ["281"],
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
	{"ID" : "281", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_234_1_VITIS_LOOP_87_1_fu_17513.flow_control_loop_pipe_sequential_init_U", "Parent" : "280"},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_12_fu_17519", "Parent" : "3", "Child" : ["283"],
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
	{"ID" : "283", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_202_1_VITIS_LOOP_50_12_fu_17519.flow_control_loop_pipe_sequential_init_U", "Parent" : "282"},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_392_1_VITIS_LOOP_248_1_fu_17524", "Parent" : "3", "Child" : ["285"],
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
	{"ID" : "285", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_392_1_VITIS_LOOP_248_1_fu_17524.flow_control_loop_pipe_sequential_init_U", "Parent" : "284"},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532", "Parent" : "3", "Child" : ["287", "289", "291"],
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
					{"ID" : "291", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36", "Port" : "sm", "Inst_start_state" : "5", "Inst_end_state" : "6"},
					{"ID" : "289", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30", "Port" : "sm", "Inst_start_state" : "3", "Inst_end_state" : "4"},
					{"ID" : "287", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22", "Port" : "sm", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "z", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "287", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22", "Port" : "z", "Inst_start_state" : "1", "Inst_end_state" : "2"}]},
			{"Name" : "h", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "291", "SubInstance" : "grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36", "Port" : "h", "Inst_start_state" : "5", "Inst_end_state" : "6"}]}]},
	{"ID" : "287", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22", "Parent" : "286", "Child" : ["288"],
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
	{"ID" : "288", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_167_2_VITIS_LOOP_804_1_fu_22.flow_control_loop_pipe_sequential_init_U", "Parent" : "287"},
	{"ID" : "289", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30", "Parent" : "286", "Child" : ["290"],
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
	{"ID" : "290", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_172_3_fu_30.flow_control_loop_pipe_sequential_init_U", "Parent" : "289"},
	{"ID" : "291", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36", "Parent" : "286", "Child" : ["292"],
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
	{"ID" : "292", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_signature_1_fu_71.grp_pqcrystals_dilithium2_ref_pack_sig_1_fu_17532.grp_pqcrystals_dilithium2_ref_pack_sig_1_Pipeline_VITIS_LOOP_176_4_VITIS_LOOP_177_5_fu_36.flow_control_loop_pipe_sequential_init_U", "Parent" : "291"}]}


set ArgLastReadFirstWriteLatency {
	pqcrystals_dilithium2_ref {
		sm {Type IO LastRead 5 FirstWrite -1}
		smlen {Type O LastRead -1 FirstWrite 0}
		m {Type I LastRead 1 FirstWrite -1}
		mlen {Type I LastRead 0 FirstWrite -1}
		sk {Type I LastRead 208 FirstWrite -1}
		KeccakF_RoundConstants {Type I LastRead -1 FirstWrite -1}
		zetas {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium2_ref_Pipeline_VITIS_LOOP_205_1 {
		mlen {Type I LastRead 0 FirstWrite -1}
		sub {Type I LastRead 0 FirstWrite -1}
		m {Type I LastRead 1 FirstWrite -1}
		sub2 {Type I LastRead 0 FirstWrite -1}
		sm {Type O LastRead -1 FirstWrite 2}}
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
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	sm { ap_memory {  { sm_address0 mem_address 1 13 }  { sm_ce0 mem_ce 1 1 }  { sm_we0 mem_we 1 1 }  { sm_d0 mem_din 1 8 }  { sm_q0 mem_dout 0 8 }  { sm_address1 MemPortADDR2 1 13 }  { sm_ce1 MemPortCE2 1 1 }  { sm_we1 MemPortWE2 1 1 }  { sm_d1 MemPortDIN2 1 8 }  { sm_q1 MemPortDOUT2 0 8 } } }
	smlen { ap_vld {  { smlen out_data 1 64 }  { smlen_ap_vld out_vld 1 1 } } }
	m { ap_memory {  { m_address0 mem_address 1 12 }  { m_ce0 mem_ce 1 1 }  { m_q0 mem_dout 0 8 } } }
	mlen { ap_none {  { mlen in_data 0 64 } } }
	sk { ap_memory {  { sk_address0 mem_address 1 12 }  { sk_ce0 mem_ce 1 1 }  { sk_q0 mem_dout 0 8 }  { sk_address1 MemPortADDR2 1 12 }  { sk_ce1 MemPortCE2 1 1 }  { sk_q1 MemPortDOUT2 0 8 } } }
}

set maxi_interface_dict [dict create]

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
