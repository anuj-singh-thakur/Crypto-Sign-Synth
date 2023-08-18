set moduleName pqcrystals_dilithium_10
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
set C_modelName {pqcrystals_dilithium.10}
set C_modelType { void 0 }
set C_modelArgList {
	{ r_coeffs int 32 regular {array 1024 { 0 0 } 0 1 }  }
	{ r_coeffs_offset int 3 regular  }
	{ a int 8 regular {array 2544 { 1 1 } 1 1 }  }
	{ a_offset int 12 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "r_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "r_coeffs_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "a", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "a_offset", "interface" : "wire", "bitwidth" : 12, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 22
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ r_coeffs_address0 sc_out sc_lv 10 signal 0 } 
	{ r_coeffs_ce0 sc_out sc_logic 1 signal 0 } 
	{ r_coeffs_we0 sc_out sc_logic 1 signal 0 } 
	{ r_coeffs_d0 sc_out sc_lv 32 signal 0 } 
	{ r_coeffs_address1 sc_out sc_lv 10 signal 0 } 
	{ r_coeffs_ce1 sc_out sc_logic 1 signal 0 } 
	{ r_coeffs_we1 sc_out sc_logic 1 signal 0 } 
	{ r_coeffs_d1 sc_out sc_lv 32 signal 0 } 
	{ r_coeffs_offset sc_in sc_lv 3 signal 1 } 
	{ a_address0 sc_out sc_lv 12 signal 2 } 
	{ a_ce0 sc_out sc_logic 1 signal 2 } 
	{ a_q0 sc_in sc_lv 8 signal 2 } 
	{ a_address1 sc_out sc_lv 12 signal 2 } 
	{ a_ce1 sc_out sc_logic 1 signal 2 } 
	{ a_q1 sc_in sc_lv 8 signal 2 } 
	{ a_offset sc_in sc_lv 12 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "r_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "r_coeffs", "role": "address0" }} , 
 	{ "name": "r_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "r_coeffs", "role": "ce0" }} , 
 	{ "name": "r_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "r_coeffs", "role": "we0" }} , 
 	{ "name": "r_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "r_coeffs", "role": "d0" }} , 
 	{ "name": "r_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "r_coeffs", "role": "address1" }} , 
 	{ "name": "r_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "r_coeffs", "role": "ce1" }} , 
 	{ "name": "r_coeffs_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "r_coeffs", "role": "we1" }} , 
 	{ "name": "r_coeffs_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "r_coeffs", "role": "d1" }} , 
 	{ "name": "r_coeffs_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "r_coeffs_offset", "role": "default" }} , 
 	{ "name": "a_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "a", "role": "address0" }} , 
 	{ "name": "a_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a", "role": "ce0" }} , 
 	{ "name": "a_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a", "role": "q0" }} , 
 	{ "name": "a_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "a", "role": "address1" }} , 
 	{ "name": "a_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a", "role": "ce1" }} , 
 	{ "name": "a_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "a", "role": "q1" }} , 
 	{ "name": "a_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "a_offset", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "pqcrystals_dilithium_10",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "257", "EstimateLatencyMax" : "257",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "r_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "r_coeffs_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "a", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	pqcrystals_dilithium_10 {
		r_coeffs {Type O LastRead -1 FirstWrite 2}
		r_coeffs_offset {Type I LastRead 0 FirstWrite -1}
		a {Type I LastRead 8 FirstWrite -1}
		a_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "257", "Max" : "257"}
	, {"Name" : "Interval", "Min" : "257", "Max" : "257"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	r_coeffs { ap_memory {  { r_coeffs_address0 mem_address 1 10 }  { r_coeffs_ce0 mem_ce 1 1 }  { r_coeffs_we0 mem_we 1 1 }  { r_coeffs_d0 mem_din 1 32 }  { r_coeffs_address1 MemPortADDR2 1 10 }  { r_coeffs_ce1 MemPortCE2 1 1 }  { r_coeffs_we1 MemPortWE2 1 1 }  { r_coeffs_d1 MemPortDIN2 1 32 } } }
	r_coeffs_offset { ap_none {  { r_coeffs_offset in_data 0 3 } } }
	a { ap_memory {  { a_address0 mem_address 1 12 }  { a_ce0 mem_ce 1 1 }  { a_q0 mem_dout 0 8 }  { a_address1 MemPortADDR2 1 12 }  { a_ce1 MemPortCE2 1 1 }  { a_q1 MemPortDOUT2 0 8 } } }
	a_offset { ap_none {  { a_offset in_data 0 12 } } }
}
