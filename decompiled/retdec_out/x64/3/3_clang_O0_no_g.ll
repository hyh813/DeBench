source_filename = "test"
target datalayout = "e-m:e-p:64:64-i64:64-f80:128-n8:16:32:64-S128"

@global_var_5ff8 = local_unnamed_addr global i64 0
@global_var_790 = local_unnamed_addr global i64 8
@global_var_3023 = constant [28 x i8] c"MEM-L1-01 (local_vars): %d\0A\00"
@global_var_303f = constant [29 x i8] c"MEM-L1-02 (local_array): %d\0A\00"
@global_var_305c = constant [30 x i8] c"MEM-L1-03 (local_struct): %d\0A\00"
@global_var_307a = constant [34 x i8] c"MEM-L1-04 (address_of_local): %d\0A\00"
@global_var_309c = constant [34 x i8] c"MEM-L1-05 (address_of_array): %d\0A\00"
@global_var_30be = constant [35 x i8] c"MEM-L2-01 (large_stack_frame): %d\0A\00"
@global_var_30e1 = constant [27 x i8] c"MEM-L2-02 (vla_stack): %d\0A\00"
@global_var_30fc = constant [30 x i8] c"MEM-L2-03 (alloca_usage): %d\0A\00"
@global_var_311a = constant [29 x i8] c"MEM-L2-04 (stack_alias): %d\0A\00"
@global_var_3137 = constant [23 x i8] c"value before free: %d\0A\00"
@global_var_316d = constant [29 x i8] c"HEAP-L2-01 (heap_basic): %d\0A\00"
@global_var_318a = constant [30 x i8] c"HEAP-L2-02 (heap_calloc): %d\0A\00"
@global_var_31a8 = constant [31 x i8] c"HEAP-L2-03 (heap_realloc): %d\0A\00"
@global_var_31c7 = constant [29 x i8] c"HEAP-L2-04 (heap_array): %d\0A\00"
@global_var_31e4 = constant [30 x i8] c"HEAP-L2-05 (heap_struct): %d\0A\00"
@global_var_3202 = constant [30 x i8] c"HEAP-L2-06 (heap_nested): %d\0A\00"
@global_var_3220 = constant [35 x i8] c"HEAP-L3-01 (linked_list_heap): %d\0A\00"
@global_var_3243 = constant [38 x i8] c"HEAP-L3-02 (tree_heap_traversal): %d\0A\00"
@global_var_3269 = constant [30 x i8] c"HEAP-L3-03 (memory_leak): %d\0A\00"
@global_var_3287 = constant [32 x i8] c"HEAP-L3-04 (dangling_pointer): \00"
@global_var_6158 = global i64 0
@global_var_3328 = constant [11 x i8] c"HelloWorld\00"
@global_var_60c8 = local_unnamed_addr global [11 x i8]* @global_var_3328
@global_var_60cc = local_unnamed_addr global i64 42949672960
@global_var_60f6 = external global i64
@global_var_3358 = constant [35 x i8] c"STM-L1-01 (global_var_access): %d\0A\00"
@global_var_337b = constant [33 x i8] c"STM-L1-01 (global_var_read): %d\0A\00"
@global_var_339c = constant [37 x i8] c"STM-L1-02 (global_array_access): %d\0A\00"
@global_var_33c1 = constant [30 x i8] c"STM-L1-03 (static_local): %d\0A\00"
@global_var_33df = constant [34 x i8] c"STM-L1-04 (call_static_func): %d\0A\00"
@global_var_3401 = constant [38 x i8] c"STM-L2-01 (access_extern_global): %d\0A\00"
@global_var_3427 = constant [34 x i8] c"STM-L2-02 (call_extern_func): %d\0A\00"
@global_var_3449 = constant [33 x i8] c"STM-L2-03 (read_const_data): %d\0A\00"
@global_var_346a = constant [32 x i8] c"STM-L2-04 (access_bss_var): %d\0A\00"
@global_var_348a = constant [35 x i8] c"STM-L2-04 (access_bss_buffer): %d\0A\00"
@global_var_34ad = constant [38 x i8] c"STM-L2-05 (global_struct_access): %d\0A\00"
@global_var_34d3 = constant [29 x i8] c"STM-L2-06 (file_static): %d\0A\00"
@global_var_34f0 = constant [33 x i8] c"STM-L2-07 (global_func_ptr): %d\0A\00"
@global_var_3511 = constant [35 x i8] c"STM-L2-08 (global_heap_store): %d\0A\00"
@global_var_3534 = constant [37 x i8] c"STM-L2-09 (static_complex_init): %d\0A\00"
@global_var_3559 = constant [28 x i8] c"STM-L3-01 (tls_access): %d\0A\00"
@global_var_3575 = constant [33 x i8] c"STM-L3-02 (init_order_test): %d\0A\00"
@global_var_3660 = local_unnamed_addr constant i64 85899345930
@global_var_3668 = local_unnamed_addr constant i64 171798691870
@global_var_3670 = local_unnamed_addr constant i64 4294967346
@global_var_35b8 = constant [17 x i8] c"MEMOP-L2-01: %d\0A\00"
@global_var_35c9 = constant [17 x i8] c"MEMOP-L2-02: %d\0A\00"
@global_var_3330 = local_unnamed_addr constant [3 x i8] c"ld\00"
@global_var_3332 = local_unnamed_addr constant i64 -8379538505512174336
@global_var_35da = constant [17 x i8] c"MEMOP-L2-03: %c\0A\00"
@global_var_3674 = local_unnamed_addr constant i64 8589934593
@global_var_367c = local_unnamed_addr constant i64 4294967299
@global_var_3680 = local_unnamed_addr constant i64 8589934593
@global_var_3688 = local_unnamed_addr constant i64 289077004400066564
@global_var_35eb = constant [17 x i8] c"MEMOP-L2-04: %d\0A\00"
@global_var_35fc = constant [17 x i8] c"MEMOP-L2-05: %d\0A\00"
@global_var_360d = constant [17 x i8] c"MEMOP-L2-06: %d\0A\00"
@global_var_3690 = local_unnamed_addr constant i64 506097522914230528
@global_var_361e = constant [19 x i8] c"MEMOP-L3-01: 0x%x\0A\00"
@global_var_3631 = constant [17 x i8] c"MEMOP-L3-02: %d\0A\00"
@0 = external global i32
@global_var_6100 = local_unnamed_addr global i8 0
@global_var_800 = global i1 false
@global_var_3e8 = global i1 false
@1 = internal constant [31 x i8] c"=== \E6\B5\8B\E8\AF\95\E6\A0\88\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\0A\00"
@global_var_3004 = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @1, i64 0, i64 0)
@2 = internal constant [31 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\A0\86\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C ===\0A\00"
@global_var_314e = constant i8* getelementptr inbounds ([31 x i8], [31 x i8]* @2, i64 0, i64 0)
@3 = internal constant [16 x i8] c"%d (\E5\AD\90\E8\BF\9B\E7\A8\8B)\0A\00"
@global_var_32a7 = constant i8* getelementptr inbounds ([16 x i8], [16 x i8]* @3, i64 0, i64 0)
@4 = internal constant [37 x i8] c"\E2\9C\93 \E5\AD\90\E8\BF\9B\E7\A8\8B\E6\AD\A3\E5\B8\B8\E9\80\80\E5\87\BA\EF\BC\8Ccode=%d\0A\00"
@global_var_32b7 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @4, i64 0, i64 0)
@5 = internal constant [65 x i8] c"\E2\9C\97 \E5\AD\90\E8\BF\9B\E7\A8\8B\E8\A2\AB\E4\BF\A1\E5\8F\B7\E7\BB\88\E6\AD\A2 (\E4\BF\A1\E5\8F\B7%d) - \E9\87\8E\E6\8C\87\E9\92\88\E5\AF\BC\E8\87\B4\E5\B4\A9\E6\BA\83\0A\00"
@global_var_32dc = constant i8* getelementptr inbounds ([65 x i8], [65 x i8]* @5, i64 0, i64 0)
@6 = internal constant [11 x i8] c"fork\E5\A4\B1\E8\B4\A5\00"
@global_var_331d = constant i8* getelementptr inbounds ([11 x i8], [11 x i8]* @6, i64 0, i64 0)
@global_var_6110 = local_unnamed_addr global i32 0
@global_var_6111 = global i32 0
@global_var_60a0 = global i32* inttoptr (i64 4294967296 to i32*)
@global_var_6114 = local_unnamed_addr global i32 0
@global_var_6115 = global i32 0
@global_var_6118 = local_unnamed_addr global i32 0
@global_var_6120 = local_unnamed_addr global i8 0
@global_var_60d0 = local_unnamed_addr global i32 10
@global_var_60d4 = local_unnamed_addr global i32 20
@global_var_60d8 = local_unnamed_addr global i32 100
@global_var_6188 = local_unnamed_addr global i32 0
@global_var_6190 = local_unnamed_addr global i32* null
@global_var_60e0 = local_unnamed_addr global i32 1
@global_var_60e8 = local_unnamed_addr global i32 5
@global_var_60f0 = local_unnamed_addr global i32 9
@global_var_6198 = local_unnamed_addr global i32 0
@7 = internal constant [37 x i8] c"=== \E6\B5\8B\E8\AF\95\E9\9D\99\E6\80\81\E4\B8\8E\E5\85\A8\E5\B1\80\E5\86\85\E5\AD\98 ===\0A\00"
@global_var_3333 = constant i8* getelementptr inbounds ([37 x i8], [37 x i8]* @7, i64 0, i64 0)
@8 = internal constant [34 x i8] c"=== \E6\B5\8B\E8\AF\95\E5\86\85\E5\AD\98\E6\93\8D\E4\BD\9C\E5\87\BD\E6\95\B0 ===\0A\00"
@global_var_3596 = constant i8* getelementptr inbounds ([34 x i8], [34 x i8]* @8, i64 0, i64 0)
@global_var_368c = local_unnamed_addr constant i32 67305985

define i64 @_init() local_unnamed_addr {
dec_label_pc_1000:
  %rax.0.reg2mem = alloca i64, !insn.addr !0
  %0 = load i64, i64* inttoptr (i64 24552 to i64*), align 8, !insn.addr !1
  %1 = icmp eq i64 %0, 0, !insn.addr !2
  store i64 0, i64* %rax.0.reg2mem, !insn.addr !3
  br i1 %1, label %dec_label_pc_1016, label %dec_label_pc_1014, !insn.addr !3

dec_label_pc_1014:                                ; preds = %dec_label_pc_1000
  call void @__gmon_start__(), !insn.addr !4
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !4
  br label %dec_label_pc_1016, !insn.addr !4

dec_label_pc_1016:                                ; preds = %dec_label_pc_1014, %dec_label_pc_1000
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !5
}

define void @function_1030(i64* %ptr) local_unnamed_addr {
dec_label_pc_1030:
  call void @free(i64* %ptr), !insn.addr !6
  ret void, !insn.addr !6
}

define i32 @function_1040(i8* %format, ...) local_unnamed_addr {
dec_label_pc_1040:
  %0 = call i32 (i8*, ...) @printf(i8* %format), !insn.addr !7
  ret i32 %0, !insn.addr !7
}

define i64* @function_1050(i64* %s, i32 %c, i32 %n) local_unnamed_addr {
dec_label_pc_1050:
  %0 = call i64* @memset(i64* %s, i32 %c, i32 %n), !insn.addr !8
  ret i64* %0, !insn.addr !8
}

define i32 @function_1060(i64* %s1, i64* %s2, i32 %n) local_unnamed_addr {
dec_label_pc_1060:
  %0 = call i32 @memcmp(i64* %s1, i64* %s2, i32 %n), !insn.addr !9
  ret i32 %0, !insn.addr !9
}

define i64* @function_1070(i32 %nmemb, i32 %size) local_unnamed_addr {
dec_label_pc_1070:
  %0 = call i64* @calloc(i32 %nmemb, i32 %size), !insn.addr !10
  ret i64* %0, !insn.addr !10
}

define i64* @function_1080(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_1080:
  %0 = call i64* @memcpy(i64* %dest, i64* %src, i32 %n), !insn.addr !11
  ret i64* %0, !insn.addr !11
}

define i64* @function_1090(i32 %size) local_unnamed_addr {
dec_label_pc_1090:
  %0 = call i64* @malloc(i32 %size), !insn.addr !12
  ret i64* %0, !insn.addr !12
}

define i64* @function_10a0(i64* %ptr, i32 %size) local_unnamed_addr {
dec_label_pc_10a0:
  %0 = call i64* @realloc(i64* %ptr, i32 %size), !insn.addr !13
  ret i64* %0, !insn.addr !13
}

define void @function_10b0(i64* %src, i64* %dest, i32 %n) local_unnamed_addr {
dec_label_pc_10b0:
  call void @bcopy(i64* %src, i64* %dest, i32 %n), !insn.addr !14
  ret void, !insn.addr !14
}

define i64* @function_10c0(i64* %dest, i64* %src, i32 %n) local_unnamed_addr {
dec_label_pc_10c0:
  %0 = call i64* @memmove(i64* %dest, i64* %src, i32 %n), !insn.addr !15
  ret i64* %0, !insn.addr !15
}

define i32 @function_10d0(i32 %pid, i32* %stat_loc, i32 %options) local_unnamed_addr {
dec_label_pc_10d0:
  %0 = call i32 @waitpid(i32 %pid, i32* %stat_loc, i32 %options), !insn.addr !16
  ret i32 %0, !insn.addr !16
}

define void @function_10e0(i8* %s) local_unnamed_addr {
dec_label_pc_10e0:
  call void @perror(i8* %s), !insn.addr !17
  ret void, !insn.addr !17
}

define void @function_10f0(i32 %status) local_unnamed_addr {
dec_label_pc_10f0:
  call void @exit(i32 %status), !insn.addr !18
  ret void, !insn.addr !18
}

define i32 @function_1100() local_unnamed_addr {
dec_label_pc_1100:
  %0 = call i32 @fork(), !insn.addr !19
  ret i32 %0, !insn.addr !19
}

define void @function_1110(i64* %d) local_unnamed_addr {
dec_label_pc_1110:
  call void @__cxa_finalize(i64* %d), !insn.addr !20
  ret void, !insn.addr !20
}

define i64 @_start(i64 %arg1, i64 %arg2, i64 %arg3, i64 %arg4, i64 %arg5, i64 %arg6) local_unnamed_addr {
dec_label_pc_1120:
  %stack_var_8 = alloca i64, align 8
  %0 = trunc i64 %arg6 to i32, !insn.addr !21
  %1 = bitcast i64* %stack_var_8 to i8**, !insn.addr !21
  %2 = inttoptr i64 %arg3 to void ()*, !insn.addr !21
  %3 = call i32 @__libc_start_main(i64 11040, i32 %0, i8** nonnull %1, void ()* null, void ()* null, void ()* %2), !insn.addr !21
  %4 = call i64 @__asm_hlt(), !insn.addr !22
  unreachable, !insn.addr !22
}

define i64 @deregister_tm_clones() local_unnamed_addr {
dec_label_pc_1150:
  ret i64 24824, !insn.addr !23
}

define i64 @register_tm_clones() local_unnamed_addr {
dec_label_pc_1180:
  ret i64 0, !insn.addr !24
}

define i64 @__do_global_dtors_aux() local_unnamed_addr {
dec_label_pc_11c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = load i8, i8* @global_var_6100, align 1, !insn.addr !25
  %3 = icmp eq i8 %2, 0, !insn.addr !25
  %4 = icmp eq i1 %3, false, !insn.addr !26
  br i1 %4, label %dec_label_pc_11f8, label %dec_label_pc_11cd, !insn.addr !26

dec_label_pc_11cd:                                ; preds = %dec_label_pc_11c0
  %5 = load i64, i64* @global_var_5ff8, align 8, !insn.addr !27
  %6 = icmp eq i64 %5, 0, !insn.addr !27
  br i1 %6, label %dec_label_pc_11e7, label %dec_label_pc_11db, !insn.addr !28

dec_label_pc_11db:                                ; preds = %dec_label_pc_11cd
  %7 = load i64, i64* inttoptr (i64 24728 to i64*), align 8, !insn.addr !29
  %8 = inttoptr i64 %7 to i64*, !insn.addr !30
  call void @__cxa_finalize(i64* %8), !insn.addr !30
  br label %dec_label_pc_11e7, !insn.addr !30

dec_label_pc_11e7:                                ; preds = %dec_label_pc_11db, %dec_label_pc_11cd
  %9 = call i64 @deregister_tm_clones(), !insn.addr !31
  store i8 1, i8* @global_var_6100, align 1, !insn.addr !32
  ret i64 %9, !insn.addr !33

dec_label_pc_11f8:                                ; preds = %dec_label_pc_11c0
  ret i64 %1, !insn.addr !34

; uselistorder directives
  uselistorder i8* @global_var_6100, { 1, 0 }
}

define i64 @frame_dummy() local_unnamed_addr {
dec_label_pc_1200:
  %0 = call i64 @register_tm_clones(), !insn.addr !35
  ret i64 %0, !insn.addr !35
}

define i64 @local_vars(i64 %arg1) local_unnamed_addr {
dec_label_pc_1210:
  %0 = mul i64 %arg1, 2, !insn.addr !36
  %1 = add i64 %0, 10, !insn.addr !37
  %2 = and i64 %1, 4294967294, !insn.addr !38
  ret i64 %2, !insn.addr !39
}

define i64 @local_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_1240:
  %0 = alloca i32
  %indvars.iv.reg2mem = alloca i64, !insn.addr !40
  %1 = load i32, i32* %0
  %stack_var_-8 = alloca i64, align 8
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !41
  %3 = trunc i64 %arg1 to i32
  %4 = add i64 %2, -48, !insn.addr !42
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1258

dec_label_pc_1258:                                ; preds = %dec_label_pc_1240, %dec_label_pc_1258
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %5 = trunc i64 %indvars.iv.reload to i32
  %6 = mul i32 %5, %3, !insn.addr !43
  %7 = mul i64 %indvars.iv.reload, 4, !insn.addr !42
  %8 = add i64 %4, %7, !insn.addr !42
  %9 = inttoptr i64 %8 to i32*, !insn.addr !42
  store i32 %6, i32* %9, align 4, !insn.addr !42
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !44
  br i1 %exitcond, label %dec_label_pc_1275, label %dec_label_pc_1258, !insn.addr !44

dec_label_pc_1275:                                ; preds = %dec_label_pc_1258
  %10 = zext i32 %1 to i64, !insn.addr !45
  ret i64 %10, !insn.addr !46

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1258, { 1, 0 }
}

define i64 @local_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1280:
  %0 = mul i64 %arg1, 3, !insn.addr !47
  %1 = and i64 %0, 4294967295, !insn.addr !47
  ret i64 %1, !insn.addr !48
}

define i64 @address_of_local(i64* %arg1) local_unnamed_addr {
dec_label_pc_12a0:
  %0 = bitcast i64* %arg1 to i32*, !insn.addr !49
  store i32 42, i32* %0, align 4, !insn.addr !49
  ret i64 42, !insn.addr !50
}

define i64 @address_of_array(i64* %arg1) local_unnamed_addr {
dec_label_pc_12c0:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = mul i64 %1, 2, !insn.addr !51
  %3 = and i64 %2, 4294967294, !insn.addr !51
  ret i64 %3, !insn.addr !52
}

define i64 @large_stack_frame() local_unnamed_addr {
dec_label_pc_12f0:
  %0 = alloca i8
  %indvars.iv.reg2mem = alloca i64, !insn.addr !53
  %1 = load i8, i8* %0
  %stack_var_-8 = alloca i64, align 8
  br i1 icmp sgt (i32 ptrtoint (i1* @global_var_800 to i32), i32 0), label %dec_label_pc_1315.lr.ph, label %dec_label_pc_1344, !insn.addr !54

dec_label_pc_1315.lr.ph:                          ; preds = %dec_label_pc_12f0
  %2 = ptrtoint i64* %stack_var_-8 to i64, !insn.addr !55
  %3 = add i64 %2, -2048, !insn.addr !56
  store i64 0, i64* %indvars.iv.reg2mem
  br label %dec_label_pc_1315

dec_label_pc_1315:                                ; preds = %dec_label_pc_1315.lr.ph, %dec_label_pc_1315
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = trunc i64 %indvars.iv.reload to i8, !insn.addr !56
  %5 = add i64 %3, %indvars.iv.reload, !insn.addr !56
  %6 = inttoptr i64 %5 to i8*, !insn.addr !56
  store i8 %4, i8* %6, align 1, !insn.addr !56
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %7 = icmp slt i64 %indvars.iv.next, sext (i32 ptrtoint (i1* @global_var_800 to i32) to i64), !insn.addr !54
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !54
  br i1 %7, label %dec_label_pc_1315, label %dec_label_pc_1344, !insn.addr !54

dec_label_pc_1344:                                ; preds = %dec_label_pc_1315, %dec_label_pc_12f0
  %8 = sext i8 %1 to i64, !insn.addr !57
  ret i64 %8, !insn.addr !58

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 1, 0, 2 }
  uselistorder label %dec_label_pc_1315, { 1, 0 }
}

define i64 @vla_stack(i64 %arg1) local_unnamed_addr {
dec_label_pc_1360:
  %storemerge3.reg2mem = alloca i64, !insn.addr !59
  %indvars.iv.reg2mem = alloca i64, !insn.addr !59
  %stack_var_-56 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !60
  %sext = mul i64 %arg1, 4294967296
  %1 = ashr exact i64 %sext, 32, !insn.addr !60
  %2 = icmp slt i32 %0, 1, !insn.addr !61
  %3 = trunc i64 %1 to i32, !insn.addr !62
  %4 = icmp sgt i32 %3, ptrtoint (i1* @global_var_3e8 to i32), !insn.addr !63
  %or.cond = or i1 %2, %4
  store i64 4294967295, i64* %storemerge3.reg2mem, !insn.addr !61
  br i1 %or.cond, label %dec_label_pc_1408, label %dec_label_pc_138e, !insn.addr !61

dec_label_pc_138e:                                ; preds = %dec_label_pc_1360
  %5 = mul i64 %arg1, 4
  %6 = and i64 %5, 17179869180
  %7 = add nuw nsw i64 %6, 15, !insn.addr !64
  %8 = and i64 %7, 34359738352, !insn.addr !65
  %9 = ptrtoint i64* %stack_var_-56 to i64, !insn.addr !66
  %10 = sub i64 %9, %8, !insn.addr !67
  %11 = icmp sgt i32 %3, 0, !insn.addr !68
  %wide.trip.count = and i64 %1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !68
  br i1 %11, label %dec_label_pc_13c8, label %dec_label_pc_13e7, !insn.addr !68

dec_label_pc_13c8:                                ; preds = %dec_label_pc_138e, %dec_label_pc_13c8
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %12 = mul i64 %indvars.iv.reload, 4, !insn.addr !69
  %13 = add i64 %12, %10, !insn.addr !69
  %14 = inttoptr i64 %13 to i32*, !insn.addr !69
  %indvars.iv.tr = trunc i64 %indvars.iv.reload to i32
  %15 = mul i32 %indvars.iv.tr, 2
  store i32 %15, i32* %14, align 4, !insn.addr !69
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !68
  br i1 %exitcond, label %dec_label_pc_13e7, label %dec_label_pc_13c8, !insn.addr !68

dec_label_pc_13e7:                                ; preds = %dec_label_pc_138e, %dec_label_pc_13c8
  %16 = ashr i32 %3, 31, !insn.addr !70
  %17 = zext i32 %16 to i64, !insn.addr !71
  %18 = mul i64 %17, 4294967296, !insn.addr !71
  %19 = or i64 %18, %wide.trip.count, !insn.addr !71
  %20 = sdiv i64 %19, 2, !insn.addr !71
  %sext2 = mul i64 %20, 4294967296
  %21 = ashr exact i64 %sext2, 30, !insn.addr !72
  %22 = add i64 %10, %21, !insn.addr !72
  %23 = inttoptr i64 %22 to i32*, !insn.addr !72
  %24 = load i32, i32* %23, align 4, !insn.addr !72
  %phitmp = zext i32 %24 to i64
  store i64 %phitmp, i64* %storemerge3.reg2mem, !insn.addr !73
  br label %dec_label_pc_1408, !insn.addr !73

dec_label_pc_1408:                                ; preds = %dec_label_pc_1360, %dec_label_pc_13e7
  %storemerge3.reload = load i64, i64* %storemerge3.reg2mem
  ret i64 %storemerge3.reload, !insn.addr !74

; uselistorder directives
  uselistorder i32 %3, { 1, 0, 2 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge3.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1408, { 1, 0 }
  uselistorder label %dec_label_pc_13e7, { 1, 0 }
  uselistorder label %dec_label_pc_13c8, { 1, 0 }
}

define i64 @alloca_usage(i64 %arg1) local_unnamed_addr {
dec_label_pc_1410:
  %storemerge4.reg2mem = alloca i64, !insn.addr !75
  %indvars.iv.reg2mem = alloca i64, !insn.addr !75
  %stack_var_-40 = alloca i64, align 8
  %0 = trunc i64 %arg1 to i32, !insn.addr !76
  %1 = icmp eq i32 %0, 0, !insn.addr !77
  %2 = icmp slt i32 %0, 0, !insn.addr !77
  %3 = icmp eq i1 %2, false, !insn.addr !78
  %4 = icmp eq i1 %1, false, !insn.addr !78
  %5 = icmp eq i1 %3, %4, !insn.addr !78
  store i64 4294967295, i64* %storemerge4.reg2mem, !insn.addr !78
  br i1 %5, label %dec_label_pc_1431, label %dec_label_pc_14a0, !insn.addr !78

dec_label_pc_1431:                                ; preds = %dec_label_pc_1410
  %sext = mul i64 %arg1, 4294967296
  %6 = ashr exact i64 %sext, 32, !insn.addr !76
  %7 = ashr exact i64 %sext, 30, !insn.addr !79
  %8 = add nsw i64 %7, 15, !insn.addr !79
  %9 = and i64 %8, -16, !insn.addr !80
  %10 = ptrtoint i64* %stack_var_-40 to i64, !insn.addr !81
  %11 = sub i64 %10, %9, !insn.addr !82
  %12 = trunc i64 %6 to i32, !insn.addr !83
  %13 = icmp sgt i32 %12, 0, !insn.addr !84
  %wide.trip.count = and i64 %6, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !84
  br i1 %13, label %dec_label_pc_1461, label %dec_label_pc_147e, !insn.addr !84

dec_label_pc_1461:                                ; preds = %dec_label_pc_1431, %dec_label_pc_1461
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %14 = trunc i64 %indvars.iv.reload to i32
  %15 = mul i32 %14, 3, !insn.addr !85
  %16 = mul i64 %indvars.iv.reload, 4, !insn.addr !86
  %17 = add i64 %16, %11, !insn.addr !86
  %18 = inttoptr i64 %17 to i32*, !insn.addr !86
  store i32 %15, i32* %18, align 4, !insn.addr !86
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !84
  br i1 %exitcond, label %dec_label_pc_147e, label %dec_label_pc_1461, !insn.addr !84

dec_label_pc_147e:                                ; preds = %dec_label_pc_1431, %dec_label_pc_1461
  store i64 %11, i64* %stack_var_-40, align 8, !insn.addr !87
  %19 = ashr i32 %12, 31, !insn.addr !88
  %20 = zext i32 %19 to i64, !insn.addr !89
  %21 = mul i64 %20, 4294967296, !insn.addr !89
  %22 = or i64 %21, %wide.trip.count, !insn.addr !89
  %23 = sdiv i64 %22, 2, !insn.addr !89
  %sext3 = mul i64 %23, 4294967296
  %24 = ashr exact i64 %sext3, 30, !insn.addr !90
  %25 = add i64 %11, %24, !insn.addr !90
  %26 = inttoptr i64 %25 to i32*, !insn.addr !90
  %27 = load i32, i32* %26, align 4, !insn.addr !90
  %phitmp = zext i32 %27 to i64
  store i64 %phitmp, i64* %storemerge4.reg2mem, !insn.addr !91
  br label %dec_label_pc_14a0, !insn.addr !91

dec_label_pc_14a0:                                ; preds = %dec_label_pc_1410, %dec_label_pc_147e
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  ret i64 %storemerge4.reload, !insn.addr !92

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64 %11, { 0, 2, 1 }
  uselistorder i64 %sext, { 1, 0 }
  uselistorder i32 %0, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_14a0, { 1, 0 }
  uselistorder label %dec_label_pc_147e, { 1, 0 }
  uselistorder label %dec_label_pc_1461, { 1, 0 }
}

define i64 @stack_alias(i32* %arg1, i32* %arg2) local_unnamed_addr {
dec_label_pc_14b0:
  ret i64 20, !insn.addr !93
}

define i64 @test_stack_memory() local_unnamed_addr {
dec_label_pc_1510:
  %stack_var_-60 = alloca i32, align 4
  %stack_var_-56 = alloca i64, align 8
  %stack_var_-12 = alloca i64, align 8
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3004 to i8*)), !insn.addr !94
  %1 = call i64 @local_vars(i64 5), !insn.addr !95
  %2 = and i64 %1, 4294967295, !insn.addr !96
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3023, i64 0, i64 0), i64 %2), !insn.addr !97
  %4 = call i64 @local_array(i64 2), !insn.addr !98
  %5 = and i64 %4, 4294967295, !insn.addr !99
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_303f, i64 0, i64 0), i64 %5), !insn.addr !100
  %7 = call i64 @local_struct(i64 5), !insn.addr !101
  %8 = and i64 %7, 4294967295, !insn.addr !102
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_305c, i64 0, i64 0), i64 %8), !insn.addr !103
  %10 = call i64 @address_of_local(i64* nonnull %stack_var_-12), !insn.addr !104
  %11 = and i64 %10, 4294967295, !insn.addr !105
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_307a, i64 0, i64 0), i64 %11), !insn.addr !106
  %13 = call i64* @memset(i64* nonnull %stack_var_-56, i32 0, i32 40), !insn.addr !107
  store i64 1, i64* %stack_var_-56, align 8, !insn.addr !108
  %14 = call i64 @address_of_array(i64* nonnull %stack_var_-56), !insn.addr !109
  %15 = and i64 %14, 4294967295, !insn.addr !110
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_309c, i64 0, i64 0), i64 %15), !insn.addr !111
  %17 = call i64 @large_stack_frame(), !insn.addr !112
  %18 = and i64 %17, 4294967295, !insn.addr !113
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_30be, i64 0, i64 0), i64 %18), !insn.addr !114
  %20 = call i64 @vla_stack(i64 10), !insn.addr !115
  %21 = and i64 %20, 4294967295, !insn.addr !116
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([27 x i8], [27 x i8]* @global_var_30e1, i64 0, i64 0), i64 %21), !insn.addr !117
  %23 = call i64 @alloca_usage(i64 10), !insn.addr !118
  %24 = and i64 %23, 4294967295, !insn.addr !119
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_30fc, i64 0, i64 0), i64 %24), !insn.addr !120
  store i32 0, i32* %stack_var_-60, align 4, !insn.addr !121
  %26 = call i64 @stack_alias(i32* nonnull %stack_var_-60, i32* nonnull %stack_var_-60), !insn.addr !122
  %27 = and i64 %26, 4294967295, !insn.addr !123
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_311a, i64 0, i64 0), i64 %27), !insn.addr !124
  %29 = sext i32 %28 to i64, !insn.addr !124
  ret i64 %29, !insn.addr !125

; uselistorder directives
  uselistorder i64* %stack_var_-56, { 0, 2, 1 }
}

define i64 @heap_basic(i64 %arg1) local_unnamed_addr {
dec_label_pc_1640:
  %storemerge4.reg2mem = alloca i64, !insn.addr !126
  %indvars.iv.reg2mem = alloca i64, !insn.addr !126
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !127
  %1 = call i64* @malloc(i32 %0), !insn.addr !127
  %2 = icmp eq i64* %1, null, !insn.addr !128
  %3 = icmp eq i1 %2, false, !insn.addr !129
  store i64 4294967295, i64* %storemerge4.reg2mem, !insn.addr !129
  br i1 %3, label %dec_label_pc_167a.preheader, label %dec_label_pc_16d6, !insn.addr !129

dec_label_pc_167a.preheader:                      ; preds = %dec_label_pc_1640
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !130
  %5 = ptrtoint i64* %1 to i64, !insn.addr !127
  %6 = trunc i64 %4 to i32, !insn.addr !131
  %7 = icmp sgt i32 %6, 0, !insn.addr !132
  %wide.trip.count = and i64 %4, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !132
  br i1 %7, label %dec_label_pc_1686, label %dec_label_pc_16a5, !insn.addr !132

dec_label_pc_1686:                                ; preds = %dec_label_pc_167a.preheader, %dec_label_pc_1686
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %8 = mul i64 %indvars.iv.reload, 4, !insn.addr !133
  %9 = add i64 %8, %5, !insn.addr !133
  %10 = inttoptr i64 %9 to i32*, !insn.addr !133
  %indvars.iv.tr = trunc i64 %indvars.iv.reload to i32
  %11 = mul i32 %indvars.iv.tr, 2
  store i32 %11, i32* %10, align 4, !insn.addr !133
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !132
  br i1 %exitcond, label %dec_label_pc_16a5, label %dec_label_pc_1686, !insn.addr !132

dec_label_pc_16a5:                                ; preds = %dec_label_pc_167a.preheader, %dec_label_pc_1686
  %12 = ashr i32 %6, 31, !insn.addr !134
  %13 = zext i32 %12 to i64, !insn.addr !135
  %14 = mul i64 %13, 4294967296, !insn.addr !135
  %15 = or i64 %14, %wide.trip.count, !insn.addr !135
  %16 = sdiv i64 %15, 2, !insn.addr !135
  %sext3 = mul i64 %16, 4294967296
  %17 = ashr exact i64 %sext3, 30, !insn.addr !136
  %18 = add i64 %17, %5, !insn.addr !136
  %19 = inttoptr i64 %18 to i32*, !insn.addr !136
  %20 = load i32, i32* %19, align 4, !insn.addr !136
  call void @free(i64* %1), !insn.addr !137
  %phitmp = zext i32 %20 to i64
  store i64 %phitmp, i64* %storemerge4.reg2mem, !insn.addr !138
  br label %dec_label_pc_16d6, !insn.addr !138

dec_label_pc_16d6:                                ; preds = %dec_label_pc_1640, %dec_label_pc_16a5
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  ret i64 %storemerge4.reload, !insn.addr !139

; uselistorder directives
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_16d6, { 1, 0 }
  uselistorder label %dec_label_pc_16a5, { 1, 0 }
  uselistorder label %dec_label_pc_1686, { 1, 0 }
}

define i64 @heap_calloc(i64 %arg1) local_unnamed_addr {
dec_label_pc_16e0:
  %storemerge2.reg2mem = alloca i64, !insn.addr !140
  %stack_var_-28.0.lcssa.reg2mem = alloca i64, !insn.addr !140
  %stack_var_-28.03.reg2mem = alloca i32, !insn.addr !140
  %indvars.iv.reg2mem = alloca i64, !insn.addr !140
  %0 = trunc i64 %arg1 to i32, !insn.addr !141
  %1 = call i64* @calloc(i32 %0, i32 4), !insn.addr !142
  %2 = icmp eq i64* %1, null, !insn.addr !143
  %3 = icmp eq i1 %2, false, !insn.addr !144
  store i64 4294967295, i64* %storemerge2.reg2mem, !insn.addr !144
  br i1 %3, label %dec_label_pc_1722.preheader, label %dec_label_pc_175c, !insn.addr !144

dec_label_pc_1722.preheader:                      ; preds = %dec_label_pc_16e0
  %4 = icmp sgt i32 %0, 0, !insn.addr !145
  store i64 0, i64* %stack_var_-28.0.lcssa.reg2mem, !insn.addr !145
  br i1 %4, label %dec_label_pc_172e.preheader, label %dec_label_pc_174d, !insn.addr !145

dec_label_pc_172e.preheader:                      ; preds = %dec_label_pc_1722.preheader
  %5 = ptrtoint i64* %1 to i64, !insn.addr !142
  %wide.trip.count = and i64 %arg1, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem
  store i32 0, i32* %stack_var_-28.03.reg2mem
  br label %dec_label_pc_172e

dec_label_pc_172e:                                ; preds = %dec_label_pc_172e.preheader, %dec_label_pc_172e
  %stack_var_-28.03.reload = load i32, i32* %stack_var_-28.03.reg2mem
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %6 = mul i64 %indvars.iv.reload, 4, !insn.addr !146
  %7 = add i64 %6, %5, !insn.addr !146
  %8 = inttoptr i64 %7 to i32*, !insn.addr !146
  %9 = load i32, i32* %8, align 4, !insn.addr !146
  %10 = add i32 %9, %stack_var_-28.03.reload, !insn.addr !147
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !145
  store i32 %10, i32* %stack_var_-28.03.reg2mem, !insn.addr !145
  br i1 %exitcond, label %dec_label_pc_1722.dec_label_pc_174d_crit_edge, label %dec_label_pc_172e, !insn.addr !145

dec_label_pc_1722.dec_label_pc_174d_crit_edge:    ; preds = %dec_label_pc_172e
  %phitmp5 = zext i32 %10 to i64
  store i64 %phitmp5, i64* %stack_var_-28.0.lcssa.reg2mem
  br label %dec_label_pc_174d

dec_label_pc_174d:                                ; preds = %dec_label_pc_1722.dec_label_pc_174d_crit_edge, %dec_label_pc_1722.preheader
  %stack_var_-28.0.lcssa.reload = load i64, i64* %stack_var_-28.0.lcssa.reg2mem
  call void @free(i64* %1), !insn.addr !148
  store i64 %stack_var_-28.0.lcssa.reload, i64* %storemerge2.reg2mem, !insn.addr !149
  br label %dec_label_pc_175c, !insn.addr !149

dec_label_pc_175c:                                ; preds = %dec_label_pc_16e0, %dec_label_pc_174d
  %storemerge2.reload = load i64, i64* %storemerge2.reg2mem
  ret i64 %storemerge2.reload, !insn.addr !150

; uselistorder directives
  uselistorder i32 %10, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-28.03.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-28.0.lcssa.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_175c, { 1, 0 }
  uselistorder label %dec_label_pc_172e, { 1, 0 }
}

define i64 @heap_realloc() local_unnamed_addr {
dec_label_pc_1770:
  %stack_var_-12.0.reg2mem = alloca i32, !insn.addr !151
  %storemerge2.reg2mem = alloca i32, !insn.addr !151
  %indvars.iv.reg2mem = alloca i64, !insn.addr !151
  %indvars.iv5.reg2mem = alloca i64, !insn.addr !151
  %0 = call i64* @malloc(i32 20), !insn.addr !152
  %1 = ptrtoint i64* %0 to i64, !insn.addr !152
  %2 = icmp eq i64* %0, null, !insn.addr !153
  %3 = icmp eq i1 %2, false, !insn.addr !154
  store i64 0, i64* %indvars.iv5.reg2mem, !insn.addr !154
  store i32 -1, i32* %stack_var_-12.0.reg2mem, !insn.addr !154
  br i1 %3, label %dec_label_pc_17ae, label %dec_label_pc_1880, !insn.addr !154

dec_label_pc_17ae:                                ; preds = %dec_label_pc_1770, %dec_label_pc_17ae
  %indvars.iv5.reload = load i64, i64* %indvars.iv5.reg2mem
  %indvars.iv.next6 = add nuw nsw i64 %indvars.iv5.reload, 1
  %4 = mul i64 %indvars.iv5.reload, 4, !insn.addr !155
  %5 = add i64 %4, %1, !insn.addr !155
  %6 = inttoptr i64 %5 to i32*, !insn.addr !155
  %7 = trunc i64 %indvars.iv.next6 to i32
  store i32 %7, i32* %6, align 4, !insn.addr !155
  %exitcond7 = icmp eq i64 %indvars.iv.next6, 5
  store i64 %indvars.iv.next6, i64* %indvars.iv5.reg2mem, !insn.addr !156
  br i1 %exitcond7, label %dec_label_pc_17cd, label %dec_label_pc_17ae, !insn.addr !156

dec_label_pc_17cd:                                ; preds = %dec_label_pc_17ae
  %8 = add i64 %1, 8, !insn.addr !157
  %9 = inttoptr i64 %8 to i32*, !insn.addr !157
  %10 = load i32, i32* %9, align 4, !insn.addr !157
  %11 = call i64* @realloc(i64* %0, i32 40), !insn.addr !158
  %12 = ptrtoint i64* %11 to i64, !insn.addr !158
  %13 = icmp eq i64* %11, null, !insn.addr !159
  %14 = icmp eq i1 %13, false, !insn.addr !160
  store i64 5, i64* %indvars.iv.reg2mem, !insn.addr !160
  br i1 %14, label %dec_label_pc_1822, label %dec_label_pc_17f4, !insn.addr !160

dec_label_pc_17f4:                                ; preds = %dec_label_pc_17cd
  call void @free(i64* %0), !insn.addr !161
  store i32 -2, i32* %stack_var_-12.0.reg2mem, !insn.addr !162
  br label %dec_label_pc_1880, !insn.addr !162

dec_label_pc_1822:                                ; preds = %dec_label_pc_17cd, %dec_label_pc_1822
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %15 = mul i64 %indvars.iv.reload, 4, !insn.addr !163
  %16 = add i64 %15, %12, !insn.addr !163
  %17 = inttoptr i64 %16 to i32*, !insn.addr !163
  %18 = trunc i64 %indvars.iv.reload to i32
  %19 = mul i32 %18, 10
  store i32 %19, i32* %17, align 4, !insn.addr !163
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 10
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !164
  br i1 %exitcond, label %dec_label_pc_183f, label %dec_label_pc_1822, !insn.addr !164

dec_label_pc_183f:                                ; preds = %dec_label_pc_1822
  %20 = add i64 %12, 8, !insn.addr !165
  %21 = inttoptr i64 %20 to i32*, !insn.addr !165
  %22 = load i32, i32* %21, align 4, !insn.addr !165
  %23 = icmp eq i32 %22, %10, !insn.addr !166
  %24 = icmp eq i1 %23, false, !insn.addr !167
  store i32 -3, i32* %storemerge2.reg2mem, !insn.addr !167
  br i1 %24, label %dec_label_pc_186b, label %dec_label_pc_184f, !insn.addr !167

dec_label_pc_184f:                                ; preds = %dec_label_pc_183f
  %25 = add i64 %12, 20, !insn.addr !168
  %26 = inttoptr i64 %25 to i32*, !insn.addr !168
  %27 = load i32, i32* %26, align 4, !insn.addr !168
  store i32 %27, i32* %storemerge2.reg2mem, !insn.addr !169
  br label %dec_label_pc_186b, !insn.addr !169

dec_label_pc_186b:                                ; preds = %dec_label_pc_183f, %dec_label_pc_184f
  %storemerge2.reload = load i32, i32* %storemerge2.reg2mem
  call void @free(i64* %11), !insn.addr !170
  store i32 %storemerge2.reload, i32* %stack_var_-12.0.reg2mem, !insn.addr !171
  br label %dec_label_pc_1880, !insn.addr !171

dec_label_pc_1880:                                ; preds = %dec_label_pc_1770, %dec_label_pc_186b, %dec_label_pc_17f4
  %stack_var_-12.0.reload = load i32, i32* %stack_var_-12.0.reg2mem
  %28 = zext i32 %stack_var_-12.0.reload to i64, !insn.addr !172
  ret i64 %28, !insn.addr !173

; uselistorder directives
  uselistorder i64 %12, { 2, 1, 0 }
  uselistorder i64 %indvars.iv5.reload, { 1, 0 }
  uselistorder i64 %1, { 1, 0 }
  uselistorder i64* %indvars.iv5.reg2mem, { 2, 0, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i32* %storemerge2.reg2mem, { 0, 2, 1 }
  uselistorder i32* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1880, { 1, 2, 0 }
  uselistorder label %dec_label_pc_186b, { 1, 0 }
  uselistorder label %dec_label_pc_1822, { 1, 0 }
  uselistorder label %dec_label_pc_17ae, { 1, 0 }
}

define i64 @heap_array(i64 %arg1) local_unnamed_addr {
dec_label_pc_1890:
  %storemerge4.reg2mem = alloca i64, !insn.addr !174
  %indvars.iv.reg2mem = alloca i64, !insn.addr !174
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !175
  %1 = call i64* @malloc(i32 %0), !insn.addr !175
  %2 = icmp eq i64* %1, null, !insn.addr !176
  %3 = icmp eq i1 %2, false, !insn.addr !177
  store i64 4294967295, i64* %storemerge4.reg2mem, !insn.addr !177
  br i1 %3, label %dec_label_pc_18ca.preheader, label %dec_label_pc_1924, !insn.addr !177

dec_label_pc_18ca.preheader:                      ; preds = %dec_label_pc_1890
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !178
  %5 = ptrtoint i64* %1 to i64, !insn.addr !175
  %6 = trunc i64 %4 to i32, !insn.addr !179
  %7 = icmp sgt i32 %6, 0, !insn.addr !180
  %wide.trip.count = and i64 %4, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !180
  br i1 %7, label %dec_label_pc_18d6, label %dec_label_pc_18f3, !insn.addr !180

dec_label_pc_18d6:                                ; preds = %dec_label_pc_18ca.preheader, %dec_label_pc_18d6
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %8 = trunc i64 %indvars.iv.reload to i32
  %9 = mul i32 %8, 3, !insn.addr !181
  %10 = mul i64 %indvars.iv.reload, 4, !insn.addr !182
  %11 = add i64 %10, %5, !insn.addr !182
  %12 = inttoptr i64 %11 to i32*, !insn.addr !182
  store i32 %9, i32* %12, align 4, !insn.addr !182
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !180
  br i1 %exitcond, label %dec_label_pc_18f3, label %dec_label_pc_18d6, !insn.addr !180

dec_label_pc_18f3:                                ; preds = %dec_label_pc_18ca.preheader, %dec_label_pc_18d6
  %13 = ashr i32 %6, 31, !insn.addr !183
  %14 = zext i32 %13 to i64, !insn.addr !184
  %15 = mul i64 %14, 4294967296, !insn.addr !184
  %16 = or i64 %15, %wide.trip.count, !insn.addr !184
  %17 = sdiv i64 %16, 2, !insn.addr !184
  %sext3 = mul i64 %17, 4294967296
  %18 = ashr exact i64 %sext3, 30, !insn.addr !185
  %19 = add i64 %18, %5, !insn.addr !185
  %20 = inttoptr i64 %19 to i32*, !insn.addr !185
  %21 = load i32, i32* %20, align 4, !insn.addr !185
  call void @free(i64* %1), !insn.addr !186
  %phitmp = zext i32 %21 to i64
  store i64 %phitmp, i64* %storemerge4.reg2mem, !insn.addr !187
  br label %dec_label_pc_1924, !insn.addr !187

dec_label_pc_1924:                                ; preds = %dec_label_pc_1890, %dec_label_pc_18f3
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  ret i64 %storemerge4.reload, !insn.addr !188

; uselistorder directives
  uselistorder i64 %indvars.iv.reload, { 0, 2, 1 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1924, { 1, 0 }
  uselistorder label %dec_label_pc_18f3, { 1, 0 }
  uselistorder label %dec_label_pc_18d6, { 1, 0 }
}

define i64 @heap_struct(i64 %arg1) local_unnamed_addr {
dec_label_pc_1930:
  %storemerge.reg2mem = alloca i64, !insn.addr !189
  %0 = call i64* @malloc(i32 8), !insn.addr !190
  %1 = icmp eq i64* %0, null, !insn.addr !191
  %2 = icmp eq i1 %1, false, !insn.addr !192
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !192
  br i1 %2, label %dec_label_pc_1960, label %dec_label_pc_1995, !insn.addr !192

dec_label_pc_1960:                                ; preds = %dec_label_pc_1930
  %3 = ptrtoint i64* %0 to i64, !insn.addr !190
  %4 = trunc i64 %arg1 to i32, !insn.addr !193
  %5 = bitcast i64* %0 to i32*, !insn.addr !194
  store i32 %4, i32* %5, align 4, !insn.addr !194
  %6 = mul i32 %4, 2, !insn.addr !195
  %7 = add i64 %3, 4, !insn.addr !196
  %8 = inttoptr i64 %7 to i32*, !insn.addr !196
  store i32 %6, i32* %8, align 4, !insn.addr !196
  %9 = load i32, i32* %5, align 4, !insn.addr !197
  %10 = add i32 %9, %6, !insn.addr !198
  call void @free(i64* %0), !insn.addr !199
  %phitmp = zext i32 %10 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !200
  br label %dec_label_pc_1995, !insn.addr !200

dec_label_pc_1995:                                ; preds = %dec_label_pc_1930, %dec_label_pc_1960
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !201

; uselistorder directives
  uselistorder i32 %6, { 1, 0 }
  uselistorder i64* %0, { 0, 1, 3, 2 }
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1995, { 1, 0 }
}

define i64 @heap_nested(i64* %arg1) local_unnamed_addr {
dec_label_pc_19a0:
  %stack_var_-12.0.reg2mem = alloca i64, !insn.addr !202
  %0 = call i64* @malloc(i32 16), !insn.addr !203
  %1 = ptrtoint i64* %0 to i64, !insn.addr !203
  store i64 %1, i64* %arg1, align 8, !insn.addr !204
  store i32 10, i32* inttoptr (i64 16 to i32*), align 16, !insn.addr !205
  %2 = call i64* @malloc(i32 16), !insn.addr !206
  %3 = ptrtoint i64* %2 to i64, !insn.addr !206
  store i64 %3, i64* inttoptr (i64 24 to i64*), align 8, !insn.addr !207
  %4 = icmp eq i64* %2, null, !insn.addr !208
  %5 = icmp eq i1 %4, false, !insn.addr !209
  br i1 %5, label %dec_label_pc_1a29, label %dec_label_pc_1a11, !insn.addr !209

dec_label_pc_1a11:                                ; preds = %dec_label_pc_19a0
  call void @free(i64* inttoptr (i64 16 to i64*)), !insn.addr !210
  store i64 4294967294, i64* %stack_var_-12.0.reg2mem, !insn.addr !211
  br label %dec_label_pc_1a54, !insn.addr !211

dec_label_pc_1a29:                                ; preds = %dec_label_pc_19a0
  %6 = bitcast i64* %2 to i32*, !insn.addr !212
  store i32 20, i32* %6, align 4, !insn.addr !212
  %7 = load i64, i64* inttoptr (i64 24 to i64*), align 8, !insn.addr !213
  %8 = add i64 %7, 8, !insn.addr !214
  %9 = inttoptr i64 %8 to i64*, !insn.addr !214
  store i64 0, i64* %9, align 8, !insn.addr !214
  store i64 0, i64* %stack_var_-12.0.reg2mem, !insn.addr !215
  br label %dec_label_pc_1a54, !insn.addr !215

dec_label_pc_1a54:                                ; preds = %dec_label_pc_1a29, %dec_label_pc_1a11
  %stack_var_-12.0.reload = load i64, i64* %stack_var_-12.0.reg2mem
  ret i64 %stack_var_-12.0.reload, !insn.addr !216

; uselistorder directives
  uselistorder i64* %stack_var_-12.0.reg2mem, { 0, 2, 1 }
}

define i64 @linked_list_heap() local_unnamed_addr {
dec_label_pc_1a60:
  %storemerge4.reg2mem = alloca i64, !insn.addr !217
  %stack_var_-24.36.reg2mem = alloca i64, !insn.addr !217
  %stack_var_-60.07.reg2mem = alloca i32, !insn.addr !217
  %storemerge3.in8.reg2mem = alloca i64, !insn.addr !217
  %stack_var_-24.2.reg2mem = alloca i64, !insn.addr !217
  %stack_var_-24.19.reg2mem = alloca i64, !insn.addr !217
  %stack_var_-24.010.reg2mem = alloca i64, !insn.addr !217
  %stack_var_-32.011.reg2mem = alloca i64, !insn.addr !217
  %storemerge12.reg2mem = alloca i32, !insn.addr !217
  store i32 0, i32* %storemerge12.reg2mem
  store i64 0, i64* %stack_var_-32.011.reg2mem
  store i64 0, i64* %stack_var_-24.010.reg2mem
  br label %dec_label_pc_1a89

dec_label_pc_1b4c.preheader:                      ; preds = %dec_label_pc_1b2a
  %0 = icmp eq i64 %stack_var_-24.2.reload, 0
  store i64 %stack_var_-24.2.reload, i64* %storemerge3.in8.reg2mem, !insn.addr !218
  store i32 0, i32* %stack_var_-60.07.reg2mem, !insn.addr !218
  store i64 0, i64* %storemerge4.reg2mem, !insn.addr !218
  br i1 %0, label %dec_label_pc_1bac, label %dec_label_pc_1b57, !insn.addr !218

dec_label_pc_1a89:                                ; preds = %dec_label_pc_1a60, %dec_label_pc_1b2a
  %stack_var_-24.010.reload = load i64, i64* %stack_var_-24.010.reg2mem
  %1 = call i64* @malloc(i32 16), !insn.addr !219
  %2 = icmp eq i64* %1, null, !insn.addr !220
  %3 = icmp eq i1 %2, false, !insn.addr !221
  br i1 %3, label %dec_label_pc_1ae0, label %dec_label_pc_1aa7.preheader, !insn.addr !221

dec_label_pc_1aa7.preheader:                      ; preds = %dec_label_pc_1a89
  %4 = icmp eq i64 %stack_var_-24.010.reload, 0, !insn.addr !222
  store i64 %stack_var_-24.010.reload, i64* %stack_var_-24.19.reg2mem, !insn.addr !223
  store i64 4294967295, i64* %storemerge4.reg2mem, !insn.addr !223
  br i1 %4, label %dec_label_pc_1bac, label %dec_label_pc_1ab2, !insn.addr !223

dec_label_pc_1ab2:                                ; preds = %dec_label_pc_1aa7.preheader, %dec_label_pc_1ab2
  %stack_var_-24.19.reload = load i64, i64* %stack_var_-24.19.reg2mem
  %5 = add i64 %stack_var_-24.19.reload, 8, !insn.addr !224
  %6 = inttoptr i64 %5 to i64*, !insn.addr !224
  %7 = load i64, i64* %6, align 8, !insn.addr !224
  %8 = inttoptr i64 %stack_var_-24.19.reload to i64*, !insn.addr !225
  call void @free(i64* %8), !insn.addr !225
  %9 = icmp eq i64 %7, 0, !insn.addr !222
  store i64 %7, i64* %stack_var_-24.19.reg2mem, !insn.addr !223
  store i64 4294967295, i64* %storemerge4.reg2mem, !insn.addr !223
  br i1 %9, label %dec_label_pc_1bac, label %dec_label_pc_1ab2, !insn.addr !223

dec_label_pc_1ae0:                                ; preds = %dec_label_pc_1a89
  %stack_var_-32.011.reload = load i64, i64* %stack_var_-32.011.reg2mem
  %storemerge12.reload = load i32, i32* %storemerge12.reg2mem
  %10 = ptrtoint i64* %1 to i64, !insn.addr !219
  %11 = mul nuw nsw i32 %storemerge12.reload, 10, !insn.addr !226
  %12 = bitcast i64* %1 to i32*, !insn.addr !227
  store i32 %11, i32* %12, align 4, !insn.addr !227
  %13 = add i64 %10, 8, !insn.addr !228
  %14 = inttoptr i64 %13 to i64*, !insn.addr !228
  store i64 0, i64* %14, align 8, !insn.addr !228
  %15 = icmp eq i64 %stack_var_-24.010.reload, 0, !insn.addr !229
  %16 = icmp eq i1 %15, false, !insn.addr !230
  store i64 %10, i64* %stack_var_-24.2.reg2mem, !insn.addr !230
  br i1 %16, label %dec_label_pc_1b16, label %dec_label_pc_1b2a, !insn.addr !230

dec_label_pc_1b16:                                ; preds = %dec_label_pc_1ae0
  %17 = add i64 %stack_var_-32.011.reload, 8, !insn.addr !231
  %18 = inttoptr i64 %17 to i64*, !insn.addr !231
  store i64 %10, i64* %18, align 8, !insn.addr !231
  store i64 %stack_var_-24.010.reload, i64* %stack_var_-24.2.reg2mem, !insn.addr !232
  br label %dec_label_pc_1b2a, !insn.addr !232

dec_label_pc_1b2a:                                ; preds = %dec_label_pc_1ae0, %dec_label_pc_1b16
  %stack_var_-24.2.reload = load i64, i64* %stack_var_-24.2.reg2mem
  %19 = add nuw nsw i32 %storemerge12.reload, 1, !insn.addr !233
  %20 = icmp ugt i32 %storemerge12.reload, 3, !insn.addr !234
  store i32 %19, i32* %storemerge12.reg2mem, !insn.addr !234
  store i64 %10, i64* %stack_var_-32.011.reg2mem, !insn.addr !234
  store i64 %stack_var_-24.2.reload, i64* %stack_var_-24.010.reg2mem, !insn.addr !234
  br i1 %20, label %dec_label_pc_1b4c.preheader, label %dec_label_pc_1a89, !insn.addr !234

dec_label_pc_1b84.preheader:                      ; preds = %dec_label_pc_1b57
  %phitmp13 = zext i32 %22 to i64
  store i64 %stack_var_-24.2.reload, i64* %stack_var_-24.36.reg2mem
  br label %dec_label_pc_1b84

dec_label_pc_1b57:                                ; preds = %dec_label_pc_1b4c.preheader, %dec_label_pc_1b57
  %stack_var_-60.07.reload = load i32, i32* %stack_var_-60.07.reg2mem
  %storemerge3.in8.reload = load i64, i64* %storemerge3.in8.reg2mem
  %storemerge3 = inttoptr i64 %storemerge3.in8.reload to i32*
  %21 = load i32, i32* %storemerge3, align 4, !insn.addr !235
  %22 = add i32 %21, %stack_var_-60.07.reload, !insn.addr !236
  %23 = add i64 %storemerge3.in8.reload, 8, !insn.addr !237
  %24 = inttoptr i64 %23 to i64*, !insn.addr !237
  %25 = load i64, i64* %24, align 8, !insn.addr !237
  %26 = icmp eq i64 %25, 0, !insn.addr !238
  store i64 %25, i64* %storemerge3.in8.reg2mem, !insn.addr !218
  store i32 %22, i32* %stack_var_-60.07.reg2mem, !insn.addr !218
  br i1 %26, label %dec_label_pc_1b84.preheader, label %dec_label_pc_1b57, !insn.addr !218

dec_label_pc_1b84:                                ; preds = %dec_label_pc_1b84.preheader, %dec_label_pc_1b84
  %stack_var_-24.36.reload = load i64, i64* %stack_var_-24.36.reg2mem
  %27 = add i64 %stack_var_-24.36.reload, 8, !insn.addr !239
  %28 = inttoptr i64 %27 to i64*, !insn.addr !239
  %29 = load i64, i64* %28, align 8, !insn.addr !239
  %30 = inttoptr i64 %stack_var_-24.36.reload to i64*, !insn.addr !240
  call void @free(i64* %30), !insn.addr !240
  %31 = icmp eq i64 %29, 0, !insn.addr !241
  store i64 %29, i64* %stack_var_-24.36.reg2mem, !insn.addr !242
  store i64 %phitmp13, i64* %storemerge4.reg2mem, !insn.addr !242
  br i1 %31, label %dec_label_pc_1bac, label %dec_label_pc_1b84, !insn.addr !242

dec_label_pc_1bac:                                ; preds = %dec_label_pc_1ab2, %dec_label_pc_1b84, %dec_label_pc_1b4c.preheader, %dec_label_pc_1aa7.preheader
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  ret i64 %storemerge4.reload, !insn.addr !243

; uselistorder directives
  uselistorder i64 %stack_var_-24.36.reload, { 1, 0 }
  uselistorder i64 %stack_var_-24.2.reload, { 0, 3, 2, 1 }
  uselistorder i64 %10, { 1, 2, 0, 3 }
  uselistorder i32 %storemerge12.reload, { 2, 0, 1 }
  uselistorder i64 %stack_var_-24.19.reload, { 1, 0 }
  uselistorder i64* %1, { 0, 2, 1 }
  uselistorder i64 %stack_var_-24.010.reload, { 0, 2, 1, 3 }
  uselistorder i32* %storemerge12.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-32.011.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-24.010.reg2mem, { 1, 0, 2 }
  uselistorder i64* %stack_var_-24.19.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-24.2.reg2mem, { 0, 2, 1 }
  uselistorder i64* %storemerge3.in8.reg2mem, { 2, 0, 1 }
  uselistorder i32* %stack_var_-60.07.reg2mem, { 2, 0, 1 }
  uselistorder i64* %stack_var_-24.36.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 0, 2, 1, 4, 3 }
  uselistorder label %dec_label_pc_1bac, { 1, 0, 3, 2 }
  uselistorder label %dec_label_pc_1b84, { 1, 0 }
  uselistorder label %dec_label_pc_1b57, { 1, 0 }
  uselistorder label %dec_label_pc_1b2a, { 1, 0 }
  uselistorder label %dec_label_pc_1ab2, { 1, 0 }
  uselistorder label %dec_label_pc_1a89, { 1, 0 }
}

define i64 @create_tree_node(i64 %arg1) local_unnamed_addr {
dec_label_pc_1bc0:
  %.pre-phi.reg2mem = alloca i64, !insn.addr !244
  %0 = call i64* @malloc(i32 24), !insn.addr !245
  %1 = icmp eq i64* %0, null, !insn.addr !246
  store i64 0, i64* %.pre-phi.reg2mem, !insn.addr !247
  br i1 %1, label %dec_label_pc_1c05, label %dec_label_pc_1be4, !insn.addr !247

dec_label_pc_1be4:                                ; preds = %dec_label_pc_1bc0
  %2 = bitcast i64* %0 to i32*
  %3 = trunc i64 %arg1 to i32, !insn.addr !248
  store i32 %3, i32* %2, align 4, !insn.addr !249
  %4 = ptrtoint i64* %0 to i64
  %5 = add i64 %4, 8, !insn.addr !250
  %6 = inttoptr i64 %5 to i64*, !insn.addr !250
  store i64 0, i64* %6, align 8, !insn.addr !250
  %7 = add i64 %4, 16, !insn.addr !251
  %8 = inttoptr i64 %7 to i64*, !insn.addr !251
  store i64 0, i64* %8, align 8, !insn.addr !251
  store i64 %4, i64* %.pre-phi.reg2mem, !insn.addr !251
  br label %dec_label_pc_1c05, !insn.addr !251

dec_label_pc_1c05:                                ; preds = %dec_label_pc_1bc0, %dec_label_pc_1be4
  %.pre-phi.reload = load i64, i64* %.pre-phi.reg2mem
  ret i64 %.pre-phi.reload, !insn.addr !252

; uselistorder directives
  uselistorder i64* %0, { 0, 2, 1 }
  uselistorder i64* %.pre-phi.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1c05, { 1, 0 }
}

define i64 @tree_heap_traversal() local_unnamed_addr {
dec_label_pc_1c10:
  %stack_var_-12.0.reg2mem = alloca i64, !insn.addr !253
  %.reg2mem = alloca i64, !insn.addr !253
  %0 = call i64 @create_tree_node(i64 10), !insn.addr !254
  %1 = icmp eq i64 %0, 0, !insn.addr !255
  %2 = icmp eq i1 %1, false, !insn.addr !256
  store i64 4294967295, i64* %stack_var_-12.0.reg2mem, !insn.addr !256
  br i1 %2, label %dec_label_pc_1c3d, label %dec_label_pc_1d18, !insn.addr !256

dec_label_pc_1c3d:                                ; preds = %dec_label_pc_1c10
  %3 = call i64 @create_tree_node(i64 20), !insn.addr !257
  %4 = add i64 %0, 8, !insn.addr !258
  %5 = inttoptr i64 %4 to i64*, !insn.addr !258
  store i64 %3, i64* %5, align 8, !insn.addr !258
  %6 = call i64 @create_tree_node(i64 30), !insn.addr !259
  %7 = add i64 %0, 16, !insn.addr !260
  %8 = inttoptr i64 %7 to i64*, !insn.addr !260
  store i64 %6, i64* %8, align 8, !insn.addr !260
  %9 = load i64, i64* %5, align 8
  %10 = icmp eq i64 %9, 0, !insn.addr !261
  store i64 %6, i64* %.reg2mem, !insn.addr !262
  br i1 %10, label %dec_label_pc_1ca1, label %dec_label_pc_1c76, !insn.addr !262

dec_label_pc_1c76:                                ; preds = %dec_label_pc_1c3d
  %11 = icmp eq i64 %6, 0, !insn.addr !263
  %12 = icmp eq i1 %11, false, !insn.addr !264
  br i1 %12, label %dec_label_pc_1cd2, label %dec_label_pc_1c94, !insn.addr !264

dec_label_pc_1c94:                                ; preds = %dec_label_pc_1c76
  %13 = inttoptr i64 %9 to i64*, !insn.addr !265
  call void @free(i64* %13), !insn.addr !265
  %.pr = load i64, i64* %8, align 8
  store i64 %.pr, i64* %.reg2mem, !insn.addr !265
  br label %dec_label_pc_1ca1, !insn.addr !265

dec_label_pc_1ca1:                                ; preds = %dec_label_pc_1c3d, %dec_label_pc_1c94
  %.reload = load i64, i64* %.reg2mem, !insn.addr !266
  %14 = icmp eq i64 %.reload, 0, !insn.addr !266
  br i1 %14, label %dec_label_pc_1cbd, label %dec_label_pc_1cb0, !insn.addr !267

dec_label_pc_1cb0:                                ; preds = %dec_label_pc_1ca1
  %15 = inttoptr i64 %.reload to i64*, !insn.addr !268
  call void @free(i64* %15), !insn.addr !268
  br label %dec_label_pc_1cbd, !insn.addr !268

dec_label_pc_1cbd:                                ; preds = %dec_label_pc_1cb0, %dec_label_pc_1ca1
  %16 = inttoptr i64 %0 to i64*, !insn.addr !269
  call void @free(i64* %16), !insn.addr !269
  store i64 4294967294, i64* %stack_var_-12.0.reg2mem, !insn.addr !270
  br label %dec_label_pc_1d18, !insn.addr !270

dec_label_pc_1cd2:                                ; preds = %dec_label_pc_1c76
  %17 = inttoptr i64 %0 to i32*, !insn.addr !271
  %18 = load i32, i32* %17, align 4, !insn.addr !271
  %19 = inttoptr i64 %9 to i32*, !insn.addr !272
  %20 = load i32, i32* %19, align 4, !insn.addr !272
  %21 = add i32 %20, %18, !insn.addr !272
  %22 = inttoptr i64 %6 to i32*, !insn.addr !273
  %23 = load i32, i32* %22, align 4, !insn.addr !273
  %24 = add i32 %21, %23, !insn.addr !273
  %25 = inttoptr i64 %9 to i64*, !insn.addr !274
  call void @free(i64* %25), !insn.addr !274
  %26 = load i64, i64* %8, align 8, !insn.addr !275
  %27 = inttoptr i64 %26 to i64*, !insn.addr !276
  call void @free(i64* %27), !insn.addr !276
  %28 = inttoptr i64 %0 to i64*, !insn.addr !277
  call void @free(i64* %28), !insn.addr !277
  %phitmp = zext i32 %24 to i64
  store i64 %phitmp, i64* %stack_var_-12.0.reg2mem, !insn.addr !278
  br label %dec_label_pc_1d18, !insn.addr !278

dec_label_pc_1d18:                                ; preds = %dec_label_pc_1c10, %dec_label_pc_1cd2, %dec_label_pc_1cbd
  %stack_var_-12.0.reload = load i64, i64* %stack_var_-12.0.reg2mem
  ret i64 %stack_var_-12.0.reload, !insn.addr !279

; uselistorder directives
  uselistorder i64 %9, { 1, 2, 0, 3 }
  uselistorder i64* %8, { 1, 0, 2 }
  uselistorder i64 %6, { 2, 1, 0, 3 }
  uselistorder i64 %0, { 0, 2, 1, 3, 4, 5 }
  uselistorder i64* %.reg2mem, { 0, 2, 1 }
  uselistorder i64* %stack_var_-12.0.reg2mem, { 0, 2, 3, 1 }
  uselistorder i64 16, { 2, 3, 0, 1 }
  uselistorder i64 (i64)* @create_tree_node, { 2, 1, 0 }
  uselistorder label %dec_label_pc_1d18, { 1, 2, 0 }
  uselistorder label %dec_label_pc_1ca1, { 1, 0 }
}

define i64 @memory_leak(i64 %arg1) local_unnamed_addr {
dec_label_pc_1d30:
  %storemerge4.reg2mem = alloca i64, !insn.addr !280
  %indvars.iv.reg2mem = alloca i64, !insn.addr !280
  %arg1.tr = trunc i64 %arg1 to i32
  %0 = mul i32 %arg1.tr, 4, !insn.addr !281
  %1 = call i64* @malloc(i32 %0), !insn.addr !281
  %2 = icmp eq i64* %1, null, !insn.addr !282
  %3 = icmp eq i1 %2, false, !insn.addr !283
  store i64 4294967295, i64* %storemerge4.reg2mem, !insn.addr !283
  br i1 %3, label %dec_label_pc_1d6a.preheader, label %dec_label_pc_1db4, !insn.addr !283

dec_label_pc_1d6a.preheader:                      ; preds = %dec_label_pc_1d30
  %sext = mul i64 %arg1, 4294967296
  %4 = ashr exact i64 %sext, 32, !insn.addr !284
  %5 = ptrtoint i64* %1 to i64, !insn.addr !281
  %6 = trunc i64 %4 to i32, !insn.addr !285
  %7 = icmp sgt i32 %6, 0, !insn.addr !286
  %wide.trip.count = and i64 %4, 4294967295
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !286
  br i1 %7, label %dec_label_pc_1d76, label %dec_label_pc_1d92, !insn.addr !286

dec_label_pc_1d76:                                ; preds = %dec_label_pc_1d6a.preheader, %dec_label_pc_1d76
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %8 = mul i64 %indvars.iv.reload, 4, !insn.addr !287
  %9 = add i64 %8, %5, !insn.addr !287
  %10 = inttoptr i64 %9 to i32*, !insn.addr !287
  %11 = trunc i64 %indvars.iv.reload to i32
  store i32 %11, i32* %10, align 4, !insn.addr !287
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, %wide.trip.count
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !286
  br i1 %exitcond, label %dec_label_pc_1d92, label %dec_label_pc_1d76, !insn.addr !286

dec_label_pc_1d92:                                ; preds = %dec_label_pc_1d6a.preheader, %dec_label_pc_1d76
  %12 = ashr i32 %6, 31, !insn.addr !288
  %13 = zext i32 %12 to i64, !insn.addr !289
  %14 = mul i64 %13, 4294967296, !insn.addr !289
  %15 = or i64 %14, %wide.trip.count, !insn.addr !289
  %16 = sdiv i64 %15, 2, !insn.addr !289
  %sext3 = mul i64 %16, 4294967296
  %17 = ashr exact i64 %sext3, 30, !insn.addr !290
  %18 = add i64 %17, %5, !insn.addr !290
  %19 = inttoptr i64 %18 to i32*, !insn.addr !290
  %20 = load i32, i32* %19, align 4, !insn.addr !290
  %phitmp = zext i32 %20 to i64
  store i64 %phitmp, i64* %storemerge4.reg2mem, !insn.addr !291
  br label %dec_label_pc_1db4, !insn.addr !291

dec_label_pc_1db4:                                ; preds = %dec_label_pc_1d30, %dec_label_pc_1d92
  %storemerge4.reload = load i64, i64* %storemerge4.reg2mem
  ret i64 %storemerge4.reload, !insn.addr !292

; uselistorder directives
  uselistorder i64* %1, { 1, 0 }
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge4.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_1db4, { 1, 0 }
  uselistorder label %dec_label_pc_1d92, { 1, 0 }
  uselistorder label %dec_label_pc_1d76, { 1, 0 }
}

define i64 @dangling_pointer() local_unnamed_addr {
dec_label_pc_1dc0:
  %storemerge.reg2mem = alloca i64, !insn.addr !293
  %0 = call i64* @malloc(i32 4), !insn.addr !294
  %1 = icmp eq i64* %0, null, !insn.addr !295
  %2 = icmp eq i1 %1, false, !insn.addr !296
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !296
  br i1 %2, label %dec_label_pc_1ded, label %dec_label_pc_1e29, !insn.addr !296

dec_label_pc_1ded:                                ; preds = %dec_label_pc_1dc0
  %3 = bitcast i64* %0 to i32*, !insn.addr !297
  store i32 42, i32* %3, align 4, !insn.addr !297
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([23 x i8], [23 x i8]* @global_var_3137, i64 0, i64 0), i64 42), !insn.addr !298
  call void @free(i64* %0), !insn.addr !299
  %5 = load i32, i32* %3, align 4, !insn.addr !300
  %phitmp = zext i32 %5 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !301
  br label %dec_label_pc_1e29, !insn.addr !301

dec_label_pc_1e29:                                ; preds = %dec_label_pc_1dc0, %dec_label_pc_1ded
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !302

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 42, { 1, 0 }
  uselistorder i32 42, { 1, 0 }
  uselistorder label %dec_label_pc_1e29, { 1, 0 }
}

define i64 @double_free(i64 %arg1) local_unnamed_addr {
dec_label_pc_1e40:
  %0 = alloca i64
  %stack_var_-12.0.reg2mem = alloca i64, !insn.addr !303
  %1 = load i64, i64* %0
  %2 = icmp eq i64 %arg1, 0, !insn.addr !304
  %3 = icmp eq i1 %2, false, !insn.addr !305
  br i1 %3, label %dec_label_pc_1ea4, label %dec_label_pc_1e57, !insn.addr !305

dec_label_pc_1e57:                                ; preds = %dec_label_pc_1e40
  %4 = call i64* @malloc(i32 4), !insn.addr !306
  %5 = icmp eq i64* %4, null, !insn.addr !307
  %6 = icmp eq i1 %5, false, !insn.addr !308
  store i64 4294967295, i64* %stack_var_-12.0.reg2mem, !insn.addr !308
  br i1 %6, label %dec_label_pc_1e7c, label %dec_label_pc_1ead, !insn.addr !308

dec_label_pc_1e7c:                                ; preds = %dec_label_pc_1e57
  %7 = bitcast i64* %4 to i32*, !insn.addr !309
  store i32 10, i32* %7, align 4, !insn.addr !309
  call void @free(i64* %4), !insn.addr !310
  call void @free(i64* %4), !insn.addr !311
  store i64 4294967294, i64* %stack_var_-12.0.reg2mem, !insn.addr !312
  br label %dec_label_pc_1ead, !insn.addr !312

dec_label_pc_1ea4:                                ; preds = %dec_label_pc_1e40
  %phitmp = and i64 %1, 4294967295
  store i64 %phitmp, i64* %stack_var_-12.0.reg2mem, !insn.addr !313
  br label %dec_label_pc_1ead, !insn.addr !313

dec_label_pc_1ead:                                ; preds = %dec_label_pc_1e57, %dec_label_pc_1ea4, %dec_label_pc_1e7c
  %stack_var_-12.0.reload = load i64, i64* %stack_var_-12.0.reg2mem
  ret i64 %stack_var_-12.0.reload, !insn.addr !314

; uselistorder directives
  uselistorder i64* %stack_var_-12.0.reg2mem, { 0, 3, 2, 1 }
  uselistorder label %dec_label_pc_1ead, { 1, 2, 0 }
}

define i64 @heap_overflow() local_unnamed_addr {
dec_label_pc_1ec0:
  %storemerge1.reg2mem = alloca i64, !insn.addr !315
  %indvars.iv.reg2mem = alloca i64, !insn.addr !315
  %0 = call i64* @malloc(i32 40), !insn.addr !316
  %1 = ptrtoint i64* %0 to i64, !insn.addr !316
  %2 = icmp eq i64* %0, null, !insn.addr !317
  %3 = icmp eq i1 %2, false, !insn.addr !318
  store i64 0, i64* %indvars.iv.reg2mem, !insn.addr !318
  store i64 4294967295, i64* %storemerge1.reg2mem, !insn.addr !318
  br i1 %3, label %dec_label_pc_1efe, label %dec_label_pc_1f33, !insn.addr !318

dec_label_pc_1efe:                                ; preds = %dec_label_pc_1ec0, %dec_label_pc_1efe
  %indvars.iv.reload = load i64, i64* %indvars.iv.reg2mem
  %4 = mul i64 %indvars.iv.reload, 4, !insn.addr !319
  %5 = add i64 %4, %1, !insn.addr !319
  %6 = inttoptr i64 %5 to i32*, !insn.addr !319
  %7 = trunc i64 %indvars.iv.reload to i32
  %8 = mul i32 %7, 100
  store i32 %8, i32* %6, align 4, !insn.addr !319
  %indvars.iv.next = add nuw nsw i64 %indvars.iv.reload, 1
  %exitcond = icmp eq i64 %indvars.iv.next, 11
  store i64 %indvars.iv.next, i64* %indvars.iv.reg2mem, !insn.addr !320
  br i1 %exitcond, label %dec_label_pc_1f1b, label %dec_label_pc_1efe, !insn.addr !320

dec_label_pc_1f1b:                                ; preds = %dec_label_pc_1efe
  %9 = bitcast i64* %0 to i32*, !insn.addr !321
  %10 = load i32, i32* %9, align 4, !insn.addr !321
  call void @free(i64* %0), !insn.addr !322
  %phitmp = zext i32 %10 to i64
  store i64 %phitmp, i64* %storemerge1.reg2mem, !insn.addr !323
  br label %dec_label_pc_1f33, !insn.addr !323

dec_label_pc_1f33:                                ; preds = %dec_label_pc_1ec0, %dec_label_pc_1f1b
  %storemerge1.reload = load i64, i64* %storemerge1.reg2mem
  ret i64 %storemerge1.reload, !insn.addr !324

; uselistorder directives
  uselistorder i64* %indvars.iv.reg2mem, { 2, 0, 1 }
  uselistorder i64* %storemerge1.reg2mem, { 0, 2, 1 }
  uselistorder i64* (i32)* @malloc, { 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 12 }
  uselistorder label %dec_label_pc_1f33, { 1, 0 }
  uselistorder label %dec_label_pc_1efe, { 1, 0 }
}

define i64 @test_heap_memory(i64 %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_1f40:
  %rax.0.reg2mem = alloca i64, !insn.addr !325
  %stack_var_-28 = alloca i32, align 4
  %stack_var_-16 = alloca i64, align 8
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_314e to i8*)), !insn.addr !326
  %1 = call i64 @heap_basic(i64 10), !insn.addr !327
  %2 = and i64 %1, 4294967295, !insn.addr !328
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_316d, i64 0, i64 0), i64 %2), !insn.addr !329
  %4 = call i64 @heap_calloc(i64 5), !insn.addr !330
  %5 = and i64 %4, 4294967295, !insn.addr !331
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_318a, i64 0, i64 0), i64 %5), !insn.addr !332
  %7 = call i64 @heap_realloc(), !insn.addr !333
  %8 = and i64 %7, 4294967295, !insn.addr !334
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([31 x i8], [31 x i8]* @global_var_31a8, i64 0, i64 0), i64 %8), !insn.addr !335
  %10 = call i64 @heap_array(i64 10), !insn.addr !336
  %11 = and i64 %10, 4294967295, !insn.addr !337
  %12 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_31c7, i64 0, i64 0), i64 %11), !insn.addr !338
  %13 = call i64 @heap_struct(i64 5), !insn.addr !339
  %14 = and i64 %13, 4294967295, !insn.addr !340
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_31e4, i64 0, i64 0), i64 %14), !insn.addr !341
  store i64 0, i64* %stack_var_-16, align 8, !insn.addr !342
  %16 = call i64 @heap_nested(i64* nonnull %stack_var_-16), !insn.addr !343
  %17 = and i64 %16, 4294967295, !insn.addr !344
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3202, i64 0, i64 0), i64 %17), !insn.addr !345
  %19 = load i64, i64* %stack_var_-16, align 8, !insn.addr !346
  %20 = icmp eq i64 %19, 0, !insn.addr !346
  br i1 %20, label %dec_label_pc_2015, label %dec_label_pc_1fff, !insn.addr !347

dec_label_pc_1fff:                                ; preds = %dec_label_pc_1f40
  %21 = add i64 %19, 8, !insn.addr !348
  %22 = inttoptr i64 %21 to i64*, !insn.addr !348
  %23 = load i64, i64* %22, align 8, !insn.addr !348
  %24 = inttoptr i64 %23 to i64*, !insn.addr !349
  call void @free(i64* %24), !insn.addr !349
  %25 = load i64, i64* %stack_var_-16, align 8, !insn.addr !350
  %26 = inttoptr i64 %25 to i64*, !insn.addr !351
  call void @free(i64* %26), !insn.addr !351
  br label %dec_label_pc_2015, !insn.addr !351

dec_label_pc_2015:                                ; preds = %dec_label_pc_1fff, %dec_label_pc_1f40
  %27 = call i64 @linked_list_heap(), !insn.addr !352
  %28 = and i64 %27, 4294967295, !insn.addr !353
  %29 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3220, i64 0, i64 0), i64 %28), !insn.addr !354
  %30 = call i64 @tree_heap_traversal(), !insn.addr !355
  %31 = and i64 %30, 4294967295, !insn.addr !356
  %32 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3243, i64 0, i64 0), i64 %31), !insn.addr !357
  %33 = call i64 @memory_leak(i64 5), !insn.addr !358
  %34 = and i64 %33, 4294967295, !insn.addr !359
  %35 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_3269, i64 0, i64 0), i64 %34), !insn.addr !360
  %36 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_3287, i64 0, i64 0)), !insn.addr !361
  %37 = call i32 @fork(), !insn.addr !362
  %38 = icmp eq i32 %37, 0, !insn.addr !363
  %39 = icmp eq i1 %38, false, !insn.addr !364
  br i1 %39, label %dec_label_pc_2099, label %dec_label_pc_2079, !insn.addr !364

dec_label_pc_2079:                                ; preds = %dec_label_pc_2015
  %40 = call i64 @dangling_pointer(), !insn.addr !365
  %41 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32a7 to i8*)), !insn.addr !366
  call void @exit(i32 xor (i32 ptrtoint (i8** @global_var_32a7 to i32), i32 ptrtoint (i8** @global_var_32a7 to i32))), !insn.addr !367
  unreachable, !insn.addr !367

dec_label_pc_2099:                                ; preds = %dec_label_pc_2015
  %42 = icmp slt i32 %37, 1, !insn.addr !368
  br i1 %42, label %dec_label_pc_2115, label %dec_label_pc_20a3, !insn.addr !368

dec_label_pc_20a3:                                ; preds = %dec_label_pc_2099
  %43 = call i32 @waitpid(i32 %37, i32* nonnull %stack_var_-28, i32 0), !insn.addr !369
  %44 = load i32, i32* %stack_var_-28, align 4, !insn.addr !370
  %45 = urem i32 %44, 128, !insn.addr !371
  %46 = icmp eq i32 %45, 0, !insn.addr !372
  %47 = icmp eq i1 %46, false, !insn.addr !373
  br i1 %47, label %dec_label_pc_20df, label %dec_label_pc_20c0, !insn.addr !373

dec_label_pc_20c0:                                ; preds = %dec_label_pc_20a3
  %48 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32b7 to i8*)), !insn.addr !374
  %49 = sext i32 %48 to i64, !insn.addr !374
  store i64 %49, i64* %rax.0.reg2mem, !insn.addr !375
  br label %dec_label_pc_2126, !insn.addr !375

dec_label_pc_20df:                                ; preds = %dec_label_pc_20a3
  %50 = mul i32 %44, 16777216
  %51 = and i32 %50, 2130706432, !insn.addr !376
  %sext = add nuw i32 %51, 16777216
  %52 = ashr i32 %sext, 25, !insn.addr !377
  %53 = zext i32 %52 to i64, !insn.addr !377
  %54 = icmp slt i32 %sext, 33554432, !insn.addr !378
  store i64 %53, i64* %rax.0.reg2mem, !insn.addr !378
  br i1 %54, label %dec_label_pc_2126, label %dec_label_pc_20f7, !insn.addr !378

dec_label_pc_20f7:                                ; preds = %dec_label_pc_20df
  %55 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_32dc to i8*)), !insn.addr !379
  %56 = sext i32 %55 to i64, !insn.addr !379
  store i64 %56, i64* %rax.0.reg2mem, !insn.addr !379
  br label %dec_label_pc_2126, !insn.addr !379

dec_label_pc_2115:                                ; preds = %dec_label_pc_2099
  call void @perror(i8* bitcast (i8** @global_var_331d to i8*)), !insn.addr !380
  store i64 ptrtoint (i32* @0 to i64), i64* %rax.0.reg2mem, !insn.addr !380
  br label %dec_label_pc_2126, !insn.addr !380

dec_label_pc_2126:                                ; preds = %dec_label_pc_2115, %dec_label_pc_20df, %dec_label_pc_20f7, %dec_label_pc_20c0
  %rax.0.reload = load i64, i64* %rax.0.reg2mem
  ret i64 %rax.0.reload, !insn.addr !381

; uselistorder directives
  uselistorder i64* %stack_var_-16, { 1, 2, 0, 3 }
  uselistorder i64* %rax.0.reg2mem, { 0, 4, 2, 3, 1 }
  uselistorder i32 16777216, { 1, 0 }
  uselistorder void (i64*)* @free, { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 21 }
  uselistorder i64 8, { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0 }
  uselistorder label %dec_label_pc_2126, { 0, 2, 1, 3 }
}

define i64 @global_var_access() local_unnamed_addr {
dec_label_pc_2130:
  store i32 ptrtoint (i32* @global_var_6111 to i32), i32* @global_var_6110, align 4, !insn.addr !382
  ret i64 zext (i32 ptrtoint (i32* @global_var_6111 to i32) to i64), !insn.addr !383
}

define i64 @global_var_read() local_unnamed_addr {
dec_label_pc_2150:
  %0 = load i32, i32* @global_var_6110, align 4, !insn.addr !384
  %1 = mul i32 %0, 2, !insn.addr !385
  %2 = zext i32 %1 to i64, !insn.addr !385
  ret i64 %2, !insn.addr !386

; uselistorder directives
  uselistorder i32* @global_var_6110, { 1, 0 }
}

define i64 @global_array_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_2160:
  %storemerge.reg2mem = alloca i64, !insn.addr !387
  %0 = trunc i64 %arg1 to i32, !insn.addr !388
  %1 = icmp ult i32 %0, 10
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !389
  br i1 %1, label %dec_label_pc_2187, label %dec_label_pc_2198, !insn.addr !389

dec_label_pc_2187:                                ; preds = %dec_label_pc_2160
  %sext = mul i64 %arg1, 4294967296
  %2 = ashr exact i64 %sext, 30, !insn.addr !390
  %3 = add i64 %2, ptrtoint (i32** @global_var_60a0 to i64), !insn.addr !390
  %4 = inttoptr i64 %3 to i32*, !insn.addr !390
  %5 = load i32, i32* %4, align 4, !insn.addr !390
  %phitmp = zext i32 %5 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !391
  br label %dec_label_pc_2198, !insn.addr !391

dec_label_pc_2198:                                ; preds = %dec_label_pc_2160, %dec_label_pc_2187
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !392

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 30, { 0, 1, 7, 2, 3, 4, 5, 6 }
  uselistorder label %dec_label_pc_2198, { 1, 0 }
}

define i64 @static_local(i64 %arg1) local_unnamed_addr {
dec_label_pc_21a0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !393
  %1 = icmp eq i32 %0, 0, !insn.addr !394
  %. = select i1 %1, i32 ptrtoint (i32* @global_var_6115 to i32), i32 0
  %.2 = select i1 %1, i64 zext (i32 ptrtoint (i32* @global_var_6115 to i32) to i64), i64 0
  store i32 %., i32* @global_var_6114, align 4
  ret i64 %.2, !insn.addr !395

; uselistorder directives
  uselistorder i32 ptrtoint (i32* @global_var_6115 to i32), { 1, 0 }
}

define i64 @call_static_func(i64 %arg1) local_unnamed_addr {
dec_label_pc_21f0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !396
  %1 = call i64 @static_helper(i32 %0), !insn.addr !397
  %2 = add i64 %1, 1, !insn.addr !398
  %3 = and i64 %2, 4294967295, !insn.addr !398
  ret i64 %3, !insn.addr !399
}

define i64 @static_helper(i32 %arg1) local_unnamed_addr {
dec_label_pc_2210:
  %0 = mul i32 %arg1, 2, !insn.addr !400
  %1 = zext i32 %0 to i64, !insn.addr !400
  ret i64 %1, !insn.addr !401
}

define i64 @access_extern_global() local_unnamed_addr {
dec_label_pc_2220:
  ret i64 ptrtoint (i64* @global_var_6158 to i64), !insn.addr !402
}

define i64 @call_extern_func() local_unnamed_addr {
dec_label_pc_2240:
  %0 = call i64 @extern_function(i64 5), !insn.addr !403
  ret i64 %0, !insn.addr !404
}

define i64 @read_const_data() local_unnamed_addr {
dec_label_pc_2250:
  ret i64 ptrtoint (i64* @global_var_60f6 to i64), !insn.addr !405
}

define i64 @access_bss_var() local_unnamed_addr {
dec_label_pc_2270:
  %0 = load i32, i32* @global_var_6118, align 4, !insn.addr !406
  %1 = zext i32 %0 to i64, !insn.addr !406
  ret i64 %1, !insn.addr !407
}

define i64 @access_bss_buffer() local_unnamed_addr {
dec_label_pc_2280:
  %0 = load i8, i8* @global_var_6120, align 1, !insn.addr !408
  %1 = sext i8 %0 to i64, !insn.addr !408
  ret i64 %1, !insn.addr !409

; uselistorder directives
  uselistorder i8 0, { 2, 0, 1 }
}

define i64 @global_struct_access() local_unnamed_addr {
dec_label_pc_2290:
  %0 = load i32, i32* @global_var_60d0, align 4, !insn.addr !410
  %1 = load i32, i32* @global_var_60d4, align 4, !insn.addr !411
  %2 = add i32 %1, %0, !insn.addr !411
  %3 = zext i32 %2 to i64, !insn.addr !411
  ret i64 %3, !insn.addr !412

; uselistorder directives
  uselistorder i32 10, { 1, 4, 2, 5, 0, 3 }
}

define i64 @set_file_static(i64 %arg1) local_unnamed_addr {
dec_label_pc_22b0:
  %0 = and i64 %arg1, 4294967295, !insn.addr !413
  %1 = trunc i64 %arg1 to i32, !insn.addr !414
  store i32 %1, i32* @global_var_60d8, align 4, !insn.addr !414
  ret i64 %0, !insn.addr !415
}

define i64 @get_file_static() local_unnamed_addr {
dec_label_pc_22d0:
  %0 = load i32, i32* @global_var_60d8, align 4, !insn.addr !416
  %1 = zext i32 %0 to i64, !insn.addr !416
  ret i64 %1, !insn.addr !417

; uselistorder directives
  uselistorder i32* @global_var_60d8, { 1, 0 }
}

define i64 @set_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_22e0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !418
  store i32 %0, i32* @global_var_6188, align 4, !insn.addr !418
  ret i64 %arg1, !insn.addr !419

; uselistorder directives
  uselistorder i64 %arg1, { 1, 0 }
}

define i64 @call_global_callback(i64 %arg1) local_unnamed_addr {
dec_label_pc_2300:
  %0 = load i32, i32* @global_var_6188, align 4, !insn.addr !420
  %1 = icmp eq i32 %0, 0, !insn.addr !420
  %narrow = select i1 %1, i32 -1, i32 %0
  %storemerge = zext i32 %narrow to i64
  ret i64 %storemerge, !insn.addr !421

; uselistorder directives
  uselistorder i32* @global_var_6188, { 1, 0 }
}

define i64 @global_heap_store(i32* %arg1) local_unnamed_addr {
dec_label_pc_2340:
  %storemerge.reg2mem = alloca i64, !insn.addr !422
  store i32* %arg1, i32** @global_var_6190, align 8, !insn.addr !423
  %0 = icmp eq i32* %arg1, null, !insn.addr !424
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !425
  br i1 %0, label %dec_label_pc_2379, label %dec_label_pc_2361, !insn.addr !425

dec_label_pc_2361:                                ; preds = %dec_label_pc_2340
  %1 = load i32, i32* %arg1, align 4, !insn.addr !426
  %phitmp = zext i32 %1 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !427
  br label %dec_label_pc_2379, !insn.addr !427

dec_label_pc_2379:                                ; preds = %dec_label_pc_2340, %dec_label_pc_2361
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !428

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2379, { 1, 0 }
}

define i64 @static_complex_init() local_unnamed_addr {
dec_label_pc_2380:
  %0 = load i32, i32* @global_var_60e0, align 4, !insn.addr !429
  %1 = load i32, i32* @global_var_60e8, align 4, !insn.addr !430
  %2 = add i32 %1, %0, !insn.addr !430
  %3 = load i32, i32* @global_var_60f0, align 4, !insn.addr !431
  %4 = add i32 %2, %3, !insn.addr !431
  %5 = zext i32 %4 to i64, !insn.addr !431
  ret i64 %5, !insn.addr !432
}

define i64 @tls_access(i64 %arg1) local_unnamed_addr {
dec_label_pc_23a0:
  %0 = trunc i64 %arg1 to i32, !insn.addr !433
  call void @__writefsdword(i64 -4, i32 %0), !insn.addr !434
  %1 = call i32 @__readfsdword(i64 -4), !insn.addr !435
  %2 = mul i32 %1, 2, !insn.addr !436
  %3 = zext i32 %2 to i64, !insn.addr !436
  ret i64 %3, !insn.addr !437
}

define i64 @init_order_test() local_unnamed_addr {
dec_label_pc_23c0:
  %stack_var_-12 = alloca i32, align 4
  store i32 20, i32* %stack_var_-12, align 4, !insn.addr !438
  %0 = call i64 @init_depends_on(i32* nonnull %stack_var_-12), !insn.addr !439
  ret i64 %0, !insn.addr !440
}

define i64 @init_depends_on(i32* %arg1) local_unnamed_addr {
dec_label_pc_23e0:
  %0 = alloca i64
  %.reg2mem = alloca i32, !insn.addr !441
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %arg1, null, !insn.addr !442
  br i1 %2, label %dec_label_pc_23e0.dec_label_pc_23ff_crit_edge, label %dec_label_pc_23f3, !insn.addr !443

dec_label_pc_23e0.dec_label_pc_23ff_crit_edge:    ; preds = %dec_label_pc_23e0
  %.pre = load i32, i32* @global_var_6198, align 4
  store i32 %.pre, i32* %.reg2mem
  br label %dec_label_pc_23ff

dec_label_pc_23f3:                                ; preds = %dec_label_pc_23e0
  %3 = trunc i64 %1 to i32
  store i32 %3, i32* @global_var_6198, align 4, !insn.addr !444
  store i32 %3, i32* %.reg2mem, !insn.addr !444
  br label %dec_label_pc_23ff, !insn.addr !444

dec_label_pc_23ff:                                ; preds = %dec_label_pc_23e0.dec_label_pc_23ff_crit_edge, %dec_label_pc_23f3
  %.reload = load i32, i32* %.reg2mem, !insn.addr !445
  %4 = zext i32 %.reload to i64, !insn.addr !445
  ret i64 %4, !insn.addr !446

; uselistorder directives
  uselistorder i32* @global_var_6198, { 1, 0 }
  uselistorder label %dec_label_pc_23ff, { 1, 0 }
}

define i64 @test_static_global() local_unnamed_addr {
dec_label_pc_2410:
  %stack_var_-12 = alloca i32, align 4
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3333 to i8*)), !insn.addr !447
  %1 = call i64 @global_var_access(), !insn.addr !448
  %2 = and i64 %1, 4294967295, !insn.addr !449
  %3 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3358, i64 0, i64 0), i64 %2), !insn.addr !450
  %4 = call i64 @global_var_read(), !insn.addr !451
  %5 = and i64 %4, 4294967295, !insn.addr !452
  %6 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_337b, i64 0, i64 0), i64 %5), !insn.addr !453
  %7 = call i64 @global_array_access(i64 5), !insn.addr !454
  %8 = and i64 %7, 4294967295, !insn.addr !455
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_339c, i64 0, i64 0), i64 %8), !insn.addr !456
  %10 = call i64 @static_local(i64 1), !insn.addr !457
  %11 = call i64 @static_local(i64 0), !insn.addr !458
  %12 = and i64 %11, 4294967295, !insn.addr !459
  %13 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33c1, i64 0, i64 0), i64 %12), !insn.addr !460
  %14 = call i64 @static_local(i64 zext (i32 xor (i32 ptrtoint ([30 x i8]* @global_var_33c1 to i32), i32 ptrtoint ([30 x i8]* @global_var_33c1 to i32)) to i64)), !insn.addr !461
  %15 = and i64 %14, 4294967295, !insn.addr !462
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([30 x i8], [30 x i8]* @global_var_33c1, i64 0, i64 0), i64 %15), !insn.addr !463
  %17 = call i64 @call_static_func(i64 5), !insn.addr !464
  %18 = and i64 %17, 4294967295, !insn.addr !465
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_33df, i64 0, i64 0), i64 %18), !insn.addr !466
  %20 = call i64 @access_extern_global(), !insn.addr !467
  %21 = and i64 %20, 4294967295, !insn.addr !468
  %22 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_3401, i64 0, i64 0), i64 %21), !insn.addr !469
  %23 = call i64 @call_extern_func(), !insn.addr !470
  %24 = and i64 %23, 4294967295, !insn.addr !471
  %25 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([34 x i8], [34 x i8]* @global_var_3427, i64 0, i64 0), i64 %24), !insn.addr !472
  %26 = call i64 @read_const_data(), !insn.addr !473
  %27 = and i64 %26, 4294967295, !insn.addr !474
  %28 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3449, i64 0, i64 0), i64 %27), !insn.addr !475
  %29 = call i64 @access_bss_var(), !insn.addr !476
  %30 = and i64 %29, 4294967295, !insn.addr !477
  %31 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([32 x i8], [32 x i8]* @global_var_346a, i64 0, i64 0), i64 %30), !insn.addr !478
  %32 = call i64 @access_bss_buffer(), !insn.addr !479
  %33 = and i64 %32, 4294967295, !insn.addr !480
  %34 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_348a, i64 0, i64 0), i64 %33), !insn.addr !481
  %35 = call i64 @global_struct_access(), !insn.addr !482
  %36 = and i64 %35, 4294967295, !insn.addr !483
  %37 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([38 x i8], [38 x i8]* @global_var_34ad, i64 0, i64 0), i64 %36), !insn.addr !484
  %38 = call i64 @set_file_static(i64 50), !insn.addr !485
  %39 = call i64 @get_file_static(), !insn.addr !486
  %40 = and i64 %39, 4294967295, !insn.addr !487
  %41 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([29 x i8], [29 x i8]* @global_var_34d3, i64 0, i64 0), i64 %40), !insn.addr !488
  %42 = call i64 @set_global_callback(i64 9712), !insn.addr !489
  %43 = call i64 @call_global_callback(i64 5), !insn.addr !490
  %44 = and i64 %43, 4294967295, !insn.addr !491
  %45 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_34f0, i64 0, i64 0), i64 %44), !insn.addr !492
  store i32 100, i32* %stack_var_-12, align 4, !insn.addr !493
  %46 = call i64 @global_heap_store(i32* nonnull %stack_var_-12), !insn.addr !494
  %47 = and i64 %46, 4294967295, !insn.addr !495
  %48 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([35 x i8], [35 x i8]* @global_var_3511, i64 0, i64 0), i64 %47), !insn.addr !496
  %49 = call i64 @static_complex_init(), !insn.addr !497
  %50 = and i64 %49, 4294967295, !insn.addr !498
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([37 x i8], [37 x i8]* @global_var_3534, i64 0, i64 0), i64 %50), !insn.addr !499
  %52 = call i64 @tls_access(i64 10), !insn.addr !500
  %53 = and i64 %52, 4294967295, !insn.addr !501
  %54 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([28 x i8], [28 x i8]* @global_var_3559, i64 0, i64 0), i64 %53), !insn.addr !502
  %55 = call i64 @init_order_test(), !insn.addr !503
  %56 = and i64 %55, 4294967295, !insn.addr !504
  %57 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([33 x i8], [33 x i8]* @global_var_3575, i64 0, i64 0), i64 %56), !insn.addr !505
  %58 = sext i32 %57 to i64, !insn.addr !505
  ret i64 %58, !insn.addr !506

; uselistorder directives
  uselistorder i32 100, { 2, 0, 1 }
  uselistorder i64 (i64)* @static_local, { 2, 1, 0 }
  uselistorder i64 5, { 2, 3, 4, 5, 6, 7, 8, 0, 1, 9, 10 }
}

define i64 @double_value(i64 %arg1) local_unnamed_addr {
dec_label_pc_25f0:
  %0 = mul i64 %arg1, 2, !insn.addr !507
  %1 = and i64 %0, 4294967294, !insn.addr !507
  ret i64 %1, !insn.addr !508
}

define i64 @memop_memset(i64* %arg1, i64 %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2600:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !509
  %1 = load i64, i64* %0
  %2 = icmp ne i64* %arg1, null, !insn.addr !510
  %3 = icmp eq i64 %arg2, 0, !insn.addr !511
  %4 = icmp eq i1 %3, false, !insn.addr !512
  %or.cond = icmp eq i1 %2, %4
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !513
  br i1 %or.cond, label %dec_label_pc_2635, label %dec_label_pc_2652, !insn.addr !513

dec_label_pc_2635:                                ; preds = %dec_label_pc_2600
  %5 = trunc i64 %arg3 to i32, !insn.addr !514
  %6 = urem i32 %5, 256, !insn.addr !515
  %7 = trunc i64 %arg2 to i32, !insn.addr !515
  %8 = call i64* @memset(i64* nonnull %arg1, i32 %6, i32 %7), !insn.addr !515
  %phitmp = urem i64 %1, 256
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !516
  br label %dec_label_pc_2652, !insn.addr !516

dec_label_pc_2652:                                ; preds = %dec_label_pc_2600, %dec_label_pc_2635
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !517

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder label %dec_label_pc_2652, { 1, 0 }
}

define i64 @memop_memcpy(i64* %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2660:
  %storemerge.reg2mem = alloca i64, !insn.addr !518
  %0 = icmp ne i64* %arg1, null, !insn.addr !519
  %1 = icmp ne i64* %arg2, null, !insn.addr !520
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !521
  %3 = icmp eq i1 %2, false, !insn.addr !522
  %or.cond3 = icmp eq i1 %or.cond.not, %3
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !523
  br i1 %or.cond3, label %dec_label_pc_26a1, label %dec_label_pc_26c8, !insn.addr !523

dec_label_pc_26a1:                                ; preds = %dec_label_pc_2660
  %4 = ptrtoint i64* %arg1 to i64
  %5 = trunc i64 %arg3 to i32, !insn.addr !524
  %6 = call i64* @memcpy(i64* nonnull %arg1, i64* nonnull %arg2, i32 %5), !insn.addr !524
  %7 = add i64 %arg3, -4
  %8 = and i64 %7, -4, !insn.addr !525
  %9 = add i64 %8, %4, !insn.addr !525
  %10 = inttoptr i64 %9 to i32*, !insn.addr !525
  %11 = load i32, i32* %10, align 4, !insn.addr !525
  %phitmp = zext i32 %11 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !526
  br label %dec_label_pc_26c8, !insn.addr !526

dec_label_pc_26c8:                                ; preds = %dec_label_pc_2660, %dec_label_pc_26a1
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !527

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg3, { 2, 1, 0 }
  uselistorder i64* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_26c8, { 1, 0 }
}

define i64 @memop_memmove(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_26e0:
  %storemerge.reg2mem = alloca i64, !insn.addr !528
  %0 = icmp ne i64* %arg1, null, !insn.addr !529
  %1 = icmp ult i64 %arg2, 2, !insn.addr !530
  %2 = icmp eq i1 %1, false, !insn.addr !531
  %or.cond = icmp eq i1 %0, %2
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !532
  br i1 %or.cond, label %dec_label_pc_2712, label %dec_label_pc_2736, !insn.addr !532

dec_label_pc_2712:                                ; preds = %dec_label_pc_26e0
  %3 = ptrtoint i64* %arg1 to i64
  %4 = add i64 %3, 1, !insn.addr !533
  %5 = inttoptr i64 %4 to i64*, !insn.addr !534
  %6 = trunc i64 %arg2 to i32
  %7 = add i32 %6, -1, !insn.addr !534
  %8 = call i64* @memmove(i64* %5, i64* nonnull %arg1, i32 %7), !insn.addr !534
  %9 = inttoptr i64 %4 to i8*, !insn.addr !535
  %10 = load i8, i8* %9, align 1, !insn.addr !535
  %11 = sext i8 %10 to i64, !insn.addr !536
  %phitmp = and i64 %11, 4294967295
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !536
  br label %dec_label_pc_2736, !insn.addr !536

dec_label_pc_2736:                                ; preds = %dec_label_pc_26e0, %dec_label_pc_2712
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !537

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i32 -1, { 2, 1, 0 }
  uselistorder i64 %arg2, { 1, 0 }
  uselistorder i64* %arg1, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2736, { 1, 0 }
}

define i64 @memop_memcmp(i64* %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2740:
  %storemerge.reg2mem = alloca i64, !insn.addr !538
  %0 = icmp ne i64* %arg1, null, !insn.addr !539
  %1 = icmp ne i64* %arg2, null, !insn.addr !540
  %or.cond.not = icmp eq i1 %0, %1
  %2 = icmp eq i64 %arg3, 0, !insn.addr !541
  %3 = icmp eq i1 %2, false, !insn.addr !542
  %or.cond5 = icmp eq i1 %or.cond.not, %3
  store i64 0, i64* %storemerge.reg2mem, !insn.addr !543
  br i1 %or.cond5, label %dec_label_pc_2781, label %dec_label_pc_27c5, !insn.addr !543

dec_label_pc_2781:                                ; preds = %dec_label_pc_2740
  %4 = trunc i64 %arg3 to i32, !insn.addr !544
  %5 = call i32 @memcmp(i64* nonnull %arg1, i64* nonnull %arg2, i32 %4), !insn.addr !544
  %6 = icmp slt i32 %5, 1, !insn.addr !545
  store i64 1, i64* %storemerge.reg2mem, !insn.addr !545
  br i1 %6, label %dec_label_pc_27ac, label %dec_label_pc_27c5, !insn.addr !545

dec_label_pc_27ac:                                ; preds = %dec_label_pc_2781
  %7 = icmp eq i32 %5, 0, !insn.addr !546
  %phitmp2 = select i1 %7, i64 0, i64 4294967295
  store i64 %phitmp2, i64* %storemerge.reg2mem, !insn.addr !547
  br label %dec_label_pc_27c5, !insn.addr !547

dec_label_pc_27c5:                                ; preds = %dec_label_pc_2740, %dec_label_pc_27ac, %dec_label_pc_2781
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !548

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1, 3 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder label %dec_label_pc_27c5, { 1, 2, 0 }
}

define i64 @memop_bzero(i64* %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_27d0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !549
  %1 = load i64, i64* %0
  %2 = icmp eq i64* %arg1, null, !insn.addr !550
  %3 = icmp eq i1 %2, false, !insn.addr !551
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !551
  br i1 %3, label %dec_label_pc_27f7, label %dec_label_pc_2810, !insn.addr !551

dec_label_pc_27f7:                                ; preds = %dec_label_pc_27d0
  %4 = trunc i64 %arg2 to i32, !insn.addr !552
  %5 = call i64* @memset(i64* %arg1, i32 0, i32 %4), !insn.addr !552
  %phitmp = urem i64 %1, 256
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !553
  br label %dec_label_pc_2810, !insn.addr !553

dec_label_pc_2810:                                ; preds = %dec_label_pc_27d0, %dec_label_pc_27f7
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !554

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder label %dec_label_pc_2810, { 1, 0 }
}

define i64 @memop_bcopy(i32* %arg1, i64* %arg2, i64 %arg3) local_unnamed_addr {
dec_label_pc_2820:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !555
  %1 = load i64, i64* %0
  %2 = icmp ne i32* %arg1, null, !insn.addr !556
  %3 = icmp ne i64* %arg2, null, !insn.addr !557
  %or.cond.not = icmp eq i1 %2, %3
  %4 = icmp eq i64 %arg3, 0, !insn.addr !558
  %5 = icmp eq i1 %4, false, !insn.addr !559
  %or.cond4 = icmp eq i1 %or.cond.not, %5
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !560
  br i1 %or.cond4, label %dec_label_pc_2861, label %dec_label_pc_287c, !insn.addr !560

dec_label_pc_2861:                                ; preds = %dec_label_pc_2820
  %6 = bitcast i32* %arg1 to i64*
  %7 = trunc i64 %arg3 to i32, !insn.addr !561
  call void @bcopy(i64* %6, i64* nonnull %arg2, i32 %7), !insn.addr !561
  %phitmp = urem i64 %1, 256
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !562
  br label %dec_label_pc_287c, !insn.addr !562

dec_label_pc_287c:                                ; preds = %dec_label_pc_2820, %dec_label_pc_2861
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !563

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 %arg3, { 1, 0 }
  uselistorder label %dec_label_pc_287c, { 1, 0 }
}

define i64 @memop_unaligned_access(i64* %arg1) local_unnamed_addr {
dec_label_pc_2890:
  %storemerge.reg2mem = alloca i64, !insn.addr !564
  %0 = icmp eq i64* %arg1, null, !insn.addr !565
  %1 = icmp eq i1 %0, false, !insn.addr !566
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !566
  br i1 %1, label %dec_label_pc_28af, label %dec_label_pc_28bf, !insn.addr !566

dec_label_pc_28af:                                ; preds = %dec_label_pc_2890
  %2 = ptrtoint i64* %arg1 to i64
  %3 = add i64 %2, 1, !insn.addr !567
  %4 = inttoptr i64 %3 to i32*, !insn.addr !567
  %5 = load i32, i32* %4, align 4, !insn.addr !567
  %phitmp = zext i32 %5 to i64
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !568
  br label %dec_label_pc_28bf, !insn.addr !568

dec_label_pc_28bf:                                ; preds = %dec_label_pc_2890, %dec_label_pc_28af
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !569

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 1, { 15, 0, 16, 14, 12, 1, 2, 3, 5, 4, 6, 7, 13, 8, 9, 10, 11 }
  uselistorder i64* null, { 3, 0, 4, 1, 5, 6, 2, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 }
  uselistorder i64* %arg1, { 1, 0 }
  uselistorder label %dec_label_pc_28bf, { 1, 0 }
}

define i64 @memop_memory_barrier(i32* %arg1) local_unnamed_addr {
dec_label_pc_28d0:
  %0 = alloca i64
  %storemerge.reg2mem = alloca i64, !insn.addr !570
  %1 = load i64, i64* %0
  %2 = icmp eq i32* %arg1, null, !insn.addr !571
  %3 = icmp eq i1 %2, false, !insn.addr !572
  store i64 4294967295, i64* %storemerge.reg2mem, !insn.addr !572
  br i1 %3, label %dec_label_pc_28ef, label %dec_label_pc_2909, !insn.addr !572

dec_label_pc_28ef:                                ; preds = %dec_label_pc_28d0
  %4 = call i64 @__asm_mfence(), !insn.addr !573
  %5 = mul i64 %1, 2, !insn.addr !574
  %phitmp = and i64 %5, 4294967294
  store i64 %phitmp, i64* %storemerge.reg2mem, !insn.addr !575
  br label %dec_label_pc_2909, !insn.addr !575

dec_label_pc_2909:                                ; preds = %dec_label_pc_28d0, %dec_label_pc_28ef
  %storemerge.reload = load i64, i64* %storemerge.reg2mem
  ret i64 %storemerge.reload, !insn.addr !576

; uselistorder directives
  uselistorder i64* %storemerge.reg2mem, { 0, 2, 1 }
  uselistorder i64 4294967294, { 3, 5, 0, 1, 2, 4, 6 }
  uselistorder i64 2, { 0, 4, 1, 5, 6, 7, 10, 8, 9, 2, 3 }
  uselistorder i1 false, { 8, 9, 0, 10, 1, 2, 3, 4, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 5, 31, 6, 7 }
  uselistorder label %dec_label_pc_2909, { 1, 0 }
}

define i64 @test_memory_op_functions(i64 %arg1, i64 %arg2) local_unnamed_addr {
dec_label_pc_2910:
  %stack_var_-396 = alloca i32, align 4
  %stack_var_-390 = alloca i64, align 8
  %stack_var_-382 = alloca i64, align 8
  %stack_var_-378 = alloca i32, align 4
  %stack_var_-374 = alloca i64, align 8
  %stack_var_-364 = alloca i64, align 8
  %stack_var_-352 = alloca i64, align 8
  %stack_var_-339 = alloca i8*, align 8
  %stack_var_-264 = alloca i64, align 8
  %stack_var_-328 = alloca i64, align 8
  %stack_var_-296 = alloca i64, align 8
  %0 = call i32 (i8*, ...) @printf(i8* bitcast (i8** @global_var_3596 to i8*)), !insn.addr !577
  store i64 85899345930, i64* %stack_var_-296, align 8, !insn.addr !578
  %1 = call i64* @memset(i64* nonnull %stack_var_-328, i32 0, i32 20), !insn.addr !579
  %2 = call i64 @memop_memset(i64* nonnull %stack_var_-264, i64 10, i64 65), !insn.addr !580
  %3 = and i64 %2, 4294967295, !insn.addr !581
  %4 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35b8, i64 0, i64 0), i64 %3), !insn.addr !582
  %5 = call i64 @memop_memcpy(i64* nonnull %stack_var_-328, i64* nonnull %stack_var_-296, i64 20), !insn.addr !583
  %6 = and i64 %5, 4294967295, !insn.addr !584
  %7 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35c9, i64 0, i64 0), i64 %6), !insn.addr !585
  store i8* inttoptr (i64 8245905578810697032 to i8*), i8** %stack_var_-339, align 8, !insn.addr !586
  %8 = bitcast i8** %stack_var_-339 to i64*, !insn.addr !587
  %9 = call i64 @memop_memmove(i64* nonnull %8, i64 10), !insn.addr !587
  %10 = trunc i64 %9 to i8, !insn.addr !588
  %11 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35da, i64 0, i64 0), i8 %10), !insn.addr !588
  store i64 8589934593, i64* %stack_var_-352, align 8, !insn.addr !589
  store i64 8589934593, i64* %stack_var_-364, align 8, !insn.addr !590
  %12 = call i64 @memop_memcmp(i64* nonnull %stack_var_-352, i64* nonnull %stack_var_-364, i64 12), !insn.addr !591
  %13 = and i64 %12, 4294967295, !insn.addr !592
  %14 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35eb, i64 0, i64 0), i64 %13), !insn.addr !593
  %15 = call i64 @memop_bzero(i64* nonnull %stack_var_-374, i64 10), !insn.addr !594
  %16 = and i64 %15, 4294967295, !insn.addr !595
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_35fc, i64 0, i64 0), i64 %16), !insn.addr !596
  store i32 67305985, i32* %stack_var_-378, align 4, !insn.addr !597
  %18 = call i64* @memset(i64* nonnull %stack_var_-382, i32 0, i32 4), !insn.addr !598
  %19 = call i64 @memop_bcopy(i32* nonnull %stack_var_-378, i64* nonnull %stack_var_-382, i64 4), !insn.addr !599
  %20 = and i64 %19, 4294967295, !insn.addr !600
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_360d, i64 0, i64 0), i64 %20), !insn.addr !601
  store i64 506097522914230528, i64* %stack_var_-390, align 8, !insn.addr !602
  %22 = call i64 @memop_unaligned_access(i64* nonnull %stack_var_-390), !insn.addr !603
  %23 = trunc i64 %22 to i32, !insn.addr !604
  %24 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([19 x i8], [19 x i8]* @global_var_361e, i64 0, i64 0), i32 %23), !insn.addr !605
  store i32 5, i32* %stack_var_-396, align 4, !insn.addr !606
  %25 = call i64 @memop_memory_barrier(i32* nonnull %stack_var_-396), !insn.addr !607
  %26 = and i64 %25, 4294967295, !insn.addr !608
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([17 x i8], [17 x i8]* @global_var_3631, i64 0, i64 0), i64 %26), !insn.addr !609
  %28 = sext i32 %27 to i64, !insn.addr !609
  ret i64 %28, !insn.addr !610

; uselistorder directives
  uselistorder i8** %stack_var_-339, { 1, 0 }
  uselistorder i32 5, { 1, 0 }
  uselistorder i64 4, { 11, 0, 1, 12, 2, 3, 4, 5, 6, 7, 8, 9, 10 }
  uselistorder i32 4, { 3, 4, 5, 0, 1, 6, 2 }
  uselistorder i64 20, { 1, 2, 3, 0 }
  uselistorder i64 10, { 3, 4, 5, 6, 7, 8, 9, 0, 10, 11, 1, 2 }
  uselistorder i64* (i64*, i32, i32)* @memset, { 4, 3, 2, 1, 0, 5 }
  uselistorder i32 20, { 0, 3, 4, 1, 2 }
  uselistorder i32 0, { 12, 13, 14, 9, 15, 11, 26, 27, 16, 28, 3, 0, 1, 4, 2, 5, 6, 25, 17, 7, 29, 30, 8, 10, 18, 19, 20, 21, 22, 23, 24 }
  uselistorder i32 (i8*, ...)* @printf, { 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 53 }
}

define i64 @main(i64 %argc, i8** %argv) local_unnamed_addr {
dec_label_pc_2b20:
  %0 = alloca i64
  %1 = load i64, i64* %0
  %2 = ptrtoint i8** %argv to i64
  %3 = call i64 @test_stack_memory(), !insn.addr !611
  %4 = call i64 @test_heap_memory(i64 %argc, i64 %2, i64 %1), !insn.addr !612
  %5 = call i64 @test_static_global(), !insn.addr !613
  %6 = call i64 @test_memory_op_functions(i64 %argc, i64 %2), !insn.addr !614
  ret i64 0, !insn.addr !615

; uselistorder directives
  uselistorder i64 %2, { 1, 0 }
  uselistorder i64 0, { 18, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 22, 26, 0, 23, 24, 25, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 43, 95, 96, 97, 98, 99, 100, 101, 102, 139, 103, 104, 138, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 1, 140, 115, 116, 2, 141, 142, 143, 144, 145, 146, 3, 147, 117, 148, 149, 150, 20, 4, 21, 5, 6, 7, 151, 8, 9, 11, 10, 12, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 13, 14, 15, 16, 152, 19, 17, 153, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 136, 137 }
  uselistorder i64 %argc, { 1, 0 }
}

define i64 @extern_function(i64 %arg1) local_unnamed_addr {
dec_label_pc_2b50:
  %0 = mul i64 %arg1, 3, !insn.addr !616
  %1 = and i64 %0, 4294967295, !insn.addr !616
  ret i64 %1, !insn.addr !617

; uselistorder directives
  uselistorder i64 4294967295, { 30, 31, 32, 33, 34, 35, 36, 0, 1, 2, 3, 29, 37, 4, 5, 6, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 7, 56, 57, 8, 58, 59, 60, 61, 62, 63, 64, 65, 66, 9, 22, 10, 11, 23, 12, 13, 14, 15, 16, 24, 17, 25, 18, 26, 19, 67, 68, 69, 70, 71, 72, 73, 74, 75, 27, 20, 28, 21, 76 }
}

define i64 @_fini() local_unnamed_addr {
dec_label_pc_2b60:
  %0 = alloca i64
  %1 = load i64, i64* %0
  ret i64 %1, !insn.addr !618

; uselistorder directives
  uselistorder i32 1, { 9, 8, 78, 77, 76, 68, 75, 74, 73, 72, 71, 70, 69, 12, 7, 13, 14, 6, 15, 5, 63, 16, 17, 18, 19, 4, 79, 20, 3, 80, 21, 22, 64, 81, 66, 23, 25, 24, 26, 2, 27, 29, 28, 31, 30, 32, 90, 41, 40, 39, 38, 37, 36, 35, 34, 33, 42, 43, 45, 44, 49, 48, 47, 46, 53, 52, 51, 50, 55, 54, 84, 83, 82, 85, 57, 56, 65, 86, 59, 58, 87, 60, 11, 1, 88, 61, 10, 0, 89, 62, 67 }
}

declare i32 @__libc_start_main(i64, i32, i8**, void ()*, void ()*, void ()*) local_unnamed_addr

declare void @__gmon_start__() local_unnamed_addr

declare void @__cxa_finalize(i64*) local_unnamed_addr

declare void @free(i64*) local_unnamed_addr

declare i32 @printf(i8*, ...) local_unnamed_addr

declare i64* @memset(i64*, i32, i32) local_unnamed_addr

declare i32 @memcmp(i64*, i64*, i32) local_unnamed_addr

declare i64* @calloc(i32, i32) local_unnamed_addr

declare i64* @memcpy(i64*, i64*, i32) local_unnamed_addr

declare i64* @malloc(i32) local_unnamed_addr

declare i64* @realloc(i64*, i32) local_unnamed_addr

declare void @bcopy(i64*, i64*, i32) local_unnamed_addr

declare i64* @memmove(i64*, i64*, i32) local_unnamed_addr

declare i32 @waitpid(i32, i32*, i32) local_unnamed_addr

declare void @perror(i8*) local_unnamed_addr

declare void @exit(i32) local_unnamed_addr

declare i32 @fork() local_unnamed_addr

declare i64 @__asm_hlt() local_unnamed_addr

declare i64 @__asm_mfence() local_unnamed_addr

declare void @__writefsdword(i64, i32) local_unnamed_addr

declare i32 @__readfsdword(i64) local_unnamed_addr

!0 = !{i64 4096}
!1 = !{i64 4104}
!2 = !{i64 4111}
!3 = !{i64 4114}
!4 = !{i64 4116}
!5 = !{i64 4122}
!6 = !{i64 4144}
!7 = !{i64 4160}
!8 = !{i64 4176}
!9 = !{i64 4192}
!10 = !{i64 4208}
!11 = !{i64 4224}
!12 = !{i64 4240}
!13 = !{i64 4256}
!14 = !{i64 4272}
!15 = !{i64 4288}
!16 = !{i64 4304}
!17 = !{i64 4320}
!18 = !{i64 4336}
!19 = !{i64 4352}
!20 = !{i64 4368}
!21 = !{i64 4415}
!22 = !{i64 4421}
!23 = !{i64 4472}
!24 = !{i64 4536}
!25 = !{i64 4548}
!26 = !{i64 4555}
!27 = !{i64 4558}
!28 = !{i64 4569}
!29 = !{i64 4571}
!30 = !{i64 4578}
!31 = !{i64 4583}
!32 = !{i64 4588}
!33 = !{i64 4596}
!34 = !{i64 4600}
!35 = !{i64 4612}
!36 = !{i64 4640}
!37 = !{i64 4649}
!38 = !{i64 4655}
!39 = !{i64 4659}
!40 = !{i64 4672}
!41 = !{i64 4673}
!42 = !{i64 4707}
!43 = !{i64 4699}
!44 = !{i64 4690}
!45 = !{i64 4725}
!46 = !{i64 4729}
!47 = !{i64 4761}
!48 = !{i64 4765}
!49 = !{i64 4790}
!50 = !{i64 4796}
!51 = !{i64 4834}
!52 = !{i64 4837}
!53 = !{i64 4848}
!54 = !{i64 4879}
!55 = !{i64 4849}
!56 = !{i64 4905}
!57 = !{i64 4932}
!58 = !{i64 4947}
!59 = !{i64 4960}
!60 = !{i64 4968}
!61 = !{i64 4975}
!62 = !{i64 4981}
!63 = !{i64 4988}
!64 = !{i64 5016}
!65 = !{i64 5024}
!66 = !{i64 5028}
!67 = !{i64 5031}
!68 = !{i64 5058}
!69 = !{i64 5078}
!70 = !{i64 5103}
!71 = !{i64 5104}
!72 = !{i64 5115}
!73 = !{i64 5125}
!74 = !{i64 5135}
!75 = !{i64 5136}
!76 = !{i64 5144}
!77 = !{i64 5147}
!78 = !{i64 5151}
!79 = !{i64 5173}
!80 = !{i64 5181}
!81 = !{i64 5185}
!82 = !{i64 5188}
!83 = !{i64 5208}
!84 = !{i64 5211}
!85 = !{i64 5217}
!86 = !{i64 5229}
!87 = !{i64 5250}
!88 = !{i64 5262}
!89 = !{i64 5263}
!90 = !{i64 5274}
!91 = !{i64 5277}
!92 = !{i64 5287}
!93 = !{i64 5391}
!94 = !{i64 5409}
!95 = !{i64 5419}
!96 = !{i64 5424}
!97 = !{i64 5435}
!98 = !{i64 5445}
!99 = !{i64 5450}
!100 = !{i64 5461}
!101 = !{i64 5471}
!102 = !{i64 5476}
!103 = !{i64 5487}
!104 = !{i64 5496}
!105 = !{i64 5501}
!106 = !{i64 5512}
!107 = !{i64 5528}
!108 = !{i64 5533}
!109 = !{i64 5558}
!110 = !{i64 5563}
!111 = !{i64 5574}
!112 = !{i64 5579}
!113 = !{i64 5584}
!114 = !{i64 5595}
!115 = !{i64 5605}
!116 = !{i64 5610}
!117 = !{i64 5621}
!118 = !{i64 5631}
!119 = !{i64 5636}
!120 = !{i64 5647}
!121 = !{i64 5652}
!122 = !{i64 5666}
!123 = !{i64 5671}
!124 = !{i64 5682}
!125 = !{i64 5692}
!126 = !{i64 5696}
!127 = !{i64 5715}
!128 = !{i64 5724}
!129 = !{i64 5729}
!130 = !{i64 5704}
!131 = !{i64 5757}
!132 = !{i64 5760}
!133 = !{i64 5780}
!134 = !{i64 5813}
!135 = !{i64 5814}
!136 = !{i64 5825}
!137 = !{i64 5835}
!138 = !{i64 5843}
!139 = !{i64 5854}
!140 = !{i64 5856}
!141 = !{i64 5864}
!142 = !{i64 5876}
!143 = !{i64 5885}
!144 = !{i64 5890}
!145 = !{i64 5928}
!146 = !{i64 5942}
!147 = !{i64 5945}
!148 = !{i64 5969}
!149 = !{i64 5977}
!150 = !{i64 5988}
!151 = !{i64 6000}
!152 = !{i64 6013}
!153 = !{i64 6022}
!154 = !{i64 6027}
!155 = !{i64 6076}
!156 = !{i64 6056}
!157 = !{i64 6097}
!158 = !{i64 6112}
!159 = !{i64 6121}
!160 = !{i64 6126}
!161 = !{i64 6136}
!162 = !{i64 6148}
!163 = !{i64 6190}
!164 = !{i64 6172}
!165 = !{i64 6211}
!166 = !{i64 6214}
!167 = !{i64 6217}
!168 = !{i64 6227}
!169 = !{i64 6233}
!170 = !{i64 6261}
!171 = !{i64 6269}
!172 = !{i64 6272}
!173 = !{i64 6280}
!174 = !{i64 6288}
!175 = !{i64 6307}
!176 = !{i64 6316}
!177 = !{i64 6321}
!178 = !{i64 6296}
!179 = !{i64 6349}
!180 = !{i64 6352}
!181 = !{i64 6358}
!182 = !{i64 6370}
!183 = !{i64 6403}
!184 = !{i64 6404}
!185 = !{i64 6415}
!186 = !{i64 6425}
!187 = !{i64 6433}
!188 = !{i64 6444}
!189 = !{i64 6448}
!190 = !{i64 6464}
!191 = !{i64 6473}
!192 = !{i64 6478}
!193 = !{i64 6496}
!194 = !{i64 6503}
!195 = !{i64 6508}
!196 = !{i64 6515}
!197 = !{i64 6522}
!198 = !{i64 6528}
!199 = !{i64 6538}
!200 = !{i64 6546}
!201 = !{i64 6557}
!202 = !{i64 6560}
!203 = !{i64 6577}
!204 = !{i64 6589}
!205 = !{i64 6625}
!206 = !{i64 6636}
!207 = !{i64 6651}
!208 = !{i64 6662}
!209 = !{i64 6667}
!210 = !{i64 6680}
!211 = !{i64 6692}
!212 = !{i64 6708}
!213 = !{i64 6721}
!214 = !{i64 6725}
!215 = !{i64 6733}
!216 = !{i64 6748}
!217 = !{i64 6752}
!218 = !{i64 6993}
!219 = !{i64 6798}
!220 = !{i64 6807}
!221 = !{i64 6812}
!222 = !{i64 6823}
!223 = !{i64 6828}
!224 = !{i64 6846}
!225 = !{i64 6858}
!226 = !{i64 6880}
!227 = !{i64 6888}
!228 = !{i64 6894}
!229 = !{i64 6902}
!230 = !{i64 6907}
!231 = !{i64 6942}
!232 = !{i64 6950}
!233 = !{i64 6962}
!234 = !{i64 6787}
!235 = !{i64 7003}
!236 = !{i64 7005}
!237 = !{i64 7015}
!238 = !{i64 6988}
!239 = !{i64 7056}
!240 = !{i64 7068}
!241 = !{i64 7033}
!242 = !{i64 7038}
!243 = !{i64 7092}
!244 = !{i64 7104}
!245 = !{i64 7120}
!246 = !{i64 7129}
!247 = !{i64 7134}
!248 = !{i64 7140}
!249 = !{i64 7147}
!250 = !{i64 7153}
!251 = !{i64 7165}
!252 = !{i64 7182}
!253 = !{i64 7184}
!254 = !{i64 7197}
!255 = !{i64 7206}
!256 = !{i64 7211}
!257 = !{i64 7234}
!258 = !{i64 7246}
!259 = !{i64 7255}
!260 = !{i64 7267}
!261 = !{i64 7275}
!262 = !{i64 7280}
!263 = !{i64 7290}
!264 = !{i64 7295}
!265 = !{i64 7324}
!266 = !{i64 7333}
!267 = !{i64 7338}
!268 = !{i64 7352}
!269 = !{i64 7361}
!270 = !{i64 7373}
!271 = !{i64 7382}
!272 = !{i64 7392}
!273 = !{i64 7402}
!274 = !{i64 7415}
!275 = !{i64 7424}
!276 = !{i64 7428}
!277 = !{i64 7437}
!278 = !{i64 7445}
!279 = !{i64 7456}
!280 = !{i64 7472}
!281 = !{i64 7491}
!282 = !{i64 7500}
!283 = !{i64 7505}
!284 = !{i64 7480}
!285 = !{i64 7533}
!286 = !{i64 7536}
!287 = !{i64 7553}
!288 = !{i64 7586}
!289 = !{i64 7587}
!290 = !{i64 7598}
!291 = !{i64 7601}
!292 = !{i64 7612}
!293 = !{i64 7616}
!294 = !{i64 7629}
!295 = !{i64 7638}
!296 = !{i64 7643}
!297 = !{i64 7665}
!298 = !{i64 7692}
!299 = !{i64 7701}
!300 = !{i64 7710}
!301 = !{i64 7718}
!302 = !{i64 7729}
!303 = !{i64 7744}
!304 = !{i64 7756}
!305 = !{i64 7761}
!306 = !{i64 7772}
!307 = !{i64 7781}
!308 = !{i64 7786}
!309 = !{i64 7808}
!310 = !{i64 7818}
!311 = !{i64 7827}
!312 = !{i64 7839}
!313 = !{i64 7850}
!314 = !{i64 7861}
!315 = !{i64 7872}
!316 = !{i64 7885}
!317 = !{i64 7894}
!318 = !{i64 7899}
!319 = !{i64 7946}
!320 = !{i64 7928}
!321 = !{i64 7967}
!322 = !{i64 7976}
!323 = !{i64 7984}
!324 = !{i64 7995}
!325 = !{i64 8000}
!326 = !{i64 8017}
!327 = !{i64 8027}
!328 = !{i64 8032}
!329 = !{i64 8043}
!330 = !{i64 8053}
!331 = !{i64 8058}
!332 = !{i64 8069}
!333 = !{i64 8074}
!334 = !{i64 8079}
!335 = !{i64 8090}
!336 = !{i64 8100}
!337 = !{i64 8105}
!338 = !{i64 8116}
!339 = !{i64 8126}
!340 = !{i64 8131}
!341 = !{i64 8142}
!342 = !{i64 8147}
!343 = !{i64 8159}
!344 = !{i64 8164}
!345 = !{i64 8175}
!346 = !{i64 8180}
!347 = !{i64 8185}
!348 = !{i64 8195}
!349 = !{i64 8199}
!350 = !{i64 8204}
!351 = !{i64 8208}
!352 = !{i64 8213}
!353 = !{i64 8218}
!354 = !{i64 8229}
!355 = !{i64 8234}
!356 = !{i64 8239}
!357 = !{i64 8250}
!358 = !{i64 8260}
!359 = !{i64 8265}
!360 = !{i64 8276}
!361 = !{i64 8290}
!362 = !{i64 8295}
!363 = !{i64 8303}
!364 = !{i64 8307}
!365 = !{i64 8313}
!366 = !{i64 8333}
!367 = !{i64 8340}
!368 = !{i64 8349}
!369 = !{i64 8364}
!370 = !{i64 8369}
!371 = !{i64 8372}
!372 = !{i64 8375}
!373 = !{i64 8378}
!374 = !{i64 8405}
!375 = !{i64 8410}
!376 = !{i64 8424}
!377 = !{i64 8427}
!378 = !{i64 8433}
!379 = !{i64 8454}
!380 = !{i64 8476}
!381 = !{i64 8491}
!382 = !{i64 8509}
!383 = !{i64 8522}
!384 = !{i64 8532}
!385 = !{i64 8538}
!386 = !{i64 8542}
!387 = !{i64 8544}
!388 = !{i64 8548}
!389 = !{i64 8555}
!390 = !{i64 8594}
!391 = !{i64 8597}
!392 = !{i64 8604}
!393 = !{i64 8612}
!394 = !{i64 8615}
!395 = !{i64 8675}
!396 = !{i64 8696}
!397 = !{i64 8702}
!398 = !{i64 8707}
!399 = !{i64 8715}
!400 = !{i64 8730}
!401 = !{i64 8734}
!402 = !{i64 8753}
!403 = !{i64 8777}
!404 = !{i64 8783}
!405 = !{i64 8803}
!406 = !{i64 8820}
!407 = !{i64 8827}
!408 = !{i64 8836}
!409 = !{i64 8844}
!410 = !{i64 8852}
!411 = !{i64 8858}
!412 = !{i64 8865}
!413 = !{i64 8887}
!414 = !{i64 8890}
!415 = !{i64 8897}
!416 = !{i64 8916}
!417 = !{i64 8923}
!418 = !{i64 8940}
!419 = !{i64 8948}
!420 = !{i64 8971}
!421 = !{i64 9020}
!422 = !{i64 9024}
!423 = !{i64 9036}
!424 = !{i64 9043}
!425 = !{i64 9051}
!426 = !{i64 9064}
!427 = !{i64 9069}
!428 = !{i64 9085}
!429 = !{i64 9092}
!430 = !{i64 9098}
!431 = !{i64 9104}
!432 = !{i64 9111}
!433 = !{i64 9124}
!434 = !{i64 9130}
!435 = !{i64 9138}
!436 = !{i64 9146}
!437 = !{i64 9150}
!438 = !{i64 9160}
!439 = !{i64 9171}
!440 = !{i64 9181}
!441 = !{i64 9184}
!442 = !{i64 9192}
!443 = !{i64 9197}
!444 = !{i64 9209}
!445 = !{i64 9215}
!446 = !{i64 9222}
!447 = !{i64 9249}
!448 = !{i64 9254}
!449 = !{i64 9259}
!450 = !{i64 9270}
!451 = !{i64 9275}
!452 = !{i64 9280}
!453 = !{i64 9291}
!454 = !{i64 9301}
!455 = !{i64 9306}
!456 = !{i64 9317}
!457 = !{i64 9327}
!458 = !{i64 9334}
!459 = !{i64 9339}
!460 = !{i64 9350}
!461 = !{i64 9357}
!462 = !{i64 9362}
!463 = !{i64 9373}
!464 = !{i64 9383}
!465 = !{i64 9388}
!466 = !{i64 9399}
!467 = !{i64 9404}
!468 = !{i64 9409}
!469 = !{i64 9420}
!470 = !{i64 9425}
!471 = !{i64 9430}
!472 = !{i64 9441}
!473 = !{i64 9446}
!474 = !{i64 9451}
!475 = !{i64 9462}
!476 = !{i64 9467}
!477 = !{i64 9472}
!478 = !{i64 9483}
!479 = !{i64 9488}
!480 = !{i64 9493}
!481 = !{i64 9504}
!482 = !{i64 9509}
!483 = !{i64 9514}
!484 = !{i64 9525}
!485 = !{i64 9535}
!486 = !{i64 9540}
!487 = !{i64 9545}
!488 = !{i64 9556}
!489 = !{i64 9568}
!490 = !{i64 9578}
!491 = !{i64 9583}
!492 = !{i64 9594}
!493 = !{i64 9599}
!494 = !{i64 9610}
!495 = !{i64 9615}
!496 = !{i64 9626}
!497 = !{i64 9631}
!498 = !{i64 9636}
!499 = !{i64 9647}
!500 = !{i64 9657}
!501 = !{i64 9662}
!502 = !{i64 9673}
!503 = !{i64 9678}
!504 = !{i64 9683}
!505 = !{i64 9694}
!506 = !{i64 9704}
!507 = !{i64 9722}
!508 = !{i64 9726}
!509 = !{i64 9728}
!510 = !{i64 9747}
!511 = !{i64 9758}
!512 = !{i64 9763}
!513 = !{i64 9752}
!514 = !{i64 9792}
!515 = !{i64 9795}
!516 = !{i64 9807}
!517 = !{i64 9818}
!518 = !{i64 9824}
!519 = !{i64 9844}
!520 = !{i64 9855}
!521 = !{i64 9866}
!522 = !{i64 9871}
!523 = !{i64 9849}
!524 = !{i64 9901}
!525 = !{i64 9922}
!526 = !{i64 9925}
!527 = !{i64 9936}
!528 = !{i64 9952}
!529 = !{i64 9968}
!530 = !{i64 9979}
!531 = !{i64 9984}
!532 = !{i64 9973}
!533 = !{i64 10006}
!534 = !{i64 10022}
!535 = !{i64 10031}
!536 = !{i64 10035}
!537 = !{i64 10046}
!538 = !{i64 10048}
!539 = !{i64 10068}
!540 = !{i64 10079}
!541 = !{i64 10090}
!542 = !{i64 10095}
!543 = !{i64 10073}
!544 = !{i64 10125}
!545 = !{i64 10137}
!546 = !{i64 10166}
!547 = !{i64 10172}
!548 = !{i64 10189}
!549 = !{i64 10192}
!550 = !{i64 10208}
!551 = !{i64 10213}
!552 = !{i64 10241}
!553 = !{i64 10253}
!554 = !{i64 10264}
!555 = !{i64 10272}
!556 = !{i64 10292}
!557 = !{i64 10303}
!558 = !{i64 10314}
!559 = !{i64 10319}
!560 = !{i64 10297}
!561 = !{i64 10349}
!562 = !{i64 10361}
!563 = !{i64 10372}
!564 = !{i64 10384}
!565 = !{i64 10392}
!566 = !{i64 10397}
!567 = !{i64 10419}
!568 = !{i64 10428}
!569 = !{i64 10435}
!570 = !{i64 10448}
!571 = !{i64 10456}
!572 = !{i64 10461}
!573 = !{i64 10488}
!574 = !{i64 10500}
!575 = !{i64 10502}
!576 = !{i64 10509}
!577 = !{i64 10532}
!578 = !{i64 10544}
!579 = !{i64 10591}
!580 = !{i64 10613}
!581 = !{i64 10618}
!582 = !{i64 10629}
!583 = !{i64 10653}
!584 = !{i64 10658}
!585 = !{i64 10669}
!586 = !{i64 10681}
!587 = !{i64 10726}
!588 = !{i64 10742}
!589 = !{i64 10754}
!590 = !{i64 10780}
!591 = !{i64 10818}
!592 = !{i64 10823}
!593 = !{i64 10834}
!594 = !{i64 10851}
!595 = !{i64 10856}
!596 = !{i64 10867}
!597 = !{i64 10878}
!598 = !{i64 10898}
!599 = !{i64 10922}
!600 = !{i64 10927}
!601 = !{i64 10938}
!602 = !{i64 10950}
!603 = !{i64 10964}
!604 = !{i64 10969}
!605 = !{i64 10980}
!606 = !{i64 10985}
!607 = !{i64 11002}
!608 = !{i64 11007}
!609 = !{i64 11018}
!610 = !{i64 11031}
!611 = !{i64 11055}
!612 = !{i64 11060}
!613 = !{i64 11065}
!614 = !{i64 11070}
!615 = !{i64 11082}
!616 = !{i64 11095}
!617 = !{i64 11100}
!618 = !{i64 11116}
