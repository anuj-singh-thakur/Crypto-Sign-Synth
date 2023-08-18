set moduleName pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3
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
set C_modelName {pqcrystals_dilithium2_ref_signature.1_Pipeline_VITIS_LOOP_57_3}
set C_modelType { void 0 }
set C_modelArgList {
	{ zext_ln57 int 8 regular  }
	{ add_ln57_5 int 11 regular  }
	{ zext_ln58_5 int 10 regular  }
	{ s1_vec_coeffs int 32 regular {array 1024 { 2 1 } 1 1 }  }
	{ zext_ln50_1 int 8 regular  }
	{ sext_ln57 int 23 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "zext_ln57", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "add_ln57_5", "interface" : "wire", "bitwidth" : 11, "direction" : "READONLY"} , 
 	{ "Name" : "zext_ln58_5", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY"} , 
 	{ "Name" : "s1_vec_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "zext_ln50_1", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "sext_ln57", "interface" : "wire", "bitwidth" : 23, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ zext_ln57 sc_in sc_lv 8 signal 0 } 
	{ add_ln57_5 sc_in sc_lv 11 signal 1 } 
	{ zext_ln58_5 sc_in sc_lv 10 signal 2 } 
	{ s1_vec_coeffs_address0 sc_out sc_lv 10 signal 3 } 
	{ s1_vec_coeffs_ce0 sc_out sc_logic 1 signal 3 } 
	{ s1_vec_coeffs_we0 sc_out sc_logic 1 signal 3 } 
	{ s1_vec_coeffs_d0 sc_out sc_lv 32 signal 3 } 
	{ s1_vec_coeffs_q0 sc_in sc_lv 32 signal 3 } 
	{ s1_vec_coeffs_address1 sc_out sc_lv 10 signal 3 } 
	{ s1_vec_coeffs_ce1 sc_out sc_logic 1 signal 3 } 
	{ s1_vec_coeffs_q1 sc_in sc_lv 32 signal 3 } 
	{ zext_ln50_1 sc_in sc_lv 8 signal 4 } 
	{ sext_ln57 sc_in sc_lv 23 signal 5 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "zext_ln57", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "zext_ln57", "role": "default" }} , 
 	{ "name": "add_ln57_5", "direction": "in", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "add_ln57_5", "role": "default" }} , 
 	{ "name": "zext_ln58_5", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "zext_ln58_5", "role": "default" }} , 
 	{ "name": "s1_vec_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "address0" }} , 
 	{ "name": "s1_vec_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "ce0" }} , 
 	{ "name": "s1_vec_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "we0" }} , 
 	{ "name": "s1_vec_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "d0" }} , 
 	{ "name": "s1_vec_coeffs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "q0" }} , 
 	{ "name": "s1_vec_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "address1" }} , 
 	{ "name": "s1_vec_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "ce1" }} , 
 	{ "name": "s1_vec_coeffs_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "q1" }} , 
 	{ "name": "zext_ln50_1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "zext_ln50_1", "role": "default" }} , 
 	{ "name": "sext_ln57", "direction": "in", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "sext_ln57", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_23s_54_1_1_U141", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_27ns_32_1_1_U142", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.mul_32s_24s_55_1_1_U143", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	pqcrystals_dilithium2_ref_signature_1_Pipeline_VITIS_LOOP_57_3 {
		zext_ln57 {Type I LastRead 0 FirstWrite -1}
		add_ln57_5 {Type I LastRead 0 FirstWrite -1}
		zext_ln58_5 {Type I LastRead 0 FirstWrite -1}
		s1_vec_coeffs {Type IO LastRead 2 FirstWrite 1}
		zext_ln50_1 {Type I LastRead 0 FirstWrite -1}
		sext_ln57 {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	zext_ln57 { ap_none {  { zext_ln57 in_data 0 8 } } }
	add_ln57_5 { ap_none {  { add_ln57_5 in_data 0 11 } } }
	zext_ln58_5 { ap_none {  { zext_ln58_5 in_data 0 10 } } }
	s1_vec_coeffs { ap_memory {  { s1_vec_coeffs_address0 mem_address 1 10 }  { s1_vec_coeffs_ce0 mem_ce 1 1 }  { s1_vec_coeffs_we0 mem_we 1 1 }  { s1_vec_coeffs_d0 mem_din 1 32 }  { s1_vec_coeffs_q0 in_data 0 32 }  { s1_vec_coeffs_address1 MemPortADDR2 1 10 }  { s1_vec_coeffs_ce1 MemPortCE2 1 1 }  { s1_vec_coeffs_q1 in_data 0 32 } } }
	zext_ln50_1 { ap_none {  { zext_ln50_1 in_data 0 8 } } }
	sext_ln57 { ap_none {  { sext_ln57 in_data 0 23 } } }
}
