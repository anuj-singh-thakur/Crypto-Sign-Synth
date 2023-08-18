set moduleName pqcrystals_dilithium_1
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
set C_modelName {pqcrystals_dilithium.1}
set C_modelType { void 0 }
set C_modelArgList {
	{ rho int 8 regular {array 208 { 0 3 } 0 1 }  }
	{ t0_vec_coeffs int 32 regular {array 1024 { 0 0 } 0 1 }  }
	{ s1_vec_coeffs int 32 regular {array 1024 { 0 0 } 0 1 }  }
	{ s2_vec_coeffs int 32 regular {array 1024 { 0 0 } 0 1 }  }
	{ sk int 8 regular {array 2544 { 1 1 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "rho", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "t0_vec_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "s1_vec_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "s2_vec_coeffs", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "sk", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 40
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ rho_address0 sc_out sc_lv 8 signal 0 } 
	{ rho_ce0 sc_out sc_logic 1 signal 0 } 
	{ rho_we0 sc_out sc_logic 1 signal 0 } 
	{ rho_d0 sc_out sc_lv 8 signal 0 } 
	{ t0_vec_coeffs_address0 sc_out sc_lv 10 signal 1 } 
	{ t0_vec_coeffs_ce0 sc_out sc_logic 1 signal 1 } 
	{ t0_vec_coeffs_we0 sc_out sc_logic 1 signal 1 } 
	{ t0_vec_coeffs_d0 sc_out sc_lv 32 signal 1 } 
	{ t0_vec_coeffs_address1 sc_out sc_lv 10 signal 1 } 
	{ t0_vec_coeffs_ce1 sc_out sc_logic 1 signal 1 } 
	{ t0_vec_coeffs_we1 sc_out sc_logic 1 signal 1 } 
	{ t0_vec_coeffs_d1 sc_out sc_lv 32 signal 1 } 
	{ s1_vec_coeffs_address0 sc_out sc_lv 10 signal 2 } 
	{ s1_vec_coeffs_ce0 sc_out sc_logic 1 signal 2 } 
	{ s1_vec_coeffs_we0 sc_out sc_logic 1 signal 2 } 
	{ s1_vec_coeffs_d0 sc_out sc_lv 32 signal 2 } 
	{ s1_vec_coeffs_address1 sc_out sc_lv 10 signal 2 } 
	{ s1_vec_coeffs_ce1 sc_out sc_logic 1 signal 2 } 
	{ s1_vec_coeffs_we1 sc_out sc_logic 1 signal 2 } 
	{ s1_vec_coeffs_d1 sc_out sc_lv 32 signal 2 } 
	{ s2_vec_coeffs_address0 sc_out sc_lv 10 signal 3 } 
	{ s2_vec_coeffs_ce0 sc_out sc_logic 1 signal 3 } 
	{ s2_vec_coeffs_we0 sc_out sc_logic 1 signal 3 } 
	{ s2_vec_coeffs_d0 sc_out sc_lv 32 signal 3 } 
	{ s2_vec_coeffs_address1 sc_out sc_lv 10 signal 3 } 
	{ s2_vec_coeffs_ce1 sc_out sc_logic 1 signal 3 } 
	{ s2_vec_coeffs_we1 sc_out sc_logic 1 signal 3 } 
	{ s2_vec_coeffs_d1 sc_out sc_lv 32 signal 3 } 
	{ sk_address0 sc_out sc_lv 12 signal 4 } 
	{ sk_ce0 sc_out sc_logic 1 signal 4 } 
	{ sk_q0 sc_in sc_lv 8 signal 4 } 
	{ sk_address1 sc_out sc_lv 12 signal 4 } 
	{ sk_ce1 sc_out sc_logic 1 signal 4 } 
	{ sk_q1 sc_in sc_lv 8 signal 4 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "rho_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "rho", "role": "address0" }} , 
 	{ "name": "rho_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rho", "role": "ce0" }} , 
 	{ "name": "rho_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "rho", "role": "we0" }} , 
 	{ "name": "rho_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "rho", "role": "d0" }} , 
 	{ "name": "t0_vec_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "t0_vec_coeffs", "role": "address0" }} , 
 	{ "name": "t0_vec_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "t0_vec_coeffs", "role": "ce0" }} , 
 	{ "name": "t0_vec_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "t0_vec_coeffs", "role": "we0" }} , 
 	{ "name": "t0_vec_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "t0_vec_coeffs", "role": "d0" }} , 
 	{ "name": "t0_vec_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "t0_vec_coeffs", "role": "address1" }} , 
 	{ "name": "t0_vec_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "t0_vec_coeffs", "role": "ce1" }} , 
 	{ "name": "t0_vec_coeffs_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "t0_vec_coeffs", "role": "we1" }} , 
 	{ "name": "t0_vec_coeffs_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "t0_vec_coeffs", "role": "d1" }} , 
 	{ "name": "s1_vec_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "address0" }} , 
 	{ "name": "s1_vec_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "ce0" }} , 
 	{ "name": "s1_vec_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "we0" }} , 
 	{ "name": "s1_vec_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "d0" }} , 
 	{ "name": "s1_vec_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "address1" }} , 
 	{ "name": "s1_vec_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "ce1" }} , 
 	{ "name": "s1_vec_coeffs_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "we1" }} , 
 	{ "name": "s1_vec_coeffs_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "s1_vec_coeffs", "role": "d1" }} , 
 	{ "name": "s2_vec_coeffs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "s2_vec_coeffs", "role": "address0" }} , 
 	{ "name": "s2_vec_coeffs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s2_vec_coeffs", "role": "ce0" }} , 
 	{ "name": "s2_vec_coeffs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s2_vec_coeffs", "role": "we0" }} , 
 	{ "name": "s2_vec_coeffs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "s2_vec_coeffs", "role": "d0" }} , 
 	{ "name": "s2_vec_coeffs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "s2_vec_coeffs", "role": "address1" }} , 
 	{ "name": "s2_vec_coeffs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s2_vec_coeffs", "role": "ce1" }} , 
 	{ "name": "s2_vec_coeffs_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "s2_vec_coeffs", "role": "we1" }} , 
 	{ "name": "s2_vec_coeffs_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "s2_vec_coeffs", "role": "d1" }} , 
 	{ "name": "sk_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address0" }} , 
 	{ "name": "sk_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce0" }} , 
 	{ "name": "sk_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q0" }} , 
 	{ "name": "sk_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "sk", "role": "address1" }} , 
 	{ "name": "sk_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "sk", "role": "ce1" }} , 
 	{ "name": "sk_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sk", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "pqcrystals_dilithium_1",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "2570", "EstimateLatencyMax" : "2570",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state13", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pqcrystals_dilithium_10_fu_205"},
			{"State" : "ap_ST_fsm_state9", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pqcrystals_dilithium_11_fu_216"},
			{"State" : "ap_ST_fsm_state11", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_pqcrystals_dilithium_11_fu_216"}],
		"Port" : [
			{"Name" : "rho", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "t0_vec_coeffs", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pqcrystals_dilithium_10_fu_205", "Port" : "r_coeffs"}]},
			{"Name" : "s1_vec_coeffs", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_pqcrystals_dilithium_11_fu_216", "Port" : "r_coeffs"}]},
			{"Name" : "s2_vec_coeffs", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "2", "SubInstance" : "grp_pqcrystals_dilithium_11_fu_216", "Port" : "r_coeffs"}]},
			{"Name" : "sk", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_pqcrystals_dilithium_10_fu_205", "Port" : "a"},
					{"ID" : "2", "SubInstance" : "grp_pqcrystals_dilithium_11_fu_216", "Port" : "a"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium_10_fu_205", "Parent" : "0",
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
			{"Name" : "a_offset", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium_11_fu_216", "Parent" : "0",
		"CDFG" : "pqcrystals_dilithium_11",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "161", "EstimateLatencyMax" : "161",
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
	pqcrystals_dilithium_1 {
		rho {Type O LastRead -1 FirstWrite 2}
		t0_vec_coeffs {Type O LastRead -1 FirstWrite 2}
		s1_vec_coeffs {Type O LastRead -1 FirstWrite 2}
		s2_vec_coeffs {Type O LastRead -1 FirstWrite 2}
		sk {Type I LastRead 8 FirstWrite -1}}
	pqcrystals_dilithium_10 {
		r_coeffs {Type O LastRead -1 FirstWrite 2}
		r_coeffs_offset {Type I LastRead 0 FirstWrite -1}
		a {Type I LastRead 8 FirstWrite -1}
		a_offset {Type I LastRead 0 FirstWrite -1}}
	pqcrystals_dilithium_11 {
		r_coeffs {Type O LastRead -1 FirstWrite 2}
		r_coeffs_offset {Type I LastRead 0 FirstWrite -1}
		a {Type I LastRead 3 FirstWrite -1}
		a_offset {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "2570", "Max" : "2570"}
	, {"Name" : "Interval", "Min" : "2570", "Max" : "2570"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	rho { ap_memory {  { rho_address0 mem_address 1 8 }  { rho_ce0 mem_ce 1 1 }  { rho_we0 mem_we 1 1 }  { rho_d0 mem_din 1 8 } } }
	t0_vec_coeffs { ap_memory {  { t0_vec_coeffs_address0 mem_address 1 10 }  { t0_vec_coeffs_ce0 mem_ce 1 1 }  { t0_vec_coeffs_we0 mem_we 1 1 }  { t0_vec_coeffs_d0 mem_din 1 32 }  { t0_vec_coeffs_address1 MemPortADDR2 1 10 }  { t0_vec_coeffs_ce1 MemPortCE2 1 1 }  { t0_vec_coeffs_we1 MemPortWE2 1 1 }  { t0_vec_coeffs_d1 MemPortDIN2 1 32 } } }
	s1_vec_coeffs { ap_memory {  { s1_vec_coeffs_address0 mem_address 1 10 }  { s1_vec_coeffs_ce0 mem_ce 1 1 }  { s1_vec_coeffs_we0 mem_we 1 1 }  { s1_vec_coeffs_d0 mem_din 1 32 }  { s1_vec_coeffs_address1 MemPortADDR2 1 10 }  { s1_vec_coeffs_ce1 MemPortCE2 1 1 }  { s1_vec_coeffs_we1 MemPortWE2 1 1 }  { s1_vec_coeffs_d1 MemPortDIN2 1 32 } } }
	s2_vec_coeffs { ap_memory {  { s2_vec_coeffs_address0 mem_address 1 10 }  { s2_vec_coeffs_ce0 mem_ce 1 1 }  { s2_vec_coeffs_we0 mem_we 1 1 }  { s2_vec_coeffs_d0 mem_din 1 32 }  { s2_vec_coeffs_address1 MemPortADDR2 1 10 }  { s2_vec_coeffs_ce1 MemPortCE2 1 1 }  { s2_vec_coeffs_we1 MemPortWE2 1 1 }  { s2_vec_coeffs_d1 MemPortDIN2 1 32 } } }
	sk { ap_memory {  { sk_address0 mem_address 1 12 }  { sk_ce0 mem_ce 1 1 }  { sk_q0 mem_dout 0 8 }  { sk_address1 MemPortADDR2 1 12 }  { sk_ce1 MemPortCE2 1 1 }  { sk_q1 MemPortDOUT2 0 8 } } }
}
