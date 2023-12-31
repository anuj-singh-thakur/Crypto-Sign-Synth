set moduleName keccak_absorb_Pipeline_VITIS_LOOP_425_7
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
set C_modelName {keccak_absorb_Pipeline_VITIS_LOOP_425_7}
set C_modelType { void 0 }
set C_modelArgList {
	{ sext_ln384_3 int 9 regular  }
	{ xor_ln31 int 1 regular  }
	{ m_1_read int 8 regular  }
	{ m_0_read int 8 regular  }
	{ t int 8 regular {array 8 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sext_ln384_3", "interface" : "wire", "bitwidth" : 9, "direction" : "READONLY"} , 
 	{ "Name" : "xor_ln31", "interface" : "wire", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "m_1_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "m_0_read", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "t", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 14
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ sext_ln384_3 sc_in sc_lv 9 signal 0 } 
	{ xor_ln31 sc_in sc_lv 1 signal 1 } 
	{ m_1_read sc_in sc_lv 8 signal 2 } 
	{ m_0_read sc_in sc_lv 8 signal 3 } 
	{ t_address0 sc_out sc_lv 3 signal 4 } 
	{ t_ce0 sc_out sc_logic 1 signal 4 } 
	{ t_we0 sc_out sc_logic 1 signal 4 } 
	{ t_d0 sc_out sc_lv 8 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "sext_ln384_3", "direction": "in", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "sext_ln384_3", "role": "default" }} , 
 	{ "name": "xor_ln31", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "xor_ln31", "role": "default" }} , 
 	{ "name": "m_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "m_1_read", "role": "default" }} , 
 	{ "name": "m_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "m_0_read", "role": "default" }} , 
 	{ "name": "t_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "t", "role": "address0" }} , 
 	{ "name": "t_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "t", "role": "ce0" }} , 
 	{ "name": "t_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "t", "role": "we0" }} , 
 	{ "name": "t_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "t", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	keccak_absorb_Pipeline_VITIS_LOOP_425_7 {
		sext_ln384_3 {Type I LastRead 0 FirstWrite -1}
		xor_ln31 {Type I LastRead 0 FirstWrite -1}
		m_1_read {Type I LastRead 0 FirstWrite -1}
		m_0_read {Type I LastRead 0 FirstWrite -1}
		t {Type O LastRead -1 FirstWrite 0}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	sext_ln384_3 { ap_none {  { sext_ln384_3 in_data 0 9 } } }
	xor_ln31 { ap_none {  { xor_ln31 in_data 0 1 } } }
	m_1_read { ap_none {  { m_1_read in_data 0 8 } } }
	m_0_read { ap_none {  { m_0_read in_data 0 8 } } }
	t { ap_memory {  { t_address0 mem_address 1 3 }  { t_ce0 mem_ce 1 1 }  { t_we0 mem_we 1 1 }  { t_d0 mem_din 1 8 } } }
}
