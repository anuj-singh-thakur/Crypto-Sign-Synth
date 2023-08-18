
set TopModule "pqcrystals_dilithium2_ref"
set ClockPeriod 10
set ClockList ap_clk
set HasVivadoClockPeriod 0
set CombLogicFlag 0
set PipelineFlag 0
set DataflowTaskPipelineFlag 1
set TrivialPipelineFlag 0
set noPortSwitchingFlag 0
set FloatingPointFlag 0
set FftOrFirFlag 0
set NbRWValue 0
set intNbAccess 0
set NewDSPMapping 1
set HasDSPModule 1
set ResetLevelFlag 1
set ResetStyle control
set ResetSyncFlag 1
set ResetRegisterFlag 0
set ResetVariableFlag 0
set FsmEncStyle onehot
set MaxFanout 0
set RtlPrefix {}
set ExtraCCFlags {}
set ExtraCLdFlags {}
set SynCheckOptions {}
set PresynOptions {}
set PreprocOptions {}
set SchedOptions {}
set BindOptions {}
set RtlGenOptions {}
set RtlWriterOptions {}
set CbcGenFlag {}
set CasGenFlag {}
set CasMonitorFlag {}
set AutoSimOptions {}
set ExportMCPathFlag 0
set SCTraceFileName mytrace
set SCTraceFileFormat vcd
set SCTraceOption all
set TargetInfo xc7a200t:-fbg676:-2
set SourceFiles {sc {} c {../../dilithium2/aes.c ../../dilithium2/aes256ctr.c ../../dilithium2/fips202.c ../../dilithium2/ntt.c ../../dilithium2/packing.c ../../dilithium2/poly.c ../../dilithium2/polyvec.c ../../dilithium2/reduce.c ../../dilithium2/rng.c ../../dilithium2/rounding.c ../../dilithium2/sign.c ../../dilithium2/symmetric-aes.c ../../dilithium2/symmetric-shake.c}}
set SourceFlags {sc {} c {{} {} {} {} {} {} {} {} {} {} {} {} {}}}
set DirectiveFile C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/Phase2/Latency/Latency.directive
set TBFiles {verilog ../../dilithium2/PQCgenKAT_sign.c bc ../../dilithium2/PQCgenKAT_sign.c vhdl ../../dilithium2/PQCgenKAT_sign.c sc ../../dilithium2/PQCgenKAT_sign.c cas ../../dilithium2/PQCgenKAT_sign.c c {}}
set SpecLanguage C
set TVInFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TVOutFiles {bc {} c {} sc {} cas {} vhdl {} verilog {}}
set TBTops {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set TBInstNames {verilog {} bc {} vhdl {} sc {} cas {} c {}}
set XDCFiles {}
set ExtraGlobalOptions {"area_timing" 1 "clock_gate" 1 "impl_flow" map "power_gate" 0}
set TBTVFileNotFound {}
set AppFile ../vivado_hls.app
set ApsFile Latency.aps
set AvePath ../..
set DefaultPlatform DefaultPlatform
set multiClockList {}
set SCPortClockMap {}
set intNbAccess 0
set PlatformFiles {{DefaultPlatform {xilinx/artix7/artix7 xilinx/artix7/artix7_fpv6}}}
set HPFPO 0
