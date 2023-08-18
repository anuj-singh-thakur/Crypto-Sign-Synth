; ModuleID = '/home/shikha/Final_Assignment/crypto_sign/solution1/.autopilot/db/a.g.ld.5.gdce.bc'
source_filename = "llvm-link"
target datalayout = "e-m:e-i64:64-i128:128-i256:256-i512:512-i1024:1024-i2048:2048-i4096:4096-n8:16:32:64-S128-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "fpga64-xilinx-none"

; Function Attrs: noinline
define i32 @apatb_pqcrystals_dilithium2_ref_ir(i8* noalias nocapture nonnull "fpga.decayed.dim.hint"="5720" %sm, i64* noalias nocapture nonnull %smlen, i8* noalias nocapture nonnull readonly "fpga.decayed.dim.hint"="3300" %m, i64 %mlen, i8* noalias nocapture nonnull readonly "fpga.decayed.dim.hint"="2544" %sk) local_unnamed_addr #0 {
entry:
  %malloccall = tail call i8* @malloc(i64 5720)
  %sm_copy = bitcast i8* %malloccall to [5720 x i8]*
  %smlen_copy = alloca i64, align 512
  %m_copy = alloca [3300 x i8], align 512
  %sk_copy = alloca [2544 x i8], align 512
  %0 = bitcast i8* %sm to [5720 x i8]*
  %1 = bitcast i8* %m to [3300 x i8]*
  %2 = bitcast i8* %sk to [2544 x i8]*
  call fastcc void @copy_in([5720 x i8]* nonnull %0, [5720 x i8]* %sm_copy, i64* nonnull %smlen, i64* nonnull align 512 %smlen_copy, [3300 x i8]* nonnull %1, [3300 x i8]* nonnull align 512 %m_copy, [2544 x i8]* nonnull %2, [2544 x i8]* nonnull align 512 %sk_copy)
  %3 = getelementptr inbounds [3300 x i8], [3300 x i8]* %m_copy, i32 0, i32 0
  %4 = getelementptr inbounds [2544 x i8], [2544 x i8]* %sk_copy, i32 0, i32 0
  %5 = call i32 @apatb_pqcrystals_dilithium2_ref_hw(i8* %malloccall, i64* %smlen_copy, i8* %3, i64 %mlen, i8* %4)
  call void @copy_back([5720 x i8]* %0, [5720 x i8]* %sm_copy, i64* %smlen, i64* %smlen_copy, [3300 x i8]* %1, [3300 x i8]* %m_copy, [2544 x i8]* %2, [2544 x i8]* %sk_copy)
  tail call void @free(i8* %malloccall)
  ret i32 %5
}

declare noalias i8* @malloc(i64) local_unnamed_addr

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @copy_in([5720 x i8]* noalias readonly, [5720 x i8]* noalias, i64* noalias readonly, i64* noalias align 512, [3300 x i8]* noalias readonly, [3300 x i8]* noalias align 512, [2544 x i8]* noalias readonly, [2544 x i8]* noalias align 512) unnamed_addr #1 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5720i8([5720 x i8]* %1, [5720 x i8]* %0)
  call fastcc void @onebyonecpy_hls.p0i64(i64* align 512 %3, i64* %2)
  call fastcc void @onebyonecpy_hls.p0a3300i8([3300 x i8]* align 512 %5, [3300 x i8]* %4)
  call fastcc void @onebyonecpy_hls.p0a2544i8([2544 x i8]* align 512 %7, [2544 x i8]* %6)
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @onebyonecpy_hls.p0a5720i8([5720 x i8]* noalias, [5720 x i8]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [5720 x i8]* %0, null
  %3 = icmp eq [5720 x i8]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx1 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [5720 x i8], [5720 x i8]* %0, i64 0, i64 %for.loop.idx1
  %src.addr = getelementptr [5720 x i8], [5720 x i8]* %1, i64 0, i64 %for.loop.idx1
  %5 = load i8, i8* %src.addr, align 1
  store i8 %5, i8* %dst.addr, align 1
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx1, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 5720
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @onebyonecpy_hls.p0i64(i64* noalias align 512, i64* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq i64* %0, null
  %3 = icmp eq i64* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  %5 = load i64, i64* %1, align 8
  store i64 %5, i64* %0, align 512
  br label %ret

ret:                                              ; preds = %copy, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @onebyonecpy_hls.p0a3300i8([3300 x i8]* noalias align 512, [3300 x i8]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [3300 x i8]* %0, null
  %3 = icmp eq [3300 x i8]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx1 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [3300 x i8], [3300 x i8]* %0, i64 0, i64 %for.loop.idx1
  %src.addr = getelementptr [3300 x i8], [3300 x i8]* %1, i64 0, i64 %for.loop.idx1
  %5 = load i8, i8* %src.addr, align 1
  store i8 %5, i8* %dst.addr, align 1
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx1, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 3300
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @onebyonecpy_hls.p0a2544i8([2544 x i8]* noalias align 512, [2544 x i8]* noalias readonly) unnamed_addr #2 {
entry:
  %2 = icmp eq [2544 x i8]* %0, null
  %3 = icmp eq [2544 x i8]* %1, null
  %4 = or i1 %2, %3
  br i1 %4, label %ret, label %copy

copy:                                             ; preds = %entry
  br label %for.loop

for.loop:                                         ; preds = %for.loop, %copy
  %for.loop.idx1 = phi i64 [ 0, %copy ], [ %for.loop.idx.next, %for.loop ]
  %dst.addr = getelementptr [2544 x i8], [2544 x i8]* %0, i64 0, i64 %for.loop.idx1
  %src.addr = getelementptr [2544 x i8], [2544 x i8]* %1, i64 0, i64 %for.loop.idx1
  %5 = load i8, i8* %src.addr, align 1
  store i8 %5, i8* %dst.addr, align 1
  %for.loop.idx.next = add nuw nsw i64 %for.loop.idx1, 1
  %exitcond = icmp ne i64 %for.loop.idx.next, 2544
  br i1 %exitcond, label %for.loop, label %ret

ret:                                              ; preds = %for.loop, %entry
  ret void
}

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @copy_out([5720 x i8]* noalias, [5720 x i8]* noalias readonly, i64* noalias, i64* noalias readonly align 512, [3300 x i8]* noalias, [3300 x i8]* noalias readonly align 512, [2544 x i8]* noalias, [2544 x i8]* noalias readonly align 512) unnamed_addr #3 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5720i8([5720 x i8]* %0, [5720 x i8]* %1)
  call fastcc void @onebyonecpy_hls.p0i64(i64* %2, i64* align 512 %3)
  call fastcc void @onebyonecpy_hls.p0a3300i8([3300 x i8]* %4, [3300 x i8]* align 512 %5)
  call fastcc void @onebyonecpy_hls.p0a2544i8([2544 x i8]* %6, [2544 x i8]* align 512 %7)
  ret void
}

declare void @free(i8*) local_unnamed_addr

declare i32 @apatb_pqcrystals_dilithium2_ref_hw(i8*, i64*, i8*, i64, i8*)

; Function Attrs: argmemonly noinline norecurse
define internal fastcc void @copy_back([5720 x i8]* noalias, [5720 x i8]* noalias readonly, i64* noalias, i64* noalias readonly align 512, [3300 x i8]* noalias, [3300 x i8]* noalias readonly align 512, [2544 x i8]* noalias, [2544 x i8]* noalias readonly align 512) unnamed_addr #3 {
entry:
  call fastcc void @onebyonecpy_hls.p0a5720i8([5720 x i8]* %0, [5720 x i8]* %1)
  call fastcc void @onebyonecpy_hls.p0i64(i64* %2, i64* align 512 %3)
  ret void
}

define i32 @pqcrystals_dilithium2_ref_hw_stub_wrapper(i8*, i64*, i8*, i64, i8*) #4 {
entry:
  %5 = bitcast i8* %0 to [5720 x i8]*
  %6 = bitcast i8* %2 to [3300 x i8]*
  %7 = bitcast i8* %4 to [2544 x i8]*
  call void @copy_out([5720 x i8]* null, [5720 x i8]* %5, i64* null, i64* %1, [3300 x i8]* null, [3300 x i8]* %6, [2544 x i8]* null, [2544 x i8]* %7)
  %8 = bitcast [5720 x i8]* %5 to i8*
  %9 = bitcast [3300 x i8]* %6 to i8*
  %10 = bitcast [2544 x i8]* %7 to i8*
  %11 = call i32 @pqcrystals_dilithium2_ref_hw_stub(i8* %8, i64* %1, i8* %9, i64 %3, i8* %10)
  call void @copy_in([5720 x i8]* null, [5720 x i8]* %5, i64* null, i64* %1, [3300 x i8]* null, [3300 x i8]* %6, [2544 x i8]* null, [2544 x i8]* %7)
  ret i32 %11
}

declare i32 @pqcrystals_dilithium2_ref_hw_stub(i8*, i64*, i8*, i64, i8*)

attributes #0 = { noinline "fpga.wrapper.func"="wrapper" }
attributes #1 = { argmemonly noinline norecurse "fpga.wrapper.func"="copyin" }
attributes #2 = { argmemonly noinline norecurse "fpga.wrapper.func"="onebyonecpy_hls" }
attributes #3 = { argmemonly noinline norecurse "fpga.wrapper.func"="copyout" }
attributes #4 = { "fpga.wrapper.func"="stub" }

!llvm.dbg.cu = !{}
!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}
!blackbox_cfg = !{!4}

!0 = !{!"clang version 7.0.0 "}
!1 = !{i32 2, !"Dwarf Version", i32 4}
!2 = !{i32 2, !"Debug Info Version", i32 3}
!3 = !{i32 1, !"wchar_size", i32 4}
!4 = !{}
