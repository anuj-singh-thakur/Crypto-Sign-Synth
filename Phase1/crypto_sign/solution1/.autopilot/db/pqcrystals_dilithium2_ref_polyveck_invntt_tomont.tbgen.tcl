set moduleName pqcrystals_dilithium2_ref_polyveck_invntt_tomont
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
set C_modelName {pqcrystals_dilithium2_ref_polyveck_invntt_tomont}
set C_modelType { void 0 }
set C_modelArgList {
	{ v int 32 regular {array 1024 { 2 1 } 1 1 }  }
	{ zetas int 23 regular {array 256 { 1 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "v", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "zetas", "interface" : "memory", "bitwidth" : 23, "direction" : "READONLY", "extern" : 0} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ v_address0 sc_out sc_lv 10 signal 0 } 
	{ v_ce0 sc_out sc_logic 1 signal 0 } 
	{ v_we0 sc_out sc_logic 1 signal 0 } 
	{ v_d0 sc_out sc_lv 32 signal 0 } 
	{ v_q0 sc_in sc_lv 32 signal 0 } 
	{ v_address1 sc_out sc_lv 10 signal 0 } 
	{ v_ce1 sc_out sc_logic 1 signal 0 } 
	{ v_q1 sc_in sc_lv 32 signal 0 } 
	{ zetas_address0 sc_out sc_lv 8 signal 1 } 
	{ zetas_ce0 sc_out sc_logic 1 signal 1 } 
	{ zetas_q0 sc_in sc_lv 23 signal 1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "v_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v", "role": "address0" }} , 
 	{ "name": "v_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v", "role": "ce0" }} , 
 	{ "name": "v_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v", "role": "we0" }} , 
 	{ "name": "v_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v", "role": "d0" }} , 
 	{ "name": "v_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v", "role": "q0" }} , 
 	{ "name": "v_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "v", "role": "address1" }} , 
 	{ "name": "v_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "v", "role": "ce1" }} , 
 	{ "name": "v_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "v", "role": "q1" }} , 
 	{ "name": "zetas_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "zetas", "role": "address0" }} , 
 	{ "name": "zetas_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "zetas", "role": "ce0" }} , 
 	{ "name": "zetas_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":23, "type": "signal", "bundle":{"name": "zetas", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "6"],
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
					{"ID" : "6", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138", "Port" : "v", "Inst_start_state" : "5", "Inst_end_state" : "6"},
					{"ID" : "1", "SubInstance" : "grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131", "Port" : "v", "Inst_start_state" : "3", "Inst_end_state" : "7"}]},
			{"Name" : "zetas", "Type" : "Memory", "Direction" : "I"}],
		"Loop" : [
			{"Name" : "VITIS_LOOP_84_2", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state4", "LastState" : ["ap_ST_fsm_state6"], "QuitState" : ["ap_ST_fsm_state4"], "PreState" : ["ap_ST_fsm_state3"], "PostState" : ["ap_ST_fsm_state3"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_83_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state3", "LastState" : ["ap_ST_fsm_state4"], "QuitState" : ["ap_ST_fsm_state3"], "PreState" : ["ap_ST_fsm_state2"], "PostState" : ["ap_ST_fsm_state7"], "OneDepthLoop" : "0", "OneStateBlock": ""}},
			{"Name" : "VITIS_LOOP_298_1", "PipelineType" : "no",
				"LoopDec" : {"FSMBitwidth" : "7", "FirstState" : "ap_ST_fsm_state2", "LastState" : ["ap_ST_fsm_state7"], "QuitState" : ["ap_ST_fsm_state2"], "PreState" : ["ap_ST_fsm_state1"], "PostState" : ["ap_ST_fsm_state1"], "OneDepthLoop" : "0", "OneStateBlock": ""}}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131", "Parent" : "0", "Child" : ["2", "3", "4", "5"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_17ns_49_1_1_U225", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_27ns_32_1_1_U226", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.mul_32s_24s_55_1_1_U227", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_95_4_fu_131.flow_control_loop_pipe_sequential_init_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138", "Parent" : "0", "Child" : ["7", "8", "9", "10"],
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
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_23s_54_1_1_U216", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_27ns_32_1_1_U217", "Parent" : "6"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.mul_32s_24s_55_1_1_U218", "Parent" : "6"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_pqcrystals_dilithium2_ref_polyveck_invntt_tomont_Pipeline_VITIS_LOOP_86_3_fu_138.flow_control_loop_pipe_sequential_init_U", "Parent" : "6"}]}


set ArgLastReadFirstWriteLatency {
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
		sext_ln86 {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	v { ap_memory {  { v_address0 mem_address 1 10 }  { v_ce0 mem_ce 1 1 }  { v_we0 mem_we 1 1 }  { v_d0 mem_din 1 32 }  { v_q0 mem_dout 0 32 }  { v_address1 MemPortADDR2 1 10 }  { v_ce1 MemPortCE2 1 1 }  { v_q1 MemPortDOUT2 0 32 } } }
	zetas { ap_memory {  { zetas_address0 mem_address 1 8 }  { zetas_ce0 mem_ce 1 1 }  { zetas_q0 in_data 0 23 } } }
}
