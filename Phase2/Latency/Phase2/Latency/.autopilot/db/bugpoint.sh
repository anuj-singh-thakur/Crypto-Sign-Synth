export PATH=C:/Xilinx/Vivado/2019.2/tps/win64/msys64/usr/bin;C:/Xilinx/Vivado/2019.2/tps/win64/msys64/mingw64/bin;C:/Xilinx/Vivado/2019.2/bin;C:/Xilinx/Vivado/2019.2/win64/bin;C:/Xilinx/Vivado/2019.2/win64/tools/bin;C:/Xilinx/Vivado/2019.2\gnuwin\bin;C:/Xilinx/Vivado/2019.2\gnu\microblaze\nt\bin;C:/Xilinx/Vivado/2019.2/bin;C:/Xilinx/Vivado/2019.2/lib/win64.o;C:/Xilinx/Vivado/2019.2/tps/win64/jre9.0.4/bin/server;C:/Xilinx/Vivado/2019.2/tps/win64/jre9.0.4/bin;C:/Xilinx/Vivado/2019.2/ids_lite/ISE/bin/nt64;C:/Xilinx/Vivado/2019.2/ids_lite/ISE/lib/nt64;C:\Xilinx\Vivado\2019.2\bin\..\tps\win64\msys64\mingw64\bin;C:\Xilinx\Vivado\2019.2\bin\..\tps\win64\msys64\usr\bin;C:/Xilinx/Vivado/2019.2/tps/win64/msys64/usr/bin;C:/Xilinx/Vivado/2019.2/tps/win64/msys64/mingw64/bin;C:/Xilinx/Vivado/2019.2/win64/bin;C:/Xilinx/Vivado/2019.2/win64/tools/bin;C:\Program Files (x86)\Common Files\Oracle\Java\javapath;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Java\jdk-10.0.2\bin;C:\Program Files\CodeBlocks\MinGW\bin;C:\Program Files (x86)\MySQL\MySQL Server 5.0\bin;c:\Program Files (x86)\Microsoft SQL Server\100\Tools\Binn\;c:\Program Files\Microsoft SQL Server\100\Tools\Binn\;c:\Program Files\Microsoft SQL Server\100\DTS\Binn\;C:\Program Files\Graphviz\bin;C:\Windows\System32\wsock32.dll;C:\Program Files\Git\cmd;C:\Program Files\Microsoft VS Code\bin;C:\Users\Hp\AppData\Local\Microsoft\WindowsApps;;C:\Program Files\JetBrains\IntelliJ IDEA Community Edition 2022.2\bin;C:/Xilinx/Vivado/2019.2\tps\mingw\6.2.0\win64.o\nt\bin;C:/Xilinx/Vivado/2019.2\tps\mingw\6.2.0\win64.o\nt\libexec\gcc\x86_64-w64-mingw32\6.2.0;C:/Xilinx/Vivado/2019.2/win64/tools/fpo_v7_0;C:/Xilinx/Vivado/2019.2/win64/tools/fft_v9_1;C:/Xilinx/Vivado/2019.2/win64/tools/opencv;C:/Xilinx/Vivado/2019.2/win64/tools/fir_v7_0;C:/Xilinx/Vivado/2019.2/win64/tools/dds_v6_0;C:/Xilinx/Vivado/2019.2/win64/lib/csim;C:/Xilinx/Vivado/2019.2/win64/tools/fpo_v7_0;C:/Xilinx/Vivado/2019.2/win64/tools/fft_v9_1;C:/Xilinx/Vivado/2019.2/win64/tools/opencv;C:/Xilinx/Vivado/2019.2/win64/tools/fir_v7_0;C:/Xilinx/Vivado/2019.2/win64/tools/dds_v6_0;C:/Xilinx/Vivado/2019.2/win64/lib/csim
export LD_LIBRARY_PATH=C:/Xilinx/Vivado/2019.2/win64/tools/gdb_v7_2;C:/Xilinx/Vivado/2019.2/tps/win64/dot-2.28/lib;C:/Xilinx/Vivado/2019.2/win64/bin;C:/Xilinx/Vivado/2019.2/win64/tools/gdb_v7_2;C:/Xilinx/Vivado/2019.2/tps/win64/dot-2.28/lib;C:/Xilinx/Vivado/2019.2/win64/bin;C:/Xilinx/Vivado/2019.2/win64/tools/fpo_v7_0;C:/Xilinx/Vivado/2019.2/win64/tools/fft_v9_1;C:/Xilinx/Vivado/2019.2/win64/tools/opencv;C:/Xilinx/Vivado/2019.2/win64/tools/fir_v7_0;C:/Xilinx/Vivado/2019.2/win64/tools/dds_v6_0;C:/Xilinx/Vivado/2019.2/win64/lib/csim;C:/Xilinx/Vivado/2019.2/win64/tools/fpo_v7_0;C:/Xilinx/Vivado/2019.2/win64/tools/fft_v9_1;C:/Xilinx/Vivado/2019.2/win64/tools/opencv;C:/Xilinx/Vivado/2019.2/win64/tools/fir_v7_0;C:/Xilinx/Vivado/2019.2/win64/tools/dds_v6_0;C:/Xilinx/Vivado/2019.2/win64/lib/csim
export HDI_APPROOT=C:/Xilinx/Vivado/2019.2
export XILINX_OPENCL_CLANG=C:/Xilinx/Vivado/2019.2/win64/tools/clang
export RDI_PLATFORM=win64
bugpoint -mlimit=32000  --load libhls_support.so  --load libhls_bugpoint.so  -hls -strip  -function-uniquify -auto-function-inline -globaldce  -ptrArgReplace -mem2reg -dce  -reset-lda  -loop-simplify -indvars -licm -loop-dep  -loop-bound -licm -loop-simplify -flattenloopnest  -array-flatten -gvn -instcombine -dce  -array-map -dce -func-legal  -gvn -adce -instcombine -cfgopt -simplifycfg -loop-simplify   -array-burst -promote-global-argument -dce  -ptrLegalization -axi4-lower -array-seg-normalize  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa -gvn -gvn  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa -dse -adse -adce -licm  -inst-simplify -dce  -globaldce -instcombine -array-stream -eliminate-keepreads -instcombine  -dce   -deadargelim -doublePtrSimplify  -doublePtrElim -dce -doublePtrSimplify -promote-dbg-pointer  -dce -scalarrepl -mem2reg -disaggr -norm-name -mem2reg  -instcombine  -dse -adse -adce -ptrLegalization -dce -auto-rom-infer -array-flatten -dce -instcombine -check-doubleptr  -loop-rot -constprop -cfgopt -simplifycfg -loop-simplify -indvars -pointer-simplify -dce -loop-bound  -loop-simplify -loop-preproc  -constprop -global-constprop -gvn -mem2reg -instcombine -dce  -loop-bound  -loop-merge -dce  -bitwidthmin  -deadargelim -dce  -canonicalize-dataflow -dce  -scalar-propagation -deadargelim -globaldce -mem2reg  -read-loop-dep  -interface-preproc -directive-preproc -interface-gen  -bram-byte-enable  -deadargelim -inst-simplify -dce  -gvn -mem2reg -instcombine -dce -adse  -loop-bound  -instcombine -cfgopt -simplifycfg -loop-simplify  -clean-region -io-protocol  -find-region -mem2reg  -bitop-raise -complex-op-raise -inst-simplify -inst-rectify -instcombine -adce -deadargelim  -loop-simplify -phi-opt -bitop-raise  -cfgopt -simplifycfg -strip-dead-prototypes  -interface-lower -bitop-lower -intrinsic-lower -auto-function-inline  -basicaa -aggrmodref-aa -globalsmodref-aa -aggr-aa  -inst-simplify -simplifycfg   -loop-simplify  -mergereturn -inst-simplify -inst-rectify  -dce -load-elim -bitop-lower  -loop-rewind -pointer-simplify -dce -cfgopt  -dce -loop-bound -loop-dep -read-loop-dep -dce  -check-stream -norm-name -legalize  -validate-dataflow -inst-clarity -bitwidth -dump-loop-dep-to-ir -check-all-ssdm  C:/Users/Hp/Desktop/IITG/MTech_Course_2_Sem/C_BASED_VLSI/AssignmentPhase_2_Latency/Phase2/Latency/.autopilot/db/a.o.2.bc
llvm-dis bugpoint-reduced-simplified.bc 
