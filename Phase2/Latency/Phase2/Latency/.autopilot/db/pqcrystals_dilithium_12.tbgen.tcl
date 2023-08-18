set moduleName pqcrystals_dilithium_12
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
set C_modelName {pqcrystals_dilithium.12}
set C_modelType { void 0 }
set C_modelArgList {
	{ a_coeffs int 19 regular {array 1024 { 0 3 } 0 1 }  }
	{ a_coeffs_offset int 3 regular  }
	{ seed int 8 regular {array 208 { 1 1 } 1 1 }  }
	{ nonce int 16 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "a_coeffs", "interface" : "memory", "bitwidth" : 19, "direction" : "WRITEONLY"} , 
 	{ "Name" : "a_coeffs_offset", "interface" : "wire", "bitwidth" : 3, "direction" : "READONLY"} , 
 	{ "Name" : "seed", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "nonce", "interface" : "wire", "bitwidth" : 16, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 18
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ a_coeffs_address0 sc_out sc_lv 10 signal 0 } 
	{ a_coeffs_ce0 sc_out sc_logic 1 signal 0 } 
	{ a_coeffs_we0 sc_out sc_logic 1 signal 0 } 
	{ a_coeffs_d0 sc_out sc_lv 19 signal 0 } 
	{ a_coeffs_offset sc_in sc_lv 3 signal 1 } 
	{ seed_address0 sc_out sc_lv 8 signal 2 } 
	{ seed_ce0 sc_out sc_logic 1 signal 2 } 
	{ seed_q0 sc_in sc_lv 8 signal 2 } 
	{ seed_address1 sc_out sc_lv 8 signal 2 } 
	{ seed_ce1 sc_out sc_logic 1 signal 2 } 
	{ seed_q1 sc_in sc_lv 8 signal 2 } 
	{ nonce sc_in sc_lv 16 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "a_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "a_coeffs", "role": "address0" }} , 
 	{ "name": "a_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_coeffs", "role": "ce0" }} , 
 	{ "name": "a_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "a_coeffs", "role": "we0" }} , 
 	{ "name": "a_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":19, "type": "signal", "bundle":{"name": "a_coeffs", "role": "d0" }} , 
 	{ "name": "a_coeffs_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "a_coeffs_offset", "role": "default" }} , 
 	{ "name": "seed_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "seed", "role": "address0" }} , 
 	{ "name": "seed_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "seed", "role": "ce0" }} , 
 	{ "name": "seed_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "seed", "role": "q0" }} , 
 	{ "name": "seed_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "seed", "role": "address1" }} , 
 	{ "name": "seed_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "seed", "role": "ce1" }} , 
 	{ "name": "seed_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "seed", "role": "q1" }} , 
 	{ "name": "nonce", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "nonce", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "5"],
		"CDFG" : "pqcrystals_dilithium_12",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "1103", "EstimateLatencyMax" : "1103",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_KeccakF1600_StatePer_1_fu_399"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pqcrystals_dilithium_22_fu_406"}],
		"Port" : [
			{"Name" : "a_coeffs", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "a_coeffs_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "5", "SubInstance" : "grp_pqcrystals_dilithium_22_fu_406", "Port" : "seed"}]},
			{"Name" : "nonce", "Type" : "None", "Direction" : "I"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "3", "SubInstance" : "grp_KeccakF1600_StatePer_1_fu_399", "Port" : "KeccakF_RoundConstan"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buf_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_s_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_KeccakF1600_StatePer_1_fu_399", "Parent" : "0", "Child" : ["4"],
		"CDFG" : "KeccakF1600_StatePer_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "39", "EstimateLatencyMax" : "39",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "KeccakF_RoundConstan", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_KeccakF1600_StatePer_1_fu_399.KeccakF_RoundConstan_U", "Parent" : "3"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium_22_fu_406", "Parent" : "0", "Child" : ["6"],
		"CDFG" : "pqcrystals_dilithium_22",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "81", "EstimateLatencyMax" : "81",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state_s", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "seed", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "nonce", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium_22_fu_406.t_U", "Parent" : "5"}]}


set ArgLastReadFirstWriteLatency {
	pqcrystals_dilithium_12 {
		a_coeffs {Type O LastRead -1 FirstWrite 5}
		a_coeffs_offset {Type I LastRead 1 FirstWrite -1}
		seed {Type I LastRead 6 FirstWrite -1}
		nonce {Type I LastRead 0 FirstWrite -1}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	KeccakF1600_StatePer_1 {
		state {Type IO LastRead 13 FirstWrite 15}
		KeccakF_RoundConstan {Type I LastRead -1 FirstWrite -1}}
	pqcrystals_dilithium_22 {
		state_s {Type IO LastRead 9 FirstWrite 1}
		seed {Type I LastRead 6 FirstWrite -1}
		nonce {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1103", "Max" : "1103"}
	, {"Name" : "Interval", "Min" : "1103", "Max" : "1103"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	a_coeffs { ap_memory {  { a_coeffs_address0 mem_address 1 10 }  { a_coeffs_ce0 mem_ce 1 1 }  { a_coeffs_we0 mem_we 1 1 }  { a_coeffs_d0 mem_din 1 19 } } }
	a_coeffs_offset { ap_none {  { a_coeffs_offset in_data 0 3 } } }
	seed { ap_memory {  { seed_address0 mem_address 1 8 }  { seed_ce0 mem_ce 1 1 }  { seed_q0 mem_dout 0 8 }  { seed_address1 MemPortADDR2 1 8 }  { seed_ce1 MemPortCE2 1 1 }  { seed_q1 MemPortDOUT2 0 8 } } }
	nonce { ap_none {  { nonce in_data 0 16 } } }
}
