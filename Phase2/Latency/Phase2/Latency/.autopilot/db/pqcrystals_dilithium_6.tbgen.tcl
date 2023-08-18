set moduleName pqcrystals_dilithium_6
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {pqcrystals_dilithium.6}
set C_modelType { void 0 }
set C_modelArgList {
	{ v_vec_coeffs int 32 regular {array 1024 { 2 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v_vec_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v_vec_coeffs_address0 sc_out sc_lv 10 signal 0 } 
	{ v_vec_coeffs_ce0 sc_out sc_logic 1 signal 0 } 
	{ v_vec_coeffs_we0 sc_out sc_logic 1 signal 0 } 
	{ v_vec_coeffs_d0 sc_out sc_lv 32 signal 0 } 
	{ v_vec_coeffs_q0 sc_in sc_lv 32 signal 0 } 
	{ v_vec_coeffs_address1 sc_out sc_lv 10 signal 0 } 
	{ v_vec_coeffs_ce1 sc_out sc_logic 1 signal 0 } 
	{ v_vec_coeffs_q1 sc_in sc_lv 32 signal 0 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v_vec_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v_vec_coeffs", "role": "address0" }} , 
 	{ "name": "v_vec_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v_vec_coeffs", "role": "ce0" }} , 
 	{ "name": "v_vec_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v_vec_coeffs", "role": "we0" }} , 
 	{ "name": "v_vec_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v_vec_coeffs", "role": "d0" }} , 
 	{ "name": "v_vec_coeffs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v_vec_coeffs", "role": "q0" }} , 
 	{ "name": "v_vec_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v_vec_coeffs", "role": "address1" }} , 
 	{ "name": "v_vec_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v_vec_coeffs", "role": "ce1" }} , 
 	{ "name": "v_vec_coeffs_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v_vec_coeffs", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "pqcrystals_dilithium_6",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1125", "EstimateLatencyMax" : "16802917",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pqcrystals_dilithium_21_fu_28"}],
		"Port" : [
			{"Name" : "v_vec_coeffs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pqcrystals_dilithium_21_fu_28", "Port" : "a"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pqcrystals_dilithium_21_fu_28", "Port" : "zetas"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium_21_fu_28", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "pqcrystals_dilithium_21",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "279", "EstimateLatencyMax" : "4200727",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium_21_fu_28.zetas_U", "Parent" : "1"}]}


set ArgLastReadFirstWriteLatency {
	pqcrystals_dilithium_6 {
		v_vec_coeffs {Type IO LastRead 6 FirstWrite 5}
		zetas {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium_21 {
		a {Type IO LastRead 6 FirstWrite 5}
		a_offset {Type I LastRead 0 FirstWrite -1}
		zetas {Type I LastRead -1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1125", "Max" : "16802917"}
	, {"Name" : "Interval", "Min" : "1125", "Max" : "16802917"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v_vec_coeffs { ap_memory {  { v_vec_coeffs_address0 mem_address 1 10 }  { v_vec_coeffs_ce0 mem_ce 1 1 }  { v_vec_coeffs_we0 mem_we 1 1 }  { v_vec_coeffs_d0 mem_din 1 32 }  { v_vec_coeffs_q0 mem_dout 0 32 }  { v_vec_coeffs_address1 MemPortADDR2 1 10 }  { v_vec_coeffs_ce1 MemPortCE2 1 1 }  { v_vec_coeffs_q1 MemPortDOUT2 0 32 } } }
}
