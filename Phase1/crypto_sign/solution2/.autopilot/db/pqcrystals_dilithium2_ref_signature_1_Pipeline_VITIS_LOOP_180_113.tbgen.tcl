set moduleName pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set hasInterrupt 0
set C_modelName {pqcrystals_dilithium2_ref_signature.1_Pipeline_VITIS_LOOP_180_113}
set C_modelType { void 0 }
set C_modelArgList {
	{ tmp_20 int 12 regular  }
	{ mat int 23 regular {array 4096 { 1 3 } 1 1 }  }
	{ zext_ln181_5 int 10 regular  }
	{ z_vec_coeffs int 32 regular {array 1024 { 1 3 } 1 1 }  }
	{ t_coeffs int 24 regular {array 256 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "tmp_20", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} , 
 	{ "Name" : "mat", "interface" : "memory", "bitwidth" : 23, "direction" : "READONLY"} , 
 	{ "Name" : "zext_ln181_5", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY"} , 
 	{ "Name" : "z_vec_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "t_coeffs", "interface" : "memory", "bitwidth" : 24, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ tmp_20 sc_in sc_lv 12 signal 0 } 
	{ mat_address0 sc_out sc_lv 12 signal 1 } 
	{ mat_ce0 sc_out sc_logic 1 signal 1 } 
	{ mat_q0 sc_in sc_lv 23 signal 1 } 
	{ zext_ln181_5 sc_in sc_lv 10 signal 2 } 
	{ z_vec_coeffs_address0 sc_out sc_lv 10 signal 3 } 
	{ z_vec_coeffs_ce0 sc_out sc_logic 1 signal 3 } 
	{ z_vec_coeffs_q0 sc_in sc_lv 32 signal 3 } 
	{ t_coeffs_address0 sc_out sc_lv 8 signal 4 } 
	{ t_coeffs_ce0 sc_out sc_logic 1 signal 4 } 
	{ t_coeffs_we0 sc_out sc_logic 1 signal 4 } 
	{ t_coeffs_d0 sc_out sc_lv 24 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "tmp_20", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "tmp_20", "role": "default" }} , 
 	{ "name": "mat_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "mat", "role": "address0" }} , 
 	{ "name": "mat_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "mat", "role": "ce0" }} , 
 	{ "name": "mat_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "mat", "role": "q0" }} , 
 	{ "name": "zext_ln181_5", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "zext_ln181_5", "role": "default" }} , 
 	{ "name": "z_vec_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "z_vec_coeffs", "role": "address0" }} , 
 	{ "name": "z_vec_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "z_vec_coeffs", "role": "ce0" }} , 
 	{ "name": "z_vec_coeffs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "z_vec_coeffs", "role": "q0" }} , 
 	{ "name": "t_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "t_coeffs", "role": "address0" }} , 
 	{ "name": "t_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "t_coeffs", "role": "ce0" }} , 
 	{ "name": "t_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "t_coeffs", "role": "we0" }} , 
 	{ "name": "t_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":24, "type": "signal", "bundle":{"name": "t_coeffs", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_23ns_55_1_1_U202", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_27ns_32_1_1_U203", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_24s_55_1_1_U204", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_180_113 {
		tmp_20 {Type I LastRead 0 FirstWrite -1}
		mat {Type I LastRead 0 FirstWrite -1}
		zext_ln181_5 {Type I LastRead 0 FirstWrite -1}
		z_vec_coeffs {Type I LastRead 0 FirstWrite -1}
		t_coeffs {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "258", "Max" : "258"}
	, {"Name" : "Interval", "Min" : "258", "Max" : "258"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	tmp_20 { ap_none {  { tmp_20 in_data 0 12 } } }
	mat { ap_memory {  { mat_address0 mem_address 1 12 }  { mat_ce0 mem_ce 1 1 }  { mat_q0 in_data 0 23 } } }
	zext_ln181_5 { ap_none {  { zext_ln181_5 in_data 0 10 } } }
	z_vec_coeffs { ap_memory {  { z_vec_coeffs_address0 mem_address 1 10 }  { z_vec_coeffs_ce0 mem_ce 1 1 }  { z_vec_coeffs_q0 in_data 0 32 } } }
	t_coeffs { ap_memory {  { t_coeffs_address0 mem_address 1 8 }  { t_coeffs_ce0 mem_ce 1 1 }  { t_coeffs_we0 mem_we 1 1 }  { t_coeffs_d0 mem_din 1 24 } } }
}
