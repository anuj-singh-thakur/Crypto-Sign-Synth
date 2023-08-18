set moduleName pqcrystals_dilithium_14
set isTopModule 0
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isFreeRunPipelineModule 0
set isPipelined 1
set pipeline_type function
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {pqcrystals_dilithium.14}
set C_modelType { void 0 }
set C_modelArgList {
	{ c_coeffs int 32 regular {array 256 { 0 0 } 0 1 }  }
	{ a_coeffs int 23 regular {array 4096 { 1 1 } 1 1 }  }
	{ a_coeffs_offset int 3 regular  }
	{ a_coeffs_offset1 int 3 regular  }
	{ b_coeffs int 32 regular {array 1024 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "c_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "a_coeffs", "interface" : "memory", "bitwidth" : 23, "direction" : "READONLY"} , 
 	{ "Name" : "a_coeffs_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "a_coeffs_offset1", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "b_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 28
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ c_coeffs_address0 sc_out sc_lv 8 signal 0 } 
	{ c_coeffs_ce0 sc_out sc_logic 1 signal 0 } 
	{ c_coeffs_we0 sc_out sc_logic 1 signal 0 } 
	{ c_coeffs_d0 sc_out sc_lv 32 signal 0 } 
	{ c_coeffs_address1 sc_out sc_lv 8 signal 0 } 
	{ c_coeffs_ce1 sc_out sc_logic 1 signal 0 } 
	{ c_coeffs_we1 sc_out sc_logic 1 signal 0 } 
	{ c_coeffs_d1 sc_out sc_lv 32 signal 0 } 
	{ a_coeffs_address0 sc_out sc_lv 12 signal 1 } 
	{ a_coeffs_ce0 sc_out sc_logic 1 signal 1 } 
	{ a_coeffs_q0 sc_in sc_lv 23 signal 1 } 
	{ a_coeffs_address1 sc_out sc_lv 12 signal 1 } 
	{ a_coeffs_ce1 sc_out sc_logic 1 signal 1 } 
	{ a_coeffs_q1 sc_in sc_lv 23 signal 1 } 
	{ a_coeffs_offset sc_in sc_lv 3 signal 2 } 
	{ a_coeffs_offset1 sc_in sc_lv 3 signal 3 } 
	{ b_coeffs_address0 sc_out sc_lv 10 signal 4 } 
	{ b_coeffs_ce0 sc_out sc_logic 1 signal 4 } 
	{ b_coeffs_q0 sc_in sc_lv 32 signal 4 } 
	{ b_coeffs_address1 sc_out sc_lv 10 signal 4 } 
	{ b_coeffs_ce1 sc_out sc_logic 1 signal 4 } 
	{ b_coeffs_q1 sc_in sc_lv 32 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "c_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "c_coeffs", "role": "address0" }} , 
 	{ "name": "c_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c_coeffs", "role": "ce0" }} , 
 	{ "name": "c_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c_coeffs", "role": "we0" }} , 
 	{ "name": "c_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "c_coeffs", "role": "d0" }} , 
 	{ "name": "c_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "c_coeffs", "role": "address1" }} , 
 	{ "name": "c_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c_coeffs", "role": "ce1" }} , 
 	{ "name": "c_coeffs_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "c_coeffs", "role": "we1" }} , 
 	{ "name": "c_coeffs_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "c_coeffs", "role": "d1" }} , 
 	{ "name": "a_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "a_coeffs", "role": "address0" }} , 
 	{ "name": "a_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_coeffs", "role": "ce0" }} , 
 	{ "name": "a_coeffs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "a_coeffs", "role": "q0" }} , 
 	{ "name": "a_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "a_coeffs", "role": "address1" }} , 
 	{ "name": "a_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_coeffs", "role": "ce1" }} , 
 	{ "name": "a_coeffs_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "a_coeffs", "role": "q1" }} , 
 	{ "name": "a_coeffs_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "a_coeffs_offset", "role": "default" }} , 
 	{ "name": "a_coeffs_offset1", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "a_coeffs_offset1", "role": "default" }} , 
 	{ "name": "b_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "b_coeffs", "role": "address0" }} , 
 	{ "name": "b_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_coeffs", "role": "ce0" }} , 
 	{ "name": "b_coeffs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b_coeffs", "role": "q0" }} , 
 	{ "name": "b_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "b_coeffs", "role": "address1" }} , 
 	{ "name": "b_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "b_coeffs", "role": "ce1" }} , 
 	{ "name": "b_coeffs_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "b_coeffs", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "pqcrystals_dilithium_14",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "128",
		"VariableLatency" : "0", "ExactLatency" : "133", "EstimateLatencyMin" : "133", "EstimateLatencyMax" : "133",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "c_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "a_coeffs_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "a_coeffs_offset1", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_coeffs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium_20_fu_7999", "Parent" : "0",
		"CDFG" : "pqcrystals_dilithium_20",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium_20_fu_8005", "Parent" : "0",
		"CDFG" : "pqcrystals_dilithium_20",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "1",
		"VariableLatency" : "0", "ExactLatency" : "2", "EstimateLatencyMin" : "2", "EstimateLatencyMax" : "2",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	pqcrystals_dilithium_14 {
		c_coeffs {Type O LastRead -1 FirstWrite 6}
		a_coeffs {Type I LastRead 128 FirstWrite -1}
		a_coeffs_offset {Type I LastRead 0 FirstWrite -1}
		a_coeffs_offset1 {Type I LastRead 0 FirstWrite -1}
		b_coeffs {Type I LastRead 128 FirstWrite -1}}
	pqcrystals_dilithium_20 {
		a {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium_20 {
		a {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "133", "Max" : "133"}
	, {"Name" : "Interval", "Min" : "128", "Max" : "128"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	c_coeffs { ap_memory {  { c_coeffs_address0 mem_address 1 8 }  { c_coeffs_ce0 mem_ce 1 1 }  { c_coeffs_we0 mem_we 1 1 }  { c_coeffs_d0 mem_din 1 32 }  { c_coeffs_address1 MemPortADDR2 1 8 }  { c_coeffs_ce1 MemPortCE2 1 1 }  { c_coeffs_we1 MemPortWE2 1 1 }  { c_coeffs_d1 MemPortDIN2 1 32 } } }
	a_coeffs { ap_memory {  { a_coeffs_address0 mem_address 1 12 }  { a_coeffs_ce0 mem_ce 1 1 }  { a_coeffs_q0 mem_dout 0 23 }  { a_coeffs_address1 MemPortADDR2 1 12 }  { a_coeffs_ce1 MemPortCE2 1 1 }  { a_coeffs_q1 MemPortDOUT2 0 23 } } }
	a_coeffs_offset { ap_none {  { a_coeffs_offset in_data 0 3 } } }
	a_coeffs_offset1 { ap_none {  { a_coeffs_offset1 in_data 0 3 } } }
	b_coeffs { ap_memory {  { b_coeffs_address0 mem_address 1 10 }  { b_coeffs_ce0 mem_ce 1 1 }  { b_coeffs_q0 mem_dout 0 32 }  { b_coeffs_address1 MemPortADDR2 1 10 }  { b_coeffs_ce1 MemPortCE2 1 1 }  { b_coeffs_q1 MemPortDOUT2 0 32 } } }
}
